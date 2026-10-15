// Classe base di tutti i banchi The Hive (Tecnico, Laboratorio, Cucina).
// Estende zm_WorkbenchBase aggiungendo SOLO cio' che riguarda i moduli TH:
// il resto del comportamento resta quello della WorkbenchMod, cosi' gli
// aggiornamenti della mod base arrivano senza doverli ricopiare qui.
class TH_CS_Bench_BASE extends zm_WorkbenchBase
{
    override string GetWorkbenchID()
    {
        return "bench_BASE";  // Your unique ID
    }

    // Moduli attaccati: quelli originali (dalla base) + quelli TH.
    // Usato dal server per verificare i moduli richiesti dalle ricette e dal menu per le icone.
    override array<string> GetAttachedModules()
    {
        array<string> modules = super.GetAttachedModules();

        array<string> thSlots = TH_WB_Modules.GetSlots();
        foreach (string slotName : thSlots)
        {
            if (GetTHModuleInSlot(slotName))
            {
                modules.Insert(slotName);
            }
        }

        return modules;
    }

    // Moduli da NON considerare stock di crafting.
    // La base protegge solo i 6 moduli originali: qui si aggiungono quelli TH, altrimenti
    // GetWorkbenchInventory() li conterebbe come ingredienti (es. TH_CS_CB_Stove estende
    // PortableGasStove e verrebbe consumato da una ricetta che chiede un fornello).
    override array<EntityAI> GetProtectedModuleItems()
    {
        array<EntityAI> modules = super.GetProtectedModuleItems();

        array<string> thSlots = TH_WB_Modules.GetSlots();
        foreach (string slotName : thSlots)
        {
            EntityAI attachment = GetTHModuleInSlot(slotName);
            if (attachment && modules.Find(attachment) == -1)
            {
                modules.Insert(attachment);
            }
        }

        return modules;
    }

    // Oggetto attaccato allo slot indicato, oppure null (slot inesistente o vuoto)
    protected EntityAI GetTHModuleInSlot(string slotName)
    {
        int slotId = InventorySlots.GetSlotIdFromString(slotName);
        if (slotId == InventorySlots.INVALID)
        {
            return null;
        }
        return GetInventory().FindAttachment(slotId);
    }
}
