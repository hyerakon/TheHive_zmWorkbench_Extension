#define _ARMA_


//PER DISABILITARE QUESTA MOD: CERCA NELLA REPO "TH_CS_zmTerje_Integration_Scripts" e cancellala

class CfgPatches
{
	class TH_CS_zmTerje_Integration_Scripts
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
            "DZ_Gear_Camping",
            "DayZExpansion_Core_Objects_CircuitBoard",
            "TerjeCore",
            "TerjeSkills",
            "TerjeMedicine",
            "TerjeRadiation",
			"TheHive_zmWorkbench_Integration_Scripts"
		};
	};
};
class CfgMods
{
	class TH_CS_zmTerje_Integration
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Hyerakon - CraftSystem Terje Integration";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"TheHive_zmWorkbench_Extension\zmTerje_Integration\Scripts\3_Game"};
			};
            class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension\zmTerje_Integration\Scripts\4_World"};
			};
            class missionScriptModule
			{
				value="";
				files[]={"TheHive_zmWorkbench_Extension\zmTerje_Integration\Scripts\5_Mission"};
			};
		};
	};
};