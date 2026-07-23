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
			"terminal",
			"wavegenerator",
			"mortarpestle",
			"workbenchstorage",
			"workbenchoutput",
			"TH_LB_Syringe1",
			"TH_LB_Syringe2",
			"TH_LB_Syringe3",
			"TH_LB_Syringe4",
			"TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8",
			"TH_LB_Disinfectants1",
			"TH_LB_Disinfectants2",
			"TH_LB_Disinfectants3",
			"TH_LB_Disinfectants4",
			"TH_LB_Bandages1",
            "TH_LB_Bandages2",
            "TH_LB_Bandages3",
            "TH_LB_Bandages4",
			"TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4",
			"TH_LB_Ampoules1",
			"TH_LB_Ampoules2",
			"TH_LB_Ampoules3",
			"TH_LB_Ampoules4",
			"TH_LB_Ampoules5",
			"TH_LB_Ampoules6",
			"TH_LB_Ampoules7",
			"TH_LB_Ampoules8",
			"TH_LB_Ampoules9",
			"TH_LB_Ampoules10",
			"TH_LB_Ampoules11",
			"TH_LB_Ampoules12",
			"TH_LB_Ampoules13",
			"TH_LB_Ampoules14",
			"TH_LB_Ampoules15",
			"TH_LB_Ampoules16",
			"TH_LB_Ampoules17",
			"TH_LB_Ampoules18",
			"TH_LB_Ampoules19",
			"TH_LB_Ampoules20",
			"TH_LB_Ampoules21",
			"TH_LB_Ampoules22",
			"TH_LB_Ampoules23",
			"TH_LB_Ampoules24",
			"TH_LB_Ampoules25",
			"TH_LB_Ampoules26",
			"TH_LB_Ampoules27",
			"TH_LB_Ampoules28",
			"TH_LB_Ampoules29",
			"TH_LB_Ampoules30",
			"TH_LB_Ampoules31",
			"TH_LB_Ampoules32",
			"TH_LB_FirstAidKit" 
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
			class supplies
			{
				name="$STR_AttachmentsProps_Supplies";
				description="$STR_AttachmentsProps_Supplies_desc";
				attachmentSlots[]=
				{
					"TH_LB_Disinfectants1",
					"TH_LB_Disinfectants2",
					"TH_LB_Disinfectants3",
					"TH_LB_Disinfectants4",
					"TH_LB_Bandages1",
					"TH_LB_Bandages2",
					"TH_LB_Bandages3",
					"TH_LB_Bandages4",
					"TH_LB_Pills1",
					"TH_LB_Pills2",
					"TH_LB_Pills3",
					"TH_LB_Pills4",
					"TH_LB_Pills5",
					"TH_LB_Pills6",
					"TH_LB_Pills7",
					"TH_LB_Pills8"
					
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class bloodsupplies
			{
				name="$STR_AttachmentsProps_BloodSupplies";
				description="$STR_AttachmentsProps_BloodSupplies_desc";
				attachmentSlots[]=
				{
					"TH_LB_Syringe1",
					"TH_LB_Syringe2",
					"TH_LB_Syringe3",
					"TH_LB_Syringe4",
					"TH_LB_BloodSupplies1",
					"TH_LB_BloodSupplies2",
					"TH_LB_BloodSupplies3",
					"TH_LB_BloodSupplies4"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_AttachmentsProps_Modules";
				description="$STR_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"terminal",
					"wavegenerator",
					"mortarpestle"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class medicines
			{
				name="$STR_AttachmentsProps_Medicines";
				description="$STR_AttachmentsProps_Medicines_desc";
				attachmentSlots[]=
				{
					"TH_LB_Ampoules1",
					"TH_LB_Ampoules2",
					"TH_LB_Ampoules3",
					"TH_LB_Ampoules4",
					"TH_LB_Ampoules5",
					"TH_LB_Ampoules6",
					"TH_LB_Ampoules7",
					"TH_LB_Ampoules8",
					"TH_LB_Ampoules9",
					"TH_LB_Ampoules10",
					"TH_LB_Ampoules11",
					"TH_LB_Ampoules12",
					"TH_LB_Ampoules13",
					"TH_LB_Ampoules14",
					"TH_LB_Ampoules15",
					"TH_LB_Ampoules16",
					"TH_LB_Ampoules17",
					"TH_LB_Ampoules18",
					"TH_LB_Ampoules19",
					"TH_LB_Ampoules20",
					"TH_LB_Ampoules21",
					"TH_LB_Ampoules22",
					"TH_LB_Ampoules23",
					"TH_LB_Ampoules24",
					"TH_LB_Ampoules25",
					"TH_LB_Ampoules26",
					"TH_LB_Ampoules27",
					"TH_LB_Ampoules28",
					"TH_LB_Ampoules29",
					"TH_LB_Ampoules30",
					"TH_LB_Ampoules31",
					"TH_LB_Ampoules32"
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
			class FirstAidKitStorage
			{
				name="$STR_AttachmentsProps_FirstAidKitStorage";
				description="$STR_AttachmentsProps_FirstAidKitStorage_desc";
				attachmentSlots[]=
				{
					"TH_LB_FirstAidKit"
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
			"terminal",
			"wavegenerator",
			"mortarpestle",
			"workbenchstorage",
			"workbenchoutput",
			"TH_LB_Syringe1",
			"TH_LB_Syringe2",
			"TH_LB_Syringe3",
			"TH_LB_Syringe4",
			"TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8",
			"TH_LB_Disinfectants1",
			"TH_LB_Disinfectants2",
			"TH_LB_Disinfectants3",
			"TH_LB_Disinfectants4",
			"TH_LB_Bandages1",
            "TH_LB_Bandages2",
            "TH_LB_Bandages3",
            "TH_LB_Bandages4",
			"TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4",
			"TH_LB_Ampoules1",
			"TH_LB_Ampoules2",
			"TH_LB_Ampoules3",
			"TH_LB_Ampoules4",
			"TH_LB_Ampoules5",
			"TH_LB_Ampoules6",
			"TH_LB_Ampoules7",
			"TH_LB_Ampoules8",
			"TH_LB_Ampoules9",
			"TH_LB_Ampoules10",
			"TH_LB_Ampoules11",
			"TH_LB_Ampoules12",
			"TH_LB_Ampoules13",
			"TH_LB_Ampoules14",
			"TH_LB_Ampoules15",
			"TH_LB_Ampoules16",
			"TH_LB_Ampoules17",
			"TH_LB_Ampoules18",
			"TH_LB_Ampoules19",
			"TH_LB_Ampoules20",
			"TH_LB_Ampoules21",
			"TH_LB_Ampoules22",
			"TH_LB_Ampoules23",
			"TH_LB_Ampoules24",
			"TH_LB_Ampoules25",
			"TH_LB_Ampoules26",
			"TH_LB_Ampoules27",
			"TH_LB_Ampoules28",
			"TH_LB_Ampoules29",
			"TH_LB_Ampoules30",
			"TH_LB_Ampoules31",
			"TH_LB_Ampoules32",
			"TH_LB_FirstAidKit" 
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
			class supplies
			{
				name="$STR_AttachmentsProps_Supplies";
				description="$STR_AttachmentsProps_Supplies_desc";
				attachmentSlots[]=
				{
					"TH_LB_Disinfectants1",
					"TH_LB_Disinfectants2",
					"TH_LB_Disinfectants3",
					"TH_LB_Disinfectants4",
					"TH_LB_Bandages1",
					"TH_LB_Bandages2",
					"TH_LB_Bandages3",
					"TH_LB_Bandages4",
					"TH_LB_Pills1",
					"TH_LB_Pills2",
					"TH_LB_Pills3",
					"TH_LB_Pills4",
					"TH_LB_Pills5",
					"TH_LB_Pills6",
					"TH_LB_Pills7",
					"TH_LB_Pills8"
					
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class bloodsupplies
			{
				name="$STR_AttachmentsProps_BloodSupplies";
				description="$STR_AttachmentsProps_BloodSupplies_desc";
				attachmentSlots[]=
				{
					"TH_LB_Syringe1",
					"TH_LB_Syringe2",
					"TH_LB_Syringe3",
					"TH_LB_Syringe4",
					"TH_LB_BloodSupplies1",
					"TH_LB_BloodSupplies2",
					"TH_LB_BloodSupplies3",
					"TH_LB_BloodSupplies4"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_AttachmentsProps_Modules";
				description="$STR_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"terminal",
					"wavegenerator",
					"mortarpestle"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class medicines
			{
				name="$STR_AttachmentsProps_Medicines";
				description="$STR_AttachmentsProps_Medicines_desc";
				attachmentSlots[]=
				{
					"TH_LB_Ampoules1",
					"TH_LB_Ampoules2",
					"TH_LB_Ampoules3",
					"TH_LB_Ampoules4",
					"TH_LB_Ampoules5",
					"TH_LB_Ampoules6",
					"TH_LB_Ampoules7",
					"TH_LB_Ampoules8",
					"TH_LB_Ampoules9",
					"TH_LB_Ampoules10",
					"TH_LB_Ampoules11",
					"TH_LB_Ampoules12",
					"TH_LB_Ampoules13",
					"TH_LB_Ampoules14",
					"TH_LB_Ampoules15",
					"TH_LB_Ampoules16",
					"TH_LB_Ampoules17",
					"TH_LB_Ampoules18",
					"TH_LB_Ampoules19",
					"TH_LB_Ampoules20",
					"TH_LB_Ampoules21",
					"TH_LB_Ampoules22",
					"TH_LB_Ampoules23",
					"TH_LB_Ampoules24",
					"TH_LB_Ampoules25",
					"TH_LB_Ampoules26",
					"TH_LB_Ampoules27",
					"TH_LB_Ampoules28",
					"TH_LB_Ampoules29",
					"TH_LB_Ampoules30",
					"TH_LB_Ampoules31",
					"TH_LB_Ampoules32"
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
			class FirstAidKitStorage
			{
				name="$STR_AttachmentsProps_FirstAidKitStorage";
				description="$STR_AttachmentsProps_FirstAidKitStorage_desc";
				attachmentSlots[]=
				{
					"TH_LB_FirstAidKit"
				};
				icon="set:dayz_inventory image:woodcrate";
			};
			
		};
	
	};

};