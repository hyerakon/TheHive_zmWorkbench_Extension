// Scripts/4_World/Classes/Recipes/Pack_zm_WorkbenchModular.c

modded class Pack_zm_WorkbenchModular extends RecipeBase
{	
	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		if (!ingredients[0])
			return false;
		
		// Custom empty check - ignore internal storage containers but check if they're empty
		zm_WorkbenchBase workbench = zm_WorkbenchBase.Cast(ingredients[0]);
		if (!workbench || workbench.IsKindOf("TheHive_CS_Bench_BASE"))
			return false;
		
		return IsWorkbenchEmpty(workbench);
	}
};
