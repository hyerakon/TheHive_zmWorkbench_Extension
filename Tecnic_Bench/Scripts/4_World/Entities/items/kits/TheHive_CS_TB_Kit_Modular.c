class TheHive_CS_TB_Kit_Modular : TheHive_CS_TB_KitBox_BASE 
{
    
    void TheHive_CS_TB_Kit_Modular() {};

    override protected string GetDeployObjectType()
    {
        return "TheHive_CS_TB_Bench_Modular";
    };

    string TheHive_CS_TB_Kit_Holo()
    {
        return GetDeployObjectType();
    };

};