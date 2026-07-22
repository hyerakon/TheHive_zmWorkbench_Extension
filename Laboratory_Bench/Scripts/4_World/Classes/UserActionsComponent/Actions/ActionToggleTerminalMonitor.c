// Laboratory_Bench\Scripts\4_World\Classes\UserActionsComponent\Actions\ActionToggleTerminalMonitor.c

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

    /*
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if (!target)
            return false;

        TH_CS_LB_Terminal terminal = TH_CS_LB_Terminal.Cast(target.GetObject());

        if (!terminal)
            return false;

        // AGGIUNGERE LA CONDIZIONE SUL LAVORO O SUL AVER COMPLETATO UNA QUEST DI ACCESSO AL LABORATORIO

        return true;
    }
    */

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        TH_CS_LB_Terminal terminal = GetTerminal(target);

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

        TH_CS_LB_Terminal terminal = GetTerminal(action_data.m_Target);

        if (terminal)
            terminal.ToggleLight();
    };

    protected TH_CS_LB_Terminal GetTerminal(ActionTarget target)
    {
        if (!target)
            return null;

        Object targetObject = target.GetObject();

        if (!targetObject)
            return null;

        TH_CS_LB_Terminal terminal = TH_CS_LB_Terminal.Cast(targetObject);

        if (terminal)
            return terminal;

        EntityAI container = EntityAI.Cast(targetObject);

        if (!container)
            return null;

        return TH_CS_LB_Terminal.Cast(container.FindAttachmentBySlotName("terminal"));
    }
}
