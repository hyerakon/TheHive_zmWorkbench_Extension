class TH_CS_CB_Kit_Locked : TH_CS_CB_KitBox_BASE 
{
    void TH_CS_CB_Kit_Locked() {};

    override protected string GetDeployObjectType()
    {
        return "TH_CS_CB_Bench_Locked";
    };

    string TH_CS_CB_Kit_Holo()
    {
        return GetDeployObjectType();
    };
};
