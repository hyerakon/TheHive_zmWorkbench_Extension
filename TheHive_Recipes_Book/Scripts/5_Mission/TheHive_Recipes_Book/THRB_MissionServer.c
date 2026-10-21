modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        THRB_ConfigManager.Load();

#ifdef TheHive_SSBrena_TH_Job_And_Rewards
        THRB_JobHelper.SetProvider(new THRB_JobProviderTHJobs());
        Print("[TheHive_Recipes_Book] Job & Rewards loaded: RequestedJobs active");
#else
        Print("[TheHive_Recipes_Book] Job & Rewards not loaded: RequestedJobs ignored");
#endif
        Print("[TheHive_Recipes_Book] Config loaded: " + THRB_ConfigManager.CONFIG_FILE);
    }

    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);

        if (!identity || !THRB_ConfigManager.Get())
            return;

        // Send names/descriptions to the connecting client
        GetRPCManager().SendRPC("TheHive_Recipes_Book", "RPC_THRB_SyncConfig", new Param1<THRB_Config>(THRB_ConfigManager.Get()), true, identity);
    }
};
