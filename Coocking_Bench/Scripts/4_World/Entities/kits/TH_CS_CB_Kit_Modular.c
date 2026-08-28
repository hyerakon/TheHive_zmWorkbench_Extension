class TH_CS_CB_Kit_Modular : TH_CS_CB_KitBox_BASE 
{
    
    void TH_CS_CB_Kit_Modular() {};

    override protected string GetDeployObjectType()
    {
        return "TH_CS_CB_Bench_Modular";
    };

    string TH_CS_CB_Kit_Holo()
    {
        return GetDeployObjectType();
    };

};