modded class PluginRecipesManager 
{
	override void RegisterRecipies()
    {
        super.RegisterRecipies();				
        // Original fork recipe kept for internal compatibility
        RegisterRecipe(new TH_CS_LB_Bench_Modular_Pack);
    }
}