class FactionRussiaEMRSummer: FactionBase {
    name = "[Main] Russia EMR (Summer)";
    logisticsHelicopter = "RHS_Mi8mt_Cargo_vdv";

    disposableRocketLauncher = rhs_weap_rpg26;
    antiTankLauncher = rhs_weap_rpg7;
    antiAirLauncher = rhs_weap_igla;

    #include "WeaponsRussiaEMR.hpp"

    class uniform: uniform {
        Default[] = { "rhs_uniform_emr_patchless" };
        HeliPilot[] = { "rhs_uniform_df15" };
    };

    class vest: vest {
        Default[] = {
                "rhs_6b23_6sh116",
                "rhs_6b23_digi_6sh92",
                "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
                "rhs_6b23_digi_6sh92_radio",
                "rhs_6b23_digi_6sh92_spetsnaz2"
            };
        Lead[] = { "rhs_6b23_digi_6sh92_headset_mapcase" };
        Command[] = { "rhs_6b23_digi_6sh92_headset_mapcase" };
        Sergeant[] = { "rhs_6b23_digi_6sh92_headset" };
        SQL[] = { "rhs_6b23_digi_6sh92_headset" };
        FTL[] = { "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_6sh116_vog" };
        Doctor[] = { "rhs_6b23_digi_medic" };
        Medic[] = { "rhs_6b23_digi_medic" };
        Grenadier[] = { "rhs_6b23_digi_6sh92_vog", "rhs_6b23_6sh116_vog" };
        Marksman[] = { "rhs_6b23_digi_sniper" };
        EOD[] = { "rhs_6b23_digi_engineer" };
        Engineer[] = { "rhs_6b23_digi_engineer" };
        Driver[] = { "rhs_vest_pistol_holster" };
        HeliPilot[] = { "rhs_vest_pistol_holster" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_green" };
        Command[] = { "TFAR_rt1523g_green" };
        Sergeant[] = { "TFAR_rt1523g_green" };
        SQL[] = { "TFAR_rt1523g_green" };
        Doctor[] = { "rhssaf_kitbag_smb" };
        Medic[] = { "rhssaf_kitbag_smb" };
        LMG[] = { "rhs_assault_umbts" };
        LMGAsst[] = { "rhs_assault_umbts" };
        MMG[] = { "rhs_assault_umbts" };
        MMGAsst[] = { "rhs_assault_umbts" };
        ATSpecialist[] = { "rhs_rpg_empty" };
        ATSpecialistAsst[] = { "rhs_rpg_empty" };
        AASpecialist[] = { "rhs_rpg_empty" };
        AASpecialistAsst[] = { "rhs_rpg_empty" };
        EOD[] = { "B_Carryall_oli" };
        Engineer[] = { "B_Carryall_oli" };
        JTAC[] = { "TFAR_rt1523g_green" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "rhs_6b27m_green_ess_bala",
                "rhs_6b27m_green_ess",
                "rhs_6b27m_green_bala",
                "rhs_6b27m_digi",
                "rhs_6b27m_digi_bala",
                "rhs_6b27m_digi_ess",
                "rhs_6b27m_digi_ess_bala",
                "rhs_6b27m_green"
            };
        Lead[] = { "rhs_fieldcap_digi" };
        Command[] = { "rhs_fieldcap_digi" };
        Driver[] = { "rhs_tsh4" };
        HeliPilot[] = { "rhs_zsh7a_mike" };
        HeliCrew[] = { "rhs_zsh7a_mike_alt" };
        JetPilot[] = { "rhs_zsh7a_alt" };
    };

    class primary: primary {
        Default[] = { keko_W_AK74M_FOLDED };
        FTL[] = { keko_W_AK74M_GL };
        Grenadier[] = { keko_W_AK74M_GL };
        LMG[] = { keko_W_M84 };
        MMG[] = { keko_W_PKP };
        Marksman[] = { keko_W_SVD };
        Driver[] = { keko_W_AKS74U };
        HeliPilot[] = { keko_W_AKS74U };
        JTAC[] = { keko_W_AK74M_GL };
        UAVOperator[] = { keko_W_AK74M };
    };

    class secondary: secondary {
        Default[] = { keko_W_Makarov };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_RPG26 };
        ATSpecialist[] = { keko_W_RPG7 };
        AASpecialist[] = { keko_W_Igla };
    };

};
