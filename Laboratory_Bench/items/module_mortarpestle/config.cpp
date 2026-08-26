class CfgPatches
{
	class TH_CS_LB_Mortar_Script
	{
		units[]=
		{
			"TH_CS_LB_Mortar"

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
	class TH_CS_LB_Mortar: Inventory_Base
	{
		scope=2;
		displayName="$STR_TH_CS_LB_Mortar";
		descriptionShort="$STR_TH_CS_LB_Mortar_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\TH_CS_LB_Mortar.p3d";
		inventorySlot[]=
		{
			"mortarpestle"
		};
		attachments[] = 
		{
			"pestle"
		};
		weight=2000;
		itemSize[]={3,3};
		itemBehaviour=2;
		canBeSplit=0;
		hiddenSelections[]=
		{
			"Mortar"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_Mortarpesle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\data\data\penetration\pottery.rvmat"
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
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_destruct.rvmat"
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

	class TH_CS_LB_Pestle: Inventory_Base
	{
		scope=2;
		displayName="$STR_TH_CS_LB_Pestle";
		descriptionShort="$STR_TH_CS_LB_Pestle_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\TH_CS_LB_Pestle.p3d";
		inventorySlot[]=
		{
			"pestle"
		};
		weight=500;
		itemSize[]={1,3};
		itemBehaviour=2;
		canBeSplit=0;
		hiddenSelections[]=
		{
			"Pestle"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_Mortarpesle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\data\data\penetration\pottery.rvmat"
		};

		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;

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
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\module_mortarpestle\model\data\TH_CS_LB_MortarPestle_destruct.rvmat"
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

class CfgSlots
{
	// MODULE SLOTS
	class Slot_TH_LB_Pestle
	{
		name = "pestle";
		displayName = "$STR_Slot_TH_LB_Pestle";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyTH_LB_Pestle_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pestle";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_Pestle_Proxy.p3d";
		
	};
};