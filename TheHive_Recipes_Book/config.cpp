class CfgPatches
{
    class TheHive_Recipes_Book
    {
        units[] =
        {
            "TH_RecipeBook_001","TH_RecipeBook_002","TH_RecipeBook_003","TH_RecipeBook_004","TH_RecipeBook_005",
            "TH_RecipeBook_006","TH_RecipeBook_007","TH_RecipeBook_008","TH_RecipeBook_009","TH_RecipeBook_010",
            "TH_RecipeBook_011","TH_RecipeBook_012","TH_RecipeBook_013","TH_RecipeBook_014","TH_RecipeBook_015",
            "TH_RecipeBook_016","TH_RecipeBook_017","TH_RecipeBook_018","TH_RecipeBook_019","TH_RecipeBook_020",
            "TH_RecipeBook_021","TH_RecipeBook_022","TH_RecipeBook_023","TH_RecipeBook_024","TH_RecipeBook_025"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Gear_Books",
            "DayZExpansion_Quests"
        };
    };
};

class CfgMods
{
    class TheHive_Recipes_Book
    {
        dir = "TheHive_Recipes_Book";
        picture = "";
        action = "";
        hideName = 0;
        hidePicture = 1;
        name = "The Hive - Recipes Book";
        credits = "The Hive";
        author = "The Hive";
        authorID = "0";
        version = "1.1";
        extra = 0;
        type = "mod";
        dependencies[] = {"World","Mission"};

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/Scripts/4_World"};
            };

            class missionScriptModule
            {
                value = "";
                files[] = {"TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/Scripts/5_Mission"};
            };
        };
    };
};

class CfgVehicles
{
    class Book_Base;

    class TH_RecipeBook_Base: Book_Base
    {
        scope = 0;
        displayName = "Manuale di ricette";
        descriptionShort = "Un manuale tecnico. Leggendolo si acquisiscono nuove conoscenze.";
        weight = 300;
        itemSize[] = {2,2};
        hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_bible_CO.paa"
		};
    };

    class TH_RecipeBook_001: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 01"; };
    class TH_RecipeBook_002: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 02"; };
    class TH_RecipeBook_003: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 03"; };
    class TH_RecipeBook_004: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 04"; };
    class TH_RecipeBook_005: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 05"; };
    class TH_RecipeBook_006: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 06"; };
    class TH_RecipeBook_007: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 07"; };
    class TH_RecipeBook_008: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 08"; };
    class TH_RecipeBook_009: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 09"; };
    class TH_RecipeBook_010: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 10"; };
    class TH_RecipeBook_011: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 11"; };
    class TH_RecipeBook_012: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 12"; };
    class TH_RecipeBook_013: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 13"; };
    class TH_RecipeBook_014: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 14"; };
    class TH_RecipeBook_015: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 15"; };
    class TH_RecipeBook_016: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 16"; };
    class TH_RecipeBook_017: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 17"; };
    class TH_RecipeBook_018: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 18"; };
    class TH_RecipeBook_019: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 19"; };
    class TH_RecipeBook_020: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 20"; };
    class TH_RecipeBook_021: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 21"; };
    class TH_RecipeBook_022: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 22"; };
    class TH_RecipeBook_023: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 23"; };
    class TH_RecipeBook_024: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 24"; };
    class TH_RecipeBook_025: TH_RecipeBook_Base { scope = 2; displayName = "Manuale di ricette 25"; };
};
