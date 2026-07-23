#define _ARMA_

class CfgPatches
{
	class TheHive_zmWorkbench_Integration_Scripts
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
            "DZ_Gear_Consumables",
            "DZ_Gear_Camping",
            "DayZExpansion_Core_Objects_CircuitBoard",
			"WorkbenchMod"
		};
	};
};
class CfgMods
{
	class TheHive_zmWorkbench_Integration
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Hyerakon - zmWorkbench_Integration";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension\zmWorkbench_Integration\Scripts\3_Game"};
			};			
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension\zmWorkbench_Integration\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension\zmWorkbench_Integration\Scripts\5_Mission"};
			};
		};
	};
};

class cfgVehicles
{
    
	class zm_WorkbenchModular;
    class TheHive_CS_Bench_BASE: zm_WorkbenchModular
    {
        scope=0;
		displayName="$STR_TheHive_CS_Bench_BASE";
		descriptionShort="$STR_TheHive_CS_Bench_BASE_desc";
    };
};