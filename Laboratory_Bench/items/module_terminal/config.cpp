class CfgPatches
{
	class TH_CS_LB_Terminal_Script
	{
		units[]=
		{
			"TH_CS_LB_Terminal"

		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"WorkbenchMod",
			"zm_Workbench"
		};
	};
};

class CfgVehicles
{
    class Inventory_Base;
	class TH_CS_LB_Terminal: Inventory_Base
	{
		scope=2;
		displayName="$STR_TH_CS_LB_Terminal";
		descriptionShort="$STR_TH_CS_LB_Terminal_desc";
		model="\TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_terminal\model\TH_CS_LB_Terminal.p3d";
		inventorySlot[]=
		{
			"terminal"
		};
		weight=2000;
		itemSize[]={5,5};
		itemBehaviour=2;
		canBeSplit=0;
		hiddenSelections[]=
		{
			"AllTerminal",
			"Chassis",
			"Display",
			"Keyboard",
			"PowerButton"
		};
		hiddenSelectionsTextures[]=
		{
			"",
            "TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_terminal\model\data\TH_CS_LB_Terminal_co.paa",
            "TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_terminal\model\data\TH_CS_LB_TerminalMonitor_LightOff.paa",
            "TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_terminal\model\data\TH_CS_LB_TerminalKeyboard_co.paa",
            ""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\data\data\penetration\plastic_material.rvmat",
			"dz\data\data\penetration\plastic_material.rvmat",
			"dz\data\data\penetration\glass.rvmat",
			"dz\data\data\penetration\plastic_material.rvmat",
			"dz\data\data\penetration\plastic_material.rvmat"
		};

		class Reflectors
		{
			class Reflector_1
			{
				ambient[]={0,0,0};
				color[]={1,0.89999998,0.75};
				position="beamstart";
				direction="beamend";
				hitpoint="";
				selection="";
				size=0.5;
				innerAngle=60;
				outerAngle=120;
				coneFadeCoef=5;
				intensity=5;
				dayLight=0;
				flareSize=0.30000001;
				flareMaxDistance=50;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.5;
					hardLimitStart=3;
					hardLimitEnd=6;
				};
			};
		};
	};
};