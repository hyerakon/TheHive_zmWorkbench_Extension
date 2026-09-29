class TH_RecipePaper_Base: Paper
{
    protected float m_THRB_ReadTime = 5.0;
    protected bool m_THRB_CanLearn = true;

    void TH_RecipePaper_Base()
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
        m_THRB_CanLearn = true;

        if (!player)
        {
            SetSynchDirty();
            return;
        }

        THRB_BookEntry entry = THRB_GetEntry();

        if (!entry || entry.QuestID <= 0)
        {
            SetSynchDirty();
            return;
        }

        if (THRB_QuestHelper.HasCompletedQuest(player, entry.QuestID))
            m_THRB_CanLearn = false;

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

    string GetDescriptionShort()
    {
        THRB_BookEntry entry = THRB_GetEntry();

        if (entry && entry.Description != "")
            return entry.Description;

        return "";
    }

    override void SetActions()
    {
        super.SetActions();
        RemoveAction(ActionReadPaper);
        AddAction(ActionTHRBReadRecipeBook);
    }
};

class TH_RecipePaper_001: TH_RecipePaper_Base {};
class TH_RecipePaper_002: TH_RecipePaper_Base {};
class TH_RecipePaper_003: TH_RecipePaper_Base {};
class TH_RecipePaper_004: TH_RecipePaper_Base {};
class TH_RecipePaper_005: TH_RecipePaper_Base {};
class TH_RecipePaper_006: TH_RecipePaper_Base {};
class TH_RecipePaper_007: TH_RecipePaper_Base {};
class TH_RecipePaper_008: TH_RecipePaper_Base {};
class TH_RecipePaper_009: TH_RecipePaper_Base {};
class TH_RecipePaper_010: TH_RecipePaper_Base {};
class TH_RecipePaper_011: TH_RecipePaper_Base {};
class TH_RecipePaper_012: TH_RecipePaper_Base {};
class TH_RecipePaper_013: TH_RecipePaper_Base {};
class TH_RecipePaper_014: TH_RecipePaper_Base {};
class TH_RecipePaper_015: TH_RecipePaper_Base {};
class TH_RecipePaper_016: TH_RecipePaper_Base {};
class TH_RecipePaper_017: TH_RecipePaper_Base {};
class TH_RecipePaper_018: TH_RecipePaper_Base {};
class TH_RecipePaper_019: TH_RecipePaper_Base {};
class TH_RecipePaper_020: TH_RecipePaper_Base {};
class TH_RecipePaper_021: TH_RecipePaper_Base {};
class TH_RecipePaper_022: TH_RecipePaper_Base {};
class TH_RecipePaper_023: TH_RecipePaper_Base {};
class TH_RecipePaper_024: TH_RecipePaper_Base {};
class TH_RecipePaper_025: TH_RecipePaper_Base {};
class TH_RecipePaper_026: TH_RecipePaper_Base {};
class TH_RecipePaper_027: TH_RecipePaper_Base {};
class TH_RecipePaper_028: TH_RecipePaper_Base {};
class TH_RecipePaper_029: TH_RecipePaper_Base {};
class TH_RecipePaper_030: TH_RecipePaper_Base {};
class TH_RecipePaper_031: TH_RecipePaper_Base {};
class TH_RecipePaper_032: TH_RecipePaper_Base {};
class TH_RecipePaper_033: TH_RecipePaper_Base {};
class TH_RecipePaper_034: TH_RecipePaper_Base {};
class TH_RecipePaper_035: TH_RecipePaper_Base {};
class TH_RecipePaper_036: TH_RecipePaper_Base {};
class TH_RecipePaper_037: TH_RecipePaper_Base {};
class TH_RecipePaper_038: TH_RecipePaper_Base {};
class TH_RecipePaper_039: TH_RecipePaper_Base {};
class TH_RecipePaper_040: TH_RecipePaper_Base {};
class TH_RecipePaper_041: TH_RecipePaper_Base {};
class TH_RecipePaper_042: TH_RecipePaper_Base {};
class TH_RecipePaper_043: TH_RecipePaper_Base {};
class TH_RecipePaper_044: TH_RecipePaper_Base {};
class TH_RecipePaper_045: TH_RecipePaper_Base {};
class TH_RecipePaper_046: TH_RecipePaper_Base {};
class TH_RecipePaper_047: TH_RecipePaper_Base {};
class TH_RecipePaper_048: TH_RecipePaper_Base {};
class TH_RecipePaper_049: TH_RecipePaper_Base {};
class TH_RecipePaper_050: TH_RecipePaper_Base {};