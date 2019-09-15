class FactionSpecOpsMulticam: FactionBase {
    name = "[Main] Western Special Forces (Multicam)";
    logisticsHelicopter = "RHS_UH60M";

    disposableRocketLauncher = rhs_weap_m72a7;
    antiTankLauncher = rhs_weap_smaw;
    antiAirLauncher = rhs_weap_fim92;

    #include "WeaponsSpecOpsMulticam.hpp"

    class uniform: uniform {
        Default[] = {
            "VSM_G2_camo_MultiCam",
            "VSM_G2_camo_MultiCam_OD_Shirt",
            "VSM_G2_camo_MultiCam_Tan_Shirt",
            "VSM_G2_camo_rolled_MultiCam_OD_Shirt",
            "VSM_G2_camo_rolled_MultiCam_Tan_Shirt",
            "VSM_G2_camo_rolled_MultiCam",
            "VSM_Multicam_Crye_od_pants_Camo",
            "VSM_Multicam_Crye_od_shirt_Camo",
            "VSM_Multicam_Crye_tan_pants_Camo",
            "VSM_Multicam_Crye_Camo",
            "VSM_Multicam_casual_Camo",
            "VSM_Multicam_Crye_SS_od_pants_Camo",
            "VSM_Multicam_Crye_SS_od_shirt_Camo",
            "VSM_Multicam_Crye_SS_tan_pants_Camo",
            "VSM_Multicam_Crye_SS_tan_shirt_Camo",
            "VSM_Multicam_Crye_SS_Camo",
            "VSM_Multicam_od_pants_Camo",
            "VSM_Multicam_od_shirt_Camo",
            "VSM_Multicam_tan_pants_Camo",
            "VSM_Multicam_tan_shirt_Camo",
            "VSM_Multicam_Camo",
            "VSM_Multicam_od_pants_Camo_SS",
            "VSM_Multicam_od_shirt_Camo_SS",
            "VSM_Multicam_tan_pants_Camo_SS",
            "VSM_Multicam_tan_shirt_Camo_SS",
            "VSM_Multicam_Camo_SS"
        };
        JetPilot[] = { "U_B_PilotCoveralls" };
    };

    class vest: vest {
        Default[] = {
            "VSM_MBSS_Green",
            "VSM_FAPC_Breacher_Multicam",
            "VSM_FAPC_Operator_Multicam",
            "VSM_CarrierRig_Breacher_Multicam",
            "VSM_CarrierRig_Operator_Multicam",
            "VSM_LBT6094_breacher_Multicam",
            "VSM_LBT6094_operator_Multicam",
            "VSM_RAV_Breacher_Multicam",
            "VSM_RAV_operator_Multicam",
            "VSM_LBT1961_OGA_OD",
            "VSM_FAPC_Breacher_OGA",
            "VSM_FAPC_Operator_OGA",
            "VSM_CarrierRig_Breacher_OGA",
            "VSM_CarrierRig_Operator_OGA",
            "VSM_LBT6094_breacher_OGA",
            "VSM_LBT6094_operator_OGA",
            "VSM_FAPC_Breacher_OGA_OD",
            "VSM_FAPC_Operator_OGA_OD",
            "VSM_CarrierRig_Breacher_OGA_OD",
            "VSM_CarrierRig_Operator_OGA_OD",
            "VSM_LBT6094_breacher_OGA_OD",
            "VSM_LBT6094_operator_OGA_OD",
            "VSM_RAV_Breacher_OGA_OD",
            "VSM_RAV_operator_OGA_OD",
            "VSM_OGA_Vest_1",
            "VSM_OGA_OD_Vest_1",
            "VSM_OGA_Vest_2",
            "VSM_OGA_OD_Vest_2",
            "VSM_OGA_Vest_3",
            "VSM_OGA_OD_Vest_3",
            "cpc_communications_coy",
            "cpc_Fast_coy",
            "cpc_tl_coy",
            "cpc_weapons_coy",
            "cpc_communicationsbelt_coy",
            "cpc_Fastbelt_coy",
            "cpc_tlbelt_coy",
            "cpc_weaponsbelt_coy",
            "cpc_communications_rngr",
            "cpc_Fast_rngr",
            "cpc_tl_rngr",
            "cpc_weapons_rngr",
            "cpc_communicationsbelt_rngr",
            "cpc_Fastbelt_rngr",
            "cpc_tlbelt_rngr",
            "cpc_weaponsbelt_rngr",
            "lbt_comms_coy",
            "lbt_fast_coy",
            "lbt_operator_coy",
            "lbt_tl_coy",
            "lbt_weapons_coy",
            "lbt_comms_mc",
            "lbt_light_mc",
            "lbt_operator_mc",
            "lbt_tl_mc",
            "lbt_weapons_mc"
        };
        LMG[] = {
            "VSM_FAPC_MG_Multicam",
            "VSM_LBT6094_MG_Multicam",
            "VSM_RAV_MG_Multicam",
            "VSM_FAPC_MG_OGA",
            "VSM_CarrierRig_Gunner_Multicam",
            "VSM_CarrierRig_Gunner_OGA",
            "VSM_LBT6094_MG_OGA",
            "VSM_FAPC_MG_OGA_OD",
            "VSM_CarrierRig_Gunner_OGA_OD",
            "VSM_LBT6094_MG_OGA_OD",
            "VSM_RAV_MG_OGA_OD"
        };
        Medic[] = {
            "cpc_medical_coy",
            "cpc_medicalbelt_coy",
            "cpc_medical_rngr",
            "cpc_medicalbelt_rngr",
            "lbt_medical_coy",
            "lbt_medical_mc"
        };
        Doctor[] = {
            "cpc_medical_coy",
            "cpc_medicalbelt_coy",
            "cpc_medical_rngr",
            "cpc_medicalbelt_rngr",
            "lbt_medical_coy",
            "lbt_medical_mc"
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
            "rhsusf_opscore_coy_cover",
            "rhsusf_opscore_coy_cover_pelt",
            "rhsusf_opscore_fg",
            "rhsusf_opscore_fg_pelt",
            "rhsusf_opscore_fg_pelt_cam",
            "rhsusf_opscore_fg_pelt_nsw",
            "rhsusf_opscore_rg_cover",
            "rhsusf_opscore_rg_cover_pelt",
            "VSM_AirFrame",
            "VSM_AirFrame_Operator",
            "VSM_HAT_Multicam",
            "VSM_HAT_OD",
            "VSM_HAT_TAN",
            "VSM_Mich2000_coyote",
            "VSM_Opscore",
            "VSM_BackwardsHat_Peltor_black",
            "VSM_BackwardsHat_Peltor_OD",
            "VSM_Beanie_OD",
            "VSM_Beanie_tan",
            "VSM_Multicam_Boonie",
            "VSM_Bowman_cap_Green",
            "VSM_Bowman_cap_Tan",
            "VSM_Mich2000_Multicam",
            "VSM_Mich2000_OGA_OD",
            "VSM_Mich2000_2_Multicam",
            "VSM_Mich2000_2_OGA_OD",
            "VSM_Mich2000_2_CamoSprayOD",
            "VSM_OGA_OD_Helmet2",
            "VSM_OGA_Helmet2",
            "VSM_OPS_multicam",
            "VSM_OD_spray_OPS",
            "VSM_OGA_OD_OPS",
            "VSM_oga_OPS",
            "VSM_Tan_spray_OPS",
            "VSM_OPS_2_multicam",
            "VSM_OD_Spray_OPS_2",
            "VSM_OGA_OD_OPS_2",
            "VSM_oga_OPS_2",
            "VSM_Tan_spray_OPS_2"
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
        UAVOperator[] = {
                keko_HK416_GL,
                keko_HK416_GL_PaintedOD,
                keko_HK416_GL_CustomOD
            };
    };

    class secondary: secondary {
        Default[] = { keko_FIVESEVEN };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_M72 };
    };

    class goggles: goggles {
        Default[] = {
            "rhs_googles_black",
            "rhs_ess_black",
            "rhsusf_shemagh_tan",
            "rhsusf_shemagh2_tan",
            "rhsusf_shemagh_gogg_tan",
            "rhsusf_shemagh2_gogg_tan",
            "rhsusf_oakley_goggles_blk",
            "TRYK_Shemagh",
            "TRYK_Shemagh_shade",
            "PBW_shemagh_beige",
            "VSM_Goggles",
            "VSM_balaclava_TAN_Skull",
            "VSM_balaclava_tan",
            "VSM_Balaclava_tan_glasses",
            "VSM_Balaclava_tan_Goggles",
            "VSM_Balaclava_tan_Peltor",
            "VSM_Balaclava_tan_Peltor_glasses",
            "VSM_Balaclava_tan_Peltor_Goggles",
            "VSM_Balaclava2_tan_glasses",
            "VSM_Balaclava2_tan_Goggles",
            "VSM_Balaclava2_tan_Peltor",
            "VSM_Balaclava2_tan_Peltor_glasses",
            "VSM_Balaclava2_tan_Peltor_Goggles",
            "VSM_FaceMask_Ghost_tan",
            "VSM_FaceMask_tan",
            "VSM_Facemask_tan_glasses",
            "VSM_Facemask_tan_Goggles",
            "VSM_Facemask_tan_Peltor",
            "VSM_Facemask_tan_Peltor_glasses",
            "VSM_Facemask_tan_Peltor_Goggles",
            "VSM_Shemagh_tan",
            "VSM_Shemagh_Balaclava_tan",
            "VSM_Shemagh_Balaclava_tan_Glasses",
            "VSM_Shemagh_Balaclava_tan_Goggles",
            "VSM_Shemagh_Balaclava_tan_Peltor",
            "VSM_Shemagh_Balaclava_tan_Peltor_Glasses",
            "VSM_Shemagh_Balaclava_tan_Peltor_Goggles",
            "VSM_Shemagh_Balaclava2_tan",
            "VSM_Shemagh_Balaclava2_tan_Glasses",
            "VSM_Shemagh_Balaclava2_tan_Goggles",
            "VSM_Shemagh_Balaclava2_tan_Peltor",
            "VSM_Shemagh_Balaclava2_tan_Peltor_Glasses",
            "VSM_Shemagh_Balaclava2_tan_Peltor_Goggles",
            "VSM_Shemagh_Facemask_tan",
            "VSM_Shemagh_Facemask_tan_Glasses",
            "VSM_Shemagh_Facemask_tan_Goggles",
            "VSM_Shemagh_Facemask_tan_Peltor",
            "VSM_Shemagh_Facemask_tan_Peltor_Glasses",
            "VSM_Shemagh_Facemask_tan_Peltor_Goggles",
            "VSM_Shemagh_glasses_tan",
            "VSM_Shemagh_goggles_tan"
        };
    };
};
