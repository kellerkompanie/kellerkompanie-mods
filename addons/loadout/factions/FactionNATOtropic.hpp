class FactionNatoTropic: FactionNato {
    name = "[Minimal] NATO (Tropic) - North Atlantic Treaty Organization (Tropic)";

    antiTankLauncher = launch_B_Titan_short_tna_F;
    antiAirLauncher = launch_B_Titan_tna_F;

    #include "WeaponsNATOtropic.hpp"

    class uniform: uniform {
        Default[] = { "U_B_T_Soldier_F", "U_B_T_Soldier_AR_F" };
        Lead[] = { "U_B_T_Soldier_F" };
        Command[] = { "U_B_T_Soldier_F" };
    };

    class vest: vest {
        Default[] = { "V_PlateCarrier1_tna_F", "V_PlateCarrier2_tna_F" };
        Lead[] = { "V_TacChestrig_grn_F" };
        Command[] = { "V_TacChestrig_grn_F" };
        Doctor[] = { "V_PlateCarrierSpec_tna_F" };
        Medic[] = { "V_PlateCarrierSpec_tna_F" };
        EOD[] = { "V_PlateCarrierGL_tna_F" };
        Driver[] = { "V_BandollierB_oli" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_green" };
        Command[] = { "TFAR_rt1523g_green" };
        Sergeant[] = { "TFAR_rt1523g_green" };
        SQL[] = { "TFAR_rt1523g_green" };
        Doctor[] = { "B_Kitbag_rgr" };
        Medic[] = { "B_Kitbag_rgr" };
        LMG[] = { "B_AssaultPack_tna_F" };
        LMGAsst[] = { "B_AssaultPack_tna_F" };
        MMG[] = { "B_AssaultPack_tna_F" };
        MMGAsst[] = { "B_AssaultPack_tna_F" };
        ATSpecialist[] = { "B_FieldPack_oli" };
        ATSpecialistAsst[] = { "B_FieldPack_oli" };
        AASpecialist[] = { "B_FieldPack_oli" };
        AASpecialistAsst[] = { "B_FieldPack_oli" };
        EOD[] = { "B_Carryall_oli" };
        Engineer[] = { "B_Carryall_oli" };
        JTAC[] = { "TFAR_rt1523g_green" };
    };

    class helmet: helmet {
        Default[] = {
                "H_HelmetB_tna_F",
                "H_HelmetB_Enh_tna_F",
                "H_HelmetB_Light_tna_F"
            };
        Lead[] = { "H_MilCap_tna_F" };
        Command[] = { "H_Cap_usblack" };
    };

    class primary: primary {
        Default[] = { keko_W_A3_MX_TROPIC };
        Lead[] = { keko_W_A3_MX_GL_TROPIC };
        Sergeant[] = { keko_W_A3_MX_GL_TROPIC };
        SQL[] = { keko_W_A3_MX_GL_TROPIC };
        FTL[] = { keko_W_A3_MX_GL_TROPIC };
        Grenadier[] = { keko_W_A3_MX_GL_TROPIC };
        LMG[] = { keko_W_A3_MX_SW_TROPIC };
        MMG[] = { keko_W_A3_MMG_BLACK };
        Marksman[] = { keko_W_A3_MXM_TROPIC };
        JTAC[] = { keko_W_A3_MX_GL_TROPIC };
        UAVOperator[] = { keko_W_A3_MX_GL_TROPIC };
    };

    class secondary: secondary {
        Default[] = { keko_W_P99_TROPIC };
    };

    class launcher: launcher {
        ATSpecialist[] = { keko_W_TITAN_AT };
        AASpecialist[] = { keko_W_TITAN_AA };
    };

};
