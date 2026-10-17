class TH_RecipeBook_Base: ItemBook
{
    protected float m_THRB_ReadTime = 5.0;
    protected bool m_THRB_CanLearn = true;

    void TH_RecipeBook_Base()
    {
        RegisterNetSyncVariableFloat("m_THRB_ReadTime", 1.0, 600.0, 2);
        RegisterNetSyncVariableBool("m_THRB_CanLearn");
    }

    override void EEInit()
    {
        super.EEInit();

        if (GetGame().IsServer())
        {
            THRB_BookEntry entry = THRB_GetEntry();

            if (entry && entry.ReadTime > 0)
                m_THRB_ReadTime = entry.ReadTime;
            else
                m_THRB_ReadTime = 5.0;

            m_THRB_CanLearn = true;
            SetSynchDirty();
        }
    }

    override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
    {
        super.EEItemLocationChanged(oldLoc, newLoc);

        if (!GetGame().IsServer())
            return;

        if (newLoc.GetType() != InventoryLocationType.HANDS)
            return;

        EntityAI parent = newLoc.GetParent();

        if (!parent)
            return;

        PlayerBase player = PlayerBase.Cast(parent);

        if (!player)
            player = PlayerBase.Cast(parent.GetHierarchyRootPlayer());

        if (!player)
            return;

        THRB_UpdateCanLearn(player);
    }

    void THRB_UpdateCanLearn(PlayerBase player)
    {
        bool canLearn = THRB_QuestHelper.CanLearn(player, THRB_GetEntry());

        if (canLearn == m_THRB_CanLearn)
            return;

        m_THRB_CanLearn = canLearn;
        SetSynchDirty();
    }

    bool THRB_CanPlayerLearn()
    {
        return m_THRB_CanLearn;
    }

    float THRB_GetReadTime()
    {
        if (m_THRB_ReadTime <= 0)
            return 5.0;

        return m_THRB_ReadTime;
    }

    THRB_BookEntry THRB_GetEntry()
    {
        return THRB_ConfigManager.Find(GetType());
    }

    override string GetDisplayName()
    {
        THRB_BookEntry entry = THRB_GetEntry();

        if (entry && entry.Title != "")
            return entry.Title;

        return super.GetDisplayName();
    }

    override bool DescriptionOverride(out string output)
    {
        THRB_BookEntry entry = THRB_GetEntry();

        if (entry && entry.Description != "")
        {
            output = entry.Description;
            return true;
        }

        return super.DescriptionOverride(output);
    }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTHRBReadRecipeBook);
    }
};

class TH_RecipeBook_001: TH_RecipeBook_Base {};
class TH_RecipeBook_002: TH_RecipeBook_Base {};
class TH_RecipeBook_003: TH_RecipeBook_Base {};
class TH_RecipeBook_004: TH_RecipeBook_Base {};
class TH_RecipeBook_005: TH_RecipeBook_Base {};
class TH_RecipeBook_006: TH_RecipeBook_Base {};
class TH_RecipeBook_007: TH_RecipeBook_Base {};
class TH_RecipeBook_008: TH_RecipeBook_Base {};
class TH_RecipeBook_009: TH_RecipeBook_Base {};
class TH_RecipeBook_010: TH_RecipeBook_Base {};
class TH_RecipeBook_011: TH_RecipeBook_Base {};
class TH_RecipeBook_012: TH_RecipeBook_Base {};
class TH_RecipeBook_013: TH_RecipeBook_Base {};
class TH_RecipeBook_014: TH_RecipeBook_Base {};
class TH_RecipeBook_015: TH_RecipeBook_Base {};
class TH_RecipeBook_016: TH_RecipeBook_Base {};
class TH_RecipeBook_017: TH_RecipeBook_Base {};
class TH_RecipeBook_018: TH_RecipeBook_Base {};
class TH_RecipeBook_019: TH_RecipeBook_Base {};
class TH_RecipeBook_020: TH_RecipeBook_Base {};
class TH_RecipeBook_021: TH_RecipeBook_Base {};
class TH_RecipeBook_022: TH_RecipeBook_Base {};
class TH_RecipeBook_023: TH_RecipeBook_Base {};
class TH_RecipeBook_024: TH_RecipeBook_Base {};
class TH_RecipeBook_025: TH_RecipeBook_Base {};