// Laboratory_Bench\Scripts\4_World\Entities\items\laboratorybenches\TH_CS_LB_Bench_BASE.c

class TH_CS_LB_Bench_BASE extends TH_CS_Bench_BASE
{
    override string GetWorkbenchID()
    {
        return "laboratorybench_BASE";  // Your unique ID
    }

    override void SetActions()
    {
        
        AddAction(TH_CS_LB_ActionOpenCraftingWorkbench)
        AddAction(ActionToggleTerminalMonitor);
        
        super.SetActions();
        
        RemoveAction(ActionOpenCraftingWorkbench);        
    }
}