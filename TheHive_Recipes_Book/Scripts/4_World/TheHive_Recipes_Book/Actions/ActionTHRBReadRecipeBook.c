class ActionTHRBReadRecipeBookCB: ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(m_ActionData.m_MainItem);
        float readTime = 15.0;

        if (book)
        {
            THRB_BookEntry entry = book.THRB_GetEntry();
            if (entry && entry.ReadTime > 0)
                readTime = entry.ReadTime;
        }

        m_ActionData.m_ActionComponent = new CAContinuousTime(readTime);
    }
};

class ActionTHRBReadRecipeBook: ActionContinuousBase
{
    void ActionTHRBReadRecipeBook()
    {
        m_CallbackClass = ActionTHRBReadRecipeBookCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
        m_FullBody = false;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
        m_Text = "Leggi";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(item);
        if (!book || book.IsRuined())
            return false;

        THRB_BookEntry entry = book.THRB_GetEntry();
        if (!entry || entry.QuestID <= 0)
            return false;

        return true;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        super.OnFinishProgressServer(action_data);

        PlayerBase player = action_data.m_Player;
        TH_RecipeBook_Base book = TH_RecipeBook_Base.Cast(action_data.m_MainItem);
        if (!player || !book)
            return;

        THRB_BookEntry entry = book.THRB_GetEntry();
        if (!entry)
            return;

        ExpansionQuestModule questModule = ExpansionQuestModule.GetModuleInstance();
        if (!questModule)
        {
            Print("[TheHive_Recipes_Book] ExpansionQuestModule is NULL.");
            return;
        }

        if (questModule.THRB_HasCompletedRecipeBookQuest(player, entry.QuestID))
        {
            Print("[TheHive_Recipes_Book] Player already knows book quest " + entry.QuestID);
            return;
        }

        if (!questModule.THRB_CompleteRecipeBookQuest(player, entry.QuestID))
            return;

        Print("[TheHive_Recipes_Book] Player " + player.GetIdentity().GetId() + " learned quest " + entry.QuestID + " from " + book.GetType());

        if (entry.DeleteOnSuccess)
            GetGame().ObjectDelete(book);
        else
            book.SetHealth01("", "Health", 0.0);
    }
};
