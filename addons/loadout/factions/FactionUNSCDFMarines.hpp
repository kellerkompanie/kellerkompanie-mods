class FactionUNSCDFMarines: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF Marines - U.N. Space Command Defense Force Marines";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Marine_Uniform" };
        Lead[] = { "OPTRE_UNSC_Marine_Uniform_S" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_MAR" };
        Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_MAR" };
        Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_MAR" };
        SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_MAR" };
        FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_MAR" };
        Doctor[] = { "OPTRE_UNSC_M52A_Armor_Corpsman_MAR" };
        Medic[] = { "OPTRE_UNSC_M52A_Armor_Corpsman_MAR" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_MAR" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_MAR" };
    };

    class backpack: backpack {
        Command[] = { "OPTRE_ANPRC_521_Black" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_MAR" };
        Lead[] = { "OPTRE_UNSC_PatrolCap_Marines" };
        Command[] = { "OPTRE_UNSC_PatrolCap_Marines" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_MAR" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_MAR" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_MAR" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_MAR_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_MAR_MED" };
    };
};
