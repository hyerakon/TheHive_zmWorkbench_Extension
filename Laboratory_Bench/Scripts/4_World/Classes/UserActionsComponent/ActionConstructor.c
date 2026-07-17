// Laboratory_Bench\Scripts\4_World\Entities\items\Classes\UserActionsComponent\ActionConstructor.c

modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions) 
    {
        super.RegisterActions(actions);
        actions.Insert(ActionToggleTerminalMonitor);
    }
};