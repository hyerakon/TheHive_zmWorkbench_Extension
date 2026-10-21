class THRB_BookEntry
{
    string ClassName;
    string Title;
    string Description;
    int QuestID;
    int RequiredQuestID; // quest da completare prima di poter leggere (-1 = nessun requisito)
    // Lavori (Job & Rewards) che possono leggere il libro. Vuota = tutti.
    // Usata solo se e' caricata la mod TheHive_SSBrena_TH_Job_And_Rewards.
    ref array<string> RequestedJobs;
    float ReadTime;
    bool DeleteOnSuccess;

    void THRB_BookEntry()
    {
        ClassName = "";
        Title = "";
        Description = "";
        QuestID = -1;
        RequiredQuestID = -1;
        RequestedJobs = new array<string>;
        ReadTime = 5.0;
        DeleteOnSuccess = true;
    }
};

class THRB_Config
{
    static const int CURRENT_VERSION = 4;

    int ConfigVersion = 4;
    ref array<ref THRB_BookEntry> Entries;

    void THRB_Config()
    {
        Entries = new array<ref THRB_BookEntry>;
    }
};

class THRB_ConfigManager
{
    static const string CONFIG_DIR = "$profile:TheHive/TheHive_Recipes_Book";
    static const string CONFIG_FILE = "$profile:TheHive/TheHive_Recipes_Book/RecipesBooks.json";

    protected static ref THRB_Config m_Config;

    static void Load()
    {
        if (!FileExist(CONFIG_DIR))
            MakeDirectory(CONFIG_DIR);

        m_Config = new THRB_Config;

        if (FileExist(CONFIG_FILE))
        {
            JsonFileLoader<THRB_Config>.JsonLoadFile(CONFIG_FILE, m_Config);
            Print("[TheHive_Recipes_Book] Loaded config: " + CONFIG_FILE);

            // v3: RequiredQuestID (-1), v4: RequestedJobs (lista vuota). Le voci vecchie ricevono i valori del costruttore
            if (m_Config.ConfigVersion < THRB_Config.CURRENT_VERSION)
            {
                m_Config.ConfigVersion = THRB_Config.CURRENT_VERSION;
                Save();
                Print("[TheHive_Recipes_Book] Config updated to version " + THRB_Config.CURRENT_VERSION);
            }

            return;
        }

        GenerateDefaultConfig();
        Save();

        Print("[TheHive_Recipes_Book] Created default config: " + CONFIG_FILE);
    }

    static void Save()
    {
        if (!m_Config)
            return;

        JsonFileLoader<THRB_Config>.JsonSaveFile(CONFIG_FILE, m_Config);
    }

    static THRB_Config Get()
    {
        return m_Config;
    }

    // Client: receives the server config via RPC (names/descriptions sync)
    static void SetFromServer(THRB_Config config)
    {
        if (!config)
            return;

        m_Config = config;
        Print("[TheHive_Recipes_Book] Config received from server: " + m_Config.Entries.Count().ToString() + " entries");
    }

    static THRB_BookEntry Find(string className)
    {
        if (!m_Config || !m_Config.Entries)
            return null;

        foreach (THRB_BookEntry entry: m_Config.Entries)
        {
            if (entry && entry.ClassName == className)
                return entry;
        }

        return null;
    }

    protected static void GenerateDefaultConfig()
    {
        m_Config = new THRB_Config;

        int i;

        for (i = 1; i <= 25; i++)
        {
            THRB_BookEntry bookEntry = new THRB_BookEntry;

            bookEntry.ClassName = "TH_RecipeBook_" + THRB_FormatIndex(i);
            bookEntry.Title = "Libro di Ricette " + THRB_FormatIndex(i);
            bookEntry.Description = "Un vecchio volume contenente ricette, procedimenti e conoscenze ormai difficili da reperire.";
            bookEntry.QuestID = 6000 + i * 10;   // Convenzione ID The Hive: W=6 Recipe Book (6010-6250)
            bookEntry.RequiredQuestID = -1;
            bookEntry.ReadTime = 15.0;
            bookEntry.DeleteOnSuccess = true;

            m_Config.Entries.Insert(bookEntry);
        }

        for (i = 1; i <= 50; i++)
        {
            THRB_BookEntry paperEntry = new THRB_BookEntry;

            paperEntry.ClassName = "TH_RecipePaper_" + THRB_FormatIndex(i);
            paperEntry.Title = "Appunto di Ricetta " + THRB_FormatIndex(i);
            paperEntry.Description = "Un foglietto contenente appunti, istruzioni e annotazioni scritte a mano.";
            paperEntry.QuestID = 7000 + i * 10;  // Convenzione ID The Hive: W=7 Recipe Paper (7010-7500)
            paperEntry.RequiredQuestID = -1;
            paperEntry.ReadTime = 8.0;
            paperEntry.DeleteOnSuccess = true;

            m_Config.Entries.Insert(paperEntry);
        }
    }

    protected static string THRB_FormatIndex(int index)
    {
        if (index < 10)
            return "00" + index.ToString();

        if (index < 100)
            return "0" + index.ToString();

        return index.ToString();
    }
};