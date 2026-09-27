modded class ExpansionQuestModule
{
    bool THRB_HasCompletedRecipeBookQuest(PlayerBase player, int questID)
    {
        if (!player || !player.GetIdentity() || questID <= 0)
            return false;

        ExpansionQuestPersistentData playerData = GetPlayerQuestDataByUID(player.GetIdentity().GetId());
        if (!playerData)
            return false;

        return playerData.GetQuestCompletionCountByQuestID(questID) > 0;
    }

    bool THRB_CompleteRecipeBookQuest(PlayerBase player, int questID)
    {
        if (!player || !player.GetIdentity() || questID <= 0)
            return false;

        string uid = player.GetIdentity().GetId();
        ExpansionQuestPersistentData playerData = GetPlayerQuestDataByUID(uid);
        if (!playerData)
        {
            Print("[TheHive_Recipes_Book] No Expansion quest data for player " + uid);
            return false;
        }

        if (playerData.GetQuestCompletionCountByQuestID(questID) > 0)
            return false;

        ExpansionQuest quest = GetActiveQuestWithKey(uid, questID);
        if (!quest)
        {
            Print("[TheHive_Recipes_Book] Quest " + questID + " is not active for player " + uid + ". Configure it as an Expansion achievement/auto-start quest.");
            return false;
        }

        ExpansionQuestConfig questConfig = quest.GetQuestConfig();
        if (!questConfig)
            return false;

        if (!questConfig.IsAchievement())
        {
            Print("[TheHive_Recipes_Book] Quest " + questID + " is not configured as Achievement.");
            return false;
        }

        if (!questConfig.IsAutocomplete())
        {
            Print("[TheHive_Recipes_Book] Quest " + questID + " must have Autocomplete enabled.");
            return false;
        }

        quest.OnQuestObjectivesComplete();
        return true;
    }
};
