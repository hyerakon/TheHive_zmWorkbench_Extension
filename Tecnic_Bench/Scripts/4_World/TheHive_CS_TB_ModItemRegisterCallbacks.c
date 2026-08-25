// Scripts\4_World\TH_CS_TB_ModItemRegisterCallbacks.c

modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy(pType, pBehavior);

		pType.AddItemInHandsProfileIK("TH_CS_TB_KitBox_BASE", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
	}
}