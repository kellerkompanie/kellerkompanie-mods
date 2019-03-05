class FactionUNTOFIAAS: FactionBase {
    name = "[Minimal] UNTOFIAAS - United Nations Truce Observation Force In Altis And Stratis";

    #include "WeaponsUNTOFIAAS.hpp"

    class role: role {
        ObserverCanada = "U.N. Observer (Canada)";
        ObserverChina = "U.N. Observer (China)";
        ObserverFinland = "U.N. Observer (Finland)";
        ObserverRussia = "U.N. Observer (Russia)";
    };

    class rank: rank {
        ObserverCanada = "COLONEL";
        ObserverChina = "COLONEL";
        ObserverFinland = "COLONEL";
        ObserverRussia = "COLONEL";
    };

    class uniform: uniform {
        Default[] = {
                "U_MU_B_soldier_wdl",
                "U_MU_B_soldier_wdl_vest",
                "U_MU_B_soldier_wdl_tshirt"
            };
        HeliPilot[] = { "U_B_HeliPilotCoveralls" };
        JetPilot[] = { "U_B_PilotCoveralls" };
        ObserverCanada[] = { "UNT_fat_cadpat" };
        ObserverChina[] = { "UNT_fat_hex_officer" };
        ObserverFinland[] = { "UNT_unf_m04_helle_1" };
        ObserverRussia[] = { "UNT_unf_rus_surpat_1" };
    };

    class vest: vest {
        Default[] = {
                "V_I_G_resistanceLeader_F",
                "V_TacVest_oli",
                "V_TacVest_camo"
            };
        Doctor[] = { "V_PlateCarrierIAGL_oli" };
        Medic[] = { "V_PlateCarrierIAGL_oli" };
        Driver[] = { "V_BandollierB_rgr" };
        HeliPilot[] = { "V_TacVest_blk" };
        JetPilot[] = { "V_TacVest_blk" };
        ObserverCanada[] = {  };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_bwmod" };
        Command[] = { "TFAR_rt1523g_bwmod" };
        Sergeant[] = { "TFAR_rt1523g_bwmod" };
        SQL[] = { "TFAR_rt1523g_bwmod" };
        Doctor[] = { "B_Kitbag_rgr" };
        Medic[] = { "B_Kitbag_rgr" };
        LMG[] = { "B_FieldPack_khk" };
        LMGAsst[] = { "B_FieldPack_khk" };
        MMG[] = { "B_FieldPack_khk" };
        MMGAsst[] = { "B_FieldPack_khk" };
        ATSpecialist[] = { "B_FieldPack_cbr" };
        ATSpecialistAsst[] = { "B_FieldPack_cbr" };
        AASpecialist[] = { "B_FieldPack_cbr" };
        AASpecialistAsst[] = { "B_FieldPack_cbr" };
        EOD[] = { "B_Carryall_cbr" };
        Engineer[] = { "B_Carryall_cbr" };
        JTAC[] = { "TFAR_rt1523g_bwmod" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        Sergeant[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = { "UNT_basic_helmet", "UNT_hel_can_UN" };
        Lead[] = { "UNT_Beret_02" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
        JetPilot[] = { "H_PilotHelmetFighter_B" };
        ObserverCanada[] = { "UNT_Beret_02" };
    };

    class primary: primary {
        Default[] = { keko_W_A3_Mk20C };
        Lead[] = { keko_W_A3_Mk20_GL_HuntIR };
        SQL[] = { keko_W_A3_Mk20_GL_HuntIR };
        FTL[] = { keko_W_A3_Mk20_GL };
        Grenadier[] = { keko_W_A3_Mk20_GL };
        LMG[] = { keko_W_A3_Stoner };
        MMG[] = { keko_W_A3_MMG };
        Marksman[] = { keko_W_A3_EBR };
        JTAC[] = { keko_W_A3_Mk20_GL_HuntIR };
        UAVOperator[] = { keko_W_A3_Mk20_GL_HuntIR };
        ObserverCanada[] = {  };
    };

    class secondary: secondary {
        Default[] = { keko_W_TACTICAL };
        ObserverCanada[] = {  };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_NLAW };
        ATSpecialist[] = { keko_W_TITAN_AT };
        AASpecialist[] = { keko_W_TITAN_AA };
    };

};
