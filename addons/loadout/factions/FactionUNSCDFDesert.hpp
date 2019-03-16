class FactionUNSCDFDesert: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF (Desert) - U.N. Space Command Defense Force (Desert)";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_DES" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_DES" };
        Command[] = { "OPTRE_UNSC_Army_Uniform_S_DES" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_DES" };
        Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
        Command[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
        Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
        SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
        FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
        Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_DES" };
        Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_DES" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_DES" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_DES" };
    };

    class backpack: backpack {
        Command[] = { "OPTRE_ANPRC_521_Black" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_DES" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_DES_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_DES_MED" };
    };
};
