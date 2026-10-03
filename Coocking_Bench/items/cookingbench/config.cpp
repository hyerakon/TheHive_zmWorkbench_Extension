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
		displayName="$STR_TheHive_CS_CB_Bench_BASE";
		descriptionShort="$STR_TheHive_CS_CB_Bench_BASE_desc";
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
			
			// MODULES
			"scale",
			"still",
			"stove",
			// POWER
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4",
			// FOOD SUPPLIES
			"TH_CB_FoodSupply_1",
			"TH_CB_FoodSupply_2",
			"TH_CB_FoodSupply_3",
			"TH_CB_FoodSupply_4",
			// COOKING EQUIPMENT
			"TH_CB_KnifeEquipment_1",
			"TH_CB_KnifeEquipment_2",
			"TH_CB_KnifeEquipment_3",
			"TH_CB_KnifeEquipment_4",
			"TH_CB_CookEquipment_5",
			"TH_CB_CookEquipment_6",
			"TH_CB_BottleEquipment_7",
			"TH_CB_BottleEquipment_8",
			// INGREDIENTS ROW 1
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5",
			"TH_CB_Ingredient_Can_6",
			"TH_CB_Ingredient_Can_7",
			"TH_CB_Ingredient_Can_8",
			// INGREDIENTS ROW 2
			"TH_CB_Ingredient_Meat_1",
			"TH_CB_Ingredient_Meat_2",
			"TH_CB_Ingredient_Meat_3",
			"TH_CB_Ingredient_Meat_4",
			"TH_CB_Ingredient_Meat_5",
			"TH_CB_Ingredient_Meat_6",
			"TH_CB_Ingredient_Meat_7",
			"TH_CB_Ingredient_Meat_8",
			// INGREDIENTS ROW 3
			"TH_CB_Ingredient_Vegetables_1",
			"TH_CB_Ingredient_Vegetables_2",
			"TH_CB_Ingredient_Vegetables_3",
			"TH_CB_Ingredient_Vegetables_4",
			"TH_CB_Ingredient_Vegetables_5",
			"TH_CB_Ingredient_Vegetables_6",
			"TH_CB_Ingredient_Vegetables_7",
			"TH_CB_Ingredient_Vegetables_8",
			// DEAD ANIMALS
			"TH_CB_Chicken_1",
			"TH_CB_Chicken_2",
			"TH_CB_Chicken_3",
			"TH_CB_Rabbit_1",
			"TH_CB_Rabbit_2",
			"TH_CB_Fox_1",
			"TH_CB_Fish_1",
			"TH_CB_Fish_2",
			// ZM STORAGE
			"workbenchstorage",
			"workbenchoutput",
			// TH WOODEN CASE
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
					"TH_CB_FoodSupply_4"
					
				};
				icon="set:th_cb_icons2 image:TH_CB_Icon_FoodSupplies";
			};
			class cookingequipment
			{
				name="$STR_AttachmentsProps_CookingEquipment";
				description="$STR_AttachmentsProps_CookingEquipment_desc";
				attachmentSlots[]=
				{
					"TH_CB_KnifeEquipment_1",
					"TH_CB_KnifeEquipment_2",
					"TH_CB_KnifeEquipment_3",
					"TH_CB_KnifeEquipment_4",
					"TH_CB_CookEquipment_5",
					"TH_CB_CookEquipment_6",
					"TH_CB_BottleEquipment_7",
					"TH_CB_BottleEquipment_8"
				};
				icon="set:th_cb_icons2 image:TH_CB_Icon_CookingEquipment";
			};
			class modules
			{
				name="$STR_AttachmentsProps_Modules";
				description="$STR_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"scale",
					"still",
					"stove"
				};
				icon="set:th_cb_icons2 image:TH_CB_Icon_Modules";
			};
			class ingredient
			{
				name = "$STR_AttachmentsProps_Ingredients";
				description = "STR_AttachmentsProps_Ingredients_desc";
				icon="set:th_cb_icons2 image:TH_CB_Icon_Ingredients";
				attachmentSlots[] =
				{
					// INGREDIENTS ROW 1
					"TH_CB_Ingredient_Can_1",
					"TH_CB_Ingredient_Can_2",
					"TH_CB_Ingredient_Can_3",
					"TH_CB_Ingredient_Can_4",
					"TH_CB_Ingredient_Can_5",
					"TH_CB_Ingredient_Can_6",
					"TH_CB_Ingredient_Can_7",
					"TH_CB_Ingredient_Can_8",
					// INGREDIENTS ROW 2
					"TH_CB_Ingredient_Meat_1",
					"TH_CB_Ingredient_Meat_2",
					"TH_CB_Ingredient_Meat_3",
					"TH_CB_Ingredient_Meat_4",
					"TH_CB_Ingredient_Meat_5",
					"TH_CB_Ingredient_Meat_6",
					"TH_CB_Ingredient_Meat_7",
					"TH_CB_Ingredient_Meat_8",
					// INGREDIENTS ROW 3
					"TH_CB_Ingredient_Vegetables_1",
					"TH_CB_Ingredient_Vegetables_2",
					"TH_CB_Ingredient_Vegetables_3",
					"TH_CB_Ingredient_Vegetables_4",
					"TH_CB_Ingredient_Vegetables_5",
					"TH_CB_Ingredient_Vegetables_6",
					"TH_CB_Ingredient_Vegetables_7",
					"TH_CB_Ingredient_Vegetables_8"
				};
			};

			class deadanimals
			{
				name = "$STR_AttachmentsProps_DeadAnimals";
				description = "STR_AttachmentsProps_DeadAnimals_desc";
				icon="set:th_cb_icons2 image:TH_CB_Icon_Cacciagione";
				attachmentSlots[] =
				{
					"TH_CB_Chicken_1",
					"TH_CB_Chicken_2",
					"TH_CB_Chicken_3",
					"TH_CB_Rabbit_1",
					"TH_CB_Rabbit_2",
					"TH_CB_Fox_1",
					"TH_CB_Fish_1",
					"TH_CB_Fish_2"
				};
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
		displayName="$STR_TheHive_CS_CB_Bench_Modular";
		descriptionShort="$STR_TheHive_CS_CB_Bench_Modular_desc";
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
		displayName="$STR_TheHive_CS_CB_Bench_Locked";
		descriptionShort="$STR_TheHive_CS_CB_Bench_Locked_desc";
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
		displayName="$STR_TheHive_CS_CB_Bench_Public";
		descriptionShort="$STR_TheHive_CS_CB_Bench_Public_desc";
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
			
			// MODULES
			"scale",
			"still",
			"stove",
			// POWER
			"TH_CB_Gas_1",
			"TH_CB_Gas_2",
			"TH_CB_Gas_3",
			"TH_CB_Gas_4",
			// FOOD SUPPLIES
			"TH_CB_FoodSupply_1",
			"TH_CB_FoodSupply_2",
			"TH_CB_FoodSupply_3",
			"TH_CB_FoodSupply_4",
			// COOKING EQUIPMENT
			"TH_CB_KnifeEquipment_1",
			"TH_CB_KnifeEquipment_2",
			"TH_CB_KnifeEquipment_3",
			"TH_CB_KnifeEquipment_4",
			"TH_CB_CookEquipment_5",
			"TH_CB_CookEquipment_6",
			"TH_CB_BottleEquipment_7",
			"TH_CB_BottleEquipment_8",
			// INGREDIENTS ROW 1
			"TH_CB_Ingredient_Can_1",
			"TH_CB_Ingredient_Can_2",
			"TH_CB_Ingredient_Can_3",
			"TH_CB_Ingredient_Can_4",
			"TH_CB_Ingredient_Can_5",
			"TH_CB_Ingredient_Can_6",
			"TH_CB_Ingredient_Can_7",
			"TH_CB_Ingredient_Can_8",
			// INGREDIENTS ROW 2
			"TH_CB_Ingredient_Meat_1",
			"TH_CB_Ingredient_Meat_2",
			"TH_CB_Ingredient_Meat_3",
			"TH_CB_Ingredient_Meat_4",
			"TH_CB_Ingredient_Meat_5",
			"TH_CB_Ingredient_Meat_6",
			"TH_CB_Ingredient_Meat_7",
			"TH_CB_Ingredient_Meat_8",
			// INGREDIENTS ROW 3
			"TH_CB_Ingredient_Vegetables_1",
			"TH_CB_Ingredient_Vegetables_2",
			"TH_CB_Ingredient_Vegetables_3",
			"TH_CB_Ingredient_Vegetables_4",
			"TH_CB_Ingredient_Vegetables_5",
			"TH_CB_Ingredient_Vegetables_6",
			"TH_CB_Ingredient_Vegetables_7",
			"TH_CB_Ingredient_Vegetables_8",
			// DEAD ANIMALS
			"TH_CB_Chicken_1",
			"TH_CB_Chicken_2",
			"TH_CB_Chicken_3",
			"TH_CB_Rabbit_1",
			"TH_CB_Rabbit_2",
			"TH_CB_Fox_1",
			"TH_CB_Fish_1",
			"TH_CB_Fish_2",
			// ZM STORAGE
			"workbenchstorage",
			"workbenchoutput",
			// TH WOODEN CASE
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
					"TH_CB_FoodSupply_4"
					
				};
				icon="set:workbench_icons image:cat_tools";
			};
			class cookingequipment
			{
				name="$STR_AttachmentsProps_CookingEquipment";
				description="$STR_AttachmentsProps_CookingEquipment_desc";
				attachmentSlots[]=
				{
					"TH_CB_KnifeEquipment_1",
					"TH_CB_KnifeEquipment_2",
					"TH_CB_KnifeEquipment_3",
					"TH_CB_KnifeEquipment_4",
					"TH_CB_CookEquipment_5",
					"TH_CB_CookEquipment_6",
					"TH_CB_BottleEquipment_7",
					"TH_CB_BottleEquipment_8"
				};
				icon="set:workbench_icons image:icon_spraycan";
			};
			class modules
			{
				name="$STR_AttachmentsProps_Modules";
				description="$STR_AttachmentsProps_Modules_desc";
				attachmentSlots[]=
				{
					"scale",
					"still",
					"stove"
				};
				icon="set:workbench_icons image:cat_modules";
			};
			class ingredient
			{
				name = "$STR_AttachmentsProps_Ingredients";
				description = "STR_AttachmentsProps_Ingredients_desc";

				attachmentSlots[] =
				{
					// INGREDIENTS ROW 1
					"TH_CB_Ingredient_Can_1",
					"TH_CB_Ingredient_Can_2",
					"TH_CB_Ingredient_Can_3",
					"TH_CB_Ingredient_Can_4",
					"TH_CB_Ingredient_Can_5",
					"TH_CB_Ingredient_Can_6",
					"TH_CB_Ingredient_Can_7",
					"TH_CB_Ingredient_Can_8",
					// INGREDIENTS ROW 2
					"TH_CB_Ingredient_Meat_1",
					"TH_CB_Ingredient_Meat_2",
					"TH_CB_Ingredient_Meat_3",
					"TH_CB_Ingredient_Meat_4",
					"TH_CB_Ingredient_Meat_5",
					"TH_CB_Ingredient_Meat_6",
					"TH_CB_Ingredient_Meat_7",
					"TH_CB_Ingredient_Meat_8",
					// INGREDIENTS ROW 3
					"TH_CB_Ingredient_Vegetables_1",
					"TH_CB_Ingredient_Vegetables_2",
					"TH_CB_Ingredient_Vegetables_3",
					"TH_CB_Ingredient_Vegetables_4",
					"TH_CB_Ingredient_Vegetables_5",
					"TH_CB_Ingredient_Vegetables_6",
					"TH_CB_Ingredient_Vegetables_7",
					"TH_CB_Ingredient_Vegetables_8"
				};
			};

			class deadanimals
			{
				name = "$STR_AttachmentsProps_DeadAnimals";
				description = "STR_AttachmentsProps_DeadAnimals_desc";

				attachmentSlots[] =
				{
					"TH_CB_Chicken_1",
					"TH_CB_Chicken_2",
					"TH_CB_Chicken_3",
					"TH_CB_Rabbit_1",
					"TH_CB_Rabbit_2",
					"TH_CB_Fox_1",
					"TH_CB_Fish_1",
					"TH_CB_Fish_2"
				};
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

};