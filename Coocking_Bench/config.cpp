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
				files[] = {""};
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
	class LargeGasCanister : Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4"		
		};
	};
	class MediumGasCanister : Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4"			
		};
	};
	class SmallGasCanister : Inventory_Base 
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

	class Bottle_Base : Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SodaCan_ColorBase : Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class BoxCerealCrunchin : Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class PowderedMilk : Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SmallGuts: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Guts: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Rice: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Marmalade: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Honey: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Zagorky_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Snack_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Candycane_Colorbase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class BakedBeansCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class PeachesCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class PeachesCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SpaghettiCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SardinesCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class SardinesCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class TunaCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class TunaCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class FoodCan_250g_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class UnknownFoodCan: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class UnknownFoodCan_Opened: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class FoodCan_100g_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class FoodCan_100g_Opened_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Apple: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Plum: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Pear: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Banana: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"
		};
	};
	class Orange: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Tomato: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class GreenBellPepper: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Zucchini: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Pumpkin: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Potato: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Kiwi: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class SambucusBerry: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class CaninaBerry: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class PigSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class ReindeerSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class BearSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class CowSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class FoxSteakMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class ChickenBreastMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class RabbitLegMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class CarpFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class WalleyePollockFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class SteelheadTroutFilletMeat: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class RedCaviar: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Lard: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Bitterlings: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Shrimp: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Carp: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Sardines: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Mackerel: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class WalleyePollock: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class SteelheadTrout: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class Worm: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class DeadChicken_ColorBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class DeadRabbit: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class DeadFox: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};
	class MushroomBase: Edible_Base
	{
		inventorySlot[] += 
		{
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16"			
		};
	};

};

class CfgSlots
{
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
		ghostIcon="set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_2
	{
		name = "TH_CB_Gas_2";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon="set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_3
	{
		name = "TH_CB_Gas_3";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon="set:dayz_inventory image:gascanister";
	};
	class Slot_TH_CB_Gas_4
	{
		name = "TH_CB_Gas_4";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon="set:dayz_inventory image:gascanister";
	};

	// FOODSUPPLY SLOTS
	class Slot_TH_CB_FoodSupply_1
	{
		name = "TH_CB_FoodSupply_1";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_2
	{
		name = "TH_CB_FoodSupply_2";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_3
	{
		name = "TH_CB_FoodSupply_3";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_4
	{
		name = "TH_CB_FoodSupply_4";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

	// COOKING EQUIPMENTS
	class Slot_TH_CB_CookEquipment_1
	{
		name = "TH_CB_CookEquipment_1";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_2
	{
		name = "TH_CB_CookEquipment_2";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_3
	{
		name = "TH_CB_CookEquipment_3";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_4
	{
		name = "TH_CB_CookEquipment_4";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_5
	{
		name = "TH_CB_CookEquipment_5";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_6
	{
		name = "TH_CB_CookEquipment_6";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_7
	{
		name = "TH_CB_CookEquipment_7";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_CookEquipment_8
	{
		name = "TH_CB_CookEquipment_8";
		displayName = "$STR_Slot_TH_CB_CookEquipment";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

	// MODUILE SLOTS
	class Slot_TH_CB_Scale
	{
		name = "scale";
		displayName = "$STR_Slot_TH_CB_Scale";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Still
	{
		name = "still";
		displayName = "$STR_Slot_TH_CB_Still";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Stove
	{
		name = "stove";
		displayName = "$STR_Slot_TH_CB_Stove";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

	// INGREDIENTS SLOTS
	class Slot_TH_CB_Ingredient_1
	{
		name = "TH_CB_Ingredient_1";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_2
	{
		name = "TH_CB_Ingredient_2";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_3
	{
		name = "TH_CB_Ingredient_3";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_4
	{
		name = "TH_CB_Ingredient_4";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_5
	{
		name = "TH_CB_Ingredient_5";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_6
	{
		name = "TH_CB_Ingredient_6";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_7
	{
		name = "TH_CB_Ingredient_7";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_8
	{
		name = "TH_CB_Ingredient_8";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_9
	{
		name = "TH_CB_Ingredient_9";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_10
	{
		name = "TH_CB_Ingredient_10";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_11
	{
		name = "TH_CB_Ingredient_11";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_12
	{
		name = "TH_CB_Ingredient_12";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_13
	{
		name = "TH_CB_Ingredient_13";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_14
	{
		name = "TH_CB_Ingredient_14";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_15
	{
		name = "TH_CB_Ingredient_15";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_16
	{
		name = "TH_CB_Ingredient_16";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
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

};