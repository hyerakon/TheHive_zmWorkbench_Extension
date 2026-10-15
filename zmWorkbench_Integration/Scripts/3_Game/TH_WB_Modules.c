// Elenco centralizzato dei moduli aggiunti dall'estensione The Hive.
// E' l'unico punto in cui sono definiti: banco (4_World), menu di crafting ed
// editor admin (5_Mission) leggono tutti da qui, cosi' aggiungere o togliere un
// modulo richiede una sola modifica.
// L'ordine e' fisso e condiviso da GetSlots/GetClassnames/GetDisplayNames:
// il menu usa lo stesso indice per icona, tooltip e mappatura slot -> classe.
class TH_WB_Modules
{
    // Nomi degli slot (minuscoli), come definiti in CfgSlots
    static array<string> GetSlots()
    {
        array<string> slots = new array<string>;
        slots.Insert("terminal");
        slots.Insert("mortarpestle");
        slots.Insert("microscope");
        slots.Insert("condenser");
        slots.Insert("scale");
        slots.Insert("still");
        slots.Insert("stove");
        return slots;
    }

    // Classname dell'entita' modulo, stesso ordine di GetSlots()
    static array<string> GetClassnames()
    {
        array<string> classnames = new array<string>;
        classnames.Insert(WorkbenchConstants.MODULE_TH_TERMINAL);
        classnames.Insert(WorkbenchConstants.MODULE_TH_MORTARPESTLE);
        classnames.Insert(WorkbenchConstants.MODULE_TH_MICROSCOPE);
        classnames.Insert(WorkbenchConstants.MODULE_TH_CONDENSER);
        classnames.Insert(WorkbenchConstants.MODULE_TH_SCALE);
        classnames.Insert(WorkbenchConstants.MODULE_TH_STILL);
        classnames.Insert(WorkbenchConstants.MODULE_TH_STOVE);
        return classnames;
    }

    // Nomi mostrati nel menu (tooltip delle icone modulo), stesso ordine di GetSlots()
    static array<string> GetDisplayNames()
    {
        array<string> names = new array<string>;
        names.Insert("Terminal");
        names.Insert("Mortar Pestle");
        names.Insert("Microscope");
        names.Insert("Condenser");
        names.Insert("Scale");
        names.Insert("Still");
        names.Insert("Stove");
        return names;
    }

    // Slot (qualsiasi maiuscola/minuscola) -> classname del modulo TH; "" se non e' un modulo TH
    static string GetClassForSlot(string slotName)
    {
        string slotLower = slotName;
        slotLower.ToLower();

        array<string> slots = GetSlots();
        int idx = slots.Find(slotLower);
        if (idx == -1)
        {
            return "";
        }
        return GetClassnames().Get(idx);
    }

    // true se lo slot e' uno dei moduli TH
    static bool IsTHSlot(string slotName)
    {
        return GetClassForSlot(slotName) != "";
    }
};
