class THRB_QuestHelper
{
    static bool HasCompletedQuest(PlayerBase player, int questID)
    {
        if (!player || !player.GetIdentity() || questID <= 0)
            return false;

        ExpansionQuestModule questModule = ExpansionQuestModule.GetModuleInstance();

        if (!questModule)
            return false;

        ExpansionQuestPersistentData playerData = questModule.GetPlayerQuestDataByUID(player.GetIdentity().GetId());

        if (!playerData)
            return false;

        return playerData.GetQuestCompletionCountByQuestID(questID) > 0;
    }
};