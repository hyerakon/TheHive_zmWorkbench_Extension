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
            "DayZExpansion_Core_Objects_CircuitBoard",
			"TheHive_zmWorkbench_Integration_Scripts"
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
	class TH_CS_WeaponPack_BASE: SmallProtectorCase
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
	class TH_CS_WeaponPack_SKS: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_SKS";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SKS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Pioneer: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Pioneer";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SCOUT";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Aura1: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Aura1";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AUG";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Aurax: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Aurax";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AUGX";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Lemas: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Lemas";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_FAMAS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Lar: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Lar";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_FAL0";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Kam: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Kam";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AKM";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Ka101: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Ka101";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK101";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Ka74: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Ka74";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK74";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Ka74u: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Ka74u";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_AK74U";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_M16: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_M16";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M16A2";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_M4a1: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_M4a1";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M4A1";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Sv98: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Sv98";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SV98";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Asval: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Asval";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_ASVAL";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Dmr: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_TH_CS_WeaponPack_Dmr";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M14";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_M70: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_M70";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_WIN70";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Vsd: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Vsd";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SVD";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Vss: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Vss";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_VSS";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Cr550: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Cr550";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_CZ550";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_G36: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_G36";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_G36";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Mosin9130: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Mosin9130";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_MOSIN";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Bizon: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Bizon";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_PP19";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Vaiga: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Vaiga";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SAIGA";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Vikhr: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Vikhr";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_VIKHR";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_M79: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_M79";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_M79";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_RPG: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_RPG";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_RPG7";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
    class TH_CS_WeaponPack_Law: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_Law";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_LAW";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
	class TH_CS_WeaponPack_SSG82: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_SSG82";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SSG82";
        descriptionShort ="$STR_THEHIVE_WEAPON_PACKAGE_DESCRIPTION";
    };
	class TH_CS_WeaponPack_SCARH: TH_CS_WeaponPack_BASE
    {
        scope = 2;
        name = "TH_CS_WeaponPack_SCARH";
        displayName = "$STR_THEHIVE_WEAPON_PACKAGE_SCARH";
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
	
	//! CIRCUITS BOARDS
	class ExpansionCircuitBoardBase;
	class TheHive_CS_Craft_Tool_BASE: ExpansionCircuitBoardBase
	{
		scope=0;
		displayName="#STR_TheHive_CS_BASE_DEVICE";
		descriptionShort="#STR_TheHive_CS_BASE_DEVICE_DESCRIPTION";
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};
	class TheHive_CS_Engineer_Device: TheHive_CS_Craft_Tool_BASE
	{
		scope=2;
		displayName="#STR_TheHive_CS_ENGINEER_DEVICE";
		descriptionShort="#STR_TheHive_CS_ENGINEER_DEVICE_DESCRIPTION";
		model="DayZExpansion\Core\Objects\CircuitBoard\CircuitBoard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board.rvmat"
		};
	};
	class TheHive_CS_Security_Device: TheHive_CS_Craft_Tool_BASE
	{
		scope=2;
		displayName="#STR_TheHive_CS_SECURITY_DEVICE";
		descriptionShort="#STR_TheHive_CS_SECURITY_DEVICE_DESCRIPTION";
		model="DayZExpansion\Core\Objects\CircuitBoard\CircuitBoard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board_mk2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board.rvmat"
		};
	};
	class TheHive_CS_Medic_Device: TheHive_CS_Craft_Tool_BASE
	{
		scope=2;
		displayName="#STR_TheHive_CS_MEDIC_DEVICE";
		descriptionShort="#STR_TheHive_CS_MEDIC_DEVICE_DESCRIPTION";
		model="DayZExpansion\Core\Objects\CircuitBoard\CircuitBoard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board_mk3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DayZExpansion\Core\Objects\CircuitBoard\data\circuit_board.rvmat"
		};
	};

};