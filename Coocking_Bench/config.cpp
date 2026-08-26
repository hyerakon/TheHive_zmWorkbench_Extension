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
			"TH_CB_FoodSupply_4",
			"TH_CB_FoodSupply_5",
			"TH_CB_FoodSupply_6",
			"TH_CB_FoodSupply_7",
			"TH_CB_FoodSupply_8"		
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32"			
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
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Gas_2
	{
		name = "TH_CB_Gas_2";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Gas_3
	{
		name = "TH_CB_Gas_3";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Gas_4
	{
		name = "TH_CB_Gas_4";
		displayName = "$STR_Slot_TH_CB_Gas";
		ghostIcon = "set:dayz_inventory image:woodcrate";
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
	class Slot_TH_CB_FoodSupply_5
	{
		name = "TH_CB_FoodSupply_5";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_6
	{
		name = "TH_CB_FoodSupply_6";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_7
	{
		name = "TH_CB_FoodSupply_7";
		displayName = "$STR_Slot_TH_CB_FoodSupply";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_FoodSupply_8
	{
		name = "TH_CB_FoodSupply_8";
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
	class Slot_TH_CB_Ingredient_17
	{
		name = "TH_CB_Ingredient_17";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_18
	{
		name = "TH_CB_Ingredient_18";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_19
	{
		name = "TH_CB_Ingredient_19";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_20
	{
		name = "TH_CB_Ingredient_20";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_21
	{
		name = "TH_CB_Ingredient_21";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_22
	{
		name = "TH_CB_Ingredient_22";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_23
	{
		name = "TH_CB_Ingredient_23";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_24
	{
		name = "TH_CB_Ingredient_24";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_25
	{
		name = "TH_CB_Ingredient_25";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_26
	{
		name = "TH_CB_Ingredient_26";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_27
	{
		name = "TH_CB_Ingredient_27";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_28
	{
		name = "TH_CB_Ingredient_28";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_29
	{
		name = "TH_CB_Ingredient_29";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_30
	{
		name = "TH_CB_Ingredient_30";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_31
	{
		name = "TH_CB_Ingredient_31";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_TH_CB_Ingredient_32
	{
		name = "TH_CB_Ingredient_32";
		displayName = "$STR_Slot_TH_CB_Ingredient";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

};

class CfgNonAIVehicles
{
    class ProxyAttachment;
	class ProxyTH_CB_WoodenCase: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_CB_WoodenCase";
		model = "\TheHive_zmWorkbench_Extension\Coocking_Bench\proxies\TH_CB_WoodenCase.p3d";
		
	};

	
};