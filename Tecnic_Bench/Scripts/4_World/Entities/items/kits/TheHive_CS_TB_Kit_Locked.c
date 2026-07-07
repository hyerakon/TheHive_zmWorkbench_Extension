class TheHive_CS_TB_Kit_Locked : TheHive_CS_TB_KitBox_BASE 
{
    void TheHive_CS_TB_Kit_Locked() {};

    override protected string GetDeployObjectType()
    {
        return "TheHive_CS_TB_Bench_Locked";
    };

    string TheHive_CS_TB_Kit_Holo()
    {
        return GetDeployObjectType();
    };
};
