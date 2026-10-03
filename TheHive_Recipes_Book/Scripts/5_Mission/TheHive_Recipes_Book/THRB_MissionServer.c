modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        THRB_ConfigManager.Load();
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
