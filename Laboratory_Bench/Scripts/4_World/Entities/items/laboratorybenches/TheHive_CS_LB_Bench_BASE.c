class TheHive_CS_LB_Bench_BASE extends TheHive_CS_Bench_BASE
{
    override string GetWorkbenchID()
    {
        return "laboratorybench_BASE";  // Your unique ID
    }

    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionToggleTerminalMonitor);
    }
}