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

        // Sul server lo stato viene ricalcolato: vale anche se la quest richiesta
        // e' stata completata mentre il libro era gia' in mano.
        bool isServer = GetGame().IsDedicatedServer();

        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(item);

        if (book)
        {
            if (isServer)
                book.THRB_UpdateCanLearn(player);

            return book.THRB_CanPlayerLearn();
        }

        TH_RecipePaper_Base paper = TH_RecipePaper_Base.Cast(item);

        if (paper)
        {
            if (isServer)
                paper.THRB_UpdateCanLearn(player);

            return paper.THRB_CanPlayerLearn();
        }

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

        if (entry.RequiredQuestID > 0 && !THRB_QuestHelper.HasCompletedQuest(player, entry.RequiredQuestID))
        {
            Print("[TheHive_Recipes_Book] Required quest not completed: " + entry.RequiredQuestID + " | " + recipeItem.GetType());
            return;
        }

        // RequestedJobs: chi non ha il lavoro giusto legge ma non impara (il libro resta intatto)
        if (!THRB_JobHelper.HasRequestedJob(player, entry))
        {
            string title = entry.Title;

            if (title == "")
                title = recipeItem.GetDisplayName();

            if (player.GetIdentity())
                ExpansionNotification(title, THRB_JobHelper.NOT_UNDERSTOOD_TEXT).Info(player.GetIdentity());

            Print("[TheHive_Recipes_Book] Player job not in RequestedJobs | " + recipeItem.GetType());
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

    // Expansion conta l'obiettivo Action della quest dopo OnFinishProgressServer:
    // qui si blocca il completamento quando la lettura non e' valida.
    override bool Expansion_CheckSuccess(ActionData action_data)
    {
        if (!super.Expansion_CheckSuccess(action_data))
            return false;

        // Libro gia' eliminato dopo una lettura riuscita: nessun blocco
        if (!action_data || !action_data.m_Player || !action_data.m_MainItem)
            return true;

        THRB_BookEntry entry = THRB_ConfigManager.Find(action_data.m_MainItem.GetType());

        if (!entry)
            return true;

        if (entry.RequiredQuestID > 0 && !THRB_QuestHelper.HasCompletedQuest(action_data.m_Player, entry.RequiredQuestID))
            return false;

        return THRB_JobHelper.HasRequestedJob(action_data.m_Player, entry);
    }
};
