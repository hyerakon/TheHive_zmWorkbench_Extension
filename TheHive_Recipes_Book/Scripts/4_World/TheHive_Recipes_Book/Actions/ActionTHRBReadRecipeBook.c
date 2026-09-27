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

        if (THRB_QuestHelper.HasCompletedQuest(player, entry.QuestID))
        {
            Print("[TheHive_Recipes_Book] Quest already completed: " + entry.QuestID);
            return;
        }

        if (player.GetIdentity())
            Print("[TheHive_Recipes_Book] Player " + player.GetIdentity().GetId() + " learned quest " + entry.QuestID + " from " + book.GetType());

        if (entry.DeleteOnSuccess)
        {
            Print("[TheHive_Recipes_Book] Deleting book: " + book.GetType());
            GetGame().ObjectDelete(book);
            return;
        }

        Print("[TheHive_Recipes_Book] Ruining book: " + book.GetType());
        book.SetHealth("", "", 0);
    }
};