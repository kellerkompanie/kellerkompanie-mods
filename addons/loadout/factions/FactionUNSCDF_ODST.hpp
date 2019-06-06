class FactionUNSCDF_ODST: FactionUNSCDF {
    name = "[Sci-Fi] UNSCDF (ODST) - U.N. Space Command Defense Force (ODST)";

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_ODST_Uniform" };
    };

    class vest: vest {
        Default[] = { "OPTRE_UNSC_M52D_Armor_Rifleman" };
        Lead[] = { "OPTRE_UNSC_M52D_Armor" };
        Command[] = { "OPTRE_UNSC_M52D_Armor" };
        Doctor[] = { "OPTRE_UNSC_M52D_Armor_Medic" };
        Medic[] = { "OPTRE_UNSC_M52D_Armor_Medic" };
        Marksman[] = { "OPTRE_UNSC_M52D_Armor_Marksman" };
        EOD[] = { "OPTRE_UNSC_M52D_Armor_Demolitions" };
    };

    class backpack: backpack {
        Lead[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
        Command[] = { "OPTRE_ANPRC_521_Black" };
        Sergeant[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
        SQL[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
        FTL[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
        Doctor[] = { "OPTRE_ILCS_Rucksack_Medical" };
        Medic[] = { "OPTRE_ILCS_Rucksack_Medical" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
        RiflemanAT[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        LMG[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        LMGAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        ATSpecialist[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        ATSpecialistAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        AASpecialist[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        AASpecialistAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        EOD[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        Engineer[] = { "OPTRE_ILCS_Rucksack_Heavy" };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252D_Helmet" };
    };

    class primary: primary {
        Default[] = { keko_W_OPTRE_MA37 };
        Sergeant[] = { keko_W_OPTRE_BR55HB };
        SQL[] = { keko_W_OPTRE_BR55HB };
        FTL[] = { keko_W_OPTRE_MA37GL };
        Grenadier[] = { keko_W_OPTRE_MA37GL };
        LMG[] = { keko_W_OPTRE_M73 };
        Marksman[] = { keko_W_OPTRE_M392_DMR };
    };

    class secondary: secondary {
        Default[] = { keko_W_OPTRE_M6G };
    };
};
