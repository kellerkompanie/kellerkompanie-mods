class FactionNAA: FactionBase {
    name = "[Minimal] NAA - New Altis Army";
    logisticsHelicopter = "NAA_Heli_light_03_unarmed_F";

    antiTankLauncher = launch_I_Titan_short_F;
    antiAirLauncher = launch_I_Titan_F;

    #include "WeaponsNAA.hpp"

    class role: role {
        RiflemanATTanks = "Rifleman Anti-Tank (Tanks DLC)";
    };

    class uniform: uniform {
        Default[] = {
                "NAA_fat_alpat_ard3",
                "NAA_fat_alpat_ard2",
                "NAA_fat_alpat_ard1",
                "NAA_fat_alpat_rs_ard1",
                "NAA_fat_alpat_rs_ard3",
                "NAA_fat_alpat_rs_ard2"
            };
        Lead[] = { "NAA_unf_alpat_ard1" };
        Command[] = { "NAA_unf_alpat_ard1" };
        HeliPilot[] = { "NAA_coverals_NAA" };
        JetPilot[] = { "U_I_pilotCoveralls" };
    };

    class vest: vest {
        Default[] = {
                "NAA_vst_GA_heavy_alpat_ard1",
                "NAA_vst_GA_heavy_alpat_ard3",
                "NAA_vst_GA_heavy_alpat_ard2",
                "NAA_vst_GA_lite_alpat_ard2",
                "NAA_vst_GA_lite_alpat_ard1",
                "NAA_vst_GA_lite_alpat_ard3",
                "NAA_vst_GA_rig_alpat_ard2",
                "NAA_vst_GA_rig_alpat_ard3",
                "NAA_vst_GA_rig_alpat_ard1"
            };
        Lead[] = { "V_TacVest_oli" };
        Command[] = { "V_TacVest_oli" };
        Doctor[] = {
                "NAA_vst_GA_heavy_alpat_ard1",
                "NAA_vst_GA_heavy_alpat_ard3",
                "NAA_vst_GA_heavy_alpat_ard2"
            };
        Medic[] = {
                "NAA_vst_GA_heavy_alpat_ard1",
                "NAA_vst_GA_heavy_alpat_ard3",
                "NAA_vst_GA_heavy_alpat_ard2"
            };
        Driver[] = { "V_BandollierB_oli" };
        HeliPilot[] = { "V_TacVest_blk" };
        JetPilot[] = { "V_TacVest_blk" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_anprc155" };
        Command[] = { "TFAR_anprc155" };
        Sergeant[] = { "TFAR_anprc155" };
        SQL[] = { "TFAR_anprc155" };
        Doctor[] = {
                "NAA_bac_kit_alpat_ard1",
                "NAA_bac_kit_alpat_ard2",
                "NAA_bac_kit_alpat_ard3"
            };
        Medic[] = {
                "NAA_bac_kit_alpat_ard1",
                "NAA_bac_kit_alpat_ard2",
                "NAA_bac_kit_alpat_ard3"
            };
        RiflemanATTanks[] = { "NAA_bac_ass_alpat_ard1" };
        LMG[] = { "B_FieldPack_oli" };
        LMGAsst[] = { "B_FieldPack_oli" };
        MMG[] = { "B_FieldPack_oli" };
        MMGAsst[] = { "B_FieldPack_oli" };
        ATSpecialist[] = { "B_FieldPack_oli" };
        ATSpecialistAsst[] = { "B_FieldPack_oli" };
        AASpecialist[] = { "B_FieldPack_oli" };
        AASpecialistAsst[] = { "B_FieldPack_oli" };
        EOD[] = {
                "NAA_bac_carryAll_alpat_ard1",
                "NAA_bac_carryAll_alpat_ard3",
                "NAA_bac_carryAll_alpat_ard2"
            };
        Engineer[] = {
                "NAA_bac_carryAll_alpat_ard1",
                "NAA_bac_carryAll_alpat_ard3",
                "NAA_bac_carryAll_alpat_ard2"
            };
        JTAC[] = { "TFAR_anprc155" };
        UAVOperator[] = { "NAA_UAV_darter_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        RiflemanATTanks[] = { { 2, "MRAWS_HEAT_F" } };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "NAA_hel_can_alpat_ard1",
                "NAA_hel_can_alpat_ard3",
                "NAA_hel_can_alpat_ard2",
                "NAA_hel_sf_alpat_ard1",
                "NAA_hel_ech_alpat_ard1",
                "NAA_hel_camo_alpat_ard1"
            };
        Lead[] = {
                "NAA_hat_milcap_alpat_ard1",
                "NAA_hat_milcap_alpat_ard3",
                "NAA_hat_milcap_alpat_ard2"
            };
        Command[] = { "NAA_beret" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "NAA_hel_heli" };
        HeliCrew[] = { "NAA_hel_heli" };
        JetPilot[] = { "H_PilotHelmetFighter_I" };
    };

    class primary: primary {
        Default[] = { keko_W_A3_F2000_SHORT };
        Lead[] = { keko_W_A3_F2000_UGL };
        Sergeant[] = { keko_W_A3_F2000_UGL };
        SQL[] = { keko_W_A3_F2000_UGL };
        FTL[] = { keko_W_A3_F2000_UGL };
        Grenadier[] = { keko_W_A3_F2000_UGL };
        LMG[] = { keko_W_A3_STONER };
        MMG[] = { keko_W_A3_MMG_AAF };
        Marksman[] = { keko_W_A3_EBR };
        JTAC[] = { keko_W_A3_F2000_UGL };
        UAVOperator[] = { keko_W_A3_F2000_UGL };
    };

    class secondary: secondary {
        Default[] = { keko_W_A3_ACP };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_NLAW };
        RiflemanATTanks[] = { keko_W_MAAWS };
        ATSpecialist[] = { keko_W_TITAN_AT_AAF };
        AASpecialist[] = { keko_W_TITAN_AA_AAF };
    };

};
