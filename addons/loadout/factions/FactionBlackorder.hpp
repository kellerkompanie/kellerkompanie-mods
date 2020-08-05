class FactionBlackorder: FactionBase {
    name = "[Main] Black Order";
    logisticsHelicopter = "O_RHS_UH60M2_BlackOrder_F";

    disposableRocketLauncher = "rhs_weap_M136";
    antiTankLauncher = "rhs_weap_maaws";
    antiAirLauncher = "rhs_weap_fim92";

    #include "WeaponsBlackorder.hpp"

    class uniform: uniform {
        Default[] = { "U_BlackOrder_Uniform_1" };
        Doctor[] = { "U_BlackOrder_Uniform_1_Medic" };
        Medic[] = { "U_BlackOrder_Uniform_1_Medic" };
        HeliPilot[] = { "U_BlackOrder_HeliPilotCoveralls" };
        JetPilot[] = { "U_BlackOrder_PilotCoveralls" };
    };

    class vest: vest {
        Default[] = { "V_BlackOrder_PlateCarrier" };
        Lead[] = { "V_BlackOrder_Chestrig" };
        Command[] = { "V_BlackOrder_Chestrig" };
        Doctor[] = { "V_BlackOrder_PlateCarrier_medic" };
        Medic[] = { "V_BlackOrder_PlateCarrier_medic" };
        Driver[] = { "V_BandollierB_blk" };
        HeliPilot[] = { "V_BlackOrder_TacVest_1" };
        JetPilot[] = { "V_BlackOrder_TacVest_1" };
    };

    class backpack: backpack {
        Lead[] = { "FRXA_tf_rt1523g_Black" };
        Command[] = { "FRXA_tf_rt1523g_Black" };
        Sergeant[] = { "FRXA_tf_rt1523g_Black" };
        SQL[] = { "FRXA_tf_rt1523g_Black" };
        Doctor[] = { "B_MU_Kitbag_blk" };
        Medic[] = { "B_MU_Kitbag_blk" };
        LMG[] = { "B_AssaultPack_blk" };
        LMGAsst[] = { "B_AssaultPack_blk" };
        MMG[] = { "B_FieldPack_blk" };
        MMGAsst[] = { "B_FieldPack_blk" };
        ATSpecialist[] = { "B_FieldPack_blk" };
        ATSpecialistAsst[] = { "B_FieldPack_blk" };
        AASpecialist[] = { "B_FieldPack_blk" };
        AASpecialistAsst[] = { "B_FieldPack_blk" };
        EOD[] = { "B_MU_Carryall_blk" };
        Engineer[] = { "B_MU_Carryall_blk" };
        JTAC[] = { "FRXA_tf_rt1523g_big_Black" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "H_BlackOrder_CombatHelmet",
                "H_BlackOrder_mich_bare",
                "H_BlackOrder_mich_bare_headset"
            };
        Lead[] = { "H_BlackOrder_MilCap" };
        Command[] = { "H_BlackOrder_Cap_01" };
        Driver[] = { "H_BlackOrder_cvc_helmet" };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
        JetPilot[] = { "H_BlackOrder_PilotHelmet" };
    };

    class primary: primary {
        Default[] = { "keko_W_Tavor" };
        Lead[] = { "keko_W_MK18_M320" };
        SQL[] = { "keko_W_MK18_M320" };
        FTL[] = { "keko_W_MK18_M320" };
        Grenadier[] = { "keko_W_MK18_M320" };
        LMG[] = { "keko_W_M249" };
        MMG[] = { "keko_W_MG42" };
        Marksman[] = { "keko_W_SIG556" };
        JTAC[] = { "keko_W_MK18_M320" };
        UAVOperator[] = { "keko_W_MK18_M320" };
    };

    class secondary: secondary {
        Default[] = { "keko_W_Glock" };
    };

    class launcher: launcher {
        RiflemanAT[] = {
                "keko_W_M136",
                "keko_W_M80",
                "keko_W_M72"
            };
        ATSpecialist[] = { "keko_W_MAAWS" };
        AASpecialist[] = { "keko_W_STINGER" };
    };

};
