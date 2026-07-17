// Laboratory_Bench\Scripts\4_World\Entities\items\modules\TH_CS_LB_Terminal.c

class TH_CS_LB_Terminal : Inventory_Base
{
    protected bool m_LightOn;
    protected int m_ScreenSelectionIndex;

    static const string SCREEN_SELECTION = "Display";
    static const string SCREEN_TEXTURE_ON = "TheHive_zmWorkbench_Extension\\Laboratory_Bench\\items\\module_terminal\\model\\data\\TH_CS_LB_TerminalMonitor_LightOn.paa";
    static const string SCREEN_TEXTURE_OFF = "TheHive_zmWorkbench_Extension\\Laboratory_Bench\\items\\module_terminal\\model\\data\\TH_CS_LB_TerminalMonitor_LightOff.paa";
    static const string SCREEN_MATERIAL_ON = "TheHive_zmWorkbench_Extension\\Laboratory_Bench\\items\\module_terminal\\model\\data\\light_on.rvmat";
    static const string SCREEN_MATERIAL_OFF = "TheHive_zmWorkbench_Extension\\Laboratory_Bench\\items\\module_terminal\\model\\data\\light_off.rvmat";

    void TH_CS_LB_Terminal()
    {
        m_LightOn = false;
        m_ScreenSelectionIndex = -1;

        RegisterNetSyncVariableBool("m_LightOn");
    }

    override void EEInit()
    {
        super.EEInit();

        if (!GetGame().IsDedicatedServer())
        {
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(UpdateScreenVisual, 100, false);
        }
    }

    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionToggleTerminalMonitor);
    }

    bool IsLightOn()
    {
        return m_LightOn;
    }

    void ToggleLight()
    {
        if (!GetGame().IsServer())
            return;

        m_LightOn = !m_LightOn;
        SetSynchDirty();

        Print("[TH_CS_LB_Terminal] ToggleLight: " + m_LightOn.ToString());
    }

    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();

        UpdateScreenVisual();
    }

    protected void UpdateScreenVisual()
    {
        if (GetGame().IsDedicatedServer())
            return;

        if (m_ScreenSelectionIndex < 0)
        {
            m_ScreenSelectionIndex = GetHiddenSelectionIndex(SCREEN_SELECTION);
        }

        Print("[TH_CS_LB_Terminal] Display index: " + m_ScreenSelectionIndex.ToString());

        if (m_ScreenSelectionIndex < 0)
        {
            Print("[TH_CS_LB_Terminal] ERRORE: hidden selection Display non trovata");
            return;
        }

        if (m_LightOn)
        {
            SetObjectTexture(m_ScreenSelectionIndex, SCREEN_TEXTURE_ON);
            SetObjectMaterial(m_ScreenSelectionIndex, SCREEN_MATERIAL_ON);

            Print("[TH_CS_LB_Terminal] Display acceso");
        }
        else
        {
            SetObjectTexture(m_ScreenSelectionIndex, SCREEN_TEXTURE_OFF);
            SetObjectMaterial(m_ScreenSelectionIndex, SCREEN_MATERIAL_OFF);

            Print("[TH_CS_LB_Terminal] Display spento");
        }
    }

    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        // Nessun danno.
    }
}