class ActionTHRBReadRecipeBookCB: ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        float readTime = 5.0;

        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(m_ActionData.m_MainItem);

        if (book)
        {
            readTime = book.THRB_GetReadTime();
            m_ActionData.m_ActionComponent = new CAContinuousTime(readTime);
            return;
        }

        TH_RecipePaper_Base paper = TH_RecipePaper_Base.Cast(m_ActionData.m_MainItem);

        if (paper)
            readTime = paper.THRB_GetReadTime();

        m_ActionData.m_ActionComponent = new CAContinuousTime(readTime);
    }
};

class ActionTHRBReadRecipeBook: ActionContinuousBase
{
    void ActionTHRBReadRecipeBook()
    {
        m_CallbackClass = ActionTHRBReadRecipeBookCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
        m_FullBody = true;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_PRONE;
        m_Text = "Leggi";
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
        if (!item)
            return false;

        if (item.IsRuined())
            return false;

        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(item);

        if (book)
            return book.THRB_CanPlayerLearn();

        TH_RecipePaper_Base paper = TH_RecipePaper_Base.Cast(item);

        if (paper)
            return paper.THRB_CanPlayerLearn();

        return false;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        PlayerBase player = action_data.m_Player;

        if (!player)
            return;

        ItemBase recipeItem = action_data.m_MainItem;

        if (!recipeItem)
            return;

        THRB_BookEntry entry = THRB_ConfigManager.Find(recipeItem.GetType());

        if (!entry)
        {
            Print("[TheHive_Recipes_Book] Config entry not found for " + recipeItem.GetType());
            return;
        }

        if (entry.QuestID <= 0)
        {
            Print("[TheHive_Recipes_Book] Invalid QuestID for " + recipeItem.GetType());
            return;
        }

        if (THRB_QuestHelper.HasCompletedQuest(player, entry.QuestID))
        {
            Print("[TheHive_Recipes_Book] Quest already completed: " + entry.QuestID);
            return;
        }

        Print("[TheHive_Recipes_Book] Reading completed: " + recipeItem.GetType() + " | QuestID=" + entry.QuestID + " | Expansion handles quest progress.");

        if (entry.DeleteOnSuccess)
        {
            GetGame().ObjectDelete(recipeItem);
            return;
        }

        recipeItem.SetHealth("", "", 0);
    }
};