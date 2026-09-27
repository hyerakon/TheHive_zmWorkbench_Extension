class THRB_BookEntry
{
    string ClassName;
    string Title;
    int QuestID;
    float ReadTime;
    bool DeleteOnSuccess;

    void THRB_BookEntry(string className = "", string title = "", int questID = 0, float readTime = 15.0, bool deleteOnSuccess = true)
    {
        ClassName = className;
        Title = title;
        QuestID = questID;
        ReadTime = readTime;
        DeleteOnSuccess = deleteOnSuccess;
    }
};

class THRB_Config
{
    int ConfigVersion = 1;
    ref array<ref THRB_BookEntry> Books = new array<ref THRB_BookEntry>;
};

class THRB_ConfigManager
{
    static const string CONFIG_ROOT = "$profile:TheHive";
    static const string CONFIG_DIR = CONFIG_ROOT + "\\TheHive_Recipes_Book";
    static const string CONFIG_FILE = CONFIG_DIR + "\\RecipesBooks.json";
    protected static ref THRB_Config s_Config;

    static THRB_Config Get()
    {
        if (!s_Config)
            Load();
        return s_Config;
    }

    static void Load()
    {
        s_Config = new THRB_Config();

        EnsureDirectories();

        if (FileExist(CONFIG_FILE))
        {
            JsonFileLoader<THRB_Config>.JsonLoadFile(CONFIG_FILE, s_Config);
        }
        else
        {
            CreateDefault();
            JsonFileLoader<THRB_Config>.JsonSaveFile(CONFIG_FILE, s_Config);
        }
    }


    protected static void EnsureDirectories()
    {
        if (!FileExist(CONFIG_ROOT))
            MakeDirectory(CONFIG_ROOT);

        if (!FileExist(CONFIG_DIR))
            MakeDirectory(CONFIG_DIR);
    }

    protected static void CreateDefault()
    {
        for (int i = 1; i <= 25; i++)
        {
            string suffix = i.ToString();
            if (i < 10)
                suffix = "00" + suffix;
            else
                suffix = "0" + suffix;

            string className = "TH_RecipeBook_" + suffix;
            string title = "Manuale di ricette " + i.ToString();
            int questID = 80000 + i;
            s_Config.Books.Insert(new THRB_BookEntry(className, title, questID, 15.0, true));
        }
    }

    static THRB_BookEntry Find(string className)
    {
        THRB_Config cfg = Get();
        if (!cfg || !cfg.Books)
            return null;

        foreach (THRB_BookEntry entry: cfg.Books)
        {
            if (entry && entry.ClassName == className)
                return entry;
        }

        return null;
    }
};
