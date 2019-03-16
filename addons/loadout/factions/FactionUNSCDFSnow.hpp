class FactionUNSCDFSnow: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF (Snow) - U.N. Space Command Defense Force (Snow)";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_SNO" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_SNO" };
        Command[] = { "OPTRE_UNSC_Army_Uniform_S_SNO" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_SNO" };
        Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
        Command[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
        Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
        SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
        FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
        Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_SNO" };
        Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_SNO" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_SNO" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_SNO" };
    };

    class backpack: backpack {
        Command[] = { "OPTRE_ANPRC_521_Black" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_SNO" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_SNO" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_SNO" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_SNO" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_SNO_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_SNO_MED" };
    };
};
