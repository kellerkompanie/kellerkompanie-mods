class FactionRussiaSpeznas: FactionBase {
    name = "[Main] Russia - GRU Speznas";
    logisticsHelicopter = "RHS_Mi8mt_Cargo_vdv";

    disposableRocketLauncher = "rhs_weap_rpg7";
    antiTankLauncher = "launch_O_Vorona_green_F";
    antiAirLauncher = "rhs_weap_igla";

    #include "WeaponsRussiaSpeznas.hpp"

    class uniform: uniform {
        Default[] = { "rhs_uniform_gorka_r_g" };
        HeliPilot[] = { "rhs_uniform_df15" };
    };

    class uniformInventory: uniformInventory {
        Default[] = {
                { 8, "ACE_fieldDressing" },
                { 5, "ACE_quikclot" },
                { 1, "ACE_Flashlight_MX991" },
                { 1, "ACE_MapTools" },
                { 1, "ACE_IR_Strobe_Item" },
                { 1, "ACE_microDAGR" },
                { 2, "ACE_morphine" },
                { 1, "ACE_epinephrine" },
                { 2, "ACE_tourniquet" },
                { 1, "ACE_CableTie" },
                { 1, "rhs_mag_9x19_17" },
                { 1, "ACE_splint" }
            };
    };

    class vest: vest {
        Default[] = {
                "VSM_OGA_OD_Vest_1",
                "VSM_OGA_OD_Vest_2",
                "VSM_OGA_OD_Vest_3"
            };
        HeliPilot[] = { "rhs_vest_pistol_holster" };
    };

    class backpack: backpack {
        Lead[] = { "tfw_ilbe_gr" };
        Command[] = { "tfw_ilbe_gr" };
        Sergeant[] = { "tfw_ilbe_gr" };
        SQL[] = { "tfw_ilbe_gr" };
        Doctor[] = { "rhssaf_kitbag_smb" };
        Medic[] = { "rhssaf_kitbag_smb" };
        RiflemanAT[] = { "rhs_assault_umbts" };
        RiflemanAT_MAAWS[] = { "rhs_assault_umbts" };
        LMG[] = { "rhs_assault_umbts" };
        ATSpecialist[] = { "B_Kitbag_rgr" };
        ATSpecialistAsst[] = { "B_Kitbag_rgr" };
        AASpecialist[] = { "B_Kitbag_rgr" };
        AASpecialistAsst[] = { "B_Kitbag_rgr" };
        EOD[] = { "B_Carryall_oli" };
        Engineer[] = { "B_Carryall_oli" };
        JTAC[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
    };

    class backpackInventory: backpackInventory {
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "rhs_6b27m_green_bala",
                "rhs_6b27m_green_ess_bala",
                "rhs_6b28_green_bala",
                "rhs_6b28_green_ess_bala",
                "rhs_6b7_1m_bala2",
                "rhs_6b7_1m_bala1",
                "rhs_6b7_1m_ess_bala",
                "rhs_6b7_1m_bala2_olive",
                "rhs_6b7_1m_bala1_olive",
                "rhs_altyn_bala"
            };
        Lead[] = { "rhs_beret_milp" };
        Command[] = { "rhs_beret_milp" };
        HeliPilot[] = { "rhs_zsh7a_mike" };
        HeliCrew[] = { "rhs_zsh7a_mike_alt" };
    };

    class primary: primary {
        Default[] = { "keko_W_ASVAL" };
        Lead[] = { "keko_W_AK74MR_GL" };
        Sergeant[] = { "keko_W_AK74MR_GL" };
        SQL[] = { "keko_W_AK74MR_GL" };
        FTL[] = { "keko_W_AK74MR_GL" };
        Grenadier[] = { "keko_W_AK74MR_GL" };
        LMG[] = { "keko_W_RPK" };
        Marksman[] = { "keko_W_SVD" };
        HeliPilot[] = { };
        JTAC[] = { "keko_W_AK74MR_GL" };
    };

    class secondary: secondary {
        Default[] = { "keko_W_Grach" };
    };

    class launcher: launcher {
        RiflemanAT[] = { "keko_W_RPG" };
        RiflemanAT_MAAWS[] = { "keko_W_MAAWS" };
        ATSpecialist[] = { "keko_W_Vorona" };
        AASpecialist[] = { "keko_W_Igla" };
    };

};
