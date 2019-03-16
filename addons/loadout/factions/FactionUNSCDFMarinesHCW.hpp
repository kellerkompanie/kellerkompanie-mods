class FactionUNSCDFMarinesHCW: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF Marines HCW - U.N. Space Command Defense Force Marines HCW";

    class uniform: uniform {
        Default[] = { "OPTRE_FC_Marines_Uniform" };
        Lead[] = { "OPTRE_FC_Marines_Uniform_L" };
        Command[] = { "OPTRE_FC_Marines_Uniform_L" };
    };

    class vest: vest {
        Default[] = { "OPTRE_FC_Marines_Vest" };
        Lead[] = { "OPTRE_FC_Marines_Vest_L" };
        Command[] = { "OPTRE_FC_Marines_Vest_L" };
        Sergeant[] = { "OPTRE_FC_Marines_Vest" };
        SQL[] = { "OPTRE_FC_Marines_Vest" };
        LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_MAR" };
        Driver[] = { "OPTRE_UNSC_M52A_Armor3_MAR" };
    };

    class backpack: backpack {
        Command[] = { "OPTRE_ANPRC_521_Black" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_FC_Marines_Helmet" };
        Lead[] = { "OPTRE_UNSC_PatrolCap_Marines" };
        Command[] = { "OPTRE_UNSC_PatrolCap_Marines" };
        Sergeant[] = { "OPTRE_FC_Marines_Helmet" };
        SQL[] = { "OPTRE_FC_Marines_Helmet" };
        Doctor[] = { "OPTRE_FC_Marines_Helmet_Medic" };
        Medic[] = { "OPTRE_FC_Marines_Helmet_Medic" };
    };
};
