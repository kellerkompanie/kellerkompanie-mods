class FactionUNSCDFUrban: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF (Urban) - U.N. Space Command Defense Force (Urban)";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_URB" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_URB" };
        Command[] = { "OPTRE_UNSC_Army_Uniform_S_URB" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_URB" };
        Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_URB" };
        Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_URB" };
        SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_URB" };
        FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_URB" };
        Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_URB" };
        Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_URB" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_URB" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_URB" };
    };

    class backpack: backpack {
        Command[] = { "OPTRE_ANPRC_521_Black" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_URB" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_URB" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_URB" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_URB" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_URB_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_URB_MED" };
    };
};
