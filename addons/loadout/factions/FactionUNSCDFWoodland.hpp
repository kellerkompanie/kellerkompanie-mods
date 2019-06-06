class FactionUNSCDFWoodland: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF (Woodland) - U.N. Space Command Defense Force (Woodland)";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_WDL" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_WDL" };
        Command[] = { "OPTRE_UNSC_Army_Uniform_S_WDL" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_WDL" };
        Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_WDL" };
        Command[] = { "OPTRE_UNSC_M52A_Armor_TL_WDL" };
        Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_WDL" };
        SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_WDL" };
        FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_WDL" };
        Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_WDL" };
        Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_WDL" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_WDL" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_WDL" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_WDL" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_WDL_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_WDL_MED" };
    };
};
