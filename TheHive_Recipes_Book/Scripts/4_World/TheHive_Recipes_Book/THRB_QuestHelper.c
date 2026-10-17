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

    // Server: il player puo' leggere questo libro/foglio?
    // - RequiredQuestID > 0: la quest richiesta deve essere gia' completata
    // - QuestID > 0: la quest del libro non deve essere gia' completata
    static bool CanLearn(PlayerBase player, THRB_BookEntry entry)
    {
        if (!player || !entry)
            return true;

        if (entry.RequiredQuestID > 0 && !HasCompletedQuest(player, entry.RequiredQuestID))
            return false;

        if (entry.QuestID > 0 && HasCompletedQuest(player, entry.QuestID))
            return false;

        return true;
    }
};