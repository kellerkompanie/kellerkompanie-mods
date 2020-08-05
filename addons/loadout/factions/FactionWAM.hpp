class FactionWAM: FactionBase {
    name = "[Minimal] WAM - West Altian Militia (Paramilitary)";
    logisticsHelicopter = "I_Heli_light_03_unarmed_F";

    disposableRocketLauncher = "launch_RPG7_F";
    antiTankLauncher = "RPG32_Brown";

    #include "WeaponsWAM.hpp"

    class uniform: uniform {
        Default[] = {
                "WAM_fat_multitarn",
                "WAM_fat_AOR1",
                "WAM_fat_AOR2",
                "WAM_fat_CE_villapaita",
                "WAM_fat_CE_green_pants"
            };
        HeliPilot[] = { "U_B_HeliPilotCoveralls" };
    };

    class vest: vest {
        Default[] = {
                "V_TacVest_khk",
                "MYR_vest_GA_rig_blk",
                "WAM_vest_GA_rig_CAcamo",
                "V_TacVest_oli",
                "V_TacChestrig_cbr_F",
                "V_TacChestrig_grn_F",
                "V_TacChestrig_oli_F",
                "WAM_vest_GA_lite_CAcamo",
                "MYR_vest_GA_lite_blk",
                "V_TacVest_camo"
            };
        Doctor[] = { "WAM_vest_GA_rig_CAcamo" };
        Medic[] = { "WAM_vest_GA_rig_CAcamo" };
        Driver[] = { "V_BandollierB_rgr" };
        HeliPilot[] = { "V_TacVest_blk" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_rhs" };
        Command[] = { "TFAR_rt1523g_rhs" };
        Sergeant[] = { "TFAR_rt1523g_rhs" };
        SQL[] = { "TFAR_rt1523g_rhs" };
        Doctor[] = { "B_Kitbag_rgr" };
        Medic[] = { "B_Kitbag_rgr" };
        RiflemanAT[] = { "B_AssaultPack_rgr" };
        LMG[] = { "B_FieldPack_khk" };
        LMGAsst[] = { "B_FieldPack_khk" };
        MMG[] = { "B_FieldPack_khk" };
        MMGAsst[] = { "B_FieldPack_khk" };
        ATSpecialist[] = { "B_FieldPack_cbr" };
        ATSpecialistAsst[] = { "B_FieldPack_cbr" };
        AASpecialist[] = { "B_FieldPack_cbr" };
        AASpecialistAsst[] = { "B_FieldPack_cbr" };
        EOD[] = { "WAM_Carryall_mcamo_ammo" };
        Engineer[] = { "WAM_Carryall_mcamo_ammo" };
        JTAC[] = { "TFAR_rt1523g_rhs" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = { "H_Cap_headphones", "GUR_beret_01" };
        Lead[] = { "GUR_beret_01" };
        Command[] = { "GUR_beret_01" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
    };

    class primary: primary {
        Default[] = { "keko_W_A3_CTARC" };
        Lead[] = { "keko_W_A3_CTAR_GL" };
        Sergeant[] = { "keko_W_A3_CTAR_GL" };
        SQL[] = { "keko_W_A3_CTAR_GL" };
        FTL[] = { "keko_W_A3_CTAR_GL" };
        Grenadier[] = { "keko_W_A3_CTAR_GL" };
        LMG[] = { "keko_W_A3_Stoner" };
        MMG[] = { "keko_W_A3_MMG" };
        Marksman[] = { "keko_W_A3_EBR" };
        JTAC[] = { "keko_W_A3_CTAR_GL" };
        UAVOperator[] = { "keko_W_A3_CTAR_GL" };
    };

    class secondary: secondary {
        Default[] = { "keko_W_Grach" };
    };

    class launcher: launcher {
        RiflemanAT[] = { "keko_W_RPG" };
        ATSpecialist[] = { "keko_W_RPG32" };
        AASpecialist[] = { "keko_W_TITAN_AA" };
    };

};
