class TH_CS_Craft_Tool_BASE: Inventory_Base 
{
    void TH_CS_Craft_Tool_BASE()
    {
        can_this_be_combined = true;
    };
};

class TH_CS_Engineer_Device: TH_CS_Craft_Tool_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_Engineer_Device")
            return false;

        if ((IsFullQuantity() && other_item.GetQuantity() > 0) || other_item == this)
            return false;

        if (GetHealthLevel() == GameConstants.STATE_RUINED || other_item.GetHealthLevel() == GameConstants.STATE_RUINED)
            return false;

        if (!can_this_be_combined)
            return false;

        if (GetQuantity() >= GetQuantityMax() && other_item.GetQuantity() > 0)
            return false;

        if (stack_max_limit && (GetQuantity() + other_item.GetQuantity() > GetQuantityMax()))
            return false;

        PlayerBase player;
        if (CastTo(player, GetHierarchyRootPlayer()))
        {
            if (player.GetInventory().HasAttachment(this))
                return false;
            if (player.IsItemsToDelete())
                return false;
        }

        if (reservation_check && (GetInventory().HasInventoryReservation(this, null) || other_item.GetInventory().HasInventoryReservation(other_item, null)))
            return false;

        int slotID;
        string slotName;
        if (GetInventory().GetCurrentAttachmentSlotInfo(slotID, slotName) && GetHierarchyParent().GetInventory().GetSlotLock(slotID))
            return false;

        return true;
    };
};
class TH_CS_Security_Device: TH_CS_Craft_Tool_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_Security_Device")
            return false;

        if ((IsFullQuantity() && other_item.GetQuantity() > 0) || other_item == this)
            return false;

        if (GetHealthLevel() == GameConstants.STATE_RUINED || other_item.GetHealthLevel() == GameConstants.STATE_RUINED)
            return false;

        if (!can_this_be_combined)
            return false;

        if (GetQuantity() >= GetQuantityMax() && other_item.GetQuantity() > 0)
            return false;

        if (stack_max_limit && (GetQuantity() + other_item.GetQuantity() > GetQuantityMax()))
            return false;

        PlayerBase player;
        if (CastTo(player, GetHierarchyRootPlayer()))
        {
            if (player.GetInventory().HasAttachment(this))
                return false;
            if (player.IsItemsToDelete())
                return false;
        }

        if (reservation_check && (GetInventory().HasInventoryReservation(this, null) || other_item.GetInventory().HasInventoryReservation(other_item, null)))
            return false;

        int slotID;
        string slotName;
        if (GetInventory().GetCurrentAttachmentSlotInfo(slotID, slotName) && GetHierarchyParent().GetInventory().GetSlotLock(slotID))
            return false;

        return true;
    };
};
class TH_CS_Medic_Device: TH_CS_Craft_Tool_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_Medic_Device")
            return false;

        if ((IsFullQuantity() && other_item.GetQuantity() > 0) || other_item == this)
            return false;

        if (GetHealthLevel() == GameConstants.STATE_RUINED || other_item.GetHealthLevel() == GameConstants.STATE_RUINED)
            return false;

        if (!can_this_be_combined)
            return false;

        if (GetQuantity() >= GetQuantityMax() && other_item.GetQuantity() > 0)
            return false;

        if (stack_max_limit && (GetQuantity() + other_item.GetQuantity() > GetQuantityMax()))
            return false;

        PlayerBase player;
        if (CastTo(player, GetHierarchyRootPlayer()))
        {
            if (player.GetInventory().HasAttachment(this))
                return false;
            if (player.IsItemsToDelete())
                return false;
        }

        if (reservation_check && (GetInventory().HasInventoryReservation(this, null) || other_item.GetInventory().HasInventoryReservation(other_item, null)))
            return false;

        int slotID;
        string slotName;
        if (GetInventory().GetCurrentAttachmentSlotInfo(slotID, slotName) && GetHierarchyParent().GetInventory().GetSlotLock(slotID))
            return false;

        return true;
    };
};