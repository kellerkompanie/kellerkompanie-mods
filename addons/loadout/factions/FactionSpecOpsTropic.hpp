class FactionSpecOpsTropic: FactionBase {
    name = "[Main] Western Special Forces (Tropic)";
    logisticsHelicopter = "RHS_UH60M";

    disposableRocketLauncher = rhs_weap_m72a7;
    antiTankLauncher = rhs_weap_smaw;
    antiAirLauncher = rhs_weap_fim92;

    #include "WeaponsSpecOpsTropic.hpp"

    class uniform: uniform {
        Default[] = {
                "VSM_G2_camo_PZJ_OD_Shirt",
                "VSM_G2_camo_PZJ_Tan_Shirt",
                "VSM_G2_camo_PZJ",
                "VSM_G2_camo_rolled_PZJ_OD_Shirt",
                "VSM_G2_camo_rolled_PZJ_Tan_Shirt",
                "VSM_G2_camo_rolled_PZJ"
            };
        JetPilot[] = { "U_B_PilotCoveralls" };
    };

    class vest: vest {
        Default[] = {
                "VSM_FAPC_Breacher_OGA_OD",
                "VSM_FAPC_MG_OGA_OD",
                "VSM_FAPC_Operator_OGA_OD",
                "VSM_CarrierRig_Breacher_OGA_OD",
                "VSM_CarrierRig_Gunner_OGA_OD",
                "VSM_CarrierRig_Operator_OGA_OD",
                "VSM_LBT6094_breacher_OGA_OD",
                "VSM_LBT6094_MG_OGA_OD",
                "VSM_LBT6094_operator_OGA_OD",
                "VSM_RAV_Breacher_OGA_OD",
                "VSM_RAV_MG_OGA_OD",
                "VSM_RAV_operator_OGA_OD"
            };
        JetPilot[] = { "V_TacVest_blk" };
    };

    class backpack: backpack {
        Lead[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        Command[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        Sergeant[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        SQL[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        Doctor[] = { "VSM_OGA_OD_Backpack_Kitbag" };
        Medic[] = { "VSM_OGA_OD_Backpack_Kitbag" };
        LMG[] = { "fatpack_od" };
        LMGAsst[] = { "fatpack_od" };
        EOD[] = { "VSM_OGA_OD_carryall" };
        Engineer[] = { "VSM_OGA_OD_carryall" };
        JTAC[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        Lead[] = {  };
        Sergeant[] = {  };
        SQL[] = {  };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "VSM_HAT_OD",
                "VSM_HAT_PZJ",
                "VSM_HAT_TAN",
                "VSM_Mich2000_coyote",
                "VSM_Opscore",
                "VSM_SORDIN_coyote",
                "VSM_z110t_coyote",
                "VSM_BackwardsHat_Peltor_black",
                "VSM_BackwardsHat_Peltor_CMMG",
                "VSM_BackwardsHat_Peltor_ION",
                "VSM_BackwardsHat_Peltor_OD",
                "VSM_BackwardsHat_Peltor_Sero",
                "VSM_BackwardsHat_Peltor_tan",
                "VSM_Beanie_Black",
                "VSM_Beanie_OD",
                "VSM_Beanie_tan",
                "VSM_Bowman",
                "VSM_Bowman_cap_Black",
                "VSM_Bowman_cap_Green",
                "VSM_Bowman_cap_Tan",
                "VSM_Mich2000_OGA_OD",
                "VSM_Mich2000_2_CamoSprayOD",
                "VSM_Mich2000_2_OGA_OD",
                "VSM_OD_spray_OPS",
                "VSM_OGA_OD_OPS",
                "VSM_OD_Spray_OPS_2",
                "VSM_OGA_OD_OPS_2"
            };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
        JetPilot[] = { "H_PilotHelmetFighter_B" };
    };

    class primary: primary {
        Default[] = {
                keko_HK416,
                keko_HK416_PaintedOD,
                keko_HK416_CustomOD
            };
        Lead[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        Sergeant[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        SQL[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        FTL[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        Grenadier[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        LMG[] = { keko_MINIMI };
        Marksman[] = { keko_HK417 };
        JTAC[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
        UAVOperator[] = { keko_W_A3_MX_GL_HUNTIR, keko_W_A3_MX_GL_BLACK_HUNTIR };
    };

    class secondary: secondary {
        Default[] = { keko_FIVESEVEN };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_M72 };
    };

};
