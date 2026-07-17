class CfgPatches
{
	class TheHive_zmWorkbench_Extension_LB_Script
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
			"TheHive_zmWorkbench_Integration_Scripts"
		};
	};
};
class CfgMods
{
	class TheHive_zmWorkbench_Extension_LB
	{
		dir = "TheHive_zmWorkbench_Extension\Laboratory_Bench";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The Hive - CraftingSystem - Laboratory";
		credits = "Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		//inputs = "TheHive_CraftingSystem\Tecnicbench\data\inputs.xml";
        //defines[] = {"LABORATORYBENCH_DEBUG"};
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
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/5_Mission"};
			};
		};
	};
};

class CfgSlots
{
	class Slot_TH_LB_Terminal
	{
		name = "terminal";
		displayName = "$STR_Slot_TH_LB_Terminal";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
};