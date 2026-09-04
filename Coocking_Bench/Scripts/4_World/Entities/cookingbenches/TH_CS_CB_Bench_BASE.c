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
                    float gas = canister.GetQuantity();
                    float maxGas = canister.GetQuantityMax();

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
                    float gas = canister.GetQuantity();

                    if (gas > 0)
                    {
                        float drain = Math.Min(gas, remaining);

                        canister.SetQuantity(gas - drain);
                        canister.SetSynchDirty();

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
    override int CountItem(string classname) {
        int count = 0;
        array<EntityAI> items = GetWorkbenchInventory();
        
        foreach (EntityAI item : items) {
            
            if (!IsUsableCraftIngredient(item))
                continue;
            
            if (WorkbenchHelpers.ItemMatchesClass(item, classname)) {
                // BLOWTORCH HANDLING: Count fuel from attached gas canister
                if (item.IsKindOf("Blowtorch")) {
                    count += GetBlowtorchFuel(item);
                    continue;
                }
                
                Magazine mag = Magazine.Cast(item);
                if (mag) {
                    // For magazines/ammo, count ammo
                    count += mag.GetAmmoCount();
                } else {
                    ItemBase itemBase = ItemBase.Cast(item);
                    if (itemBase) {
                        // Check if item has quantity (like stacks)
                        int quantity = (int)itemBase.GetQuantity();
                        if (quantity > 0) {
                            count += quantity;
                        } else {
                            // No quantity system, count as 1 item
                            count++;
                        }
                    } else {
                        count++;
                    }
                }
            }
        }
        
        return count;
    }

    override int CountItemUnits(string classname) {
        int count = 0;
        array<EntityAI> items = GetWorkbenchInventory();
        
        foreach (EntityAI item : items) {
            if (!IsUsableCraftIngredient(item))
                continue;

            if (WorkbenchHelpers.ItemMatchesClass(item, classname)) {
                // Each matching item counts as 1, regardless of internal quantity
                count++;
            }
        }
        
        return count;
    }

    override int CountItemForRecipeWithAlts(WB_RecipeItem req) {
        int total = 0;
        
        // Count primary classname
        if (req.IsCountByItems()) {
            total += CountItemUnits(req.classname);
        } else {
            total += CountItem(req.classname);
        }
        
        // Count alternatives that have no quantity override (they pool into the primary)
        if (req.HasAlternatives()) {
            array<EntityAI> items = GetWorkbenchInventory();
            foreach (WB_AlternativeItem alt : req.alternatives) {
                
                if (!alt || alt.classname == "") continue;
                
                // Skip alternatives that have their own quantity — they are checked separately
                if (alt.HasQuantityOverride()) continue;
                
                foreach (EntityAI item : items) {
                    if (!item) continue;

                    if (!IsUsableCraftIngredient(item))
                        continue;
                    
                    // Skip items already matched by primary classname
                    if (WorkbenchHelpers.ItemMatchesClass(item, req.classname)) continue;
                    
                    // Check if item matches this alternative
                    bool matches = false;
                    if (alt.isbaseclass) {
                        matches = item.IsKindOf(alt.classname);
                    } else {
                        matches = WorkbenchHelpers.ItemMatchesClass(item, alt.classname);
                    }
                    
                    if (matches) {
                        if (req.IsCountByItems()) {
                            total++;
                        } else {
                            // Count by quantity
                            if (item.IsKindOf("Blowtorch")) {
                                total += GetBlowtorchFuel(item);
                            } else {
                                Magazine mag = Magazine.Cast(item);
                                if (mag) {
                                    total += mag.GetAmmoCount();
                                } else {
                                    ItemBase itemBase = ItemBase.Cast(item);
                                    if (itemBase) {
                                        int quantity = (int)itemBase.GetQuantity();
                                        if (quantity > 0) {
                                            total += quantity;
                                        } else {
                                            total++;
                                        }
                                    } else {
                                        total++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        return total;
    }

    override int CountSingleAltItems(WB_AlternativeItem alt, bool countByItems) {
        if (!alt || alt.classname == "") return 0;
        
        int total = 0;
        array<EntityAI> items = GetWorkbenchInventory();
        
        foreach (EntityAI item : items) {
            if (!item) continue;
            
            if (!IsUsableCraftIngredient(item))
                continue;

            // Check if item matches this alternative
            bool matches = false;
            if (alt.isbaseclass) {
                matches = item.IsKindOf(alt.classname);
            } else {
                matches = WorkbenchHelpers.ItemMatchesClass(item, alt.classname);
            }
            
            if (matches) {
                if (countByItems) {
                    total++;
                } else {
                    if (item.IsKindOf("Blowtorch")) {
                        total += GetBlowtorchFuel(item);
                    } else {
                        Magazine mag = Magazine.Cast(item);
                        if (mag) {
                            total += mag.GetAmmoCount();
                        } else {
                            ItemBase itemBase = ItemBase.Cast(item);
                            if (itemBase) {
                                int qty = (int)itemBase.GetQuantity();
                                if (qty > 0) {
                                    total += qty;
                                } else {
                                    total++;
                                }
                            } else {
                                total++;
                            }
                        }
                    }
                }
            }
        }
        
        return total;
    }

    override int CountItemUnitsForRecipeWithAlts(WB_RecipeItem req) {
        int total = 0;
        array<EntityAI> items = GetWorkbenchInventory();
        
        foreach (EntityAI item : items) {
            if (!item) continue;
            if (!IsUsableCraftIngredient(item))
                continue;
            if (WorkbenchHelpers.ItemMatchesRecipeItem(item, req)) {
                total++;
            }
        }
        
        return total;
    }

    override void ConsumeWholeItems(string classname, int count) {
        int remaining = count;
        array<EntityAI> items = GetWorkbenchInventory();
        array<EntityAI> itemsToDelete = new array<EntityAI>;
        
        WBDebug("[WorkbenchMod] ConsumeWholeItems: " + classname + " x" + count.ToString());
        
        foreach (EntityAI item : items) {
            if (remaining <= 0) break;
            if (!item) continue;

            if (!IsUsableCraftIngredient(item))
                continue;
            
            if (WorkbenchHelpers.ItemMatchesClass(item, classname)) {
                // Each item counts as 1 unit, delete the whole item
                itemsToDelete.Insert(item);
                remaining--;
                WBDebug("[WorkbenchMod] Marking whole item for deletion: " + item.GetType());
            }
        }
        
        // Delete items AFTER the loop completes
        WBDebug("[WorkbenchMod] Deleting " + itemsToDelete.Count().ToString() + " whole items");
        foreach (EntityAI toDelete : itemsToDelete) {
            if (toDelete) {
                GetGame().ObjectDelete(toDelete);
            }
        }
    }

    override void ConsumeWholeItemsForRecipe(WB_RecipeItem req, int count) {
        // If no alternatives, fall back to the simple version
        if (!req.HasAlternatives()) {
            ConsumeWholeItems(req.classname, count);
            return;
        }
        
        int remaining = count;
        array<EntityAI> items = GetWorkbenchInventory();
        array<EntityAI> altItemsToDelete = new array<EntityAI>;
        
        WBDebug("[WorkbenchMod] ConsumeWholeItemsForRecipe: " + req.classname + " (with alts) x" + count.ToString());
        
        foreach (EntityAI item : items) {
            if (remaining <= 0) break;
            if (!item) continue;

            if (!IsUsableCraftIngredient(item))
                continue;
            
            // Check if matches primary classname
            if (WorkbenchHelpers.ItemMatchesClass(item, req.classname)) {
                altItemsToDelete.Insert(item);
                remaining--;
                continue;
            }
            
            // Check if matches a pooled alternative (no qty override)
            WB_AlternativeItem matchedAlt = req.FindMatchingAlternative(item);
            if (matchedAlt && !matchedAlt.HasQuantityOverride()) {
                altItemsToDelete.Insert(item);
                remaining--;
            }
        }
        
        // Delete items AFTER the loop completes
        WBDebug("[WorkbenchMod] Deleting " + altItemsToDelete.Count().ToString() + " whole items (alt-aware)");
        foreach (EntityAI altToDelete : altItemsToDelete) {
            if (altToDelete) {
                GetGame().ObjectDelete(altToDelete);
            }
        }
    }

    override void ConsumeItemAmountForRecipe(WB_RecipeItem req, int amount) {
        // If no alternatives, fall back to the simple version
        if (!req.HasAlternatives()) {
            ConsumeItemAmount(req.classname, amount);
            return;
        }
        
        WBDebug("[WorkbenchMod] ConsumeItemAmountForRecipe: " + req.classname + " (with alts) x" + amount.ToString());
        
        int altRemaining = amount;
        array<EntityAI> altItems = GetWorkbenchInventory();
        array<EntityAI> altConsumeDelete = new array<EntityAI>;
        
        foreach (EntityAI altItem : altItems) {
            if (altRemaining <= 0) break;
            if (!altItem) continue;

            if (!IsUsableCraftIngredient(altItem))
                continue;
            
            // Check if matches primary classname
            bool matchesPrimary = WorkbenchHelpers.ItemMatchesClass(altItem, req.classname);
            
            // If not primary, check if matches a pooled alternative (no qty override)
            if (!matchesPrimary) {
                WB_AlternativeItem matchedAlt = req.FindMatchingAlternative(altItem);
                // Skip items that don't match, or match a qty-override alt
                if (!matchedAlt || matchedAlt.HasQuantityOverride()) continue;
            }
            
            // BLOWTORCH HANDLING
            if (altItem.IsKindOf("Blowtorch")) {
                int fuelConsumed = ConsumeBlowtorchFuel(altItem, altRemaining);
                altRemaining -= fuelConsumed;
                continue;
            }
            
            // Tool handling - damage instead of consume
            bool isToolEntity = WorkbenchRecipeManager.IsTool(altItem.GetType()) || WorkbenchRecipeManager.IsToolEntity(altItem);
            if (isToolEntity) {
                float toolDmg = WorkbenchRecipeManager.GetToolDamage(altItem.GetType());
                if (toolDmg <= 0) {
                    toolDmg = WorkbenchRecipeManager.GetToolDamageForEntity(altItem);
                }
                if (toolDmg > 0) {
                    ItemBase altToolItem = ItemBase.Cast(altItem);
                    if (altToolItem) {
                        float altMaxHealth = altToolItem.GetMaxHealth("", "Health");
                        float altDmgAmt = (toolDmg / 100.0) * altMaxHealth;
                        altToolItem.AddHealth("", "Health", -altDmgAmt);
                        if (altToolItem.IsRuined()) {
                            altConsumeDelete.Insert(altItem);
                        }
                        altRemaining--;
                        continue;
                    }
                }
            }
            
            // Standard consumption - by quantity
            Magazine altMag = Magazine.Cast(altItem);
            if (altMag) {
                int altAmmoCount = altMag.GetAmmoCount();
                if (altAmmoCount <= altRemaining) {
                    altRemaining -= altAmmoCount;
                    // Fully drained — check destroyOnEmpty before deleting
                    if (ShouldDestroyWhenEmpty(altItem)) {
                        altConsumeDelete.Insert(altItem);
                    }
                } else {
                    altMag.ServerSetAmmoCount(altAmmoCount - altRemaining);
                    altRemaining = 0;
                }
            } else {
                ItemBase altItemBase = ItemBase.Cast(altItem);
                if (altItemBase) {
                    int altQty = (int)altItemBase.GetQuantity();
                    if (altQty > 0) {
                        if (altQty <= altRemaining) {
                            altRemaining -= altQty;
                            // Fully drained — check destroyOnEmpty before deleting
                            if (ShouldDestroyWhenEmpty(altItem)) {
                                altConsumeDelete.Insert(altItem);
                            }
                        } else {
                            altItemBase.SetQuantity(altQty - altRemaining);
                            altRemaining = 0;
                        }
                    } else {
                        // No quantity — single item, always delete
                        altRemaining--;
                        altConsumeDelete.Insert(altItem);
                    }
                } else {
                    altRemaining--;
                    altConsumeDelete.Insert(altItem);
                }
            }
        }
        
        // Delete consumed items AFTER the loop
        foreach (EntityAI altDelItem : altConsumeDelete) {
            if (altDelItem) {
                GetGame().ObjectDelete(altDelItem);
            }
        }
    }

    override void ConsumeItemAmount(string classname, int amount) {
        int remaining = amount;
        array<EntityAI> items = GetWorkbenchInventory();
        array<EntityAI> itemsToDelete = new array<EntityAI>;
        
        WBDebug("[WorkbenchMod] ConsumeItemAmount: " + classname + " x" + amount.ToString());
        
        // Check if this item type is a tool based on classname (should take damage, not be consumed)
        bool isToolByClassname = WorkbenchRecipeManager.IsTool(classname);
        float toolDamageByClassname = WorkbenchRecipeManager.GetToolDamage(classname);
        
        if (isToolByClassname) {
            WBDebug("[WorkbenchMod] " + classname + " is a TOOL (by classname) - will damage " + toolDamageByClassname.ToString() + "% instead of consuming");
        }
        
        foreach (EntityAI item : items) {
            if (remaining <= 0) break;
            if (!item) continue;

            if (!IsUsableCraftIngredient(item))
                continue;
            
            if (WorkbenchHelpers.ItemMatchesClass(item, classname)) {
                // BLOWTORCH HANDLING: Consume fuel from attached gas canister
                if (item.IsKindOf("Blowtorch")) {
                    int fuelConsumed = ConsumeBlowtorchFuel(item, remaining);
                    remaining -= fuelConsumed;
                    WBDebug("[WorkbenchMod] Blowtorch consumed " + fuelConsumed.ToString() + " fuel, remaining needed: " + remaining.ToString());
                    continue;
                }
                
                // Check if this specific item entity is a tool (handles modded variants)
                bool isToolEntity = isToolByClassname || WorkbenchRecipeManager.IsToolEntity(item);
                float toolDamage = toolDamageByClassname;
                
                // If classname didn't match but entity is a tool, get damage from entity check
                if (!isToolByClassname && isToolEntity) {
                    toolDamage = WorkbenchRecipeManager.GetToolDamageForEntity(item);
                    WBDebug("[WorkbenchMod] " + item.GetType() + " detected as TOOL by inheritance - will damage " + toolDamage.ToString() + "% instead of consuming");
                }
                
                // TOOL HANDLING: Damage instead of consume
                if (isToolEntity && toolDamage > 0) {
                    ItemBase toolItem = ItemBase.Cast(item);
                    if (toolItem) {
                        // Calculate damage amount (toolDamage is percentage of max health)
                        float maxHealth = toolItem.GetMaxHealth("", "Health");
                        float damageAmount = (toolDamage / 100.0) * maxHealth;
                        float currentHealth = toolItem.GetHealth("", "Health");
                        
                        WBDebug("[WorkbenchMod] Tool " + item.GetType() + " taking " + damageAmount.ToString() + " damage (current: " + currentHealth.ToString() + "/" + maxHealth.ToString() + ")");
                        
                        // Apply damage
                        toolItem.AddHealth("", "Health", -damageAmount);
                        
                        // Check if ruined
                        if (toolItem.IsRuined()) {
                            WBDebug("[WorkbenchMod] Tool " + item.GetType() + " is now RUINED - will be deleted");
                            itemsToDelete.Insert(item);
                        }
                        
                        // Tool counts as "consumed" for the recipe (but wasn't deleted)
                        remaining--;
                        continue;
                    }
                }
                
                // REGULAR ITEM HANDLING: Consume normally
                Magazine mag = Magazine.Cast(item);
                if (mag) {
                    int available = mag.GetAmmoCount();
                    if (available >= remaining) {
                        mag.ServerAddAmmoCount(-remaining);
                        remaining = 0;
                        // Only delete if destroyOnEmpty allows it
                        if (mag.GetAmmoCount() <= 0 && ShouldDestroyWhenEmpty(item)) {
                            itemsToDelete.Insert(item);
                        }
                    } else {
                        remaining -= available;
                        // Fully drained — check destroyOnEmpty before deleting
                        if (ShouldDestroyWhenEmpty(item)) {
                            itemsToDelete.Insert(item);
                        }
                    }
                } else {
                    ItemBase itemBase = ItemBase.Cast(item);
                    if (itemBase) {
                        int itemQuantity = (int)itemBase.GetQuantity();
                        if (itemQuantity > 1) {
                            // Item has quantity (like stacks or liquid)
                            if (itemQuantity >= remaining) {
                                itemBase.SetQuantity(itemQuantity - remaining);
                                remaining = 0;
                                // Only delete if destroyOnEmpty allows it
                                if (itemBase.GetQuantity() <= 0 && ShouldDestroyWhenEmpty(item)) {
                                    itemsToDelete.Insert(item);
                                }
                            } else {
                                remaining -= itemQuantity;
                                // Fully drained — check destroyOnEmpty before deleting
                                if (ShouldDestroyWhenEmpty(item)) {
                                    itemsToDelete.Insert(item);
                                }
                            }
                        } else {
                            // No quantity system (or quantity=1), treat as single item — always delete
                            WBDebug("[WorkbenchMod] Consuming single item: " + item.GetType());
                            itemsToDelete.Insert(item);
                            remaining--;
                        }
                    } else {
                        itemsToDelete.Insert(item);
                        remaining--;
                    }
                }
            }
        }
        
        // Delete items AFTER the loop completes to avoid iteration issues
        WBDebug("[WorkbenchMod] Deleting " + itemsToDelete.Count().ToString() + " items");
        foreach (EntityAI toDelete : itemsToDelete) {
            if (toDelete) {
                GetGame().ObjectDelete(toDelete);
            }
        }
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