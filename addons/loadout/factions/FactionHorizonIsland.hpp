class FactionHorizonIsland: FactionBase {
    name = "[Main] Horizon Island Defense Forces";
    logisticsHelicopter = "rhs_uh1h_hidf_unarmed";

    disposableRocketLauncher = "rhs_weap_M136";
    antiTankLauncher = "rhs_weap_smaw";
    antiAirLauncher = "rhs_weap_fim92";

    #include "WeaponsHorizonIsland.hpp"

    class uniform: uniform {
        Default[] = { "rhsgref_uniform_ERDL" };
        HeliPilot[] = { "U_B_HeliPilotCoveralls" };
    };

    class vest: vest {
        Default[] = { "rhsgref_alice_webbing" };
        Driver[] = { "V_BandollierB_rgr" };
        HeliPilot[] = { "rhsgref_TacVest_ERDL" };
    };

    class backpack: backpack {
        Lead[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        Command[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        Sergeant[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        SQL[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        Doctor[] = { "rhsgref_hidf_alicepack" };
        Medic[] = { "rhsgref_hidf_alicepack" };
        LMG[] = { "rhsgref_hidf_alicepack" };
        LMGAsst[] = { "rhsgref_hidf_alicepack" };
        MMG[] = { "rhsgref_hidf_alicepack" };
        MMGAsst[] = { "rhsgref_hidf_alicepack" };
        EOD[] = { "rhsgref_hidf_alicepack" };
        Engineer[] = { "rhsgref_hidf_alicepack" };
        JTAC[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
    };

    class backpackInventory: backpackInventory {
        Lead[] = {  };
        Sergeant[] = {  };
        SQL[] = {  };
        JTAC[] = {  };
    };

    class helmet: helmet {
        Default[] = {
                "rhsgref_helmet_M1_liner",
                "rhsgref_helmet_M1_bare",
                "rhsgref_helmet_M1_bare_alt01",
                "rhsgref_helmet_M1_painted",
                "rhsgref_helmet_M1_painted_alt01"
            };
        Lead[] = { "rhsgref_helmet_M1_liner" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "rhsusf_hgu56p_green" };
        HeliCrew[] = { "rhsusf_hgu56p_visor_mask_green" };
    };

    class primary: primary {
        Default[] = { "keko_W_RHS_M16A4" };
        Lead[] = { "keko_W_RHS_M16A4" };
        Sergeant[] = { "keko_W_RHS_M16A4_GL" };
        SQL[] = { "keko_W_RHS_M16A4_GL" };
        FTL[] = { "keko_W_RHS_M16A4_GL" };
        Grenadier[] = { "keko_W_RHS_M16A4_GL" };
        LMG[] = { "keko_W_RHS_M249" };
        MMG[] = { "keko_W_RHS_M240B" };
        Marksman[] = { "keko_W_RHS_M14EBR" };
        JTAC[] = { "keko_W_RHS_M16A4_GL_SMOKE" };
    };

    class secondary: secondary {
        Default[] = {  };
    };

    class launcher: launcher {
        RiflemanAT[] = { "keko_W_RHS_M136_HEAT" };
    };

};
