// Scripts/3_Game/Data/TH_TerjeRecipeMigration.c

// Proxy usato SOLO per leggere/scrivere recipes.json.
// Non modifica WorkbenchRecipeManager.
class TH_TerjeRecipeMigrationData extends WorkbenchRecipeManager
{
}

class TH_TerjeRecipeMigration
{
    protected static const string CONFIG_PATH = "$profile:WorkbenchMod\\recipes.json";
    protected static const string MARKER_PATH = "$profile:WorkbenchMod\\TH_TerjeRecipeMigration_v1.done";

    static void Run()
    {
        if (!GetGame().IsServer())
            return;

        // Migration già eseguita
        if (FileExist(MARKER_PATH))
        {
            Print("[TH Terje] Recipe migration already completed.");
            return;
        }

        // Il file originale deve esistere
        if (!FileExist(CONFIG_PATH))
        {
            Print("[TH Terje] Migration aborted: recipes.json not found.");
            return;
        }

        ref TH_TerjeRecipeMigrationData data = new TH_TerjeRecipeMigrationData();

        // Carica recipes.json
        JsonFileLoader<TH_TerjeRecipeMigrationData>.JsonLoadFile(CONFIG_PATH, data);

        // Evita di sovrascrivere un JSON non parsato correttamente
        if (!data || !data.recipes || data.recipes.Count() == 0)
        {
            Print("[TH Terje] Migration aborted: recipes.json could not be parsed or contains no recipes.");
            return;
        }

        Print("[TH Terje] Migrating " + data.recipes.Count().ToString() + " recipes...");

        // WorkbenchRecipe è già esteso dalla nostra modded class:
        //
        // string terje_skill_id = "";
        // float terje_xp = 0;
        //
        // Quindi il salvataggio serializza automaticamente
        // i due nuovi campi per ogni ricetta.
        JsonFileLoader<TH_TerjeRecipeMigrationData>.JsonSaveFile(CONFIG_PATH, data);

        // Marker: migration eseguita una sola volta
        FileHandle file = OpenFile(MARKER_PATH, FileMode.WRITE);

        if (file)
        {
            FPrintln(file, "TH Terje recipe migration v1 completed.");
            CloseFile(file);
        }

        Print("[TH Terje] Recipe migration completed successfully.");
    }
}