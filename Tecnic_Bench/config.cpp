class CfgPatches
{
	class TheHive_zmWorkbench_Extension_Script
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
			"zm_Welding"
		};
	};
};
class CfgMods
{
	class TheHive_zmWorkbench_Extension
	{
		dir = "TheHive_zmWorkbench_Extension\Tecnic_Bench";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The Hive - CraftingSystem - Tecnic";
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
				files[] = {"TheHive_zmWorkbench_Extension/Tecnic_Bench/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Tecnic_Bench/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Tecnic_Bench/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class Container_Base;

	class WoodenCrate: Container_Base
	{
		inventorySlot[] += 
		{
			"TH_TB_WoodenCase"
		};
	};

	class Pliers: Inventory_Base
	{
		inventorySlot[] += 
		{
			"TH_TB_Pliers"
		};
	};
};

class CfgSlots
{
    class Slot_TH_TB_WoodenCase
	{
		name = "TH_TB_WoodenCase";
		displayName = "$STR_Slot_TH_TB_WoodenCase";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

	class Slot_TH_TB_Pliers
	{
		name = "TH_TB_Pliers";
		displayName = "$STR_Slot_TH_TB_Pliers";
		ghostIcon = "set:dayz_inventory image:missing";
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
	class ProxyTH_TB_WoodenCase: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_TB_WoodenCase";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_WoodenCase.p3d";
		
	};
	class ProxyTH_TB_drillpress: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "drillpress";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_drillpress.p3d";
		
	};
	class ProxyTH_TB_grinder: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "grinder";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_grinder.p3d";
		
	};
	class ProxyTH_TB_vice: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "vice";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_vice.p3d";
		
	};
	class ProxyTH_TB_soldering: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "soldering";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_soldering.p3d";
		
	};
	class ProxyTH_TB_welding: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "welding";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_welding.p3d";
		
	};
	class ProxyTH_TB_sewing: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "sewing";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_sewing.p3d";
		
	};
	class ProxyTH_TB_Spraycan1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan1";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan1.p3d";
		
	};
	class ProxyTH_TB_Spraycan2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan2";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan2.p3d";
		
	};
	class ProxyTH_TB_Spraycan3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan3";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan3.p3d";
		
	};
	class ProxyTH_TB_Spraycan4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan4";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan4.p3d";
		
	};
	class ProxyTH_TB_Spraycan5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan5";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan5.p3d";
		
	};
	class ProxyTH_TB_Spraycan6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan6";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan6.p3d";
		
	};
	class ProxyTH_TB_Spraycan7: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WB_Spraycan7";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_spraycan7.p3d";
		
	};
	class ProxyTH_TB_Material_MetalSheets1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_MetalSheets";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_Material_MetalSheets.p3d";
		
	};
	class ProxyTH_TB_Material_MetalSheets2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Material_L3_MetalSheets";
		model = "\TheHive_zmWorkbench_Extension\Tecnic_Bench\proxies\TH_TB_Material_MetalSheets2.p3d";
		
	};

	
};