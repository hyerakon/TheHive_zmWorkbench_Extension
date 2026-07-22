class TheHive_CS_LB_Kit_Modular : TheHive_CS_LB_KitBox_BASE 
{
    
    void TheHive_CS_LB_Kit_Modular() {};

    override protected string GetDeployObjectType()
    {
        return "TheHive_CS_LB_Bench_Modular";
    };

    string TheHive_CS_LB_Kit_Holo()
    {
        return GetDeployObjectType();
    };

};