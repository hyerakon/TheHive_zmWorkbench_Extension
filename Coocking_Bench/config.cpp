class CfgPatches
{
	class TheHive_zmWorkbench_Extension_CB_Script
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Camping",
			"DZ_Gear_Tools",
			"DZ_Gear_Food",
			"WorkbenchMod",
			"zm_Workbench",
			"zm_DrillPress",
			"zm_Grinder",
			"zm_Sewing",
			"zm_Soldering",
			"zm_Vice",
			"zm_Welding",
			"TheHive_zmWorkbench_Integration_Scripts",
			"TheHive_Craft_Ingredients_Scripts"
		};
	};
};

class CfgMods
{
	class TheHive_zmWorkbench_Extension_CB
	{
		dir = "TheHive_zmWorkbench_Extension\Coocking_Bench";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The Hive - CraftingSystem - Cooking";
		credits = "Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		//inputs = "TheHive_CraftingSystem\Tecnicbench\data\inputs.xml";
		//defines[] = {"TECNICBENCH_DEBUG"};
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class imageSets
			{
				files[] = {"TheHive_zmWorkbench_Extension/Coocking_Bench/gui/imagesets/iconset/TH_CS_CB_Iconset.imageset"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Coocking_Bench/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Coocking_Bench/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Coocking_Bench/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;

	class WoodenCrate: Container_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_WoodenCase"
		};
	};

	// POWER ITEMS
	class LargeGasCanister: Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4"
		};
	};
	class MediumGasCanister: Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4"
		};
	};
	class SmallGasCanister: Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4"
		};
	};
	// FOODSUPPLY ITEMS
	class TH_CS_Supply_BASE;
	class TH_CS_Supply_Food: TH_CS_Supply_BASE
	{
		inventorySlot[] += 
		{
			"TH_CB_FoodSupply_1",
			"TH_CB_FoodSupply_2",
			"TH_CB_FoodSupply_3",
			"TH_CB_FoodSupply_4"
		};
	};

	// COOKING EQUIPMENTS ITEMS


	// INGREDIENTS ITEMS
	class Edible_Base;
	// ------------------------------------------------------------------------
	// CONTENITORI BEVANDE / BOTTIGLIE
	// ------------------------------------------------------------------------
	class Bottle_Base: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Bottle_1"
		};
	};
	class SodaCan_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Bottle_1"
		};
	};
	// ------------------------------------------------------------------------
	// CONFEZIONI SECCHE / SCATOLE / BUSTE
	// ------------------------------------------------------------------------
	class BoxCerealCrunchin: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Dry_1"
		};
	};
	class PowderedMilk: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Dry_1"
		};
	};
	class Rice: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Dry_1"
		};
	};
	// ------------------------------------------------------------------------
	// BARATTOLI / VASETTI
	// ------------------------------------------------------------------------
	class Marmalade: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Jar_1"
		};
	};
	class Honey: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Jar_1"
		};
	};
	// ------------------------------------------------------------------------
	// SNACK / INVOLUCRI
	// ------------------------------------------------------------------------
	class Zagorky_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Snack_1"
		};
	};
	class Snack_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Snack_1"
		};
	};
	class Candycane_Colorbase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Snack_1"
		};
	};
	// ------------------------------------------------------------------------
	// VISCERE / PARTI MOLLI
	// ------------------------------------------------------------------------
	class SmallGuts: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Guts_1"
		};
	};
	class Guts: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Guts_1"
		};
	};
	// ------------------------------------------------------------------------
	// LATTINE STANDARD / MEDIE - CHIUSE E APERTE
	// ------------------------------------------------------------------------
	class BakedBeansCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class PeachesCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class PeachesCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class SpaghettiCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class FoodCan_250g_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class UnknownFoodCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	class UnknownFoodCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5"
		};
	};
	// ------------------------------------------------------------------------
	// LATTINE BASSE / PICCOLE - CHIUSE E APERTE
	// ------------------------------------------------------------------------
	class SardinesCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	class SardinesCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	class TunaCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	class TunaCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	class FoodCan_100g_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	class FoodCan_100g_Opened_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallCan_1",
			"TH_CB_Ingredient_SmallCan_2"
		};
	};
	// ------------------------------------------------------------------------
	// FRUTTA / VERDURA COMPATTA
	// ------------------------------------------------------------------------
	class Apple: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Plum: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Pear: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Orange: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Tomato: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class GreenBellPepper: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Potato: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	class Kiwi: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Produce_1",
			"TH_CB_Ingredient_Produce_2",
			"TH_CB_Ingredient_Produce_3"
		};
	};
	// ------------------------------------------------------------------------
	// FRUTTA / VERDURA ALLUNGATA
	// ------------------------------------------------------------------------
	class Banana: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_LongProduce_1"
		};
	};
	class Zucchini: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_LongProduce_1"
		};
	};
	// ------------------------------------------------------------------------
	// ZUCCA / ELEMENTI GRANDI O PIATTI
	// ------------------------------------------------------------------------
	class Pumpkin: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Pumpkin_1"
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Pumpkin_1"
		};
	};
	// ------------------------------------------------------------------------
	// BACCHE / ELEMENTI MOLTO PICCOLI
	// ------------------------------------------------------------------------
	class SambucusBerry: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Berry_1"
		};
	};
	class CaninaBerry: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Berry_1"
		};
	};
	// ------------------------------------------------------------------------
	// STEAK / FETTE DI CARNE
	// ------------------------------------------------------------------------
	class HumanSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class PigSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class ReindeerSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class BearSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class CowSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	class FoxSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Steak_1",
			"TH_CB_Ingredient_Steak_2",
			"TH_CB_Ingredient_Steak_3",
			"TH_CB_Ingredient_Steak_4",
			"TH_CB_Ingredient_Steak_5"
		};
	};
	// ------------------------------------------------------------------------
	// TAGLI PICCOLI DI CARNE
	// ------------------------------------------------------------------------
	class ChickenBreastMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallMeat_1"
		};
	};
	class RabbitLegMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_SmallMeat_1"
		};
	};
	// ------------------------------------------------------------------------
	// FILETTI DI PESCE
	// ------------------------------------------------------------------------
	class CarpFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fillet_1",
			"TH_CB_Ingredient_Fillet_2"
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fillet_1",
			"TH_CB_Ingredient_Fillet_2"
		};
	};
	class WalleyePollockFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fillet_1",
			"TH_CB_Ingredient_Fillet_2"
		};
	};
	class SteelheadTroutFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fillet_1",
			"TH_CB_Ingredient_Fillet_2"
		};
	};
	// ------------------------------------------------------------------------
	// PICCOLO SEAFOOD / DERIVATI
	// ------------------------------------------------------------------------
	class RedCaviar: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Seafood_1"
		};
	};
	class Bitterlings: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Seafood_1"
		};
	};
	class Shrimp: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Seafood_1"
		};
	};
	// ------------------------------------------------------------------------
	// PESCI INTERI
	// ------------------------------------------------------------------------
	class Carp: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fish_1",
			"TH_CB_Ingredient_Fish_2"
		};
	};
	class Sardines: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fish_1",
			"TH_CB_Ingredient_Fish_2"
		};
	};
	class Mackerel: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fish_1",
			"TH_CB_Ingredient_Fish_2"
		};
	};
	class WalleyePollock: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fish_1",
			"TH_CB_Ingredient_Fish_2"
		};
	};
	class SteelheadTrout: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Fish_1",
			"TH_CB_Ingredient_Fish_2"
		};
	};
	// ------------------------------------------------------------------------
	// LARDO / GRASSO
	// ------------------------------------------------------------------------
	class Lard: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Lard_1"
		};
	};
	// ------------------------------------------------------------------------
	// ESCA / VERME
	// ------------------------------------------------------------------------
	class Worm: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Worm_1"
		};
	};
	// ------------------------------------------------------------------------
	// FUNGHI
	// ------------------------------------------------------------------------
	class MushroomBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_Mushroom_1"
		};
	};
	// ========================================================================
	// ANIMALI MORTI - SLOT DEDICATI
	// ========================================================================

	// POLLI MORTI
	class DeadChicken_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Chicken_1",
			"TH_CB_Chicken_2",
			"TH_CB_Chicken_3"
		};
	};
	// CONIGLI MORTI
	class DeadRabbit: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Rabbit_1",
			"TH_CB_Rabbit_2"
		};
	};
	// VOLPI MORTE
	class DeadFox: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Fox_1"
		};
	};

};

class CfgSlots
{
	// WOODEN CASE
class Slot_TH_CB_WoodenCase
	{
		name = "TH_CB_WoodenCase";
		displayName = "$STR_Slot_TH_CB_WoodenCase";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};


	// POWER SLOTS
	class Slot_TH_CB_Gas_1
	{
		name = "TH_CB_Gas_1";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_2
	{
		name = "TH_CB_Gas_2";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_3
	{
		name = "TH_CB_Gas_3";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_4
	{
		name = "TH_CB_Gas_4";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:gascanister";
	};

	// FOODSUPPLY SLOTS
	class Slot_TH_CB_FoodSupply_1
	{
		name = "TH_CB_FoodSupply_1";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:food";
	};
	class Slot_TH_CB_FoodSupply_2
	{
		name = "TH_CB_FoodSupply_2";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:food";
	};
	class Slot_TH_CB_FoodSupply_3
	{
		name = "TH_CB_FoodSupply_3";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:food";
	};
	class Slot_TH_CB_FoodSupply_4
	{
		name = "TH_CB_FoodSupply_4";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:food";
	};

	// COOKING EQUIPMENT SLOTS
	class Slot_TH_CB_CookEquipment_1
	{
		name = "TH_CB_CookEquipment_1";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:knife"
	};
	class Slot_TH_CB_CookEquipment_2
	{
		name = "TH_CB_CookEquipment_2";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:knife"
	};
	class Slot_TH_CB_CookEquipment_3
	{
		name = "TH_CB_CookEquipment_3";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:knife"
	};
	class Slot_TH_CB_CookEquipment_4
	{
		name = "TH_CB_CookEquipment_4";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:knife"
	};
	// COOKING EQUIPMENT SLOTS - FRYING PAN / POT / CAULDRON
	class Slot_TH_CB_CookEquipment_5
	{
		name = "TH_CB_CookEquipment_5";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_TH_CB_CookEquipment_6
	{
		name = "TH_CB_CookEquipment_6";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_TH_CB_CookEquipment_7
	{
		name = "TH_CB_CookEquipment_7";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_TH_CB_CookEquipment_8
	{
		name = "TH_CB_CookEquipment_8";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};

	// MODULE SLOTS
	class Slot_TH_CB_Scale
	{
		name = "scale";
		displayName = "$STR_Slot_TH_CB_Scale";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_TH_CB_Still
	{
		name = "still";
		displayName = "$STR_Slot_TH_CB_Still";
		ghostIcon = "set:dayz_inventory image:cookingbase";
	};
	class Slot_TH_CB_Stove
	{
		name = "stove";
		displayName = "$STR_Slot_TH_CB_Stove";
		ghostIcon = "set:dayz_inventory image:cookingbase";
	};

	// INGREDIENT SLOTS - MATRIX 8x4
	// ROW 1: Can 1-5 | Produce 1-3
	class Slot_TH_CB_Ingredient_Can_1
	{
		name = "TH_CB_Ingredient_Can_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_can";
	};
	class Slot_TH_CB_Ingredient_Can_2
	{
		name = "TH_CB_Ingredient_Can_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_can";
	};
	class Slot_TH_CB_Ingredient_Can_3
	{
		name = "TH_CB_Ingredient_Can_3";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_can";
	};
	class Slot_TH_CB_Ingredient_Can_4
	{
		name = "TH_CB_Ingredient_Can_4";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_can";
	};
	class Slot_TH_CB_Ingredient_Can_5
	{
		name = "TH_CB_Ingredient_Can_5";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_can";
	};
	class Slot_TH_CB_Ingredient_Produce_1
	{
		name = "TH_CB_Ingredient_Produce_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_produce";
	};
	class Slot_TH_CB_Ingredient_Produce_2
	{
		name = "TH_CB_Ingredient_Produce_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_produce";
	};
	class Slot_TH_CB_Ingredient_Produce_3
	{
		name = "TH_CB_Ingredient_Produce_3";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_produce";
	};

	// ROW 2: Steak 1-5 | Bottle | Dry | Jar
	class Slot_TH_CB_Ingredient_Steak_1
	{
		name = "TH_CB_Ingredient_Steak_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_steak";
	};
	class Slot_TH_CB_Ingredient_Steak_2
	{
		name = "TH_CB_Ingredient_Steak_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_steak";
	};
	class Slot_TH_CB_Ingredient_Steak_3
	{
		name = "TH_CB_Ingredient_Steak_3";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_steak";
	};
	class Slot_TH_CB_Ingredient_Steak_4
	{
		name = "TH_CB_Ingredient_Steak_4";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_steak";
	};
	class Slot_TH_CB_Ingredient_Steak_5
	{
		name = "TH_CB_Ingredient_Steak_5";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_steak";
	};
	class Slot_TH_CB_Ingredient_Bottle_1
	{
		name = "TH_CB_Ingredient_Bottle_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_bottle";
	};
	class Slot_TH_CB_Ingredient_Dry_1
	{
		name = "TH_CB_Ingredient_Dry_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_dry";
	};
	class Slot_TH_CB_Ingredient_Jar_1
	{
		name = "TH_CB_Ingredient_Jar_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_jar";
	};

	// ROW 3: SmallCan 1-2 | Fillet 1-2 | Fish 1-2 | Snack | Guts
	class Slot_TH_CB_Ingredient_SmallCan_1
	{
		name = "TH_CB_Ingredient_SmallCan_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_smallcan";
	};
	class Slot_TH_CB_Ingredient_SmallCan_2
	{
		name = "TH_CB_Ingredient_SmallCan_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_smallcan";
	};
	class Slot_TH_CB_Ingredient_Fillet_1
	{
		name = "TH_CB_Ingredient_Fillet_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_fillet";
	};
	class Slot_TH_CB_Ingredient_Fillet_2
	{
		name = "TH_CB_Ingredient_Fillet_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_fillet";
	};
	class Slot_TH_CB_Ingredient_Fish_1
	{
		name = "TH_CB_Ingredient_Fish_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_fish";
	};
	class Slot_TH_CB_Ingredient_Fish_2
	{
		name = "TH_CB_Ingredient_Fish_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_fish";
	};
	class Slot_TH_CB_Ingredient_Snack_1
	{
		name = "TH_CB_Ingredient_Snack_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_snack";
	};
	class Slot_TH_CB_Ingredient_Guts_1
	{
		name = "TH_CB_Ingredient_Guts_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_guts";
	};

	// ROW 4: LongProduce | Pumpkin | Berry | SmallMeat | Seafood | Lard | Worm | Mushroom
	class Slot_TH_CB_Ingredient_LongProduce_1
	{
		name = "TH_CB_Ingredient_LongProduce_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_longproduce";
	};
	class Slot_TH_CB_Ingredient_Pumpkin_1
	{
		name = "TH_CB_Ingredient_Pumpkin_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_pumpkin";
	};
	class Slot_TH_CB_Ingredient_Berry_1
	{
		name = "TH_CB_Ingredient_Berry_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_berry";
	};
	class Slot_TH_CB_Ingredient_SmallMeat_1
	{
		name = "TH_CB_Ingredient_SmallMeat_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_smallmeat";
	};
	class Slot_TH_CB_Ingredient_Seafood_1
	{
		name = "TH_CB_Ingredient_Seafood_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_seafood";
	};
	class Slot_TH_CB_Ingredient_Lard_1
	{
		name = "TH_CB_Ingredient_Lard_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_lard";
	};
	class Slot_TH_CB_Ingredient_Worm_1
	{
		name = "TH_CB_Ingredient_Worm_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:trapbait";
	};
	class Slot_TH_CB_Ingredient_Mushroom_1
	{
		name = "TH_CB_Ingredient_Mushroom_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:th_cb_icons image:ing_mushroom";
	};

	// DEAD ANIMAL SLOTS
	class Slot_TH_CB_Chicken_1
	{
		name = "TH_CB_Chicken_1";
		displayName = "$STR_Slot_TH_CB_Chicken";
		ghostIcon = "set:th_cb_icons image:dead_chicken";
	};
	class Slot_TH_CB_Chicken_2
	{
		name = "TH_CB_Chicken_2";
		displayName = "$STR_Slot_TH_CB_Chicken";
		ghostIcon = "set:th_cb_icons image:dead_chicken";
	};
	class Slot_TH_CB_Chicken_3
	{
		name = "TH_CB_Chicken_3";
		displayName = "$STR_Slot_TH_CB_Chicken";
		ghostIcon = "set:th_cb_icons image:dead_chicken";
	};
	class Slot_TH_CB_Rabbit_1
	{
		name = "TH_CB_Rabbit_1";
		displayName = "$STR_Slot_TH_CB_Rabbit";
		ghostIcon = "set:th_cb_icons image:dead_rabbit";
	};
	class Slot_TH_CB_Rabbit_2
	{
		name = "TH_CB_Rabbit_2";
		displayName = "$STR_Slot_TH_CB_Rabbit";
		ghostIcon = "set:th_cb_icons image:dead_rabbit";
	};
	class Slot_TH_CB_Fox_1
	{
		name = "TH_CB_Fox_1";
		displayName = "$STR_Slot_TH_CB_Fox";
		ghostIcon = "set:th_cb_icons image:dead_fox";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyTH_CB_WoodenCase_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_WoodenCase";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_WoodenCase_Proxy.p3d";
	};

	// STOVE PROXY
	class ProxyTH_CB_CookingPot_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CookingEquipment";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookingPot_Proxy.p3d";
	};

	// MODULE PROXY
	class ProxyTH_CB_Scale_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "scale";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Scale_Proxy.p3d";
	};
	class ProxyTH_CB_Still_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "still";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Still_Proxy.p3d";
	};
	class ProxyTH_CB_Stove_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "stove";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Stove_Proxy.p3d";
	};

	// POWER PROXY
	// POWER PROXY LARGE
	class ProxyTH_CB_GasCannisterLarge_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterLarge_Proxy_1.p3d";
	};
	class ProxyTH_CB_GasCannisterLarge_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterLarge_Proxy_2.p3d";
	};
	class ProxyTH_CB_GasCannisterLarge_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterLarge_Proxy_3.p3d";
	};
	class ProxyTH_CB_GasCannisterLarge_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterLarge_Proxy_4.p3d";
	};
	// POWER PROXY MEDIUM
	class ProxyTH_CB_GasCannisterMedium_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterMedium_Proxy_1.p3d";
	};
	class ProxyTH_CB_GasCannisterMedium_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterMedium_Proxy_2.p3d";
	};
	class ProxyTH_CB_GasCannisterMedium_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterMedium_Proxy_3.p3d";
	};
	class ProxyTH_CB_GasCannisterMedium_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterMedium_Proxy_4.p3d";
	};
	// POWER PROXY SMALL
	class ProxyTH_CB_GasCannisterSmall_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterSmall_Proxy_1.p3d";
	};
	class ProxyTH_CB_GasCannisterSmall_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterSmall_Proxy_2.p3d";
	};
	class ProxyTH_CB_GasCannisterSmall_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterSmall_Proxy_3.p3d";
	};
	class ProxyTH_CB_GasCannisterSmall_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Gas_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_GasCannisterSmall_Proxy_4.p3d";
	};

	// TH_CS_FOOD_SUPPLY PROXY
	class ProxyTH_CB_FoodSupply_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_FoodSupply_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_FoodSupply_Proxy_1.p3d";
	};
	class ProxyTH_CB_FoodSupply_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_FoodSupply_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_FoodSupply_Proxy_2.p3d";
	};
	class ProxyTH_CB_FoodSupply_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_FoodSupply_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_FoodSupply_Proxy_3.p3d";
	};
	class ProxyTH_CB_FoodSupply_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_FoodSupply_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_FoodSupply_Proxy_4.p3d";
	};

	// TH_CB_COOK_EQUIPMENT PROXY
	class ProxyTH_CB_CookEquipment_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_1.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_2.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_3.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_4.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_5";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_5.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_6";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_6.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_7: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_7";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_7.p3d";
	};
	class ProxyTH_CB_CookEquipment_Proxy_8: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_CookEquipment_8";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_CookEquipment_Proxy_8.p3d";
	};

	// TH_CB_INGREDIENT PROXY - MATRIX 8x4
	// Physical P3D numbering is preserved; only inventorySlot changes.
	class ProxyTH_CB_Ingredient_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Can_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_1.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Can_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_2.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Can_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_3.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Can_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_4.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Can_5";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_5.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Produce_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_6.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_7: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Produce_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_7.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_8: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Produce_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_8.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Steak_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_9.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_10: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Steak_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_10.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_11: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Steak_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_11.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_12: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Steak_4";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_12.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_13: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Steak_5";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_13.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_14: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Bottle_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_14.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_15: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Dry_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_15.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_16: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Jar_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_16.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_17: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_SmallCan_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_17.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_18: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_SmallCan_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_18.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_19: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Fillet_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_19.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_20: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Fillet_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_20.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_21: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Fish_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_21.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_22: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Fish_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_22.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_23: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Snack_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_23.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_24: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Guts_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_24.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_25: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_LongProduce_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_25.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_26: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Pumpkin_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_26.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_27: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Berry_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_27.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_28: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_SmallMeat_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_28.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_29: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Seafood_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_29.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_30: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Lard_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_30.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_31: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Worm_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_31.p3d";
	};
	class ProxyTH_CB_Ingredient_Proxy_32: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Ingredient_Mushroom_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Ingredient_Proxy_32.p3d";
	};

	// TH_CB_CHICKEN PROXY
	class ProxyTH_CB_ChickenF_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenF_Proxy_1.p3d";
	};
	class ProxyTH_CB_Chicken_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenF_Proxy_2.p3d";
	};
	class ProxyTH_CB_ChickenF_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenF_Proxy_3.p3d";
	};
	class ProxyTH_CB_ChickenM_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenM_Proxy_1.p3d";
	};
	class ProxyTH_CB_ChickenM_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenM_Proxy_2.p3d";
	};
	class ProxyTH_CB_ChickenM_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Chicken_3";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_ChickenM_Proxy_3.p3d";
	};

	// TH_CB_RABBIT PROXY
	class ProxyTH_CB_Rabbit_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Rabbit_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Rabbit_Proxy_1.p3d";
	};
	class ProxyTH_CB_Rabbit_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Rabbit_2";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Rabbit_Proxy_2.p3d";
	};

	// TH_CB_FOX PROXY
	class ProxyTH_CB_Fox_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_Fox_1";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_Fox_Proxy_1.p3d";
	};

};
