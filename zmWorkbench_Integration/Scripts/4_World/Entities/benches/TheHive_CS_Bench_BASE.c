class TheHive_CS_Bench_BASE extends zm_WorkbenchBase
{
    override string GetWorkbenchID()
    {
        return "bench_BASE";  // Your unique ID
    }

    override array<string> GetAttachedModules() {
        array<string> modules = new array<string>;
        
        // Check each module slot directly by name
        array<string> moduleSlots = new array<string>;
        moduleSlots.Insert("drillpress");
        moduleSlots.Insert("grinder");
        moduleSlots.Insert("vice");
        moduleSlots.Insert("soldering");
        moduleSlots.Insert("welding");
        moduleSlots.Insert("sewing");

        //TH Modules LB
        moduleSlots.Insert("terminal");
        moduleSlots.Insert("wavegenerator");
        moduleSlots.Insert("mortarpestle");
        
        foreach (string slotName : moduleSlots) {
            int slotId = InventorySlots.GetSlotIdFromString(slotName);
            if (slotId != InventorySlots.INVALID) {
                EntityAI attachment = GetInventory().FindAttachment(slotId);
                if (attachment) {
                    modules.Insert(slotName);
                }
            }
        }
        
        return modules;
    }
}