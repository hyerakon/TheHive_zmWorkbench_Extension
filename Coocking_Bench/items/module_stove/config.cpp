class CfgPatches
{
	class TH_CS_CB_Stove_Script
	{
		units[]=
		{
			"TH_CS_CB_Stove"

		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
            "DZ_Gear_Cooking",
			"WorkbenchMod",
			"zm_Workbench"
		};
	};
};

class CfgVehicles
{
    class Inventory_Base;
    class TH_CS_CB_Stove: Inventory_Base
	{
		scope=2;
		displayName="$STR_TH_CS_CB_Stove";
		descriptionShort="$STR_TH_CS_CB_Stove_desc";
		model="TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\TH_CS_CB_Stove.p3d";
		overrideDrawArea="3.0";
		openable=0;
		lootTag[]=
		{
			"Camping"
		};
		lootCategory="Tools";
		weight=170;
		itemSize[]={4,3};
		attachments[]=
		{
			"GasCanister",
			"CookingEquipment"
		};
		containerSlot="GasCanister";
		hiddenSelections[]=
		{
			"AllStove"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\module_stove\module\data\TH_CS_CB_Stove_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn=0;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			energyStorageMax=0;
			energyUsagePerSecond=1;
			energyAtSpawn=0;
			powerSocketsCount=0;
			plugType=7;
			attachmentAction=1;
			updateInterval=10;
		};
		class PointLights
		{
			class PointLight
			{
				color[]={1,0.60000002,0.5,1};
				brightness=1;
				radius=5;
				dayLight=0;
				position="light";
				hitpoint="bulb";
				selection="bulb";
			};
		};
		soundImpactType="metal";
	};
	
};