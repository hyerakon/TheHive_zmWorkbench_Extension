class CfgPatches
{
    class TheHive_Recipes_Book
    {
        units[] =
        {
            "TH_RecipeBook_001",
            "TH_RecipeBook_002",
            "TH_RecipeBook_003",
            "TH_RecipeBook_004",
            "TH_RecipeBook_005",
            "TH_RecipeBook_006",
            "TH_RecipeBook_007",
            "TH_RecipeBook_008",
            "TH_RecipeBook_009",
            "TH_RecipeBook_010",
            "TH_RecipeBook_011",
            "TH_RecipeBook_012",
            "TH_RecipeBook_013",
            "TH_RecipeBook_014",
            "TH_RecipeBook_015",
            "TH_RecipeBook_016",
            "TH_RecipeBook_017",
            "TH_RecipeBook_018",
            "TH_RecipeBook_019",
            "TH_RecipeBook_020",
            "TH_RecipeBook_021",
            "TH_RecipeBook_022",
            "TH_RecipeBook_023",
            "TH_RecipeBook_024",
            "TH_RecipeBook_025"
        };

        weapons[] = {};
        requiredVersion = 0.1;

        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Scripts",
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
        hideName = 1;
        hidePicture = 1;
        name = "TheHive Recipes Book";
        credits = "The Hive";
        author = "The Hive";
        authorID = "0";
        version = "1.4";
        extra = 0;
        type = "mod";

        dependencies[] =
        {
            "World",
            "Mission"
        };

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] =
                {
                    "TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/Scripts/4_World"
                };
            };

            class missionScriptModule
            {
                value = "";
                files[] =
                {
                    "TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/Scripts/5_Mission"
                };
            };
        };
    };
};

class CfgVehicles
{
    class ItemBook;

    class TH_RecipeBook_Base: ItemBook
    {
        scope = 0;
        displayName = "Manuale di ricette";
        descriptionShort = "Un manuale tecnico. Leggendolo si acquisiscono nuove conoscenze.";
        weight = 300;
        itemSize[] = {2,2};
        hiddenSelectionsTextures[]=
		{
			"dz/gear/books/data/book_bible_CO.paa"
		};
    };

    class TH_RecipeBook_001: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 01";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_001.paa"
		};
    };
    class TH_RecipeBook_002: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 02";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_002.paa"
		};
    };
    class TH_RecipeBook_003: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 03";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_003.paa"
		};
    };
    class TH_RecipeBook_004: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 04";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_004.paa"
		};
    };
    class TH_RecipeBook_005: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 05";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_005.paa"
		};
    };
    class TH_RecipeBook_006: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 06";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_006.paa"
		};
    };
    class TH_RecipeBook_007: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 07";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_007.paa"
		};
    };
    class TH_RecipeBook_008: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 08";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_008.paa"
		};
    };
    class TH_RecipeBook_009: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 09";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_009.paa"
		};
    };
    class TH_RecipeBook_010: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 10";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_010.paa"
		};
    };
    class TH_RecipeBook_011: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 11";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_011.paa"
		};
    };
    class TH_RecipeBook_012: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 12";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_012.paa"
		};
    };
    class TH_RecipeBook_013: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 13";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_013.paa"
		};
    };
    class TH_RecipeBook_014: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 14";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_014.paa"
		};
    };
    class TH_RecipeBook_015: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 15";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_015.paa"
		};
    };
    class TH_RecipeBook_016: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 16";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_016.paa"
		};
    };
    class TH_RecipeBook_017: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 17";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_017.paa"
		};
    };
    class TH_RecipeBook_018: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 18";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_018.paa"
		};
    };
    class TH_RecipeBook_019: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 19";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_019.paa"
		};
    };
    class TH_RecipeBook_020: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 20";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_020.paa"
		};
    };
    class TH_RecipeBook_021: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 21";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_021.paa"
		};
    };
    class TH_RecipeBook_022: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 22";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_022.paa"
		};
    };
    class TH_RecipeBook_023: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 23";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_023.paa"
		};
    };
    class TH_RecipeBook_024: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 24";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_024.paa"
		};
    };
    class TH_RecipeBook_025: TH_RecipeBook_Base
    { 
        scope = 2; 
        displayName = "Manuale di ricette 25";
        hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\book_025.paa"
		};
    };

    class Paper;

    class TH_RecipePaper_Base: Paper
    {
        scope = 0;
        displayName = "Recipe Paper";
        descriptionShort = "A sheet containing useful notes and instructions.";
		hiddenSelectionsTextures[]=
		{
			"TheHive_zmWorkbench_Extension\TheHive_Recipes_Book\textures\gear\books\data\recipe_paper_000.paa"
		};
    };

    class TH_RecipePaper_001: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_002: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_003: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_004: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_005: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_006: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_007: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_008: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_009: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_010: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_011: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_012: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_013: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_014: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_015: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_016: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_017: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_018: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_019: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_020: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_021: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_022: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_023: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_024: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_025: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_026: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_027: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_028: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_029: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_030: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_031: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_032: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_033: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_034: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_035: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_036: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_037: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_038: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_039: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_040: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_041: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_042: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_043: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_044: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_045: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_046: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_047: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_048: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_049: TH_RecipePaper_Base { scope = 2; };
    class TH_RecipePaper_050: TH_RecipePaper_Base { scope = 2; };
};
