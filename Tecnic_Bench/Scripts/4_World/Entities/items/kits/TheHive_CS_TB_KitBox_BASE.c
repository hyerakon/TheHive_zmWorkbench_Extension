class TheHive_CS_TB_KitBox_BASE : DeployableContainer_Base 
{
    protected Object TheHive_CS_TB_KitBox_ProtectedVar;
    
    protected string GetDeployObjectType()
    {
        return "TheHive_CS_TB_Bench_BASE";
    };
    
    string TheHive_CS_TB_Kit_Holo()
    {
        return GetDeployObjectType();
    };

    override void EEInit()
    {
        super.EEInit();
    };

    override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
    {
        super.OnItemLocationChanged(old_owner, new_owner);
    };

    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();
    };

    override void SetActions() {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
    };

    override bool IsBasebuildingKit()
	{
		return true;
	}

    override bool IsDeployable() {
        return true;
    };

    override void OnPlacementComplete(Man player, vector position, vector orientation)
    {
		super.OnPlacementComplete(player, position, orientation);

		if (!g_Game.IsDedicatedServer() || position == vector.Zero)
			return;

		string deployedItemType = "";
		string configPathProjectionTypename = string.Format("CfgVehicles %1 projectionTypename", GetType());
		if (g_Game.ConfigIsExisting(configPathProjectionTypename))
		{
			deployedItemType = g_Game.ConfigGetTextOut(configPathProjectionTypename);
		}

		if (deployedItemType == "")
			return;

		PlayerBase pb = PlayerBase.Cast(player);
		if (!pb)
			return;

		ItemBase deployedItem = ItemBase.Cast(g_Game.CreateObject(deployedItemType, pb.GetLocalProjectionPosition(), false));
		if (!deployedItem)
		{
			Error("TheHive_CS_TB_KitBox_BASE - failed to deploy classname: " + deployedItemType);
			return;
		}

		SetIsDeploySound(true);
		deployedItem.SetPosition(position);
		deployedItem.SetOrientation(orientation);
		DeleteSafe();
	}

};