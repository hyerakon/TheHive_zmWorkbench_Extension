class TH_RecipeBook_Base: ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTHRBReadRecipeBook);
    }

    THRB_BookEntry THRB_GetEntry()
    {
        return THRB_ConfigManager.Find(GetType());
    }

    override string GetDisplayName()
    {
        THRB_BookEntry entry = THRB_GetEntry();
        if (entry && entry.Title != "")
            return entry.Title;

        return super.GetDisplayName();
    }
};
