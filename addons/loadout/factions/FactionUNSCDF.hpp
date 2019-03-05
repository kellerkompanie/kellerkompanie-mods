class FactionUNSCDF: FactionBase {
    name = "[Sci-Fi] UNSCDF (Olive) - U.N. Space Command Defense Force (Olive)";
    logisticsHelicopter = "OPTRE_Pelican_unarmed";

    disposableRocketLauncher = OPTRE_M41_SSR;
    antiTankLauncher = OPTRE_M41_SSR;
    antiAirLauncher = OPTRE_M41_SSR_G;

    #include "WeaponsUNSCDF.hpp"

    class uniform: uniform {
        Default[] = { "OPTRE_UNSC_Army_Uniform_OLI" };
        Lead[] = { "OPTRE_UNSC_Army_Uniform_S_OLI" };
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

    class backpack: backpack {
        Lead[] = { "OPTRE_ANPRC_521_Green" };
        Command[] = { "OPTRE_ANPRC_521_Green" };
        Sergeant[] = { "OPTRE_UNSC_Rucksack_Lead" };
        SQL[] = { "OPTRE_UNSC_Rucksack_Lead" };
        FTL[] = { "OPTRE_UNSC_Rucksack_Lead" };
        Doctor[] = { "OPTRE_UNSC_Rucksack_Medic" };
        Medic[] = { "OPTRE_UNSC_Rucksack_Medic" };
        RadioOperator[] = { "OPTRE_ANPRC_521_Green" };
        RiflemanAT[] = { "OPTRE_UNSC_Rucksack_M41" };
        LMG[] = { "OPTRE_UNSC_Rucksack_Heavy" };
        LMGAsst[] = { "OPTRE_UNSC_Rucksack_Heavy" };
        ATSpecialist[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
        ATSpecialistAsst[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
        AASpecialist[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
        AASpecialistAsst[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
        EOD[] = { "OPTRE_UNSC_Rucksack_Heavy" };
        Engineer[] = { "OPTRE_UNSC_Rucksack_Heavy" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        RiflemanAT[] = { { 2, "keko_AntiTankMag" } };
    };

    class helmet: helmet {
        Default[] = { "OPTRE_UNSC_CH252_Helmet_WDL" };
        Lead[] = { "OPTRE_UNSC_PatrolCap_Army" };
        Command[] = { "OPTRE_UNSC_PatrolCap_Army" };
        Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        SQL[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        FTL[] = { "OPTRE_UNSC_CH252_Helmet2_WDL" };
        Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_WDL_MED" };
        Medic[] = { "OPTRE_UNSC_CH252_Helmet2_WDL_MED" };
        Driver[] = { "H_HelmetCrew_B" };
    };

    class primary: primary {
        Default[] = { keko_W_OPTRE_MA37 };
        Lead[] = {  };
        Sergeant[] = { keko_W_OPTRE_BR55HB };
        SQL[] = { keko_W_OPTRE_BR55HB };
        FTL[] = { keko_W_OPTRE_MA37GL };
        Grenadier[] = { keko_W_OPTRE_MA37GL };
        LMG[] = { keko_W_OPTRE_M73 };
        Marksman[] = { keko_W_OPTRE_M392_DMR };
        Driver[] = { keko_W_OPTRE_M7 };
    };

    class secondary: secondary {
        Default[] = { keko_W_OPTRE_M6G };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_OPTRE_M41_SSR };
        ATSpecialist[] = { keko_W_OPTRE_M41_SSR };
        AASpecialist[] = { keko_W_OPTRE_M41_SSR_G };
    };

};
