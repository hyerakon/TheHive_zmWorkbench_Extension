// Pannello dettagli ricetta (anteprima dell'editor admin): riconosce i moduli TH.
// La base mappa solo i 6 moduli originali, quindi senza questo override i moduli TH
// richiesti da una ricetta comparivano senza icona.
modded class WB_RecipeDetailsView
{
    // Slot modulo (minuscolo) -> classname dell'entita' modulo
    override static string GetModuleClassname(string moduleLower)
    {
        string thClass = TH_WB_Modules.GetClassForSlot(moduleLower);
        if (thClass != "")
        {
            return thClass;
        }

        // Moduli originali (stessa mappatura della WorkbenchMod)
        if (moduleLower == "drillpress") return WorkbenchConstants.MODULE_DRILLPRESS;
        if (moduleLower == "grinder") return WorkbenchConstants.MODULE_GRINDER;
        if (moduleLower == "vice") return WorkbenchConstants.MODULE_VICE;
        if (moduleLower == "soldering") return WorkbenchConstants.MODULE_SOLDERING;
        if (moduleLower == "welding") return WorkbenchConstants.MODULE_WELDING;
        if (moduleLower == "sewing") return WorkbenchConstants.MODULE_SEWING;
        return "";
    }
};
