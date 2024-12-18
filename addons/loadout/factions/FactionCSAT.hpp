class FactionCSAT: FactionBase {
    name = "[Minimal] CSAT - Canton-Protocol Strategic Alliance Treaty";
    logisticsHelicopter = "O_Heli_Transport_04_box_F";

    disposableRocketLauncher = "keko_W_RPG32";
    antiTankLauncher = "launch_O_Titan_short_F";
    antiAirLauncher = "launch_O_Titan_F";

    #include "WeaponsCSAT.hpp"

    class uniform: uniform {
        Default[] = { "U_O_CombatUniform_ocamo" };
        Lead[] = { "U_O_OfficerUniform_ocamo" };
        Command[] = { "U_O_OfficerUniform_ocamo" };
        HeliPilot[] = { "U_O_PilotCoveralls" };
        JetPilot[] = { "U_O_PilotCoveralls" };
    };

    class vest: vest {
        Default[] = { "V_HarnessO_brn" };
        Lead[] = { "V_BandollierB_cbr" };
        Command[] = { "V_BandollierB_cbr" };
        Driver[] = { "V_BandollierB_khk" };
        HeliPilot[] = { "V_TacVest_blk" };
        JetPilot[] = { "V_TacVest_blk" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_mr3000" };
        Command[] = { "TFAR_mr3000" };
        Sergeant[] = { "TFAR_mr3000" };
        SQL[] = { "TFAR_mr3000" };
        Doctor[] = { "B_Kitbag_cbr" };
        Medic[] = { "B_Kitbag_cbr" };
        RiflemanAT[] = { "B_AssaultPack_ocamo" };
        LMG[] = { "B_FieldPack_ocamo" };
        LMGAsst[] = { "B_FieldPack_ocamo" };
        MMG[] = { "B_FieldPack_ocamo" };
        MMGAsst[] = { "B_FieldPack_ocamo" };
        ATSpecialist[] = { "B_FieldPack_ocamo" };
        ATSpecialistAsst[] = { "B_FieldPack_ocamo" };
        AASpecialist[] = { "B_FieldPack_ocamo" };
        AASpecialistAsst[] = { "B_FieldPack_ocamo" };
        EOD[] = { "B_Carryall_ocamo" };
        Engineer[] = { "B_Carryall_ocamo" };
        JTAC[] = { "TFAR_mr3000" };
        UAVOperator[] = { "O_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        RiflemanAT[] = { { 1, "RPG32_F" } };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = { "H_HelmetB_sand" };
        Lead[] = { "H_MilCap_ocamo" };
        Command[] = { "H_Cap_brn_SPECOPS" };
        Driver[] = { "H_HelmetCrew_O" };
        HeliPilot[] = { "H_PilotHelmetHeli_O" };
        HeliCrew[] = { "H_CrewHelmetHeli_O" };
        JetPilot[] = { "H_PilotHelmetFighter_O" };
    };

    class primary: primary {
        Default[] = { "keko_W_A3_KATIBA_SHORT" };
        Lead[] = { "keko_W_A3_KATIBA_GL" };
        Sergeant[] = { "keko_W_A3_KATIBA_GL" };
        SQL[] = { "keko_W_A3_KATIBA_GL" };
        FTL[] = { "keko_W_A3_KATIBA_GL" };
        Grenadier[] = { "keko_W_A3_KATIBA_GL" };
        LMG[] = { "keko_W_A3_ZAFIR" };
        MMG[] = { "keko_W_A3_MMG_CSAT" };
        Marksman[] = { "keko_W_A3_DMR" };
        JTAC[] = { "keko_W_A3_KATIBA_GL" };
        UAVOperator[] = { "keko_W_A3_KATIBA_GL" };
    };

    class secondary: secondary {
        Default[] = { "keko_W_ROOK" };
    };

    class launcher: launcher {
        RiflemanAT[] = { "keko_W_RPG32" };
        ATSpecialist[] = { "keko_W_TITAN_AT_CSAT" };
        AASpecialist[] = { "keko_W_TITAN_AA_CSAT" };
    };

};
