// =====================================================================
// TH_CS_Dismantle_WeaponPack
// Smonta qualsiasi TH_CS_WeaponPack_* (ar / smg / rifle / shotgun / parts)
// usando Screwdriver o Pliers e restituisce un TH_CS_Supply_Tec
// con quantita' casuale tra TH_CS_DWP_MIN_PCT% e TH_CS_DWP_MAX_PCT%.
// L'ingrediente 0 e' la classe base: il recipe manager vanilla
// accetta tutte le classi figlie (IsKindOf).
// =====================================================================

const int TH_CS_DWP_MIN_PCT = 1;	// % minima della quantity bar
const int TH_CS_DWP_MAX_PCT = 5;	// % massima della quantity bar

class TH_CS_Dismantle_WeaponPack : RecipeBase
{
	override void Init()
	{
		m_Name = "#STR_TH_CS_WEAPONPACK_DISMANTLE";
		m_IsInstaRecipe = false;
		m_AnimationLength = 2.0;
		m_Specialty = -0.01;

		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;	// non smontabile se ruined
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;

		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;	// attrezzo non ruined
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;

		//ingredient 1 - il weapon pack (tutte le classi figlie)
		InsertIngredient(0, "TH_CS_WeaponPack_BASE");
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;

		//ingredient 2 - attrezzo
		InsertIngredient(1, "Screwdriver");
		InsertIngredient(1, "Pliers");
		m_IngredientAddHealth[1] = -5;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;

		//result - supply tecnico (quantita' impostata in Do)
		AddResult("TH_CS_Supply_Tec");
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = -1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -1;	// inventario del player (a terra se pieno)
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	};

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return ingredients[0] && ingredients[0].IsKindOf("TH_CS_WeaponPack_BASE");
	};

	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		if (!results || results.Count() == 0)
			return;

		ItemBase supply = results.Get(0);
		if (!supply)
			return;

		int pct = Math.RandomIntInclusive(TH_CS_DWP_MIN_PCT, TH_CS_DWP_MAX_PCT);
		float qty = supply.GetQuantityMax() * pct / 100.0;
		supply.SetQuantity(qty);

		Debug.Log("WeaponPack " + ingredients[0].GetType() + " dismantled -> TH_CS_Supply_Tec " + pct + "%", "[THEHIVE - CRAFTING SYSTEM]");
	};
};
