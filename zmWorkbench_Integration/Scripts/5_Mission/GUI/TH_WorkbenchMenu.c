modded class WorkbenchMenu extends UIScriptedMenu
{
    override Widget Init() {
        WBDebug("[WorkbenchMod] Menu Init() called");
        
        m_PreviewEntities = new array<EntityAI>(); // Initialize entity tracking
        m_MultiResultEntities = new array<EntityAI>(); // Track grid cell preview entities
        m_MultiResultCells = new array<Widget>(); // Track grid cell widgets for cleanup
        m_RecipeSlotCaches = new array<ref RecipeSlotCache>(); // Cached recipe slot sub-widgets
        m_ModuleWidgets = new array<Widget>();
        m_IngredientWidgets = new array<Widget>();
        m_IngredientTooltips = new array<string>();
        m_IngredientClassNames = new array<string>();
        m_CyclingPreviews = new array<ItemPreviewWidget>();
        m_CyclingChildClasses = new array<ref array<string>>();
        m_CyclingIndices = new array<int>();
        m_CyclingCurrentEntities = new array<EntityAI>();
        m_CyclingBaseClassNames = new array<string>();
        m_CyclingTooltipIndices = new array<int>();
        m_CyclingIndexCache = new map<string, int>();
        m_CyclingCountTexts = new array<TextWidget>();
        m_CyclingRecipeItems = new array<WB_RecipeItem>();
        m_CyclingClassQtys = new array<ref array<int>>();
        m_CyclingIsCountByItems = new array<bool>();

        m_CycleTimer = 0;
        m_QuestHardlineUpdateTimer = 0;
        m_LastMouseX = 0;
        m_LastMouseY = 0;
        m_MouseMovedThisCycle = false;
        m_CachedPlayerReputation = 0;
        m_CategoryTabPanels = new array<Widget>();
        m_CategoryTabs = new array<ButtonWidget>();
        m_CategoryTabBackgrounds = new array<ImageWidget>();
        m_Categories = new array<string>();
        m_SubcategoryTabPanels = new array<Widget>();
        m_SubcategoryTabs = new array<ButtonWidget>();
        m_SubcategoryTabBackgrounds = new array<ImageWidget>();
        m_Subcategories = new array<string>();
        m_CurrentSubcategory = "";
        
        m_Root = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.TH_LAYOUT_MAIN);

        if (!m_Root) {
            WBDebug("[WorkbenchMod] ERROR: Failed to load layout!");
            WBDebug("[WorkbenchMod] Layout path: " + WorkbenchConstants.TH_LAYOUT_MAIN);
            
            // Create a simple fallback widget for testing
            m_Root = GetGame().GetWorkspace().CreateWidgets("gui/layouts/day_z_hud.layout");
            if (m_Root) {
                WBDebug("[WorkbenchMod] Created fallback widget");
            } else {
                WBDebug("[WorkbenchMod] ERROR: Even fallback failed!");
            }
            return m_Root;
        }
        
        WBDebug("[WorkbenchMod] Layout loaded successfully");
        
        m_WorkbenchTitle = TextWidget.Cast(m_Root.FindAnyWidget("WorkbenchTitle"));
        m_ModuleDisplay = m_Root.FindAnyWidget("ModuleDisplay");
        m_CloseButton = m_Root.FindAnyWidget("CloseButton");
        m_CloseButtonBg = ImageWidget.Cast(m_Root.FindAnyWidget("CloseButtonBg"));
        m_CloseButtonText = TextWidget.Cast(m_Root.FindAnyWidget("CloseButtonText"));
        
        // Set initial close button colors
        if (m_CloseButtonBg) m_CloseButtonBg.SetColor(ARGB(217, 255, 255, 255));
        if (m_CloseButtonText) m_CloseButtonText.SetColor(ARGB(255, 0, 0, 0));
        
        m_CategoryTabsContainer = m_Root.FindAnyWidget("CategoryTabsContainer");
        m_SubcategoryTabsPanel = m_Root.FindAnyWidget("SubcategoryTabsPanel");
        m_SubcategoryTabsContainer = m_Root.FindAnyWidget("SubcategoryTabsContainer");
        
        m_SearchBox = EditBoxWidget.Cast(m_Root.FindAnyWidget("SearchBox"));
        m_ClearSearchButton = m_Root.FindAnyWidget("ClearSearchButton");
        m_ClearSearchBg = ImageWidget.Cast(m_Root.FindAnyWidget("ClearSearchBg"));
        m_ClearSearchText = TextWidget.Cast(m_Root.FindAnyWidget("ClearSearchText"));
        m_SearchHasPlaceholder = true;
        
        // Set initial clear search button colors
        if (m_ClearSearchBg) m_ClearSearchBg.SetColor(ARGB(217, 255, 255, 255));
        if (m_ClearSearchText) m_ClearSearchText.SetColor(ARGB(255, 0, 0, 0));
        
        m_RecipeScrollWidget = ScrollWidget.Cast(m_Root.FindAnyWidget("RecipeScrollWidget"));
        m_RecipeGrid = GridSpacerWidget.Cast(m_Root.FindAnyWidget("RecipeGrid"));
        
        // Scrollbar widgets
        m_RecipeScrollbarTrack = m_Root.FindAnyWidget("RecipeScrollbarTrack");
        m_RecipeScrollbarThumb = m_Root.FindAnyWidget("RecipeScrollbarThumb");
        
        // Make scrollbar thumb draggable (remove ignorepointer)
        if (m_RecipeScrollbarThumb) {
            m_RecipeScrollbarThumb.ClearFlags(WidgetFlags.IGNOREPOINTER);
        }
        // Make track clickable too
        if (m_RecipeScrollbarTrack) {
            m_RecipeScrollbarTrack.ClearFlags(WidgetFlags.IGNOREPOINTER);
        }
        
        if (m_RecipeScrollbarTrack) {
            float tw, th;
            m_RecipeScrollbarTrack.GetSize(tw, th);
            m_RecipeScrollbarTrackHeight = th;
        }
        
        m_LargeItemPreview = ItemPreviewWidget.Cast(m_Root.FindAnyWidget("LargeItemPreview"));
        m_MultiResultScroll = m_Root.FindAnyWidget("MultiResultScroll");
        m_MultiResultGrid = WrapSpacerWidget.Cast(m_Root.FindAnyWidget("MultiResultGrid"));
        
        // Character preview panel
        m_CharacterPreview = PlayerPreviewWidget.Cast(m_Root.FindAnyWidget("CharacterPreview"));
        if (m_CharacterPreview) {
            WBDebug("[WorkbenchMod] CharacterPreview widget found");
            PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
            if (player) {
                m_CharacterPreview.SetPlayer(player);
                WBDebug("[WorkbenchMod] Player set on CharacterPreview");
            }
        } else {
            WBDebug("[WorkbenchMod] WARNING: CharacterPreview widget not found");
        }
        
        m_ItemName = MultilineTextWidget.Cast(m_Root.FindAnyWidget("ItemName"));
        m_ItemDescription = MultilineTextWidget.Cast(m_Root.FindAnyWidget("ItemDescription"));
        m_RequirementsTitle = TextWidget.Cast(m_Root.FindAnyWidget("RequirementsTitle"));
        m_PowerCostIcon = ImageWidget.Cast(m_Root.FindAnyWidget("PowerCostIcon"));
        m_PowerCostText = TextWidget.Cast(m_Root.FindAnyWidget("PowerCostText"));
        m_CurrentReputationText = TextWidget.Cast(m_Root.FindAnyWidget("CurrentReputationText"));
        m_ModulesPanel = m_Root.FindAnyWidget("ModulesPanel");
        m_RequirementsPanel = m_Root.FindAnyWidget("RequirementsPanel");
        m_RequirementsScroll = ScrollWidget.Cast(m_Root.FindAnyWidget("RequirementsScroll"));
        m_RequirementsScrollbarTrack = m_Root.FindAnyWidget("RequirementsScrollbarTrack");
        m_RequirementsScrollbarThumb = m_Root.FindAnyWidget("RequirementsScrollbarThumb");
        m_ReqScrollPos = 0;
        m_ReqScrollMax = 0;
        m_ReqScrollScale = 1.0;
        m_ReqScrollbarTrackHeight = 130; // Layout height
        m_CraftButton = ButtonWidget.Cast(m_Root.FindAnyWidget("CraftButton"));
        
        // Quantity selector
        m_QuantityMinusBtn = ButtonWidget.Cast(m_Root.FindAnyWidget("QuantityMinusBtn"));
        m_QuantityPlusBtn = ButtonWidget.Cast(m_Root.FindAnyWidget("QuantityPlusBtn"));
        m_QuantityText = TextWidget.Cast(m_Root.FindAnyWidget("QuantityText"));
        m_CraftQuantity = 1;
        
        // Variant selector
        m_VariantPanel = m_Root.FindAnyWidget("VariantPanel");
        m_VariantScroller = m_Root.FindAnyWidget("VariantScroller");
        m_VariantIconContainer = m_Root.FindAnyWidget("VariantIconContainer");
        m_VariantIconSlots = new array<Widget>();
        m_VariantPreviewEntities = new array<EntityAI>();
        m_VariantIconMap = new map<Widget, int>();
        m_SelectedVariantIndex = 0;
        m_VariantScrollPos = 0;
        m_VariantScrollMax = 0;
        if (m_VariantScroller) {
            float scrollerW, scrollerH;
            m_VariantScroller.GetSize(scrollerW, scrollerH);
            m_VariantScrollerHeight = scrollerH;
        }
        if (m_VariantPanel) {
            m_VariantPanel.Show(false); // Hidden until recipe with variants is selected
        }
        
        if (m_CraftButton) {
            WBDebug("[WorkbenchMod] CraftButton found and initialized");
            m_CraftButton.Show(true);
            m_CraftButton.Enable(false); // Disabled until recipe selected
            m_CraftButtonBackground = ImageWidget.Cast(m_Root.FindAnyWidget("CraftButtonBackground"));
            m_CraftButtonLeftBorder = ImageWidget.Cast(m_Root.FindAnyWidget("CraftButtonLeftBorder"));
            m_CraftButtonTopBorder = ImageWidget.Cast(m_Root.FindAnyWidget("CraftButtonTopBorder"));
            m_CraftButtonRightBorder = ImageWidget.Cast(m_Root.FindAnyWidget("CraftButtonRightBorder"));
            m_CraftButtonBottomBorder = ImageWidget.Cast(m_Root.FindAnyWidget("CraftButtonBottomBorder"));
            m_CraftButtonText = TextWidget.Cast(m_Root.FindAnyWidget("CraftButtonText"));
            if (m_CraftButtonBackground) {
                m_CraftButtonBackground.SetColor(ARGB(178, 38, 38, 38)); // Dark gray transparent
            }
            if (m_CraftButtonLeftBorder) {
                m_CraftButtonLeftBorder.SetColor(ARGB(255, 150, 60, 60)); // Red - disabled
            }
            if (m_CraftButtonText) {
                m_CraftButtonText.SetText("#STR_wb_select_recipe");
            }
        } else {
            WBDebug("[WorkbenchMod] ERROR: CraftButton not found!");
        }
        
        // Track ingredients button
        m_TrackButton = ButtonWidget.Cast(m_Root.FindAnyWidget("TrackButton"));
        if (m_TrackButton) {
            WBDebug("[WorkbenchMod] TrackButton found and initialized");
            // Only show track button if tracking is enabled in settings
            if (WorkbenchSettings.IsTrackingEnabled()) {
                m_TrackButton.Show(true);
                m_TrackButton.Enable(false); // Disabled until recipe selected
            } else {
                m_TrackButton.Show(false);
                WBDebug("[WorkbenchMod] Tracking disabled - hiding TrackButton");
            }
            m_TrackButtonBackground = ImageWidget.Cast(m_Root.FindAnyWidget("TrackButtonBackground"));
            m_TrackButtonLeftBorder = ImageWidget.Cast(m_Root.FindAnyWidget("TrackButtonLeftBorder"));
            m_TrackButtonTopBorder = ImageWidget.Cast(m_Root.FindAnyWidget("TrackButtonTopBorder"));
            m_TrackButtonRightBorder = ImageWidget.Cast(m_Root.FindAnyWidget("TrackButtonRightBorder"));
            m_TrackButtonBottomBorder = ImageWidget.Cast(m_Root.FindAnyWidget("TrackButtonBottomBorder"));
            m_TrackButtonText = TextWidget.Cast(m_Root.FindAnyWidget("TrackButtonText"));
            if (m_TrackButtonBackground) {
                m_TrackButtonBackground.SetColor(ARGB(178, 38, 38, 38)); // Dark gray transparent
            }
            if (m_TrackButtonLeftBorder) {
                m_TrackButtonLeftBorder.SetColor(ARGB(255, 255, 204, 0)); // Gold - always
            }
        } else {
            WBDebug("[WorkbenchMod] WARNING: TrackButton not found - may need to add to layout");
        }
        
        // Workbench inventory panel
        m_InventoryPanel = m_Root.FindAnyWidget("WorkbenchInventoryPanel");
        m_InventoryScroller = m_Root.FindAnyWidget("InventoryScroller");
        m_InventoryGrid = GridSpacerWidget.Cast(m_Root.FindAnyWidget("InventoryGrid"));
        m_InventoryEmptyText = TextWidget.Cast(m_Root.FindAnyWidget("InventoryEmptyText"));
        m_InventorySlotWidgets = new array<Widget>();
        m_InventoryPreviewEntities = new array<EntityAI>();
        m_WorkbenchInventoryItems = new array<EntityAI>();
        m_InventoryScrollPos = 0;
        m_InventoryScrollMax = 0;
        
        // Inventory scrollbar widgets
        m_InventoryScrollbarTrack = m_Root.FindAnyWidget("InventoryScrollbarTrack");
        m_InventoryScrollbarThumb = m_Root.FindAnyWidget("InventoryScrollbarThumb");
        
        // Get scroller size for scroll calculations (will be used with scale factor)
        if (m_InventoryScroller) {
            float sw, sh;
            m_InventoryScroller.GetSize(sw, sh);
            m_InventoryScrollerHeight = sh;
            WBDebug("[WorkbenchMod] InventoryScroller height: " + sh.ToString());
        }
        
        if (m_InventoryScrollbarTrack) {
            float itw, ith;
            m_InventoryScrollbarTrack.GetSize(itw, ith);
            m_InventoryScrollbarTrackHeight = ith;
            WBDebug("[WorkbenchMod] InventoryScrollbarTrack height: " + ith.ToString());
            // Hide scrollbar initially until we know if we need it
            m_InventoryScrollbarTrack.Show(false);
        }
        
        if (m_InventoryScrollbarThumb) {
            m_InventoryScrollbarThumb.Show(false);
        }
        
        WBDebug("[WorkbenchMod] InventoryPanel found: " + (m_InventoryPanel != null).ToString());
        WBDebug("[WorkbenchMod] InventoryScroller found: " + (m_InventoryScroller != null).ToString());
        WBDebug("[WorkbenchMod] InventoryGrid found: " + (m_InventoryGrid != null).ToString());
        WBDebug("[WorkbenchMod] InventoryScrollbarTrack found: " + (m_InventoryScrollbarTrack != null).ToString());
        WBDebug("[WorkbenchMod] InventoryScrollbarThumb found: " + (m_InventoryScrollbarThumb != null).ToString());
        
        // Player inventory panel
        m_PlayerInventoryPanel = m_Root.FindAnyWidget("PlayerInventoryPanel");
        m_PlayerInventoryScroller = m_Root.FindAnyWidget("PlayerInventoryScroller");
        m_PlayerInventoryGrid = GridSpacerWidget.Cast(m_Root.FindAnyWidget("PlayerInventoryGrid"));
        m_PlayerInventoryEmptyText = TextWidget.Cast(m_Root.FindAnyWidget("PlayerInventoryEmptyText"));
        m_PlayerInventorySlotWidgets = new array<Widget>();
        m_PlayerInventoryPreviewEntities = new array<EntityAI>();
        m_PlayerInventoryItems = new array<EntityAI>();
        m_PlayerInventoryScrollPos = 0;
        m_PlayerInventoryScrollMax = 0;
        
        // Player inventory scrollbar widgets
        m_PlayerInventoryScrollbarTrack = m_Root.FindAnyWidget("PlayerInventoryScrollbarTrack");
        m_PlayerInventoryScrollbarThumb = m_Root.FindAnyWidget("PlayerInventoryScrollbarThumb");
        
        if (m_PlayerInventoryScroller) {
            float psw, psh;
            m_PlayerInventoryScroller.GetSize(psw, psh);
            m_PlayerInventoryScrollerHeight = psh;
            WBDebug("[WorkbenchMod] PlayerInventoryScroller height: " + psh.ToString());
        }
        
        if (m_PlayerInventoryScrollbarTrack) {
            float pitw, pith;
            m_PlayerInventoryScrollbarTrack.GetSize(pitw, pith);
            m_PlayerInventoryScrollbarTrackHeight = pith;
            m_PlayerInventoryScrollbarTrack.Show(false);
        }
        
        if (m_PlayerInventoryScrollbarThumb) {
            m_PlayerInventoryScrollbarThumb.Show(false);
        }
        
        WBDebug("[WorkbenchMod] PlayerInventoryPanel found: " + (m_PlayerInventoryPanel != null).ToString());
        
        m_CurrentCraftText = TextWidget.Cast(m_Root.FindAnyWidget("CurrentCraftText"));
        m_QueuedItems = MultilineTextWidget.Cast(m_Root.FindAnyWidget("QueuedItems"));
        m_QueuePanel = m_Root.FindAnyWidget("QueuePanel");
        m_StopCraftButton = ButtonWidget.Cast(m_Root.FindAnyWidget("StopCraftButton"));
        m_ProgressBarContainer = m_Root.FindAnyWidget("ProgressBarContainer");
        m_ProgressBarFill = ImageWidget.Cast(m_Root.FindAnyWidget("ProgressBarFill"));
        m_ProgressBarText = TextWidget.Cast(m_Root.FindAnyWidget("ProgressBarText"));
        
        // Power display
        m_PowerPanel = m_Root.FindAnyWidget("PowerPanel");
        m_PowerBarFill = ImageWidget.Cast(m_Root.FindAnyWidget("PowerBarFill"));
        m_PowerText = TextWidget.Cast(m_Root.FindAnyWidget("PowerText"));
        m_PowerIcon = ImageWidget.Cast(m_Root.FindAnyWidget("PowerIcon"));
        m_PowerStatusText = TextWidget.Cast(m_Root.FindAnyWidget("PowerStatusText"));
        m_PowerSourceText = TextWidget.Cast(m_Root.FindAnyWidget("PowerSourceText"));
        m_ChargingText = TextWidget.Cast(m_Root.FindAnyWidget("ChargingText"));
        m_BatteryCountText = TextWidget.Cast(m_Root.FindAnyWidget("BatteryCountText"));
        
        WBDebug("[WorkbenchMod] PowerPanel found: " + (m_PowerPanel != null).ToString());
        
        WBDebug("[WorkbenchMod] QueuePanel found: " + (m_QueuePanel != null).ToString());
        WBDebug("[WorkbenchMod] QueuedItems found: " + (m_QueuedItems != null).ToString());
        WBDebug("[WorkbenchMod] StopCraftButton found: " + (m_StopCraftButton != null).ToString());
        
        // Hide queue panel initially
        if (m_QueuePanel) {
            m_QueuePanel.Show(false);
        }
        
        // Hide progress bar initially
        if (m_ProgressBarContainer) {
            m_ProgressBarContainer.Show(false);
        }
        
        m_CurrentCategory = WorkbenchConstants.CATEGORY_ALL;
        m_SelectedRecipeID = -1;
        
        // Create tooltip widget as child of root
        m_TooltipWidget = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.LAYOUT_TOOLTIP, m_Root);
        if (m_TooltipWidget) {
            m_TooltipText = MultilineTextWidget.Cast(m_TooltipWidget.FindAnyWidget("TooltipText"));
            m_TooltipWidget.Show(false);
            WBDebug("[WorkbenchMod] Tooltip widget created");
        } else {
            WBDebug("[WorkbenchMod] ERROR: Tooltip widget not found in layout!");
        }
        
        // Load custom logo from settings
        m_LogoImage = ImageWidget.Cast(m_Root.FindAnyWidget("ImageWidgetLogo"));
        if (m_LogoImage) {
            string logoPath = WorkbenchSettings.GetLogoPath();
            if (logoPath != "") {
                m_LogoImage.LoadImageFile(0, logoPath);
                WBDebug("[WorkbenchMod] Logo loaded: " + logoPath);
            }
        }
        
        return m_Root;
    }
    
    override void ShowModuleTooltip(int moduleIndex) 
    {
        if (!m_IsMenuOpen) return;
        
        // Create module tooltip if it doesn't exist
        if (!m_ModuleTooltipWidget) {
            m_ModuleTooltipWidget = GetGame().GetWorkspace().CreateWidgets("WorkbenchMod/Scripts/5_Mission/GUI/Layouts/ModuleTooltip.layout");
            if (m_ModuleTooltipWidget) {
                m_ModuleNameText = TextWidget.Cast(m_ModuleTooltipWidget.FindAnyWidget("ModuleName"));
                m_ModuleDescText = MultilineTextWidget.Cast(m_ModuleTooltipWidget.FindAnyWidget("ModuleDescription"));
                m_ModulePreview = ItemPreviewWidget.Cast(m_ModuleTooltipWidget.FindAnyWidget("ModulePreview"));
                WBDebug("[WorkbenchMod] Module tooltip created.");
                WBDebug("[WorkbenchMod] - Name widget: " + (m_ModuleNameText != null).ToString());
                WBDebug("[WorkbenchMod] - Desc widget: " + (m_ModuleDescText != null).ToString());
                WBDebug("[WorkbenchMod] - Preview widget: " + (m_ModulePreview != null).ToString());
            }
        }
        
        if (!m_ModuleTooltipWidget) return;
        
        // Module class names
        array<string> moduleClassNames = {"zm_DrillPress", "zm_Grinder", "zm_Vice", "zm_Soldering", "zm_Welding", "zm_Sewing", "TH_CS_LB_Terminal", "TH_CS_LB_WaveGenerator", "TH_CS_LB_MortarPestle"};
        
        if (moduleIndex < 0 || moduleIndex >= moduleClassNames.Count()) return;
        
        string className = moduleClassNames[moduleIndex];
        
        // Get name and description from config
        string displayName = "";
        string description = "";
        string cfgPath = "CfgVehicles " + className;
        GetGame().ConfigGetText(cfgPath + " displayName", displayName);
        GetGame().ConfigGetText(cfgPath + " descriptionShort", description);
        
        // Set name and description
        if (m_ModuleNameText) {
            m_ModuleNameText.SetText(displayName);
        }
        if (m_ModuleDescText) {
            m_ModuleDescText.SetText(description);
        }
        
        // Create preview item
        if (m_ModulePreview) {
            // Clean up old preview item
            if (m_ModulePreviewItem) {
                GetGame().ObjectDelete(m_ModulePreviewItem);
                m_ModulePreviewItem = null;
            }
            
            WBDebug("[WorkbenchMod] Creating tooltip preview for class: " + className);
            
            // Use CreateObject like other working previews do
            m_ModulePreviewItem = EntityAI.Cast(GetGame().CreateObject(className, vector.Zero, true));
            if (m_ModulePreviewItem) {
                WBDebug("[WorkbenchMod] Tooltip preview item created: " + m_ModulePreviewItem.GetType());
                m_ModulePreview.SetItem(m_ModulePreviewItem);
                m_ModulePreview.SetModelOrientation(Vector(0, 0, 0));
                m_ModulePreview.SetView(m_ModulePreviewItem.GetViewIndex());
                m_ModulePreview.Show(true);
                // Track for cleanup
                if (m_PreviewEntities) {
                    m_PreviewEntities.Insert(m_ModulePreviewItem);
                }
            } else {
                WBDebug("[WorkbenchMod] ERROR: Failed to create tooltip preview for: " + className);
            }
        } else {
            WBDebug("[WorkbenchMod] ERROR: m_ModulePreview widget is null!");
        }
        
        // Position tooltip to left of cursor - scale offset based on resolution
        int mouseX, mouseY;
        GetMousePos(mouseX, mouseY);
        
        // Base offset designed for 2560 width, scale proportionally
        int screenW, screenH;
        GetScreenSize(screenW, screenH);
        float scaleFactor = screenW / 2560.0;
        int offsetX = (int)(450 * scaleFactor);
        
        m_ModuleTooltipWidget.SetPos(mouseX - offsetX, mouseY - 60);
        m_ModuleTooltipWidget.Show(true);
        m_ModuleTooltipWidget.Update();
    };

    override void UpdateModuleDisplay() {
        if (!m_Workbench || !m_ModuleDisplay) return;
        
        m_ModuleWidgets.Clear();
        
        // Clear existing module icons
        Widget child = m_ModuleDisplay.GetChildren();
        while (child) {
            Widget next = child.GetSibling();
            delete child;
            child = next;
        }
        
        array<string> attachedModules = m_Workbench.GetAttachedModules();
        bool isPublicWorkbench = m_Workbench.IsKindOf("zm_WorkbenchPublic");
        
        // Define all possible module types with display names and slot names
        array<string> allModuleTypes = new array<string>();
        allModuleTypes.Insert(WorkbenchConstants.MODULE_DRILLPRESS);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_GRINDER);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_VICE);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_SOLDERING);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_WELDING);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_SEWING);

        // TH modules LB
        allModuleTypes.Insert(WorkbenchConstants.MODULE_TH_TERMINAL);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_TH_WAVEGENERATOR);
        allModuleTypes.Insert(WorkbenchConstants.MODULE_TH_MORTARPESTLE);

        
        // Slot names (lowercase) for comparison with GetAttachedModules()
        array<string> moduleSlotNames = new array<string>();
        moduleSlotNames.Insert("drillpress");
        moduleSlotNames.Insert("grinder");
        moduleSlotNames.Insert("vice");
        moduleSlotNames.Insert("soldering");
        moduleSlotNames.Insert("welding");
        moduleSlotNames.Insert("sewing");

        // TH Slots
        moduleSlotNames.Insert("terminal");
        moduleSlotNames.Insert("wavegenerator");
        moduleSlotNames.Insert("mortarpestle");
        
        array<string> moduleDisplayNames = new array<string>();
        moduleDisplayNames.Insert("Drill Press");
        moduleDisplayNames.Insert("Grinder");
        moduleDisplayNames.Insert("Vice");
        moduleDisplayNames.Insert("Soldering");
        moduleDisplayNames.Insert("Welding");
        moduleDisplayNames.Insert("Sewing");

        // TH Module DisplayNames
        moduleDisplayNames.Insert("Terminal");
        moduleDisplayNames.Insert("Wave Generator");
        moduleDisplayNames.Insert("Mortar Pestle");
        
        // Create icon for each module type (always show all)
        for (int i = 0; i < allModuleTypes.Count(); i++) {
            string moduleType = allModuleTypes.Get(i);
            string slotName = moduleSlotNames.Get(i);
            bool isAttached = isPublicWorkbench || attachedModules.Find(slotName) != -1;

            Widget modWidget = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.LAYOUT_MODULE_REQUIREMENT, m_ModuleDisplay);
            if (modWidget) {
                WBDebug("[WorkbenchMod] Created module widget " + i + " for " + moduleType);
                // Set widget name so tooltip system can identify it
                modWidget.SetName("ModuleSlot_" + i);
                // Set tooltip text in UserData
                modWidget.SetUserData(new Param1<string>(moduleDisplayNames.Get(i)));
                m_ModuleWidgets.Insert(modWidget);

                ItemPreviewWidget modPreview = ItemPreviewWidget.Cast(modWidget.FindAnyWidget("ModuleIcon"));
                ImageWidget background = ImageWidget.Cast(modWidget.FindAnyWidget("ModuleBackground"));
                
                // Set panel border color based on attached status (green = attached, red = missing)
                // The panel itself has style Outline, so SetColor changes the border
                if (isAttached) {
                    modWidget.SetColor(ARGB(255, 80, 180, 80)); // Green border - attached
                } else {
                    modWidget.SetColor(ARGB(255, 180, 80, 80)); // Red border - missing
                }
                
                // Keep background neutral dark gray for all
                if (background) {
                    background.SetColor(ARGB(200, 40, 40, 40)); // Dark gray background
                }
                
                // Create preview entity to show the module
                if (modPreview) {
                    EntityAI modEnt = EntityAI.Cast(GetGame().CreateObject(moduleType, vector.Zero, true));
                    if (modEnt) {
                        modPreview.SetItem(modEnt);
                        modPreview.SetModelOrientation(Vector(0, 0, 0));
                        modPreview.SetView(modEnt.GetViewIndex());
                        modPreview.Show(true);
                        m_PreviewEntities.Insert(modEnt);
                    }
                }
            }
        }
    };

    override void UpdateRequirements(WorkbenchRecipe recipe)
    {
        WBDebug("[WorkbenchMod] UpdateRequirements called for: " + recipe.display_name);
        
        if (!m_RequirementsPanel) {
            WBDebug("[WorkbenchMod] ERROR: RequirementsPanel not found!");
            return;
        }
        
        // Clear existing items from both panels
        Widget child = m_RequirementsPanel.GetChildren();
        while (child) {
            Widget next = child.GetSibling();
            delete child;
            child = next;
        }
        
        if (m_ModulesPanel) {
            Widget modChild = m_ModulesPanel.GetChildren();
            while (modChild) {
                Widget modNext = modChild.GetSibling();
                delete modChild;
                modChild = modNext;
            }
        }
        
        // Clear ingredient tracking
        m_IngredientWidgets.Clear();
        m_IngredientTooltips.Clear();
        m_IngredientClassNames.Clear();
        m_CurrentHoveredIngredientIndex = -1;
        
        // Clear cycling preview data (widgets are about to be rebuilt)
        // Note: m_CyclingIndexCache and m_CycleTimer are NOT cleared here so cycling resumes smoothly across refreshes
        m_CyclingPreviews.Clear();
        m_CyclingChildClasses.Clear();
        m_CyclingIndices.Clear();
        m_CyclingCurrentEntities.Clear();
        m_CyclingBaseClassNames.Clear();
        m_CyclingTooltipIndices.Clear();
        m_CyclingCountTexts.Clear();
        m_CyclingRecipeItems.Clear();
        m_CyclingClassQtys.Clear();
        m_CyclingIsCountByItems.Clear();
        
        // Show required modules first (if any) - in ModulesPanel
        if (recipe.required_attachments && recipe.required_attachments.Count() > 0) {
            WBDebug("[WorkbenchMod] Adding " + recipe.required_attachments.Count().ToString() + " required modules");
            
            // Get attached modules from workbench
            array<string> attachedModules = new array<string>;
            if (m_Workbench) {
                attachedModules = m_Workbench.GetAttachedModules();
            }
            bool isPublicWorkbench = m_Workbench && m_Workbench.IsKindOf("zm_WorkbenchPublic");
            
            // Module class names mapping (slot name -> class name for preview)
            map<string, string> moduleClasses = new map<string, string>;
            moduleClasses.Insert("drillpress", "zm_DrillPress");
            moduleClasses.Insert("grinder", "zm_Grinder");
            moduleClasses.Insert("vice", "zm_Vice");
            moduleClasses.Insert("soldering", "zm_Soldering");
            moduleClasses.Insert("welding", "zm_Welding");
            moduleClasses.Insert("sewing", "zm_Sewing");

            // TH Modules mapping
            moduleClasses.Insert("terminal", "TH_CS_LB_Terminal");
            moduleClasses.Insert("wavegenerator", "TH_CS_LB_WaveGenerator");
            moduleClasses.Insert("mortarpestle", "TH_CS_LB_MortarPestle");
            
            foreach (string reqModule : recipe.required_attachments) {
                string reqModuleLower = reqModule;
                reqModuleLower.ToLower();
                
                // Check if module is attached
                bool isAttached = isPublicWorkbench;
                if (!isAttached) {
                    foreach (string attached : attachedModules) {
                        string attachedLower = attached;
                        attachedLower.ToLower();
                        if (attachedLower == reqModuleLower) {
                            isAttached = true;
                            break;
                        }
                    }
                }
                
                // Add modules to ModulesPanel (first row)
                Widget targetPanel = m_ModulesPanel;
                if (!targetPanel) targetPanel = m_RequirementsPanel;
                Widget modSlotWidget = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.LAYOUT_INGREDIENT_SLOT, targetPanel);
                
                if (modSlotWidget) {
                    ItemPreviewWidget modPreview = ItemPreviewWidget.Cast(modSlotWidget.FindAnyWidget("IngredientIcon"));
                    TextWidget modCountText = TextWidget.Cast(modSlotWidget.FindAnyWidget("IngredientCount"));
                    
                    // Create entity for module preview
                    string moduleClassName = moduleClasses.Get(reqModuleLower);
                    if (moduleClassName != "") {
                        EntityAI modEnt = EntityAI.Cast(GetGame().CreateObject(moduleClassName, vector.Zero, true));
                        
                        if (modPreview && modEnt) {
                            modPreview.SetItem(modEnt);
                            modPreview.SetModelOrientation(Vector(0, 0, 0));
                            modPreview.SetView(modEnt.GetViewIndex());
                            modPreview.Show(true);
                            m_PreviewEntities.Insert(modEnt);
                        }
                    }
                    
                    if (modCountText) {
                        if (isAttached) {
                            modCountText.SetText("#STR_wb_ok");
                            modCountText.SetColor(ARGB(255, 100, 255, 100)); // Green
                        } else {
                            modCountText.SetText("#STR_wb_missing_status");
                            modCountText.SetColor(ARGB(255, 255, 100, 100)); // Red
                        }
                    }
                    
                    // Track widget for tooltip
                    m_IngredientWidgets.Insert(modSlotWidget);
                    m_IngredientClassNames.Insert(moduleClassName);
                    
                    // Get display name for module
                    string modDisplayName = reqModule;
                    modDisplayName.ToUpper();
                    m_IngredientTooltips.Insert(modDisplayName + " (Module)");
                }
            }
        }
        
        // Show module consumables (drill bits, grinding discs, etc.) if enabled
        array<ref ModuleConsumable> consumables = GetWorkbenchRecipeManager().GetRecipeConsumables(recipe);
        WBDebug("[WorkbenchMod] Module consumables check - enableModuleConsumables: " + GetWorkbenchRecipeManager().IsModuleConsumablesEnabled().ToString());
        
        string consCountStr = "null";
        if (consumables) consCountStr = consumables.Count().ToString();
        WBDebug("[WorkbenchMod] Module consumables for recipe: " + consCountStr);
        
        string attCountStr = "null";
        if (recipe.required_attachments) attCountStr = recipe.required_attachments.Count().ToString();
        WBDebug("[WorkbenchMod] Recipe required_attachments count: " + attCountStr);
        
        if (consumables && consumables.Count() > 0) {
            WBDebug("[WorkbenchMod] Adding " + consumables.Count().ToString() + " module consumables");
            
            foreach (ModuleConsumable mc : consumables) {
                int consHave = 0;
                if (m_Workbench) {
                    consHave = m_Workbench.CountItem(mc.consumable);
                }
                int consResolvedQty = mc.quantity;
                if (consResolvedQty < 1) {
                    consResolvedQty = 1;
                }
                int consNeeded = consResolvedQty * m_CraftQuantity;
                
                // Add consumables to ModulesPanel (first row, with modules)
                Widget consTargetPanel = m_ModulesPanel;
                if (!consTargetPanel) consTargetPanel = m_RequirementsPanel;
                Widget consSlotWidget = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.LAYOUT_INGREDIENT_SLOT, consTargetPanel);
                
                if (consSlotWidget) {
                    ItemPreviewWidget consPreview = ItemPreviewWidget.Cast(consSlotWidget.FindAnyWidget("IngredientIcon"));
                    TextWidget consCountText = TextWidget.Cast(consSlotWidget.FindAnyWidget("IngredientCount"));
                    
                    // Create entity for preview
                    EntityAI consEnt = EntityAI.Cast(GetGame().CreateObject(mc.consumable, vector.Zero, true));
                    
                    if (consPreview && consEnt) {
                        consPreview.SetItem(consEnt);
                        consPreview.SetModelOrientation(Vector(0, -10, 0));
                        consPreview.SetView(consEnt.GetViewIndex());
                        consPreview.Show(true);
                        m_PreviewEntities.Insert(consEnt);
                    }
                    
                    if (consCountText) {
                        // Show chance if not 100%
                        if (mc.chance < 1.0) {
                            int chancePercent = (int)(mc.chance * 100);
                            consCountText.SetText(consHave.ToString() + "/" + consNeeded.ToString() + " (" + chancePercent.ToString() + "%)");
                        } else {
                            consCountText.SetText(consHave.ToString() + "/" + consNeeded.ToString());
                        }
                        
                        if (consHave >= consNeeded) {
                            consCountText.SetColor(ARGB(255, 100, 255, 100)); // Green
                        } else {
                            consCountText.SetColor(ARGB(255, 255, 100, 100)); // Red
                        }
                    }
                    
                    // Track widget for tooltip
                    m_IngredientWidgets.Insert(consSlotWidget);
                    m_IngredientClassNames.Insert(mc.consumable);
                    
                    string consDisplayName = "";
                    if (consEnt) {
                        consDisplayName = consEnt.GetDisplayName();
                    }
                    // Fallback to classname if empty
                    if (consDisplayName == "") {
                        consDisplayName = mc.consumable;
                    }
                    m_IngredientTooltips.Insert(consDisplayName + " (Consumable)");
                }
            }
        }
        
        // Build exclusion list of all result classnames so the recipe output
        // doesn't appear as a valid input variant when cycling base-class ingredients.
        // Includes all result_items and all variant classnames.
        array<string> resultExcludeClasses = new array<string>();
        if (recipe.result_items) {
            foreach (WB_ResultItem resItem : recipe.result_items) {
                if (resItem && resItem.classname != "") {
                    resultExcludeClasses.Insert(resItem.classname);
                }
            }
        }
        if (recipe.variants) {
            foreach (WB_RecipeVariant variant : recipe.variants) {
                if (variant && variant.classname != "") {
                    resultExcludeClasses.Insert(variant.classname);
                }
            }
        }
        
        // Get all required items including variant-specific extras
        array<ref WB_RecipeItem> all_required = recipe.GetAllRequiredItems(m_SelectedVariantIndex);
        
        // Add required items with previews
        if (all_required && all_required.Count() > 0) {
            WBDebug("[WorkbenchMod] Adding " + all_required.Count().ToString() + " required items (including variant extras)");
            
            foreach (WB_RecipeItem req : all_required) {
                int have = m_Workbench.CountItemForRecipeWithAlts(req);
                // Subtract pending materials to show accurate available count
                int pending = GetPendingMaterialCount(req.classname);
                int available = have - pending;
                if (available < 0) available = 0;
                int resolvedQty = req.quantity;
                if (resolvedQty == -1) {
                    // -1 means "full capacity" — resolve to varQuantityMax
                    resolvedQty = zm_WorkbenchBase.GetClassMaxQuantity(req.classname);
                }
                if (resolvedQty < 1) {
                    resolvedQty = 1;
                }
                
                int needed;
                // Tools are damaged, not consumed - only need 1 present
                bool isToolItem = WorkbenchRecipeManager.IsTool(req.classname);
                if (isToolItem) {
                    needed = resolvedQty;  // Don't multiply by batch size
                    // For tools, count by units not internal quantity (including alternatives)
                    have = m_Workbench.CountItemUnitsForRecipeWithAlts(req);
                    available = have;
                } else {
                    needed = resolvedQty * m_CraftQuantity; // Multiply by craft quantity
                }
                
                Widget slotWidget = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.LAYOUT_INGREDIENT_SLOT, m_RequirementsPanel);
                
                if (slotWidget) {
                    ItemPreviewWidget preview = ItemPreviewWidget.Cast(slotWidget.FindAnyWidget("IngredientIcon"));
                    TextWidget countText = TextWidget.Cast(slotWidget.FindAnyWidget("IngredientCount"));
                    
                    // Create entity for preview and display name lookup
                    EntityAI ent = EntityAI.Cast(GetGame().CreateObject(req.classname, vector.Zero, true));
                    
                    if (preview && ent) {
                        preview.SetItem(ent);
                        preview.SetModelOrientation(Vector(0, -10, 0));
                        preview.SetView(ent.GetViewIndex());
                        preview.Show(true);
                        m_PreviewEntities.Insert(ent);
                        
                        // Even if primary is spawnable, check if alternatives need cycling
                        if (req.HasAlternatives()) {
                            array<string> altCycleClasses = new array<string>();
                            array<int> altCycleQtys = new array<int>();
                            // Add primary class itself
                            altCycleClasses.Insert(req.classname);
                            altCycleQtys.Insert(req.quantity);
                            // Add spawnable children of primary if isbaseclass
                            if (req.isbaseclass) {
                                array<string> primaryChildren = WorkbenchHelpers.GetSpawnableChildClasses(req.classname, resultExcludeClasses);
                                if (primaryChildren) {
                                    foreach (string pc : primaryChildren) {
                                        altCycleClasses.Insert(pc);
                                        altCycleQtys.Insert(req.quantity);
                                    }
                                }
                            }
                            // Add each alternative + its children
                            foreach (WB_AlternativeItem altItem : req.alternatives) {
                                if (!altItem || altItem.classname == "") continue;
                                int altEffQty = altItem.GetEffectiveQuantity(req.quantity);
                                if (altItem.isbaseclass) {
                                    array<string> altChildren = WorkbenchHelpers.GetSpawnableChildClasses(altItem.classname, resultExcludeClasses);
                                    if (altChildren) {
                                        foreach (string ac : altChildren) {
                                            altCycleClasses.Insert(ac);
                                            altCycleQtys.Insert(altEffQty);
                                        }
                                    }
                                } else {
                                    altCycleClasses.Insert(altItem.classname);
                                    altCycleQtys.Insert(altEffQty);
                                }
                            }
                            // Register for cycling if there are multiple entries
                            if (altCycleClasses.Count() > 1) {
                                string altCacheKey = "ALT_" + req.classname;
                                int altStartIdx = 0;
                                if (m_CyclingIndexCache.Contains(altCacheKey)) {
                                    altStartIdx = m_CyclingIndexCache.Get(altCacheKey);
                                    if (altStartIdx >= altCycleClasses.Count()) {
                                        altStartIdx = 0;
                                    }
                                }
                                m_CyclingPreviews.Insert(preview);
                                m_CyclingChildClasses.Insert(altCycleClasses);
                                m_CyclingIndices.Insert(altStartIdx);
                                m_CyclingCurrentEntities.Insert(ent);
                                m_CyclingBaseClassNames.Insert(altCacheKey);
                                m_CyclingTooltipIndices.Insert(m_IngredientTooltips.Count());
                                m_CyclingCountTexts.Insert(countText);
                                m_CyclingRecipeItems.Insert(req);
                                m_CyclingClassQtys.Insert(altCycleQtys);
                                m_CyclingIsCountByItems.Insert(req.IsCountByItems());
                                m_CyclingIndexCache.Set(altCacheKey, altStartIdx);
                                WBDebug("[WorkbenchMenu] Alternative slot '" + req.classname + "' has " + altCycleClasses.Count().ToString() + " variants - cycling enabled");
                            }
                        }
                        // Spawnable item with isbaseclass but no alternatives - check for children to cycle
                        else if (req.isbaseclass) {
                            array<string> baseChildClasses = new array<string>();
                            array<int> baseChildQtys = new array<int>();
                            // Add the primary class itself
                            baseChildClasses.Insert(req.classname);
                            baseChildQtys.Insert(req.quantity);
                            // Add spawnable children
                            array<string> spawnableChildren = WorkbenchHelpers.GetSpawnableChildClasses(req.classname, resultExcludeClasses);
                            if (spawnableChildren) {
                                foreach (string sc : spawnableChildren) {
                                    baseChildClasses.Insert(sc);
                                    baseChildQtys.Insert(req.quantity);
                                }
                            }
                            // Register for cycling if there are children beyond just the primary
                            if (baseChildClasses.Count() > 1) {
                                string baseCacheKey = "BASE_" + req.classname;
                                int baseStartIdx = 0;
                                if (m_CyclingIndexCache.Contains(baseCacheKey)) {
                                    baseStartIdx = m_CyclingIndexCache.Get(baseCacheKey);
                                    if (baseStartIdx >= baseChildClasses.Count()) {
                                        baseStartIdx = 0;
                                    }
                                }
                                m_CyclingPreviews.Insert(preview);
                                m_CyclingChildClasses.Insert(baseChildClasses);
                                m_CyclingIndices.Insert(baseStartIdx);
                                m_CyclingCurrentEntities.Insert(ent);
                                m_CyclingBaseClassNames.Insert(baseCacheKey);
                                m_CyclingTooltipIndices.Insert(m_IngredientTooltips.Count());
                                m_CyclingCountTexts.Insert(countText);
                                m_CyclingRecipeItems.Insert(req);
                                m_CyclingClassQtys.Insert(baseChildQtys);
                                m_CyclingIsCountByItems.Insert(req.IsCountByItems());
                                m_CyclingIndexCache.Set(baseCacheKey, baseStartIdx);
                                WBDebug("[WorkbenchMenu] Isbaseclass slot '" + req.classname + "' has " + baseChildClasses.Count().ToString() + " variants - cycling enabled");
                            }
                        }
                    } else if (preview && !ent) {
                        // Base class or unspawnable - build merged cycling list from primary children + alternatives
                        array<string> mergedClasses = new array<string>();
                        array<int> mergedQtys = new array<int>();
                        
                        // Get children of primary classname
                        array<string> childClasses = WorkbenchHelpers.GetSpawnableChildClasses(req.classname, resultExcludeClasses);
                        if (childClasses) {
                            foreach (string cc : childClasses) {
                                mergedClasses.Insert(cc);
                                mergedQtys.Insert(req.quantity);
                            }
                        }
                        
                        // Add alternative classes and their children
                        if (req.HasAlternatives()) {
                            foreach (WB_AlternativeItem altItem2 : req.alternatives) {
                                if (!altItem2 || altItem2.classname == "") continue;
                                int altEffQty2 = altItem2.GetEffectiveQuantity(req.quantity);
                                if (altItem2.isbaseclass) {
                                    // Add spawnable children of this alternative base class
                                    array<string> altChildren2 = WorkbenchHelpers.GetSpawnableChildClasses(altItem2.classname, resultExcludeClasses);
                                    if (altChildren2) {
                                        foreach (string ac2 : altChildren2) {
                                            mergedClasses.Insert(ac2);
                                            mergedQtys.Insert(altEffQty2);
                                        }
                                    }
                                } else {
                                    // Add the exact alternative classname
                                    mergedClasses.Insert(altItem2.classname);
                                    mergedQtys.Insert(altEffQty2);
                                }
                            }
                        }
                        
                        if (mergedClasses.Count() > 0) {
                            // Resume from cached index if available, otherwise start at 0
                            int startIdx = 0;
                            if (m_CyclingIndexCache.Contains(req.classname)) {
                                startIdx = m_CyclingIndexCache.Get(req.classname);
                                if (startIdx >= mergedClasses.Count()) {
                                    startIdx = 0;
                                }
                            }
                            
                            EntityAI firstChild = EntityAI.Cast(GetGame().CreateObject(mergedClasses[startIdx], vector.Zero, true));
                            if (firstChild) {
                                preview.SetItem(firstChild);
                                preview.SetModelOrientation(Vector(0, -10, 0));
                                preview.SetView(firstChild.GetViewIndex());
                                preview.Show(true);
                                m_PreviewEntities.Insert(firstChild);
                                
                                // Register for cycling if there are multiple entries
                                if (mergedClasses.Count() > 1) {
                                    m_CyclingPreviews.Insert(preview);
                                    m_CyclingChildClasses.Insert(mergedClasses);
                                    m_CyclingIndices.Insert(startIdx);
                                    m_CyclingCurrentEntities.Insert(firstChild);
                                    m_CyclingBaseClassNames.Insert(req.classname);
                                    m_CyclingTooltipIndices.Insert(m_IngredientTooltips.Count());
                                    m_CyclingCountTexts.Insert(countText);
                                    m_CyclingRecipeItems.Insert(req);
                                    m_CyclingClassQtys.Insert(mergedQtys);
                                    m_CyclingIsCountByItems.Insert(req.IsCountByItems());
                                    m_CyclingIndexCache.Set(req.classname, startIdx);
                                    WBDebug("[WorkbenchMenu] Merged class list for '" + req.classname + "' has " + mergedClasses.Count().ToString() + " variants - cycling enabled (resuming at index " + startIdx.ToString() + ")");
                                }
                            }
                        }
                    }
                    
                    if (countText) {
                        // For tools, show durability info from server
                        bool toolEnough = true;
                        if (isToolItem) {
                            int syncedMax = m_Workbench.GetSyncedToolMaxCrafts(m_SelectedRecipeID);
                            if (syncedMax >= 0 && syncedMax < 9999 && available >= needed) {
                                // Server told us how many crafts the tool can survive
                                countText.SetText(available.ToString() + "/" + needed.ToString() + " (" + syncedMax.ToString() + " uses)");
                                if (syncedMax < m_CraftQuantity) {
                                    toolEnough = false;
                                }
                            } else {
                                countText.SetText(available.ToString() + "/" + needed.ToString());
                            }
                        } else {
                            // Check if this slot has a cycling preview registered
                            // If so, show count for the currently displayed cycling item only
                            int cyclingSlotIdx = GetCyclingSlotForCountText(countText);
                            if (cyclingSlotIdx >= 0) {
                                // Show count for the currently displayed cycling class
                                UpdateCyclingCountText(cyclingSlotIdx);
                            } else {
                                // Non-cycling slot — just show primary count
                                countText.SetText(available.ToString() + "/" + needed.ToString());
                            }
                        }
                        
                        // Use slot satisfaction check for coloring (handles per-alt quantities)
                        bool slotSatisfied = false;
                        if (isToolItem) {
                            slotSatisfied = (available >= needed && toolEnough);
                        } else {
                            slotSatisfied = m_Workbench.IsSlotSatisfied(req, m_CraftQuantity);
                        }
                        
                        if (slotSatisfied) {
                            countText.SetColor(ARGB(255, 100, 255, 100)); // Green
                        } else {
                            countText.SetColor(ARGB(255, 255, 100, 100)); // Red
                        }
                    }
                    
                    // Track widget for tooltip - store classname and display name
                    m_IngredientWidgets.Insert(slotWidget);
                    m_IngredientClassNames.Insert(req.classname);
                    string displayName = "";
                    // Priority 1: Use display_name from recipe JSON if set
                    if (req.display_name != "") {
                        displayName = req.display_name;
                    }
                    // Priority 2: Get from entity config
                    if (displayName == "" && ent) {
                        displayName = ent.GetDisplayName();
                    }
                    // Final fallback to classname
                    if (displayName == "") {
                        displayName = req.classname;
                    }
                    m_IngredientTooltips.Insert(displayName);
                }
            }
        }
        
        // Calculate requirements scroll after populating
        CalculateRequirementsScrollMax();

        // Update power cost display based on recipe power_required
        UpdatePowerCostDisplay(recipe);

        // Record what we built so periodic refresh can skip full rebuild
        m_LastBuiltRecipeID = recipe.GetID();
        m_LastBuiltVariantIndex = m_SelectedVariantIndex;
        m_LastBuiltCraftQuantity = m_CraftQuantity;
    };
};