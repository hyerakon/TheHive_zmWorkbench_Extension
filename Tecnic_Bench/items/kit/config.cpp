class CfgPatches
{
    class TheHive_CS_TB_Kits_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Scripts",
			"DZ_Data",
            "TheHive_zmWorkbench_Extension_Script",
            "TheHive_CS_TB_Script"
        };
    };
};

class CfgVehicles
{
    class Inventory_Base;
    class TheHive_CS_TB_KitBox_BASE : Inventory_Base
	{
		scope = 0;
		displayName = "$STR_TheHive_CS_TB_KitBox_BASE";
		descriptionShort = "$STR_TheHive_CS_TB_KitBox_BASE_desc";
		model = "\DZ\gear\camping\wooden_case.p3d";
		weight = 1000;
		itemSize[] = {6,4};
		itemBehaviour = 0;
		physLayer = "item_small";
		canBeSplit = 0;
        soundImpactType = "wood";
		rotationFlags = 2;
		projectionTypename = "TheHive_CS_TB_Bench_BASE";
		alignHologramToTerain=1;
		slopeTolerance=0.5;

		class AnimationSources
		{
			class Deployable
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};

        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					transferToAttachmentsCoef=0.059999999;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\wooden_case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\wooden_case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\wooden_case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\wooden_case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\wooden_case_destruct.rvmat"
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
        class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	
		
	};  
    class TheHive_CS_TB_Kit_Modular : TheHive_CS_TB_KitBox_BASE
    {
        scope = 2;
        displayName = "$STR_TheHive_CS_TB_Kit_Modular";
		descriptionShort = "$STR_TheHive_CS_TB_Kit_Modular_desc";
        projectionTypename = "TheHive_CS_TB_Bench_Modular";
    };
    class TheHive_CS_TB_Kit_Locked : TheHive_CS_TB_KitBox_BASE
    {
        scope = 2;
        displayName = "$STR_TheHive_CS_TB_Kit_Locked";
		descriptionShort = "$STR_TheHive_CS_TB_Kit_Locked_desc";
        projectionTypename = "TheHive_CS_TB_Bench_Locked";
    };
};