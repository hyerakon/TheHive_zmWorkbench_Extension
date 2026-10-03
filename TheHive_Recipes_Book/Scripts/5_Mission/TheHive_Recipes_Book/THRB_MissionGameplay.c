modded class MissionGameplay
{
    void MissionGameplay()
    {
        GetRPCManager().AddRPC("TheHive_Recipes_Book", "RPC_THRB_SyncConfig", this, SingleplayerExecutionType.Client);
    }

    void RPC_THRB_SyncConfig(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type != CallType.Client)
            return;

        Param1<THRB_Config> data;

        if (!ctx.Read(data) || !data.param1)
            return;

        THRB_ConfigManager.SetFromServer(data.param1);
    }
};
