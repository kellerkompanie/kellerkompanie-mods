class FactionUSMarines: FactionBase {
    name = "[Minimal] U.S. Marines - U.S. Force Recon Marines";
    logisticsHelicopter = "B_Heli_Transport_03_F";

    #include "WeaponsNATO.hpp"

    class uniform: uniform {
        Default[] = {
                "U_MU_B_soldier_wdl",
                "U_MU_B_soldier_wdl_vest",
                "U_MU_B_soldier_wdl_tshirt"
            };
        Lead[] = { "U_MU_B_soldier_wdl" };
        Command[] = { "U_MU_B_soldier_wdl" };
        HeliPilot[] = { "U_B_HeliPilotCoveralls" };
        JetPilot[] = { "U_B_PilotCoveralls" };
    };

    class vest: vest {
        Default[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr" };
        Lead[] = { "V_Chestrig_rgr" };
        Command[] = { "V_Chestrig_rgr" };
        Driver[] = { "V_BandollierB_rgr" };
        HeliPilot[] = { "V_TacVest_camo" };
        JetPilot[] = { "V_TacVest_camo" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_black" };
        Command[] = { "TFAR_rt1523g_black" };
        Sergeant[] = { "TFAR_rt1523g_black" };
        SQL[] = { "TFAR_rt1523g_black" };
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
        JTAC[] = { "TFAR_rt1523g_black" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        Sergeant[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "H_HelmetB",
                "H_HelmetB_black",
                "H_HelmetB_camo",
                "H_HelmetB_snakeskin",
                "H_HelmetSpecB",
                "H_HelmetSpecB_blk",
                "H_HelmetSpecB_snakeskin"
            };
        Lead[] = { "H_Booniehat_khk_hs" };
        Command[] = { "H_Cap_usblack" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
        JetPilot[] = { "H_PilotHelmetFighter_B" };
    };

    class primary: primary {
        Default[] = { keko_W_A3_MXC_BLACK };
        Lead[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
        Sergeant[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
        SQL[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
        FTL[] = { keko_W_A3_MX_GL_BLACK };
        Grenadier[] = { keko_W_A3_MX_GL_BLACK };
        LMG[] = { keko_W_A3_MX_SW_BLACK };
        MMG[] = { keko_W_A3_MMG_BLACK };
        Marksman[] = { keko_W_A3_MXM_BLACK };
        JTAC[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
        UAVOperator[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
    };

    class secondary: secondary {
        Default[] = { keko_W_TACTICAL };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_NLAW };
        ATSpecialist[] = { keko_W_TITAN_AT };
        AASpecialist[] = { keko_W_TITAN_AA };
    };

};
