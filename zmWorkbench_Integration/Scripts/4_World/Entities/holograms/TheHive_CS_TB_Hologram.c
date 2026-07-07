// Scripts/4_World/Entities/Hologram/TheHive_CS_TB_Hologram.c

modded class Hologram
{	
    // Procedural hologram colors (like RaG)
    static const string HOLOGRAM_GREEN = "#(argb,8,8,3)color(0.1,0.75,0.2,0.75,ca)";
    static const string HOLOGRAM_RED = "#(argb,8,8,3)color(0.8,0.15,0.05,0.75,ca)";
    // Transparent hologram materials (forward slashes)
    static const string HOLOGRAM_MATERIAL_GREEN = "dz/gear/containers/data/barrel_deployable.rvmat";
    static const string HOLOGRAM_MATERIAL_RED = "dz/gear/containers/data/barrel_undeployable.rvmat";
    
    // Store last orientation for workbench kit to retrieve
    static vector s_LastWorkbenchOrientation;
    
    override string GetProjectionName(ItemBase item)
    {
        Print("[TB HOLOGRAM] item=" + item.GetType());

        TheHive_CS_TB_KitBox_BASE kit = TheHive_CS_TB_KitBox_BASE.Cast(item);
        if (kit)
        {
            string holo = kit.TheHive_CS_TB_Kit_Holo();
            Print("[TB HOLOGRAM] holo=" + holo);
            return holo;
        }

        return super.GetProjectionName(item);
    }
    
    protected bool IsWorkbenchHologram()
    {
        if (m_Projection)
        {
            string projType = m_Projection.GetType();
            if (projType.Contains("TheHive_CS_TB_Script") || projType.Contains("TheHive_CS_TB_Bench_"))
            {
                return true;
            }
        }
        return false;
    }
    
    protected bool IsWorkbenchKit()
    {
        ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
        if (item_in_hands && item_in_hands.IsKindOf("TheHive_CS_TB_KitBox_BASE"))
        {
            return true;
        }
        return false;
    }
    /*
    protected void ApplyWorkbenchHologramVisual()
    {
        if (!m_Projection) return;
        
        string texture;
        string material;
        if (IsColliding())
        {
            texture = HOLOGRAM_RED;
            material = HOLOGRAM_MATERIAL_RED;
        }
        else
        {
            texture = HOLOGRAM_GREEN;
            material = HOLOGRAM_MATERIAL_GREEN;
        }
        
        // Get hiddenSelections from config (like RaG)
        string config_path = "CfgVehicles " + m_Projection.GetType() + " hiddenSelections";
        array<string> hidden_selections = new array<string>;
        GetGame().ConfigGetTextArray(config_path, hidden_selections);
        
        // Apply to each selection
        for (int i = 0; i < hidden_selections.Count(); i++)
        {
            string selection = hidden_selections.Get(i);
            int idx = m_Projection.GetHiddenSelectionIndex(selection);
            if (idx >= 0)
            {
                m_Projection.SetObjectTexture(idx, texture);
                m_Projection.SetObjectMaterial(idx, material);
            }
        }
    }*/

    protected void ApplyWorkbenchHologramVisual()
    {
        if (!m_Projection)
            return;

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
            string selection = hidden_selections.Get(i);
            int idx = m_Projection.GetHiddenSelectionIndex(selection);

            if (idx < 0)
                continue;

            // Colore ologramma procedurale
            m_Projection.SetObjectTexture(idx, texture);

            // Materiale originale dell'oggetto, stesso indice della selection
            if (i < hidden_materials.Count() && hidden_materials.Get(i) != "")
            {
                m_Projection.SetObjectMaterial(idx, hidden_materials.Get(i));
            }
        }
    }
    
    override void UpdateHologram(float timeslice)
    {
        // For workbench kit, handle like RAG does
        if (IsWorkbenchKit())
        {
            super.UpdateHologram(timeslice);
            
            // Get terrain-aligned orientation from vanilla method
            vector terrainOrientation = AlignProjectionOnTerrain(timeslice);
            
            // Apply position and orientation
            vector pos = GetProjectionEntityPosition(m_Player);
            SetProjectionPosition(pos);
            SetProjectionOrientation(terrainOrientation);
            
            // Store for placement
            s_LastWorkbenchOrientation = terrainOrientation;
            
            // Finalize
            m_Projection.OnHologramBeingPlaced(m_Player);
            EvaluateCollision();
            RefreshVisual();
            
            return;
        }
        
        super.UpdateHologram(timeslice);
    }
    
    override void RefreshVisual()
    {
        if (IsWorkbenchHologram())
        {
            ApplyWorkbenchHologramVisual();
            return; // Skip vanilla RefreshVisual
        }
        
        super.RefreshVisual();
    }
    
    override void EvaluateCollision(ItemBase action_item = null)
    {	
        // Disable collision check for workbench kit placement
        //if (IsWorkbenchKit())
        //{
        //    SetIsColliding(false);
        //    return;
        //}
            
        super.EvaluateCollision(action_item);
    }

};

