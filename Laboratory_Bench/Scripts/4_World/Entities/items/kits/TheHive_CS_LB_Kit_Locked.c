class TH_CS_LB_Kit_Locked : TH_CS_LB_KitBox_BASE 
{
    void TH_CS_LB_Kit_Locked() {};

    override protected string GetDeployObjectType()
    {
        return "TH_CS_LB_Bench_Locked";
    };

    string TH_CS_LB_Kit_Holo()
    {
        return GetDeployObjectType();
    };
};
