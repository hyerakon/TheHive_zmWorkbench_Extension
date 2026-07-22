class CfgPatches
{
	class TheHive_zmWorkbench_Extension_LB_Script
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Camping",
			"DZ_Gear_Tools",
			"WorkbenchMod",
			"zm_Workbench",
			"zm_DrillPress",
			"zm_Grinder",
			"zm_Sewing",
			"zm_Soldering",
			"zm_Vice",
			"zm_Welding",
			"TerjeMedicine",
			"TheHive_zmWorkbench_Integration_Scripts"
		};
	};
};
class CfgMods
{
	class TheHive_zmWorkbench_Extension_LB
	{
		dir = "TheHive_zmWorkbench_Extension\Laboratory_Bench";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The Hive - CraftingSystem - Laboratory";
		credits = "Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		//inputs = "TheHive_CraftingSystem\Tecnicbench\data\inputs.xml";
        //defines[] = {"LABORATORYBENCH_DEBUG"};
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class imageSets
			{
				files[] = {""};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"TheHive_zmWorkbench_Extension/Laboratory_Bench/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	class Inventory_Base;
    
    class PainkillerTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
	class CharcoalTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
	class TetracyclineAntibiotics: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
	class ChelatingTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
	class VitaminBottle: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
	class PurificationTablets: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Pills1",
            "TH_LB_Pills2",
            "TH_LB_Pills3",
            "TH_LB_Pills4",
            "TH_LB_Pills5",
            "TH_LB_Pills6",
            "TH_LB_Pills7",
            "TH_LB_Pills8"
        };
    };
    
	class IodineTincture: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Disinfectants1",
			"TH_LB_Disinfectants2",
			"TH_LB_Disinfectants3",
			"TH_LB_Disinfectants4"
        };
    };
    class DisinfectantSpray: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Disinfectants1",
			"TH_LB_Disinfectants2",
			"TH_LB_Disinfectants3",
			"TH_LB_Disinfectants4"
        };
    };
    class DisinfectantAlcohol: Edible_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Disinfectants1",
			"TH_LB_Disinfectants2",
			"TH_LB_Disinfectants3",
			"TH_LB_Disinfectants4"
        };
    };
	
	class Morphine: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Injectors1",
            "TH_LB_Injectors2",
            "TH_LB_Injectors3",
            "TH_LB_Injectors4"
        };
    };
	class Epinephrine: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Injectors1",
            "TH_LB_Injectors2",
            "TH_LB_Injectors3",
            "TH_LB_Injectors4"
        };
    };
	class AntiChemInjector: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Injectors1",
            "TH_LB_Injectors2",
            "TH_LB_Injectors3",
            "TH_LB_Injectors4"
        };
    };
	
	class BandageDressing: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_Bandages1",
            "TH_LB_Bandages2",
            "TH_LB_Bandages3",
            "TH_LB_Bandages4"
        };
    };
	
	class BloodBagEmpty: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };
    class BloodBagFull: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };
    class BloodBagIV: Inventory_Base
    {
        inventorySlot[]+=
        {
           "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };
    class SalineBag: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };
    class SalineBagIV: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };
    class StartKitIV: Inventory_Base
    {
        inventorySlot[]+=
        {
            "TH_LB_BloodSupplies1",
            "TH_LB_BloodSupplies2",
            "TH_LB_BloodSupplies3",
            "TH_LB_BloodSupplies4"
        };
    };

	class TerjeAmpouleBase : Inventory_Base
	{
		inventorySlot[]+=
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
	};

	class TerjeSyringeEmpty : Inventory_Base
	{
		inventorySlot[]+=
		{
			"TH_LB_Syringe1",
			"TH_LB_Syringe2",
			"TH_LB_Syringe3",
			"TH_LB_Syringe4"
		};
	};

};

class CfgSlots
{
	// MODULE SLOTS
	class Slot_TH_LB_Terminal
	{
		name = "terminal";
		displayName = "$STR_Slot_TH_LB_Terminal";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};

	// MEDICAL SLOTS
	class Slot_TH_LB_Pills1
	{
		name = "TH_LB_Pills1";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills2
	{
		name = "TH_LB_Pills2";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills3
	{
		name = "TH_LB_Pills3";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills4
	{
		name = "TH_LB_Pills4";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills5
	{
		name = "TH_LB_Pills5";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills6
	{
		name = "TH_LB_Pills6";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills7
	{
		name = "TH_LB_Pills7";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Pills8
	{
		name = "TH_LB_Pills8";
		displayName = "$STR_Slot_TH_LB_Pills";
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_Disinfectants1
	{
		name = "TH_LB_Disinfectants1";
		displayName = "$STR_Slot_TH_LB_Disinfectants";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Disinfectants2
	{
		name = "TH_LB_Disinfectants2";
		displayName = "$STR_Slot_TH_LB_Disinfectants";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Disinfectants3
	{
		name = "TH_LB_Disinfectants3";
		displayName = "$STR_Slot_TH_LB_Disinfectants";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Disinfectants4
	{
		name = "TH_LB_Disinfectants4";
		displayName = "$STR_Slot_TH_LB_Disinfectants";
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_Injectors1
	{
		name = "TH_LB_Injectors1";
		displayName = "$STR_Slot_TH_LB_Injectors"
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Injectors2
	{
		name = "TH_LB_Injectors2";
		displayName = "$STR_Slot_TH_LB_Injectors"
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Injectors3
	{
		name = "TH_LB_Injectors3";
		displayName = "$STR_Slot_TH_LB_Injectors"
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Injectors4
	{
		name = "TH_LB_Injectors4";
		displayName = "$STR_Slot_TH_LB_Injectors"
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_Bandages1
	{
		name = "TH_LB_Bandages1";
		displayName = "$STR_Slot_TH_LB_Bandages";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Bandages2
	{
		name = "TH_LB_Bandages2";
		displayName = "$STR_Slot_TH_LB_Bandages";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Bandages3
	{
		name = "TH_LB_Bandages3";
		displayName = "$STR_Slot_TH_LB_Bandages";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Bandages4
	{
		name = "TH_LB_Bandages4";
		displayName = "$STR_Slot_TH_LB_Bandages";
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_BloodSupplies1
	{
		name = "TH_LB_BloodSupplies1";
		displayName = "$STR_Slot_TH_LB_BloodSupplies";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_BloodSupplies2
	{
		name = "TH_LB_BloodSupplies2";
		displayName = "$STR_Slot_TH_LB_BloodSupplies";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_BloodSupplies3
	{
		name = "TH_LB_BloodSupplies3";
		displayName = "$STR_Slot_TH_LB_BloodSupplies";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_BloodSupplies4
	{
		name = "TH_LB_BloodSupplies4";
		displayName = "$STR_Slot_TH_LB_BloodSupplies";
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_Ampoules1
	{
		name = "TH_LB_Ampoules1";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules2	
	{
		name = "TH_LB_Ampoules2";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules3	
	{
		name = "TH_LB_Ampoules3";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules4	
	{
		name = "TH_LB_Ampoules4";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules5	
	{
		name = "TH_LB_Ampoules5";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules6	
	{
		name = "TH_LB_Ampoules6";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules7	
	{
		name = "TH_LB_Ampoules7";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules8	
	{
		name = "TH_LB_Ampoules8";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules9	
	{
		name = "TH_LB_Ampoules9";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules10	
	{
		name = "TH_LB_Ampoules10";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules11	
	{
		name = "TH_LB_Ampoules11";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules12	
	{
		name = "TH_LB_Ampoules12";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules13	
	{
		name = "TH_LB_Ampoules13";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules14	
	{
		name = "TH_LB_Ampoules14";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules15	
	{
		name = "TH_LB_Ampoules15";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};	
	class Slot_TH_LB_Ampoules16	
	{
		name = "TH_LB_Ampoules16";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules17
	{
		name = "TH_LB_Ampoules17";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules18	
	{
		name = "TH_LB_Ampoules18";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules19	
	{
		name = "TH_LB_Ampoules19";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules20	
	{
		name = "TH_LB_Ampoules20";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules21	
	{
		name = "TH_LB_Ampoules21";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules22	
	{
		name = "TH_LB_Ampoules22";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules23	
	{
		name = "TH_LB_Ampoules23";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules24	
	{
		name = "TH_LB_Ampoules24";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules25	
	{
		name = "TH_LB_Ampoules25";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules26	
	{
		name = "TH_LB_Ampoules26";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules27	
	{
		name = "TH_LB_Ampoules27";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules28
	{
		name = "TH_LB_Ampoules28";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules29
	{
		name = "TH_LB_Ampoules29";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules30
	{
		name = "TH_LB_Ampoules30";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Ampoules31	
	{
		name = "TH_LB_Ampoules31";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};	
	class Slot_TH_LB_Ampoules32	
	{
		name = "TH_LB_Ampoules32";
		displayName = "$STR_Slot_TH_LB_Ampoules";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	
	class Slot_TH_LB_Syringe1
	{
		name = "TH_LB_Syringe1";
		displayName = "$STR_Slot_TH_LB_Syringe";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Syringe2
	{
		name = "TH_LB_Syringe2";
		displayName = "$STR_Slot_TH_LB_Syringe";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Syringe3
	{
		name = "TH_LB_Syringe3";
		displayName = "$STR_Slot_TH_LB_Syringe";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_TH_LB_Syringe4
	{
		name = "TH_LB_Syringe4";
		displayName = "$STR_Slot_TH_LB_Syringe";
		ghostIcon = "set:dayz_inventory image:missing";
	};

	class Slot_TH_LB_FirstAidKit
	{
		name = "TH_LB_FirstAidKit";
		displayName = "$STR_Slot_TH_LB_FirstAidKit";
		ghostIcon = "set:dayz_inventory image:missing";
	};

};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyTH_LB_Terminal_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "terminal";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_Terminal_Proxy.p3d";
		
	};

	class ProxyTH_LB_InfectionVial_Proxy_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules1";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_1.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules2";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_2.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules3";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_3.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules4";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_4.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules5";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_5.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules6";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_6.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_7: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules7";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_7.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_8: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules8";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_8.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules9";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_9.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_10: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules10";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_10.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_11: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules11";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_11.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_12: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules12";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_12.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_13: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules13";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_13.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_14: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules14";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_14.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_15: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules15";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_15.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_16: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules16";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_16.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_17: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules17";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_17.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_18: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules18";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_18.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_19: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules19";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_19.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_20: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules20";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_20.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_21: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules21";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_21.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_22: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules22";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_22.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_23: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules23";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_23.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_24: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules24";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_24.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_25: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules25";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_25.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_26: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules26";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_26.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_27: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules27";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_27.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_28: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules28";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_28.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_29: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules29";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_29.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_30: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules30";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_30.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_31: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules31";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_31.p3d";
		
	};
	class ProxyTH_LB_InfectionVial_Proxy_32: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TH_LB_Ampoules32";
		model = "\TheHive_zmWorkbench_Extension\Laboratory_Bench\proxies\TH_LB_InfectionVial_Proxy_32.p3d";
		
	};
};