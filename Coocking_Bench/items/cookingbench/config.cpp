class CfgPatches
{
	class TH_CS_CB_Script
	{
		units[]=
		{
			"TH_CS_CB_Bench",
            "TH_CS_CB_Bench_Public",
            "TH_CS_CB_Bench_Locked"

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
	class TH_CS_Bench_BASE;


	class TH_CS_CB_Bench_BASE: TH_CS_Bench_BASE
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
			"Table"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		attachments[] = 
		{ 
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4",
			"TH_CB_FoodSupply_1",
			"TH_CB_FoodSupply_2",
			"TH_CB_FoodSupply_3",
			"TH_CB_FoodSupply_4",
			"TH_CB_FoodSupply_5",
			"TH_CB_FoodSupply_6",
			"TH_CB_FoodSupply_7",
			"TH_CB_FoodSupply_8",
			"TH_CB_CookEquipment_1",
			"TH_CB_CookEquipment_2",
			"TH_CB_CookEquipment_3",
			"TH_CB_CookEquipment_4",
			"TH_CB_CookEquipment_5",
			"TH_CB_CookEquipment_6",
			"TH_CB_CookEquipment_7",
			"TH_CB_CookEquipment_8",
			"scale",
			"still",
			"stove",
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32",
			"workbenchstorage",
			"workbenchoutput",
			"TH_CB_WoodenCase"
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
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_destruct.rvmat"
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
				name="$STR_CB_AttachmentsProps_Power";
				description="$STR_CB_AttachmentsProps_Power_desc";
				attachmentSlots[]=
				{
					"TH_CB_Gas_1",
					"TH_CB_Gas_2",
					"TH_CB_Gas_3",
					"TH_CB_Gas_4"
				};
				icon="set:dayz_inventory image:battery";
			};
			class foodsupplies
			{
				name="$STR_CB_AttachmentsProps_FoodSupplies";
				description="$STR_CB_AttachmentsProps_FoodSupplies_desc";
				attachmentSlots[]=
				{
					"TH_CB_FoodSupply_1",
					"TH_CB_FoodSupply_2",
					"TH_CB_FoodSupply_3",
					"TH_CB_FoodSupply_4",
					"TH_CB_FoodSupply_5",
					"TH_CB_FoodSupply_6",
					"TH_CB_FoodSupply_7",
					"TH_CB_FoodSupply_8"
					
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class cookingequipment
			{
				name="$STR_AttachmentsProps_CookingEquipment";
				description="$STR_AttachmentsProps_CookingEquipment_desc";
				attachmentSlots[]=
				{
					"TH_CB_CookEquipment_1",
					"TH_CB_CookEquipment_2",
					"TH_CB_CookEquipment_3",
					"TH_CB_CookEquipment_4",
					"TH_CB_CookEquipment_5",
					"TH_CB_CookEquipment_6",
					"TH_CB_CookEquipment_7",
					"TH_CB_CookEquipment_8"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_CB_AttachmentsProps_Modules";
				description="$STR_CB_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"scale",
					"still",
					"stove"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class ingredients
			{
				name="$STR_AttachmentsProps_Ingredients";
				description="$STR_AttachmentsProps_Ingredients_desc";
				attachmentSlots[]=
				{
					"TH_CB_Ingredient_1",
					"TH_CB_Ingredient_2",
					"TH_CB_Ingredient_3",
					"TH_CB_Ingredient_4",
					"TH_CB_Ingredient_5",
					"TH_CB_Ingredient_6",
					"TH_CB_Ingredient_7",
					"TH_CB_Ingredient_8",
					"TH_CB_Ingredient_9",
					"TH_CB_Ingredient_10",
					"TH_CB_Ingredient_11",
					"TH_CB_Ingredient_12",
					"TH_CB_Ingredient_13",
					"TH_CB_Ingredient_14",
					"TH_CB_Ingredient_15",
					"TH_CB_Ingredient_16",
					"TH_CB_Ingredient_17",
					"TH_CB_Ingredient_18",
					"TH_CB_Ingredient_19",
					"TH_CB_Ingredient_20",
					"TH_CB_Ingredient_21",
					"TH_CB_Ingredient_22",
					"TH_CB_Ingredient_23",
					"TH_CB_Ingredient_24",
					"TH_CB_Ingredient_25",
					"TH_CB_Ingredient_26",
					"TH_CB_Ingredient_27",
					"TH_CB_Ingredient_28",
					"TH_CB_Ingredient_29",
					"TH_CB_Ingredient_30",
					"TH_CB_Ingredient_31",
					"TH_CB_Ingredient_32"
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
			class CookingStorage
			{
				name="$STR_AttachmentsProps_CookingStorage";
				description="$STR_AttachmentsProps_CookingStorage_desc";
				attachmentSlots[]=
				{
					"TH_CB_WoodenCase"
				};
				icon="set:dayz_inventory image:woodcrate";
			};
			
		};
	
	};
	class TH_CS_CB_Bench_Modular: TH_CS_CB_Bench_BASE
	{
		scope=2;
		displayName="$STR_TheHive_CS_LB_Bench_Modular";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Modular_desc";
		model="TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\TH_CS_CB_Cookingbench.p3d";
		hiddenSelections[]=
		{
			"Table"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
		};
	
	};
	class TH_CS_CB_Bench_Locked: TH_CS_CB_Bench_BASE
	{
		scope=2;
		displayName="$STR_TheHive_CS_LB_Bench_Locked";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Locked_desc";
		model="TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\TH_CS_CB_Cookingbench.p3d";
		hiddenSelections[]=
		{
			"Table"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
		};
	};
	
	class TH_CS_CB_Bench_Public: zm_WorkbenchPublic
	{
		scope=1;
		displayName="$STR_TheHive_CS_LB_Bench_Public";
		descriptionShort="$STR_TheHive_CS_LB_Bench_Public_desc";
		model="TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\TH_CS_CB_Cookingbench.p3d";
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
			"Table"
		};
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		attachments[] = 
		{ 
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4",
			"TH_CB_FoodSupply_1",
			"TH_CB_FoodSupply_2",
			"TH_CB_FoodSupply_3",
			"TH_CB_FoodSupply_4",
			"TH_CB_FoodSupply_5",
			"TH_CB_FoodSupply_6",
			"TH_CB_FoodSupply_7",
			"TH_CB_FoodSupply_8",
			"TH_CB_CookEquipment_1",
			"TH_CB_CookEquipment_2",
			"TH_CB_CookEquipment_3",
			"TH_CB_CookEquipment_4",
			"TH_CB_CookEquipment_5",
			"TH_CB_CookEquipment_6",
			"TH_CB_CookEquipment_7",
			"TH_CB_CookEquipment_8",
			"scale",
			"still",
			"stove",
			"TH_CB_Ingredient_1",
			"TH_CB_Ingredient_2",
			"TH_CB_Ingredient_3",
			"TH_CB_Ingredient_4",
			"TH_CB_Ingredient_5",
			"TH_CB_Ingredient_6",
			"TH_CB_Ingredient_7",
			"TH_CB_Ingredient_8",
			"TH_CB_Ingredient_9",
			"TH_CB_Ingredient_10",
			"TH_CB_Ingredient_11",
			"TH_CB_Ingredient_12",
			"TH_CB_Ingredient_13",
			"TH_CB_Ingredient_14",
			"TH_CB_Ingredient_15",
			"TH_CB_Ingredient_16",
			"TH_CB_Ingredient_17",
			"TH_CB_Ingredient_18",
			"TH_CB_Ingredient_19",
			"TH_CB_Ingredient_20",
			"TH_CB_Ingredient_21",
			"TH_CB_Ingredient_22",
			"TH_CB_Ingredient_23",
			"TH_CB_Ingredient_24",
			"TH_CB_Ingredient_25",
			"TH_CB_Ingredient_26",
			"TH_CB_Ingredient_27",
			"TH_CB_Ingredient_28",
			"TH_CB_Ingredient_29",
			"TH_CB_Ingredient_30",
			"TH_CB_Ingredient_31",
			"TH_CB_Ingredient_32",
			"workbenchstorage",
			"workbenchoutput",
			"TH_CB_WoodenCase"
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
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
							}
						},
						{
							0.69999999,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench.rvmat"
							}
						},
						{
							0.5,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_damage.rvmat"
							}
						},
						{
							0,
							{
								"TheHive_zmWorkbench_Extension\Coocking_Bench\items\cookingbench\model\data\TH_CS_CB_Cookingbench_destruct.rvmat"
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
				name="$STR_CB_AttachmentsProps_Power";
				description="$STR_CB_AttachmentsProps_Power_desc";
				attachmentSlots[]=
				{
					"TH_CB_Gas_1",
					"TH_CB_Gas_2",
					"TH_CB_Gas_3",
					"TH_CB_Gas_4"
				};
				icon="set:dayz_inventory image:battery";
			};
			class foodsupplies
			{
				name="$STR_CB_AttachmentsProps_FoodSupplies";
				description="$STR_CB_AttachmentsProps_FoodSupplies_desc";
				attachmentSlots[]=
				{
					"TH_CB_FoodSupply_1",
					"TH_CB_FoodSupply_2",
					"TH_CB_FoodSupply_3",
					"TH_CB_FoodSupply_4",
					"TH_CB_FoodSupply_5",
					"TH_CB_FoodSupply_6",
					"TH_CB_FoodSupply_7",
					"TH_CB_FoodSupply_8"
					
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class cookingequipment
			{
				name="$STR_AttachmentsProps_CookingEquipment";
				description="$STR_AttachmentsProps_CookingEquipment_desc";
				attachmentSlots[]=
				{
					"TH_CB_CookEquipment_1",
					"TH_CB_CookEquipment_2",
					"TH_CB_CookEquipment_3",
					"TH_CB_CookEquipment_4",
					"TH_CB_CookEquipment_5",
					"TH_CB_CookEquipment_6",
					"TH_CB_CookEquipment_7",
					"TH_CB_CookEquipment_8"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_CB_AttachmentsProps_Modules";
				description="$STR_CB_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"scale",
					"still",
					"stove"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class ingredients
			{
				name="$STR_AttachmentsProps_Ingredients";
				description="$STR_AttachmentsProps_Ingredients_desc";
				attachmentSlots[]=
				{
					"TH_CB_Ingredient_1",
					"TH_CB_Ingredient_2",
					"TH_CB_Ingredient_3",
					"TH_CB_Ingredient_4",
					"TH_CB_Ingredient_5",
					"TH_CB_Ingredient_6",
					"TH_CB_Ingredient_7",
					"TH_CB_Ingredient_8",
					"TH_CB_Ingredient_9",
					"TH_CB_Ingredient_10",
					"TH_CB_Ingredient_11",
					"TH_CB_Ingredient_12",
					"TH_CB_Ingredient_13",
					"TH_CB_Ingredient_14",
					"TH_CB_Ingredient_15",
					"TH_CB_Ingredient_16",
					"TH_CB_Ingredient_17",
					"TH_CB_Ingredient_18",
					"TH_CB_Ingredient_19",
					"TH_CB_Ingredient_20",
					"TH_CB_Ingredient_21",
					"TH_CB_Ingredient_22",
					"TH_CB_Ingredient_23",
					"TH_CB_Ingredient_24",
					"TH_CB_Ingredient_25",
					"TH_CB_Ingredient_26",
					"TH_CB_Ingredient_27",
					"TH_CB_Ingredient_28",
					"TH_CB_Ingredient_29",
					"TH_CB_Ingredient_30",
					"TH_CB_Ingredient_31",
					"TH_CB_Ingredient_32"
				};
				icon="set:dayz_inventory image:plates";
			};
			class storage
			{
				name="$STR_AttachmentsProps_CookStorage";
				description="$STR_AttachmentsProps_CookStorage_desc";
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
			class CookingStorage
			{
				name="$STR_AttachmentsProps_CookingStorage";
				description="$STR_AttachmentsProps_CookingStorage_desc";
				attachmentSlots[]=
				{
					"TH_CB_WoodenCase"
				};
				icon="set:dayz_inventory image:woodcrate";
			};
			
		};
	};

};