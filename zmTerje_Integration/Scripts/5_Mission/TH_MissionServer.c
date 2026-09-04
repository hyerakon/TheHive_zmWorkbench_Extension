// Scripts/5_Mission/TH_MissionServer.c

modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        if (!GetGame().IsServer())
            return;

        TH_TerjeRecipeMigration.Run();
    }
}