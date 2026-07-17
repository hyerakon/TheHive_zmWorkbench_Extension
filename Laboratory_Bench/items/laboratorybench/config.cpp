class CfgPatches
{
	class TheHive_CS_LB_Script
	{
		units[]=
		{
			"TheHive_CS_LB_Bench",
            "TheHive_CS_LB_Bench_Public",
            "TheHive_CS_LB_Bench_Locked"

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
	
    class zm_WorkbenchPublic;
	class TheHive_CS_Bench_BASE;


	class TheHive_CS_LB_Bench_BASE: TheHive_CS_Bench_BASE
	{
		scope=0;
		displayName="$STR_TheHive_CS_LB_Bench_BASE";
		descriptionShort="$STR_TheHive_CS_LB_Bench_BASE_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\TheHive_CS_LB_Workbench.p3d";
		weight=50000;
		itemSize[]={10,10};
		physLayer="item_large";
		itemBehaviour=2;
		simulation="inventoryItem";
		rotationFlags=2;
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		carveNavmesh=1;
		heavyItem=1;
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		actionTargetsCursor[]= {};
		hiddenSelections[]=
		{
			"Workbench"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		attachments[] = 
		{ 
			"drillpress",
			"grinder",
			"vice",
			"soldering",
			"welding",
			"sewing",
			"workbenchstorage",
			"workbenchoutput",
			"WB_Battery1",
			"WB_Battery2",
			"WB_Battery3",
			"WB_Battery4",
			"WB_Axe",
			"WB_Pickaxe",
			"WB_Sledgehammer",
			"WB_Shovel",
			"WB_Handsaw",
			"WB_Hatchet",
			"WB_Crowbar",
			"WB_Hammer",
			"TH_TB_Pliers",
			"WB_Screwdriver1",
			"WB_Screwdriver2",
			"WB_Spraycan1",
			"WB_Spraycan2",
			"WB_Spraycan3",
			"WB_Spraycan4",
			"WB_Spraycan5",
			"WB_Spraycan6",
			"WB_Spraycan7",
			"Material_MetalSheets",
			"Material_L3_MetalSheets",
			"Material_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L1_Nails",
			"MetalWire",
			"TH_TB_WoodenCase" 
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
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_destruct.rvmat"
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
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class power
			{
				name="$STR_AttachmentsProps_Power";
				description="$STR_AttachmentsProps_Power_desc";
				attachmentSlots[]=
				{
					"WB_Battery1",
					"WB_Battery2",
					"WB_Battery3",
					"WB_Battery4"
				};
				icon="set:dayz_inventory image:battery";
			};
			class tools
			{
				name="$STR_AttachmentsProps_Tools";
				description="$STR_AttachmentsProps_Tools_desc";
				attachmentSlots[]=
				{
					"WB_Axe",
					"WB_Pickaxe",
					"WB_Sledgehammer",
					"WB_Shovel",
					"WB_Handsaw",
					"WB_Hatchet",
					"WB_Crowbar",
					"WB_Hammer",
					"TH_TB_Pliers",
					"WB_Screwdriver1",
					"WB_Screwdriver2"
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class spraycans
			{
				name="$STR_AttachmentsProps_Spraycans";
				description="$STR_AttachmentsProps_Spraycans_desc";
				attachmentSlots[]=
				{
					"WB_Spraycan1",
					"WB_Spraycan2",
					"WB_Spraycan3",
					"WB_Spraycan4",
					"WB_Spraycan5",
					"WB_Spraycan6",
					"WB_Spraycan7"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_AttachmentsProps_Modules";
				description="$STR_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"drillpress",
					"grinder",
					"vice",
					"soldering",
					"welding",
					"sewing"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class materials
			{
				name="$STR_AttachmentsProps_Materials";
				description="$STR_AttachmentsProps_Materials_desc";
				attachmentSlots[]=
				{
					"Material_MetalSheets",
					"Material_L3_MetalSheets",
					"Material_WoodenPlanks",
					"Material_L3_WoodenPlanks",
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L1_Nails",
					"MetalWire"
				};
				icon="set:dayz_inventory image:plates";
			};
			class storage
			{
				name="$STR_AttachmentsProps_ToolsStorage";
				description="$STR_AttachmentsProps_ToolsStorage_desc";
				attachmentSlots[]=
				{
					"workbenchstorage"
				};
				icon="set:workbench_icons image:cat_storage";
			};
			class output
			{
				name="$STR_AttachmentsProps_Output";
				description="$STR_AttachmentsProps_Output_desc";
				attachmentSlots[]=
				{
					"workbenchoutput"
				};
				icon="set:workbench_icons image:cat_output";
			};
			class WoodenStorage
			{
				name="$STR_AttachmentsProps_WoodenStorage";
				description="$STR_AttachmentsProps_WoodenStorage_desc";
				attachmentSlots[]=
				{
					"TH_TB_WoodenCase"
				};
				icon="set:dayz_inventory image:woodcrate";
			};
			
		};
	
	};
	class TheHive_CS_LB_Bench_Modular: TheHive_CS_LB_Bench_BASE
	{
		scope=2;
		displayName="$STR_TheHive_CS_LB_Bench_Modular";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Modular_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\TheHive_CS_LB_Workbench.p3d";
		hiddenSelections[]=
		{
			"Workbench"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
		};
	
	};
	class TheHive_CS_LB_Bench_Locked: TheHive_CS_LB_Bench_BASE
	{
		scope=2;
		displayName="$STR_TheHive_CS_LB_Bench_Locked";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Locked_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\TheHive_CS_LB_Workbench.p3d";
		hiddenSelections[]=
		{
			"Workbench"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
		};
	};
	class TheHive_CS_LB_Bench_Public: zm_WorkbenchPublic
	{
		scope=1;
		displayName="$STR_TheHive_CS_LB_Bench_Public";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Public_desc";
		model="TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\TheHive_CS_LB_Workbench.p3d";
		weight=100000;
		itemSize[]={15,15};
		physLayer="item_large";
		itemBehaviour=2;
		attachments[] = 
		{ 
			"drillpress",
			"grinder",
			"vice",
			"soldering",
			"welding",
			"sewing",
			"workbenchstorage",
			"workbenchoutput",
			"WB_Battery1",
			"WB_Battery2",
			"WB_Battery3",
			"WB_Battery4",
			"WB_Axe",
			"WB_Pickaxe",
			"WB_Sledgehammer",
			"WB_Shovel",
			"WB_Handsaw",
			"WB_Hatchet",
			"WB_Crowbar",
			"WB_Hammer",
			"TH_TB_Pliers",
			"WB_Screwdriver1",
			"WB_Screwdriver2",
			"WB_Spraycan1",
			"WB_Spraycan2",
			"WB_Spraycan3",
			"WB_Spraycan4",
			"WB_Spraycan5",
			"WB_Spraycan6",
			"WB_Spraycan7",
			"Material_MetalSheets",
			"Material_L3_MetalSheets",
			"Material_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L1_Nails",
			"MetalWire",
			"TH_TB_WoodenCase" 
		};
		hiddenSelections[]=
		{
			"Workbench"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
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
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Laboratory_Bench\items\laboratorybench\model\data\TheHive_CS_LB_Workbench_destruct.rvmat"
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
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class power
			{
				name="Power";
				description="Battery slots for power supply";
				attachmentSlots[]=
				{
					"WB_Battery1",
					"WB_Battery2",
					"WB_Battery3",
					"WB_Battery4"
				};
				icon="set:dayz_inventory image:battery";
			};
			class spraycans
			{
				name="$STR_AttachmentsProps_Spraycans";
				description="$STR_AttachmentsProps_Spraycans_desc";
				attachmentSlots[]=
				{
					"WB_Spraycan1",
					"WB_Spraycan2",
					"WB_Spraycan3",
					"WB_Spraycan4",
					"WB_Spraycan5",
					"WB_Spraycan6",
					"WB_Spraycan7"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class materials
			{
				name="$STR_AttachmentsProps_Materials";
				description="$STR_AttachmentsProps_Materials_desc";
				attachmentSlots[]=
				{
					"Material_MetalSheets",
					"Material_L3_MetalSheets",
					"Material_WoodenPlanks",
					"Material_L3_WoodenPlanks",
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L1_Nails",
					"MetalWire"
				};
				icon="set:dayz_inventory image:plates";
			};
			class storage
			{
				name="$STR_AttachmentsProps_ToolsStorage";
				description="$STR_AttachmentsProps_ToolsStorage_desc";
				attachmentSlots[]=
				{
					"workbenchstorage"
				};
				icon="set:workbench_icons image:cat_storage";
			};
			class output
			{
				name="$STR_AttachmentsProps_Output";
				description="$STR_AttachmentsProps_Output_desc";
				attachmentSlots[]=
				{
					"workbenchoutput"
				};
				icon="set:workbench_icons image:cat_output";
			};
			class WoodenStorage
			{
				name="$STR_AttachmentsProps_WoodenStorage";
				description="$STR_AttachmentsProps_WoodenStorage_desc";
				attachmentSlots[]=
				{
					"TH_TB_WoodenCase"
				};
				icon="set:dayz_inventory image:woodcrate";
			};
		};
	
	};

};