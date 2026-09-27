class ActionTHRBReadRecipeBookCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        float readTime = 5.0;

        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(m_ActionData.m_MainItem);

        if (book)
            readTime = book.THRB_GetReadTime();

        m_ActionData.m_ActionComponent = new CAContinuousTime(readTime);
    }
};

class ActionTHRBReadRecipeBook : ActionContinuousBase
{
    void ActionTHRBReadRecipeBook()
    {
        m_CallbackClass = ActionTHRBReadRecipeBookCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
        m_FullBody = true;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_PRONE;
        m_Text = "Leggi il Ricettario";
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTSelf;
    }

    override bool HasTarget()
    {
        return false;
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(item);

        if (!book)
            return false;

        if (book.IsRuined())
            return false;

        if (!book.THRB_CanPlayerLearn())
            return false;

        return true;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        PlayerBase player = action_data.m_Player;

        if (!player)
            return;

        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(action_data.m_MainItem);

        if (!book)
            return;

        THRB_BookEntry entry = book.THRB_GetEntry();

        if (!entry)
        {
            Print("[TheHive_Recipes_Book] Config entry not found for " + book.GetType());
            return;
        }

        if (entry.QuestID <= 0)
        {
            Print("[TheHive_Recipes_Book] Invalid QuestID for " + book.GetType());
            return;
        }

        ExpansionQuestModule questModule = ExpansionQuestModule.GetModuleInstance();

        if (!questModule)
        {
            Print("[TheHive_Recipes_Book] ExpansionQuestModule unavailable");
            return;
        }

        if (questModule.THRB_HasCompletedRecipeBookQuest(player, entry.QuestID))
        {
            book.THRB_UpdateCanLearn(player);
            Print("[TheHive_Recipes_Book] Player already knows quest " + entry.QuestID);
            return;
        }

        if (!questModule.THRB_CompleteRecipeBookQuest(player, entry.QuestID))
        {
            Print("[TheHive_Recipes_Book] Failed to complete quest " + entry.QuestID);
            return;
        }

        if (player.GetIdentity())
            Print("[TheHive_Recipes_Book] Player " + player.GetIdentity().GetId() + " learned quest " + entry.QuestID + " from " + book.GetType());

        if (entry.DeleteOnSuccess)
        {
            GetGame().ObjectDelete(book);
        }
        else
        {
            book.THRB_UpdateCanLearn(player);
            book.SetHealth("", "", 0);
        }
    }
};