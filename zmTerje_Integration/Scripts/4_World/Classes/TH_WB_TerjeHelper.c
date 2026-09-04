// Scripts/4_World/Classes/TH_WB_TerjeHelper.c

modded class WB_TerjeHelper
{
    override static void AwardCraftingXP(string player_id, WorkbenchRecipe recipe)
    {
        if (!WorkbenchSettings.IsTerjeSkillsIntegrationEnabled())
            return;

        if (!recipe)
            return;

        // Nessuna skill configurata = nessun XP Terje
        if (recipe.terje_skill_id == "")
            return;

        #ifdef TERJE_SKILLS_MOD

        PlayerBase player = FindPlayerByPlainId(player_id);

        if (!player || !player.GetTerjeSkills())
            return;

        float xp;

        // -1 = usa XP globale
        if (recipe.terje_xp < 0)
        {
            xp = WorkbenchSettings.GetTerjeXPPerCraft();
        }
        // 0 = XP esplicitamente disabilitato per questa ricetta
        else if (recipe.terje_xp == 0)
        {
            return;
        }
        // >0 = XP specifico della ricetta
        else
        {
            xp = recipe.terje_xp;
        }

        // Bonus per craft lunghi
        float bonusThreshold = WorkbenchSettings.GetTerjeXPBonusCraftTime();
        float bonusXP = WorkbenchSettings.GetTerjeXPBonus();

        if (bonusThreshold > 0 && recipe.craft_time >= bonusThreshold)
        {
            xp += bonusXP;
        }

        if (xp > 0)
        {
            WBDebug("[TH Terje] Player " + player_id + " awarded " + xp.ToString() + " XP for skill '" + recipe.terje_skill_id + "' from recipe '" + recipe.id + "'");
            player.GetTerjeSkills().AddSkillExperience(recipe.terje_skill_id,xp);
        }

        #endif
    }
}