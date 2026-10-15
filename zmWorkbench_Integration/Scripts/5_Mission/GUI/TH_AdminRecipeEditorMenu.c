// Editor admin delle ricette: aggiunge le checkbox dei moduli TH.
//
// Approccio ADDITIVO: ogni override chiama prima/dopo il metodo della WorkbenchMod e
// aggiunge solo la parte TH. Layout, schede, griglie e ispettore restano quelli della
// base (AdminRecipeEditor_v7), cosi' gli aggiornamenti della WorkbenchMod arrivano
// senza doverli ricopiare qui.
//
// Le checkbox TH stanno in TH_AdminModuleChecks.layout e vengono inserite nel pannello
// PROPERTIES sotto la riga dei moduli originali; le righe sottostanti scendono di una riga.
// L'elenco dei moduli viene da TH_WB_Modules (3_Game).
modded class AdminRecipeEditorMenu extends UIScriptedMenu
{
    // Altezza (px) della riga aggiunta: le righe sotto i moduli scendono di questo valore
    protected static const float TH_MODULE_ROW_SHIFT = 26;

    // Checkbox TH, stesso ordine di TH_WB_Modules.GetSlots()
    protected ref array<CheckBoxWidget> m_THModuleChecks;
    protected Widget m_THModuleChecksRoot;

    override Widget Init()
    {
        Widget root = super.Init();
        TH_CreateModuleCheckboxes();
        return root;
    }

    // Crea le checkbox TH nello stesso pannello delle checkbox originali
    protected void TH_CreateModuleCheckboxes()
    {
        m_THModuleChecks = new array<CheckBoxWidget>;

        // Il pannello e' il genitore delle checkbox originali (non dipende dal suo nome)
        if (!m_CheckSewing || !m_CheckSewing.GetParent())
        {
            WBDebug("[TH RecipeEditor] CheckSewing non trovato: checkbox TH non create");
            return;
        }
        Widget panel = m_CheckSewing.GetParent();

        // Fa spazio: le righe sotto i moduli (Sound, Preview) scendono di una riga
        array<string> rowsBelow = {"LabelCraftSound", "EditCraftSound", "LabelPreviewClassname", "EditPreviewClassname"};
        foreach (string widgetName : rowsBelow)
        {
            Widget w = panel.FindAnyWidget(widgetName);
            if (w)
            {
                float posX;
                float posY;
                w.GetPos(posX, posY);
                w.SetPos(posX, posY + TH_MODULE_ROW_SHIFT);
            }
        }

        m_THModuleChecksRoot = GetGame().GetWorkspace().CreateWidgets(WorkbenchConstants.TH_LAYOUT_ADMIN_MODULE_CHECKS, panel);
        if (!m_THModuleChecksRoot)
        {
            WBDebug("[TH RecipeEditor] Layout checkbox TH non caricato");
            return;
        }

        // Nome widget nel layout: "TH_Check" + slot con iniziale maiuscola (es. TH_CheckMortarPestle)
        array<string> widgetNames = {"TH_CheckTerminal", "TH_CheckMortarPestle", "TH_CheckMicroscope", "TH_CheckCondenser", "TH_CheckScale", "TH_CheckStill", "TH_CheckStove"};
        array<string> slots = TH_WB_Modules.GetSlots();
        for (int i = 0; i < slots.Count(); i++)
        {
            CheckBoxWidget check = null;
            if (i < widgetNames.Count())
            {
                check = CheckBoxWidget.Cast(m_THModuleChecksRoot.FindAnyWidget(widgetNames.Get(i)));
            }
            // Inserito anche se null, cosi' gli indici restano allineati a GetSlots()
            m_THModuleChecks.Insert(check);
        }
    }

    // true se le checkbox TH esistono (layout caricato)
    protected bool TH_HasModuleCheckboxes()
    {
        if (!m_THModuleChecks)
        {
            return false;
        }
        foreach (CheckBoxWidget check : m_THModuleChecks)
        {
            if (check)
            {
                return true;
            }
        }
        return false;
    }

    override void LoadRecipeToFields(WorkbenchRecipe recipe)
    {
        // Prima le checkbox TH: la base aggiorna l'anteprima leggendo i campi,
        // cosi' la trova gia' coerente con la ricetta caricata
        if (recipe && m_THModuleChecks)
        {
            recipe.EnsureArrays();
            array<string> slots = TH_WB_Modules.GetSlots();
            for (int i = 0; i < m_THModuleChecks.Count(); i++)
            {
                CheckBoxWidget check = m_THModuleChecks.Get(i);
                if (check)
                {
                    check.SetChecked(TH_RecipeHasModule(recipe, slots.Get(i)));
                }
            }
        }

        super.LoadRecipeToFields(recipe);
    }

    // Usato sia da Apply sia dall'anteprima live (BuildLiveRecipe)
    override void WriteFieldsToRecipe(WorkbenchRecipe target)
    {
        // La base svuota required_attachments e lo ricostruisce solo dalle 6 checkbox
        // originali: i moduli TH vanno salvati prima e reinseriti dopo
        array<string> previousTH = new array<string>;
        if (target)
        {
            target.EnsureArrays();
            foreach (string existing : target.required_attachments)
            {
                if (TH_WB_Modules.IsTHSlot(existing))
                {
                    string existingLower = existing;
                    existingLower.ToLower();
                    previousTH.Insert(existingLower);
                }
            }
        }

        super.WriteFieldsToRecipe(target);

        if (!target)
        {
            return;
        }

        // Rimuove eventuali moduli TH rimasti, poi inserisce quelli giusti
        for (int r = target.required_attachments.Count() - 1; r >= 0; r--)
        {
            if (TH_WB_Modules.IsTHSlot(target.required_attachments.Get(r)))
            {
                target.required_attachments.RemoveOrdered(r);
            }
        }

        if (TH_HasModuleCheckboxes())
        {
            // Dalle checkbox TH
            array<string> slots = TH_WB_Modules.GetSlots();
            for (int i = 0; i < m_THModuleChecks.Count(); i++)
            {
                CheckBoxWidget check = m_THModuleChecks.Get(i);
                if (check && check.IsChecked())
                {
                    target.required_attachments.Insert(slots.Get(i));
                }
            }
        }
        else
        {
            // Checkbox TH assenti: non perdere i moduli TH gia' presenti nella ricetta
            foreach (string keep : previousTH)
            {
                target.required_attachments.Insert(keep);
            }
        }
    }

    override void ClearEditFields()
    {
        super.ClearEditFields();

        if (m_THModuleChecks)
        {
            foreach (CheckBoxWidget check : m_THModuleChecks)
            {
                if (check)
                {
                    check.SetChecked(false);
                }
            }
        }
    }

    // true se la ricetta richiede il modulo (confronto senza maiuscole)
    protected bool TH_RecipeHasModule(WorkbenchRecipe recipe, string slotName)
    {
        foreach (string attachment : recipe.required_attachments)
        {
            string attachmentLower = attachment;
            attachmentLower.ToLower();
            if (attachmentLower == slotName)
            {
                return true;
            }
        }
        return false;
    }
};
