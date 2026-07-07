#define _ARMA_

class CfgPatches
{
	class TheHive_Craft_Ingredients_Scripts
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
            "DZ_Gear_Camping",
            "DayZExpansion_Core_Objects_CircuitBoard"
		};
	};
};
class CfgMods
{
	class TheHive_Craft_Ingredients
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Hyerakon - CraftSystem Ingredients";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\Scripts\4_World"};
			};
		};
	};
};

class CfgVehicles
{
    
	//! PACK ARMI 
	class SmallProtectorCase;
	class TheHive_CS_BASE: SmallProtectorCase
	{
		scope = 1;
        name = "TheHive_CS_BASE";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemSize[]={3,4};
		itemsCargoSize[]={};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\textures\thehive_cs\supply_weapon_parts_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
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
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};

	};
	class TheHive_CS_SKS: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_SKS";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SKS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Pioneer: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Pioneer";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SCOUT";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Aura1: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Aura1";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AUG";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Aurax: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Aurax";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AUGX";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Lemas: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Lemas";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_FAMAS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Lar: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Lar";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_FAL0";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Kam: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Kam";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AKM";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Ka101: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Ka101";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK101";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Ka74: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Ka74";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK74";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Ka74u: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Ka74u";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK74U";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_M16: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_M16";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M16A2";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_M4a1: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_M4a1";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M4A1";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Sv98: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Sv98";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SV98";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Asval: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Asval";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_ASVAL";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Dmr: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_TheHive_CS_Dmr";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M14";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_M70: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_M70";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_WIN70";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Vsd: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Vsd";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SVD";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Vss: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Vss";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_VSS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Cr550: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Cr550";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_CZ550";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_G36: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_G36";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_G36";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Mosin9130: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Mosin9130";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_MOSIN";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Bizon: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Bizon";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_PP19";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Vaiga: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Vaiga";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SAIGA";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Vikhr: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Vikhr";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_VIKHR";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_M79: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_M79";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M79";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_RPG: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_RPG";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_RPG7";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TheHive_CS_Law: TheHive_CS_BASE
    {
        scope = 2;
        name = "TheHive_CS_Law";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_LAW";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };

	//! PACK OGGETTI
	class SmallProtectorCase;
	class TheHive_CS_Supply_BASE: SmallProtectorCase
	{
		scope=1;
		displayName="$STR_CfgVehicles_SmallProtectorCase0";
		descriptionShort="$STR_CfgVehicles_SmallProtectorCase1";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemSize[]={2,2};
		itemsCargoSize[]={};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=0;
		repairableWithKits[]={};
		repairCosts[]={};
		inventorySlot[]={};
		attachments[]={};
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\textures\supplies\data\supply_food_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
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
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TheHive_CS_Supply_Food: TheHive_CS_Supply_BASE
	{
		scope=2;
		displayName="$STR_THEHIVE_CS_SUPPLY_FOOD";
		descriptionShort="$STR_THEHIVE_CS_SUPPLY_FOOD_DESCRIPTION";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemsCargoSize[]={};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=0;
		repairableWithKits[]={};
		repairCosts[]={};
		inventorySlot[]={};
		attachments[]={};
		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\textures\supplies\data\supply_food_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
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
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TheHive_CS_Supply_Lab: TheHive_CS_Supply_BASE
	{
		scope=2;
		displayName="$STR_THEHIVE_CS_SUPPLY_LAB";
		descriptionShort="$STR_THEHIVE_CS_SUPPLY_LAB_DESCRIPTION";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemsCargoSize[]={};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=0;
		repairableWithKits[]={};
		repairCosts[]={};
		inventorySlot[]={};
		attachments[]={};
		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\textures\supplies\data\supply_lab_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
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
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TheHive_CS_Supply_Tec: TheHive_CS_Supply_BASE
	{
		scope=2;
		displayName="$STR_THEHIVE_CS_SUPPLY_TEC";
		descriptionShort="$STR_THEHIVE_CS_SUPPLY_TEC_DESCRIPTION";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemsCargoSize[]={};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=0;
		repairableWithKits[]={};
		repairCosts[]={};
		inventorySlot[]={};
		attachments[]={};
		hiddenSelections[]={"zbytek"};
        hiddenSelectionsMaterials[]={"DZ\gear\containers\data\Protector_Case.rvmat"};
        hiddenSelectionsTextures[]={"TheHive_zmWorkbench_Extension\TheHive_Custom_Ingredients\textures\supplies\data\supply_tec_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
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
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
};