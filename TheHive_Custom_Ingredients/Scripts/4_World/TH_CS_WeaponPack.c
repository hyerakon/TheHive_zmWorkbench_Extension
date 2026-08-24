class TH_CS_WeaponPack_BASE: Inventory_Base 
{
    void TH_CS_WeaponPack_BASE()
    {
        can_this_be_combined = true;
    };
};

class TH_CS_WeaponPack_SKS: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_SKS")
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
class TH_CS_WeaponPack_Pioneer: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Pioneer")
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
class TH_CS_WeaponPack_Aura1: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Aura1")
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
class TH_CS_WeaponPack_Aurax: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Aurax")
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
class TH_CS_WeaponPack_Lemas: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Lemas")
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
class TH_CS_WeaponPack_Lar: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Lar")
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
class TH_CS_WeaponPack_Kam: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Kam")
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
class TH_CS_WeaponPack_Ka101: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Ka101")
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
class TH_CS_WeaponPack_Ka74: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Ka74")
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
class TH_CS_WeaponPack_Ka74u: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Ka74u")
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
class TH_CS_WeaponPack_M16: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_M16")
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
class TH_CS_WeaponPack_M4a1: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_M4a1")
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
class TH_CS_WeaponPack_Sv98: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Sv98")
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
class TH_CS_WeaponPack_Asval: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Asval")
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
class TH_CS_WeaponPack_Dmr: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Dmr")
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
class TH_CS_WeaponPack_M70: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_M70")
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
class TH_CS_WeaponPack_Vsd: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Vsd")
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
class TH_CS_WeaponPack_Vss: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Vss")
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
class TH_CS_WeaponPack_Cr550: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Cr550")
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
class TH_CS_WeaponPack_G36: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_G36")
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
class TH_CS_WeaponPack_Mosin9130: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Mosin9130")
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
class TH_CS_WeaponPack_Bizon: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Bizon")
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
class TH_CS_WeaponPack_Vaiga: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Vaiga")
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
class TH_CS_WeaponPack_Vikhr: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Vikhr")
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
class TH_CS_WeaponPack_M79: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_M79")
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
class TH_CS_WeaponPack_RPG: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_RPG")
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
class TH_CS_WeaponPack_Law: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Law")
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
class TH_CS_WeaponPack_SSG82: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_SSG82")
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
class TH_CS_WeaponPack_SCARH: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_SCARH")
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
class TH_CS_WeaponPack_CZ61: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_CZ61")
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
class TH_CS_WeaponPack_Rak37: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_Rak37")
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
class TH_CS_WeaponPack_ExpansionKedr: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_ExpansionKedr")
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
class TH_CS_WeaponPack_USG45: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_USG45")
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
class TH_CS_WeaponPack_SG5: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_SG5")
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
class TH_CS_WeaponPack_ExpansionMP7: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_ExpansionMP7")
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
class TH_CS_WeaponPack_ExpansionKar98: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_ExpansionKar98")
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
class TH_CS_WeaponPack_ZenTaser: TH_CS_WeaponPack_BASE 
{
    override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
    {
        // allow combi with nm_Gunpowder & nm_Gunpowder_sock
        if (!other_item)
            return false;

        string otherType = other_item.GetType();
        if (otherType != "TH_CS_WeaponPack_ZenTaser")
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













