class LB_ActionOpenCraftingWorkbench: ActionInteractBase 
{ 
    void ActionOpenCraftingWorkbench() {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
    }
    
    override void CreateConditionComponents() {
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTObject(WorkbenchConstants.INTERACTION_DISTANCE);
    }
    
    override string GetText() {
        return "#STR_wb_item_opencrafting";
    }
    
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        if (!target) return false;
        
        Object targetObject = target.GetObject();
        if (!targetObject) return false;
        
        if (!targetObject.IsKindOf("TheHive_CS_LB_Bench_BASE")) return false;
        
        //CHECK TERMINALE
        TH_CS_LB_Terminal terminal = GetTerminal(target);
        if (!terminal || !terminal.IsLightOn())
            return false;

        
        // Don't show crafting menu when looking at the light switch
        string compName = targetObject.GetActionComponentName(target.GetComponentIndex());
        if (compName == "lightswitch" || compName == "component04") {
            return false;
        }
        
        TheHive_CS_LB_Bench_BASE workbench = TheHive_CS_LB_Bench_BASE.Cast(targetObject);
        return WorkbenchHelpers.CanPlayerUseWorkbench(player, workbench);
    }
    
    override void OnExecuteClient(ActionData action_data) {
        super.OnExecuteClient(action_data);
        
        WBDebug("[WorkbenchMod] Action executed!");
        
        PlayerBase player = action_data.m_Player;
        TheHive_CS_LB_Bench_BASE workbench = TheHive_CS_LB_Bench_BASE.Cast(action_data.m_Target.GetObject());
        
        if (!player || !workbench) {
            WBDebug("[WorkbenchMod] ERROR: No player or workbench!");
            return;
        }

        //CHECK TERMINALE
        TH_CS_LB_Terminal terminal = GetTerminal(action_data.m_Target);
        if (!terminal || !terminal.IsLightOn())
            return;
        
        WBDebug("[WorkbenchMod] Opening menu for workbench...");
        TheHive_CS_LB_Bench_BASE.s_PendingWorkbench = workbench;
        GetGame().GetUIManager().EnterScriptedMenu(WorkbenchConstants.MENU_WORKBENCH, null);
    }
    
    override void OnExecuteServer(ActionData action_data) {
        super.OnExecuteServer(action_data);
        
        // CHECK TERMINALE
        TH_CS_LB_Terminal terminal = GetTerminal(action_data.m_Target);
        if (!terminal || !terminal.IsLightOn())
            return;

        // Sync player's Hardline reputation when they open the workbench
        PlayerBase player = action_data.m_Player;
        TheHive_CS_LB_Bench_BASE workbench = TheHive_CS_LB_Bench_BASE.Cast(action_data.m_Target.GetObject());
        
        if (player && workbench) {
            PlayerIdentity identity = player.GetIdentity();
            if (identity) {
                workbench.SyncPlayerReputation(identity);
                workbench.SyncVehicleSpawnState(identity);
            }
        }
    }

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
};