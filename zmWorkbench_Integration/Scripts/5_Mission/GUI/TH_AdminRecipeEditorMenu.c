
modded class AdminRecipeEditorMenu extends UIScriptedMenu
{
    private CheckBoxWidget m_CheckTerminal;
    private CheckBoxWidget m_CheckWaveGenerator;
    private CheckBoxWidget m_CheckMortarPestle;

    override Widget Init()
    {
        layoutRoot = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.TH_LAYOUT_ADMIN_RECIPE_EDITOR);
        
        // Get buttons
        m_CloseButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("CloseButton"));
        m_CloseButtonBg = ImageWidget.Cast(layoutRoot.FindAnyWidget("CloseButtonBg"));
        m_CloseButtonText = TextWidget.Cast(layoutRoot.FindAnyWidget("CloseButtonText"));
        // Set initial close button colors (white bg, black text)
        if (m_CloseButtonBg)
        {
            m_CloseButtonBg.SetColor(ARGB(217, 255, 255, 255));
        }
        if (m_CloseButtonText)
        {
            m_CloseButtonText.SetColor(ARGB(255, 0, 0, 0));
        }
        m_NewRecipeButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("NewRecipeButton"));
        m_DuplicateButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("DuplicateButton"));
        m_DeleteButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("DeleteButton"));
        m_ApplyButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("ApplyButton"));
        m_RevertButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("RevertButton"));
        m_SaveAllButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("SaveAllButton"));
        m_ReloadButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("ReloadButton"));
        
        // Get recipe list / filter widgets
        m_RecipeScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("RecipeScroll"));
        m_RecipeList = TextListboxWidget.Cast(layoutRoot.FindAnyWidget("RecipeList"));
        // Produced-item preview widgets shown below the recipe list
        m_RecipePreview = ItemPreviewWidget.Cast(layoutRoot.FindAnyWidget("RecipePreview"));
        m_RecipePreviewLabel = TextWidget.Cast(layoutRoot.FindAnyWidget("RecipePreviewLabel"));
        m_SearchBox = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("SearchBox"));
        m_SearchHint = TextWidget.Cast(layoutRoot.FindAnyWidget("SearchHint"));
        m_CategoryFilter = XComboBoxWidget.Cast(layoutRoot.FindAnyWidget("CategoryFilter"));
        m_SubcategoryFilter = XComboBoxWidget.Cast(layoutRoot.FindAnyWidget("SubcategoryFilter"));
        
        // Scrollbar widgets
        m_ScrollbarTrack = layoutRoot.FindAnyWidget("RecipeScrollbarTrack");
        m_ScrollbarThumb = layoutRoot.FindAnyWidget("RecipeScrollbarThumb");
        
        // Get edit fields
        m_EditID = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditID"));
        m_EditDisplayName = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditDisplayName"));
        m_EditCategory = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditCategory"));
        m_EditSubcategory = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditSubcategory"));
        m_EditDescription = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditDescription"));
        m_EditCraftTime = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditCraftTime"));
        m_EditPower = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditPower"));
        m_CheckDrillpress = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckDrillpress"));
        m_CheckGrinder = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckGrinder"));
        m_CheckVice = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckVice"));
        m_CheckSoldering = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckSoldering"));
        m_CheckWelding = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckWelding"));
        m_CheckSewing = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckSewing"));
        m_EditCraftSound = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditCraftSound"));
        m_EditPreviewClassname = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditPreviewClassname"));
        m_CheckAllowPublic = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckAllowPublic"));
        m_CheckAutoVariants = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckAutoVariants"));
        m_EditExcludeVariants = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditExcludeVariants"));
        m_RequiredItemsGrid = GridSpacerWidget.Cast(layoutRoot.FindAnyWidget("RequiredItemsGrid"));
        m_ResultItemsGrid = GridSpacerWidget.Cast(layoutRoot.FindAnyWidget("ResultItemsGrid"));
        m_VariantItemsGrid = GridSpacerWidget.Cast(layoutRoot.FindAnyWidget("VariantItemsGrid"));
        m_StatusText = TextWidget.Cast(layoutRoot.FindAnyWidget("StatusText"));

        // TH Get Edit Fields for additional modules
        m_CheckTerminal = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckTerminal"));
        m_CheckWaveGenerator = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckWaveGenerator"));
        m_CheckMortarPestle = CheckBoxWidget.Cast(layoutRoot.FindAnyWidget("CheckMortarPestle"));
        
        // Inner scroll widgets for item sections
        m_RequiredItemsScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("RequiredItemsScroll"));
        m_ResultItemsScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("ResultItemsScroll"));
        m_VariantItemsScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("VariantItemsScroll"));
        
        // Alternatives section widgets
        m_AltsSectionTitle = TextWidget.Cast(layoutRoot.FindAnyWidget("SectionAltsTitle"));
        m_AltsScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("AltsScroll"));
        m_AltsGrid = GridSpacerWidget.Cast(layoutRoot.FindAnyWidget("AltsGrid"));
        m_AltRemoveAllBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AltRemoveAllBtn"));
        m_AltHintText = TextWidget.Cast(layoutRoot.FindAnyWidget("AltHintText"));
        
        // Variant extra items section widgets
        m_VariantExtrasSectionTitle = TextWidget.Cast(layoutRoot.FindAnyWidget("SectionVariantExtrasTitle"));
        m_VariantExtrasScroll = ScrollWidget.Cast(layoutRoot.FindAnyWidget("VariantExtrasScroll"));
        m_VariantExtrasGrid = GridSpacerWidget.Cast(layoutRoot.FindAnyWidget("VariantExtrasGrid"));
        m_VariantExtrasClearBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("VariantExtrasClearBtn"));
        m_VariantExtrasHint = TextWidget.Cast(layoutRoot.FindAnyWidget("VariantExtrasHint"));
        m_VariantPreviewLabel = TextWidget.Cast(layoutRoot.FindAnyWidget("VariantPreviewLabel"));
        m_EditVariantPreviewClassname = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditVariantPreviewClassname"));
        m_SetVariantPreviewBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("SetVariantPreviewBtn"));
        
        // Get item picker widgets (always visible in right panel)
        m_PickerSearchBox = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("PickerSearchBox"));
        m_PickerSearchHint = TextWidget.Cast(layoutRoot.FindAnyWidget("PickerSearchHint"));
        m_PickerItemList = TextListboxWidget.Cast(layoutRoot.FindAnyWidget("PickerItemList"));
        m_PickerTabItems = ButtonWidget.Cast(layoutRoot.FindAnyWidget("PickerTabItems"));
        m_PickerTabBase = ButtonWidget.Cast(layoutRoot.FindAnyWidget("PickerTabBase"));
        m_PickerItemCount = TextWidget.Cast(layoutRoot.FindAnyWidget("PickerItemCount"));
        m_PickerQuantityBox = EditBoxWidget.Cast(layoutRoot.FindAnyWidget("PickerQuantityBox"));
        m_SelectedItemText = TextWidget.Cast(layoutRoot.FindAnyWidget("SelectedItemText"));
        m_ItemDescriptionText = MultilineTextWidget.Cast(layoutRoot.FindAnyWidget("ItemDescriptionText"));
        m_AddToRequiredBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddToRequiredBtn"));
        m_AddToResultBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddToResultBtn"));
        m_AddToVariantBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddToVariantBtn"));
        m_AddAsAlternativeBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddAsAlternativeBtn"));
        m_AddAsExtraItemBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddAsExtraItemBtn"));
        m_SetPreviewBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("SetPreviewBtn"));
        m_AddToBlacklistBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddToBlacklistBtn"));
        m_CacheItemsBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("CacheItemsBtn"));
        m_PickerItemPreview = ItemPreviewWidget.Cast(layoutRoot.FindAnyWidget("PickerItemPreview"));
        
        // Items now load automatically when the menu opens (see OnShow), so the old
        // "Load All Items" button is no longer needed. Hide it if it still exists.
        if (m_CacheItemsBtn)
        {
            m_CacheItemsBtn.Show(false);
        }
        
        // Bind and populate the item picker category dropdown. Rows are added in the
        // exact order of the WB_PICKER_CAT_* constants so the selected index == category id.
        m_PickerCategoryFilter = XComboBoxWidget.Cast(layoutRoot.FindAnyWidget("PickerCategoryFilter"));
        if (m_PickerCategoryFilter)
        {
            m_PickerCategoryFilter.ClearAll();
            m_PickerCategoryFilter.AddItem("All Categories");   // WB_PICKER_CAT_ALL
            m_PickerCategoryFilter.AddItem("Food & Drink");     // WB_PICKER_CAT_FOOD
            m_PickerCategoryFilter.AddItem("Vehicles");         // WB_PICKER_CAT_VEHICLES
            m_PickerCategoryFilter.AddItem("Weapons");          // WB_PICKER_CAT_WEAPONS
            m_PickerCategoryFilter.AddItem("Clothing");         // WB_PICKER_CAT_CLOTHING
            m_PickerCategoryFilter.SetCurrentItem(WB_PICKER_CAT_ALL);
            m_PickerLastCategoryIndex = WB_PICKER_CAT_ALL;
        }
        
        // Old buttons that might still exist in some sections
        m_AddRequiredItemBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddRequiredItemBtn"));
        m_AddResultItemBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddResultItemBtn"));
        m_AddVariantItemBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget("AddVariantItemBtn"));
        
        // Build category filter
        BuildCategoryFilters();
        
        // Debug: Verify widgets were found
        WBDebug("[RecipeEditor] Init - m_CategoryFilter found: " + (m_CategoryFilter != null).ToString());
        WBDebug("[RecipeEditor] Init - m_SubcategoryFilter found: " + (m_SubcategoryFilter != null).ToString());
        
        // Populate recipe list
        PopulateRecipeList();
        
        SetStatus("Ready - Select a recipe to edit.");
        
        layoutRoot.Show(true);
        return layoutRoot;
    }

    override void LoadRecipeToFields(WorkbenchRecipe recipe)
    {
        if (!recipe)
        {
            return;
        }
        
        // Basic fields
        if (m_EditID)
        {
            m_EditID.SetText(recipe.id.ToString());
        }
        if (m_EditDisplayName)
        {
            m_EditDisplayName.SetText(recipe.display_name);
        }
        if (m_EditCategory)
        {
            m_EditCategory.SetText(recipe.category);
        }
        if (m_EditSubcategory)
        {
            m_EditSubcategory.SetText(recipe.subcategory);
        }
        if (m_EditDescription)
        {
            m_EditDescription.SetText(recipe.description);
        }
        if (m_EditCraftTime)
        {
            m_EditCraftTime.SetText(recipe.craft_time.ToString());
        }
        if (m_EditPower)
        {
            m_EditPower.SetText(recipe.power_required.ToString());
        }
        if (m_EditCraftSound)
        {
            m_EditCraftSound.SetText(recipe.craft_sound);
        }
        if (m_EditPreviewClassname)
        {
            m_EditPreviewClassname.SetText(recipe.preview_classname);
        }
        if (m_CheckAllowPublic)
        {
            m_CheckAllowPublic.SetChecked(recipe.allow_public);
        }
        
        // Load required attachments into module checkboxes
        recipe.EnsureArrays();
        if (m_CheckDrillpress) m_CheckDrillpress.SetChecked(recipe.required_attachments.Find("drillpress") >= 0);
        if (m_CheckGrinder) m_CheckGrinder.SetChecked(recipe.required_attachments.Find("grinder") >= 0);
        if (m_CheckVice) m_CheckVice.SetChecked(recipe.required_attachments.Find("vice") >= 0);
        if (m_CheckSoldering) m_CheckSoldering.SetChecked(recipe.required_attachments.Find("soldering") >= 0);
        if (m_CheckWelding) m_CheckWelding.SetChecked(recipe.required_attachments.Find("welding") >= 0);
        if (m_CheckSewing) m_CheckSewing.SetChecked(recipe.required_attachments.Find("sewing") >= 0);
        
        // Load TH modules into checkboxes
        if (m_CheckTerminal) m_CheckTerminal.SetChecked(recipe.required_attachments.Find("terminal") >= 0);
        if (m_CheckWaveGenerator) m_CheckWaveGenerator.SetChecked(recipe.required_attachments.Find("wavegenerator") >= 0);
        if (m_CheckMortarPestle) m_CheckMortarPestle.SetChecked(recipe.required_attachments.Find("mortarpestle") >= 0);

        // Required items - populate grid with slot widgets
        ClearRequiredItemSlots();
        if (m_RequiredItemsGrid)
        {
            recipe.EnsureArrays();
            foreach (WB_RecipeItem req : recipe.required_items)
            {
                // Determine isbaseclass string
                string isBaseStr = "0";
                if (req.isbaseclass)
                {
                    isBaseStr = "1";
                }
                
                // Build alternatives string for the slot (ALT:class:isbase:qty,class:isbase:qty,...)
                string altsStr = "";
                if (req.HasAlternatives()) {
                    altsStr = "ALT:";
                    for (int ai = 0; ai < req.alternatives.Count(); ai++) {
                        WB_AlternativeItem alt = req.alternatives[ai];
                        if (!alt) continue;
                        if (ai > 0) {
                            altsStr += ",";
                        }
                        string altIsBaseStr = "0";
                        if (alt.isbaseclass) {
                            altIsBaseStr = "1";
                        }
                        altsStr += alt.classname + ":" + altIsBaseStr + ":" + alt.quantity.ToString();
                    }
                }
                AddRequiredItemSlot(req.classname, req.quantity, req.display_name, req.count_mode, isBaseStr, altsStr);
            }
        }
        
        // Result items - populate grid with slot widgets
        ClearResultItemSlots();
        if (m_ResultItemsGrid)
        {
            recipe.EnsureArrays();
            foreach (WB_ResultItem res : recipe.result_items)
            {
                AddResultItemSlot(res.classname, res.quantity, res.display_name, res.count_mode);
            }
        }
        
        // Auto-variants
        if (m_CheckAutoVariants)
        {
            m_CheckAutoVariants.SetChecked(recipe.auto_variants);
        }
        
        // Exclude variants (comma-separated)
        if (m_EditExcludeVariants)
        {
            string excludes = "";
            recipe.EnsureArrays();
            if (recipe.exclude_variants)
            {
                for (int e = 0; e < recipe.exclude_variants.Count(); e++)
                {
                    if (e > 0)
                    {
                        excludes += ",";
                    }
                    excludes += recipe.exclude_variants.Get(e);
                }
            }
            m_EditExcludeVariants.SetText(excludes);
        }
        
        // Manual variants - populate grid with slot widgets (same pattern as Required/Result)
        ClearVariantItemSlots();
        if (m_VariantItemsGrid)
        {
            recipe.EnsureArrays();
            foreach (WB_RecipeVariant var : recipe.variants)
            {
                // Build extra items string for display: ";extraClass,qty,name;..."
                string extraStr = "";
                if (var.extra_items)
                {
                    foreach (WB_RecipeItem extra : var.extra_items)
                    {
                        if (extra.classname != "")
                        {
                            extraStr += ";" + extra.classname + "," + extra.quantity.ToString() + "," + extra.display_name;
                        }
                    }
                }
                AddVariantItemSlot(var.classname, var.preview_classname, extraStr);
            }
        }
    }

    override void ApplyChanges()
    {
        if (!m_SelectedRecipe)
        {
            SetStatus("No recipe selected");
            return;
        }
        
        // The server can push a fresh recipe list to this client at any time.
        // RPCSyncWorkbenchRecipes (MissionGameplay) clears the manager's recipes
        // array and re-inserts newly deserialized recipe objects - this happens
        // on the initial config sync and again right after a "Save All". When
        // that sync arrives while the editor is open, our cached m_SelectedRecipe
        // is left pointing at an orphaned object that is no longer in the manager.
        // Applying to that orphan writes the edit to an object that is never
        // displayed or saved, so the change appears to "disappear" on the first
        // Apply and only sticks on the second (once the reselect below rebinds
        // the reference). Re-bind to the live object in the manager (matched by
        // ID) before applying so every edit lands on the recipe that is actually
        // in the list. All edited values are read from the UI widgets/slots
        // below, so writing them to the correct live object is safe.
        WorkbenchRecipeManager bindManager = GetWorkbenchRecipeManager();
        if (bindManager && bindManager.recipes)
        {
            int liveIdx = bindManager.recipes.Find(m_SelectedRecipe);
            if (liveIdx < 0)
            {
                // Cached reference was orphaned by a server sync - rebind by ID
                int rebindIdx = FindRecipeIndexById(m_SelectedRecipe.id);
                if (rebindIdx >= 0)
                {
                    m_SelectedRecipe = bindManager.recipes.Get(rebindIdx);
                    m_SelectedRecipeIndex = rebindIdx;
                }
            }
            else
            {
                // Keep the tracked index in sync with the live array position
                m_SelectedRecipeIndex = liveIdx;
            }
        }
        
        m_SelectedRecipe.EnsureArrays();
        
        // Basic fields
        if (m_EditID)
        {
            m_SelectedRecipe.id = m_EditID.GetText().ToInt();
        }
        if (m_EditDisplayName)
        {
            m_SelectedRecipe.display_name = m_EditDisplayName.GetText();
        }
        if (m_EditCategory)
        {
            m_SelectedRecipe.category = m_EditCategory.GetText();
        }
        if (m_EditSubcategory)
        {
            m_SelectedRecipe.subcategory = m_EditSubcategory.GetText();
        }
        if (m_EditDescription)
        {
            m_SelectedRecipe.description = m_EditDescription.GetText();
        }
        if (m_EditCraftTime)
        {
            m_SelectedRecipe.craft_time = m_EditCraftTime.GetText().ToFloat();
        }
        if (m_EditPower)
        {
            m_SelectedRecipe.power_required = m_EditPower.GetText().ToFloat();
        }
        if (m_EditCraftSound)
        {
            m_SelectedRecipe.craft_sound = m_EditCraftSound.GetText();
        }
        if (m_EditPreviewClassname)
        {
            m_SelectedRecipe.preview_classname = m_EditPreviewClassname.GetText();
        }
        if (m_CheckAllowPublic)
        {
            m_SelectedRecipe.allow_public = m_CheckAllowPublic.IsChecked();
        }
        
        // Build required attachments from module checkboxes
        m_SelectedRecipe.required_attachments.Clear();
        if (m_CheckDrillpress && m_CheckDrillpress.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("drillpress");
        }
        if (m_CheckGrinder && m_CheckGrinder.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("grinder");
        }
        if (m_CheckVice && m_CheckVice.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("vice");
        }
        if (m_CheckSoldering && m_CheckSoldering.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("soldering");
        }
        if (m_CheckWelding && m_CheckWelding.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("welding");
        }
        if (m_CheckSewing && m_CheckSewing.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("sewing");
        }

        // TH modules
        if (m_CheckTerminal && m_CheckTerminal.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("terminal");
        }
        if (m_CheckWaveGenerator && m_CheckWaveGenerator.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("wavegenerator");
        }
        if (m_CheckMortarPestle && m_CheckMortarPestle.IsChecked())
        {
            m_SelectedRecipe.required_attachments.Insert("mortarpestle");
        }
        
        // Collect required items from slot widgets
        m_SelectedRecipe.required_items.Clear();
        if (m_RequiredItemSlots)
        {
            foreach (Widget reqSlot : m_RequiredItemSlots)
            {
                if (reqSlot)
                {
                    WB_RecipeItem reqItem = ReadItemSlotData(reqSlot, false);
                    if (reqItem && reqItem.classname != "")
                    {
                        m_SelectedRecipe.required_items.Insert(reqItem);
                    }
                }
            }
        }
        
        // Collect result items from slot widgets
        m_SelectedRecipe.result_items.Clear();
        if (m_ResultItemSlots)
        {
            foreach (Widget resSlot : m_ResultItemSlots)
            {
                if (resSlot)
                {
                    WB_RecipeItem tempItem = ReadItemSlotData(resSlot, true);
                    if (tempItem && tempItem.classname != "")
                    {
                        WB_ResultItem resItem = new WB_ResultItem();
                        resItem.classname = tempItem.classname;
                        resItem.quantity = tempItem.quantity;
                        resItem.display_name = tempItem.display_name;
                        resItem.count_mode = tempItem.count_mode;
                        m_SelectedRecipe.result_items.Insert(resItem);
                    }
                }
            }
        }
        
        // Auto-variants
        if (m_CheckAutoVariants)
        {
            m_SelectedRecipe.auto_variants = m_CheckAutoVariants.IsChecked();
        }
        
        // Parse exclude variants (comma-separated)
        if (m_EditExcludeVariants)
        {
            if (!m_SelectedRecipe.exclude_variants)
            {
                m_SelectedRecipe.exclude_variants = new array<string>;
            }
            m_SelectedRecipe.exclude_variants.Clear();
            
            string exclText = m_EditExcludeVariants.GetText();
            if (exclText != "")
            {
                array<string> exclParts = new array<string>;
                exclText.Split(",", exclParts);
                foreach (string excl : exclParts)
                {
                    excl.Trim();
                    if (excl != "")
                    {
                        m_SelectedRecipe.exclude_variants.Insert(excl);
                    }
                }
            }
        }
        
        // Parse variants from slot widgets
        m_SelectedRecipe.variants.Clear();
        if (m_VariantItemSlots)
        {
            foreach (Widget varSlot : m_VariantItemSlots)
            {
                if (!varSlot)
                {
                    continue;
                }
                
                // Widget name format: "VAR_classname|extraStr"
                string varSlotName = varSlot.GetName();
                if (varSlotName.IndexOf("VAR_") != 0)
                {
                    continue;
                }
                
                // Strip the "VAR_" prefix
                string varData = varSlotName.Substring(4, varSlotName.Length() - 4);
                
                // Split into three fields: classname|preview_classname|extra items string
                int firstPipe = varData.IndexOf("|");
                int secondPipe = -1;
                if (firstPipe >= 0)
                {
                    // Search for second pipe after the first one
                    string afterFirst = varData.Substring(firstPipe + 1, varData.Length() - firstPipe - 1);
                    int relativeSecondPipe = afterFirst.IndexOf("|");
                    if (relativeSecondPipe >= 0)
                    {
                        secondPipe = firstPipe + 1 + relativeSecondPipe;
                    }
                }
                
                string varClassName;
                string varPreviewClass;
                string varExtraStr;
                
                if (firstPipe >= 0 && secondPipe >= 0)
                {
                    // New format with preview_classname: "classname|preview_classname|extraStr"
                    varClassName = varData.Substring(0, firstPipe);
                    varPreviewClass = varData.Substring(firstPipe + 1, secondPipe - firstPipe - 1);
                    varExtraStr = varData.Substring(secondPipe + 1, varData.Length() - secondPipe - 1);
                }
                else if (firstPipe >= 0)
                {
                    // Old format without preview_classname: "classname|extraStr" (for backwards compatibility)
                    varClassName = varData.Substring(0, firstPipe);
                    varPreviewClass = "";
                    varExtraStr = varData.Substring(firstPipe + 1, varData.Length() - firstPipe - 1);
                }
                else
                {
                    // No pipes: just classname
                    varClassName = varData;
                    varPreviewClass = "";
                    varExtraStr = "";
                }
                
                varClassName.Trim();
                if (varClassName == "")
                {
                    continue;
                }
                
                WB_RecipeVariant variant = new WB_RecipeVariant();
                variant.classname = varClassName;
                variant.preview_classname = varPreviewClass;
                variant.extra_items = new array<ref WB_RecipeItem>;
                
                // Parse extra items from the stored string: ";class,qty,name;class,qty,name"
                if (varExtraStr != "")
                {
                    array<string> varSections = new array<string>;
                    varExtraStr.Split(";", varSections);
                    foreach (string varSec : varSections)
                    {
                        varSec.Trim();
                        if (varSec == "")
                        {
                            continue;
                        }
                        array<string> extraParts = new array<string>;
                        varSec.Split(",", extraParts);
                        if (extraParts.Count() >= 2)
                        {
                            WB_RecipeItem extra = new WB_RecipeItem();
                            extra.classname = extraParts.Get(0);
                            extra.classname.Trim();
                            extra.quantity = extraParts.Get(1).ToInt();
                            if (extraParts.Count() >= 3)
                            {
                                extra.display_name = extraParts.Get(2);
                                extra.display_name.Trim();
                            }
                            variant.extra_items.Insert(extra);
                        }
                    }
                }
                
                m_SelectedRecipe.variants.Insert(variant);
            }
        }
        
        // Store the recipe ID and new category for re-selection after list refresh
        int recipeId = m_SelectedRecipe.id;
        string newCategory = m_SelectedRecipe.category;
        
        // If the user changed the ID, reposition this recipe in the array
        // so it sits next to its ID neighbours (e.g. 206 goes right after 205).
        // Recipes whose ID was NOT changed stay exactly where they are.
        WorkbenchRecipeManager applyManager = GetWorkbenchRecipeManager();
        if (applyManager)
        {
            RepositionRecipeByID(applyManager, m_SelectedRecipe);
        }
        
        m_HasUnsavedChanges = true;
        
        // Rebuild category filters in case category was changed
        BuildCategoryFilters();
        
        // Select the new category in the filter so the recipe remains visible
        // This handles the case when user creates a new category
        if (m_CategoryFilter && newCategory != "")
        {
            for (int filterIdx = 0; filterIdx < m_Categories.Count(); filterIdx++)
            {
                if (m_Categories.Get(filterIdx) == newCategory)
                {
                    m_CategoryFilter.SetCurrentItem(filterIdx);
                    break;
                }
            }
        }
        
        PopulateRecipeList();
        
        // Re-select the same recipe by ID
        int newIndex = FindRecipeIndexById(recipeId);
        if (newIndex >= 0)
        {
            SelectRecipe(newIndex);
        }
        
        SetStatus("Applied changes to: " + m_SelectedRecipe.display_name + " (unsaved)");
    }

    override void ClearEditFields()
    {
        if (m_EditID) m_EditID.SetText("");
        if (m_EditDisplayName) m_EditDisplayName.SetText("");
        if (m_EditCategory) m_EditCategory.SetText("");
        if (m_EditSubcategory) m_EditSubcategory.SetText("");
        if (m_EditDescription) m_EditDescription.SetText("");
        if (m_EditCraftTime) m_EditCraftTime.SetText("");
        if (m_EditPower) m_EditPower.SetText("");
        if (m_EditCraftSound) m_EditCraftSound.SetText("");
        if (m_EditPreviewClassname) m_EditPreviewClassname.SetText("");
        if (m_CheckDrillpress) m_CheckDrillpress.SetChecked(false);
        if (m_CheckGrinder) m_CheckGrinder.SetChecked(false);
        if (m_CheckVice) m_CheckVice.SetChecked(false);
        if (m_CheckSoldering) m_CheckSoldering.SetChecked(false);
        if (m_CheckWelding) m_CheckWelding.SetChecked(false);
        if (m_CheckSewing) m_CheckSewing.SetChecked(false);
        if (m_CheckAllowPublic) m_CheckAllowPublic.SetChecked(false);
        if (m_CheckAutoVariants) m_CheckAutoVariants.SetChecked(false);
        if (m_EditExcludeVariants) m_EditExcludeVariants.SetText("");

        // TH module checkboxes
        if (m_CheckTerminal) m_CheckTerminal.SetChecked(false);
        if (m_CheckWaveGenerator) m_CheckWaveGenerator.SetChecked(false);
        if (m_CheckMortarPestle) m_CheckMortarPestle.SetChecked(false);


        ClearRequiredItemSlots();
        ClearResultItemSlots();
        ClearVariantItemSlots();
        // No recipe selected - clear the produced-item preview
        UpdateRecipePreview(null);
    }
}