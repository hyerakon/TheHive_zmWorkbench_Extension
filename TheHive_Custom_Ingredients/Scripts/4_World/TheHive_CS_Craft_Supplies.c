class TheHive_CS_Supply_BASE: Inventory_Base {};
class TheHive_CS_Supply_Food: TheHive_CS_Supply_BASE
{
    void TheHive_CS_Supply_Food()
    {
        can_this_be_combined = true;
    };
    
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TheHive_CS_Supply_Food")
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

class TheHive_CS_Supply_Lab: TheHive_CS_Supply_BASE
{
    void TheHive_CS_Supply_Lab()
    {
        can_this_be_combined = true;
    };
    
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TheHive_CS_Supply_Lab")
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

class TheHive_CS_Supply_Tec: TheHive_CS_Supply_BASE
{
    void TheHive_CS_Supply_Tec()
    {
        can_this_be_combined = true;
    };
    
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TheHive_CS_Supply_Tec")
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