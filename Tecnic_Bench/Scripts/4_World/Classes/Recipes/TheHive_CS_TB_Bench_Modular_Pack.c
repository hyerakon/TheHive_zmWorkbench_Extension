class TheHive_CS_TB_Bench_Modular_Pack : RecipeBase
{
    override void Init()
	{
		m_Name = "#STR_THEHIVE_CS_TB_MODULAR_DISMOUNT";
		m_IsInstaRecipe = false;
		m_AnimationLength = 2.0;
		m_Specialty = -0.01;
		
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = -1;
		
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = -1;
		
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		
		//INGREDIENTS
		//ingredient 1 - the workbench
		InsertIngredient(0, "TheHive_CS_TB_Bench_Modular");
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = true;
		
		//ingredient 2 - tool to disassemble
		InsertIngredient(1, "Screwdriver");
		InsertIngredient(1, "Pliers");
		InsertIngredient(1, "Wrench");
		m_IngredientAddHealth[1] = -5;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		
		//result - the kit
		AddResult("TheHive_CS_TB_Kit_Modular");
		m_ResultSetFullQuantity[0] = true;
		m_ResultSetQuantity[0] = -1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = 0;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	};

    override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		if (!ingredients[0])
			return false;
		
		// Custom empty check - ignore internal storage containers but check if they're empty
		TheHive_CS_TB_Bench_Modular workbench = TheHive_CS_TB_Bench_Modular.Cast(ingredients[0]);
		if (!workbench)
			return false;
		if (workbench.IsKindOf("TheHive_CS_TB_Bench_Locked"))
		{
			return false;
		}
		
		return IsTheHiveWorkbenchEmpty(workbench);
	};

    override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("#STR_THEHIVE_CS_TB_DEBUG_DISMOUNT_MSG", "[THEHIVE - CRAFTING SYSTEM]: Modular Tecnicbench Dismount");
	}

    bool IsTheHiveWorkbenchEmpty(zm_WorkbenchBase workbench)
	{
		// Check main cargo
		CargoBase cargo = workbench.GetInventory().GetCargo();
		if (cargo && cargo.GetItemCount() > 0)
			return false;
		
		// Check all attachments
		for (int i = 0; i < workbench.GetInventory().AttachmentCount(); i++)
		{
			EntityAI attachment = workbench.GetInventory().GetAttachmentFromIndex(i);
			if (attachment)
			{
				// For internal storage containers, check if they have items inside
				if (attachment.IsKindOf("zm_WorkbenchInternalStorage") || attachment.IsKindOf("zm_WorkbenchOutputStorage") || attachment.IsKindOf("WoodenCrate"))
				{
					CargoBase attachCargo = attachment.GetInventory().GetCargo();
					if (attachCargo && attachCargo.GetItemCount() > 0)
						return false;
				}
				else
				{
					// Any other attachment (modules) means not empty - must remove them first
					return false;
				}
			}
		}
		
		return true;
	}
};

