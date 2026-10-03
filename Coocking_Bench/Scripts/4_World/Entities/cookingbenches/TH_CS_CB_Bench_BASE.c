class TH_CS_CB_Bench_BASE extends TH_CS_Bench_BASE
{
    override string GetWorkbenchID()
    {
        return "cookingbench_BASE";
    }

    override protected array<string> GetBatterySlots()
    {
        array<string> slots = new array<string>;

        slots.Insert("TH_CB_Gas_1");
        slots.Insert("TH_CB_Gas_2");
        slots.Insert("TH_CB_Gas_3");
        slots.Insert("TH_CB_Gas_4");

        return slots;
    }

    protected bool IsGasCanister(EntityAI item)
    {
        if (!item)
            return false;

        return item.IsKindOf("LargeGasCanister") || item.IsKindOf("MediumGasCanister") || item.IsKindOf("SmallGasCanister");
    }

    override void UpdatePowerLevels()
    {
        if (!GetGame().IsServer())
            return;

        float totalPower = 0;
        float maxPower = 0;

        array<string> batterySlots = GetBatterySlots();

        foreach (string slotName : batterySlots)
        {
            int slotId = InventorySlots.GetSlotIdFromString(slotName);

            if (slotId == InventorySlots.INVALID)
                continue;

            EntityAI attachment = GetInventory().FindAttachment(slotId);

            if (attachment && IsGasCanister(attachment))
            {
                ItemBase canister = ItemBase.Cast(attachment);

                if (canister)
                {
                    // Il gas reale sta nell'Energy Manager (Small 330, Medium 650, Large 800).
                    // La quantity (0-20) è solo uno specchio dell'energia e non va letta né scritta.
                    float gas = 0;
                    float maxGas = 0;
                    if (canister.GetCompEM())
                    {
                        gas = canister.GetCompEM().GetEnergy();
                        maxGas = canister.GetCompEM().GetEnergyMax();
                    }

                    totalPower += gas;
                    maxPower += maxGas;
                }
            }
        }

        bool hadPower = m_HasPower;
        float hadTotalPower = m_TotalPower;
        float hadMaxPower = m_MaxPower;

        m_TotalPower = totalPower;
        m_MaxPower = maxPower;
        m_HasPower = totalPower > 0;

        bool powerLevelChanged = Math.AbsFloat(m_TotalPower - hadTotalPower) >= 0.5;
        bool maxPowerChanged = Math.AbsFloat(m_MaxPower - hadMaxPower) >= 0.5;

        if (m_HasPower != hadPower || powerLevelChanged || maxPowerChanged)
        {
            SetSynchDirty();
        }
    }

    override bool ConsumePower(float amount)
    {
        if (IsKindOf("zm_WorkbenchPublic"))
            return true;

        if (!GetWorkbenchRecipeManager().IsPowerSystemEnabled())
            return true;

        if (!GetGame().IsServer())
            return false;

        if (amount <= 0)
            return true;

        if (m_TotalPower < amount)
            return false;

        float remaining = amount;

        array<string> batterySlots = GetBatterySlots();

        foreach (string slotName : batterySlots)
        {
            if (remaining <= 0)
                break;

            int slotId = InventorySlots.GetSlotIdFromString(slotName);

            if (slotId == InventorySlots.INVALID)
                continue;

            EntityAI attachment = GetInventory().FindAttachment(slotId);

            if (attachment && IsGasCanister(attachment))
            {
                ItemBase canister = ItemBase.Cast(attachment);

                if (canister)
                {
                    float gas = 0;
                    if (canister.GetCompEM())
                        gas = canister.GetCompEM().GetEnergy();

                    if (gas > 0)
                    {
                        float drain = Math.Min(gas, remaining);

                        // AddEnergy negativo scala il gas reale e aggiorna anche la quantity (OnEnergyConsumed).
                        canister.GetCompEM().AddEnergy(-drain);

                        remaining -= drain;
                    }
                }
            }
        }

        UpdatePowerLevels();

        return remaining <= 0;
    }

    override int GetConnectedBatteryCount()
    {
        int count = 0;

        array<string> batterySlots = GetBatterySlots();

        foreach (string slotName : batterySlots)
        {
            int slotId = InventorySlots.GetSlotIdFromString(slotName);

            if (slotId == InventorySlots.INVALID)
                continue;

            EntityAI attachment = GetInventory().FindAttachment(slotId);

            if (attachment && IsGasCanister(attachment))
                count++;
        }

        return count;
    }

    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);

        if (GetGame().IsServer() && IsGasCanister(item))
        {
            UpdatePowerLevels();
            SetSynchDirty();
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);

        if (GetGame().IsServer() && IsGasCanister(item))
        {
            UpdatePowerLevels();
            SetSynchDirty();
        }
    }

    // TH MODIFICATIONS FOR FOODS
    // Rotten or burned food is excluded from the bench inventory, so every
    // WorkbenchMod count/consume method (CountItem, ConsumeItemAmount, ConsumeItem,
    // alternatives, ...) ignores it without copying those methods here.
    override array<EntityAI> GetWorkbenchInventory()
    {
        array<EntityAI> items = super.GetWorkbenchInventory();

        for (int i = items.Count() - 1; i >= 0; i--)
        {
            if (!IsUsableCraftIngredient(items[i]))
                items.RemoveOrdered(i);
        }

        return items;
    }

    //TH ADDONS FOR FOODS
    bool IsUsableCraftIngredient(EntityAI item)
    {
        if (!item)
            return false;

        Edible_Base food = Edible_Base.Cast(item);

        if (food && (food.IsFoodRotten() || food.IsFoodBurned()))
            return false;

        return true;
    }
}