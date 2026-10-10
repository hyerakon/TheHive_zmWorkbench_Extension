modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new TH_CS_Dismantle_WeaponPack);

		// Vecchie ricette di combinazione (disattivate)
		// RegisterRecipe(new TH_CS_Combine_Supply_Food);
		// RegisterRecipe(new TH_CS_Combine_Supply_Lab);
		// RegisterRecipe(new TH_CS_Combine_Supply_Tec);
	}
}
