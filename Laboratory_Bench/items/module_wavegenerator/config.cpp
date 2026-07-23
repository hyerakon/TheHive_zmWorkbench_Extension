class CfgPatches
{
	class TH_CS_LB_WaveGenerator_Script
	{
		units[]=
		{
			"TH_CS_LB_WaveGenerator"

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
	class TH_CS_LB_WaveGenerator: Inventory_Base
	{
		scope=2;
		displayName="$STR_TH_CS_LB_WaveGenerator";
		descriptionShort="$STR_TH_CS_LB_WaveGenerator_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\TH_CS_LB_WaveGenerator.p3d";
		inventorySlot[]=
		{
			"wavegenerator"
		};
		weight=2000;
		itemSize[]={5,5};
		itemBehaviour=2;
		canBeSplit=0;
		hiddenSelections[]=
		{
			"Chassis",
			"ConsoleButtons",
			"ConsolePanel"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\th_cs_lb_wg_chassis.paa",
            "TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\th_cs_tb_wg_consolebuttons.paa",
            "TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\th_cs_lb_wg_consolepanel.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis.rvmat",
            "DZ\data\data\penetration\plastic_material.rvmat",
            "DZ\data\data\penetration\plastic_material.rvmat"
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

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] =
					{
						{
							1,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_wavegenerator\model\data\TheHive_CS_LB_WaveGenerator_Chassis_destruct.rvmat"
							}
						}
					};
				
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};

	};
};