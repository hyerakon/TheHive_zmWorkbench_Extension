// Scripts/4_World/Entities/Hologram/TH_CS_TB_Hologram.c
//
// Estende il modded Hologram di zmWorkbench (WorkbenchMod/.../zm_WorkbenchHologram.c).
// zmWorkbench gestisce gia' l'intero flusso kit/ologramma (UpdateHologram, RefreshVisual,
// EvaluateCollision): qui aggiungiamo solo il riconoscimento dei kit/banchi TH.
// IsWorkbenchHologram/IsWorkbenchKit chiamano super, cosi' i kit zm originali
// continuano a funzionare (prima venivano sostituiti e smettevano di allinearsi al terreno).

modded class Hologram
{
    override string GetProjectionName(ItemBase item)
    {
        TH_CS_TB_KitBox_BASE kit = TH_CS_TB_KitBox_BASE.Cast(item);
        if (kit)
            return kit.TH_CS_TB_Kit_Holo();

        return super.GetProjectionName(item);
    }

    // true se la proiezione e' un banco TH (Tecnic)
    protected bool TH_IsTHWorkbenchHologram()
    {
        if (!m_Projection)
            return false;

        string projType = m_Projection.GetType();
        return projType.Contains("TH_CS_TB_Script") || projType.Contains("TH_CS_TB_Bench_");
    }

    override protected bool IsWorkbenchHologram()
    {
        if (TH_IsTHWorkbenchHologram())
            return true;

        return super.IsWorkbenchHologram();
    }

    override protected bool IsWorkbenchKit()
    {
        if (m_Player)
        {
            ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
            if (item_in_hands && item_in_hands.IsKindOf("TH_CS_TB_KitBox_BASE"))
                return true;
        }

        return super.IsWorkbenchKit();
    }

    // Banchi TH: colore procedurale + materiali originali del banco.
    // Altri banchi (zm): visual originale di zmWorkbench.
    override protected void ApplyWorkbenchHologramVisual()
    {
        if (!m_Projection)
            return;

        if (!TH_IsTHWorkbenchHologram())
        {
            super.ApplyWorkbenchHologramVisual();
            return;
        }

        string texture;
        if (IsColliding())
            texture = HOLOGRAM_RED;
        else
            texture = HOLOGRAM_GREEN;

        string type = m_Projection.GetType();

        array<string> hidden_selections = new array<string>;
        array<string> hidden_materials = new array<string>;

        GetGame().ConfigGetTextArray("CfgVehicles " + type + " hiddenSelections", hidden_selections);
        GetGame().ConfigGetTextArray("CfgVehicles " + type + " hiddenSelectionsMaterials", hidden_materials);

        for (int i = 0; i < hidden_selections.Count(); i++)
        {
            int idx = m_Projection.GetHiddenSelectionIndex(hidden_selections.Get(i));
            if (idx < 0)
                continue;

            // Colore ologramma procedurale
            m_Projection.SetObjectTexture(idx, texture);

            // Materiale originale dell'oggetto, stesso indice della selection
            if (i < hidden_materials.Count() && hidden_materials.Get(i) != "")
                m_Projection.SetObjectMaterial(idx, hidden_materials.Get(i));
        }
    }
};
