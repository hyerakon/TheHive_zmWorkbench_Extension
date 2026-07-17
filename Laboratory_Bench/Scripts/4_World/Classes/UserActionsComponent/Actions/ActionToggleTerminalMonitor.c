class ActionToggleTerminalMonitor : ActionInteractBase
{
    void ActionToggleTerminalMonitor()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
        m_Text = "#STR_TH_CS_LB_Terminal_ToggleMonitor";
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTObject(2.0);
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if (!target)
            return false;

        TH_CS_LB_Terminal terminal = TH_CS_LB_Terminal.Cast(target.GetObject());

        if (!terminal)
            return false;

        return true;
    }

    override void OnExecuteServer(ActionData action_data) 
    {
        //TH_CS_LB_Terminal terminal = TH_CS_LB_Terminal.Cast(action_data.m_Target.GetObject());
        //if (terminal) {
        //    terminal.ToggleLight();
        //}

        super.OnStartServer(action_data);

        if (!action_data || !action_data.m_Target)
            return;

        TH_CS_LB_Terminal terminal = TH_CS_LB_Terminal.Cast(action_data.m_Target.GetObject());

        if (terminal)
            terminal.ToggleLight();
    }
}
