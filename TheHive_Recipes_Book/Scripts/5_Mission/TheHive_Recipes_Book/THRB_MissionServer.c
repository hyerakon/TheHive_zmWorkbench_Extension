modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        THRB_ConfigManager.Load();
        Print("[TheHive_Recipes_Book] Config loaded: $profile:TheHive/TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/RecipesBooks.json");
    }
};
