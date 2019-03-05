class FactionBAFDesert: FactionBase {
    name = "[Event] BAF Desert - British Armed Forces (Desert)";
    logisticsHelicopter = "UK3CB_BAF_Chinook_HC2_MTP";

    disposableRocketLauncher = UK3CB_BAF_AT4_CS_AP_Launcher;
    antiTankLauncher = UK3CB_BAF_Javelin_Slung_Tube;
    antiAirLauncher = rhs_weap_fim92;

    #include "WeaponsBAF.hpp"

    class uniform: uniform {
        Default[] = { "UK3CB_BAF_U_CombatUniform_DDPM", "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve" };
        HeliPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
        JetPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
    };

    class vest: vest {
        Default[] = {
                "UK3CB_BAF_V_Osprey_DDPM2",
                "UK3CB_BAF_V_Osprey_DDPM4",
                "UK3CB_BAF_V_Osprey_DDPM5",
                "UK3CB_BAF_V_Osprey_DDPM6",
                "UK3CB_BAF_V_Osprey_DDPM7",
                "UK3CB_BAF_V_Osprey_DDPM8"
            };
        Lead[] = { "UK3CB_BAF_V_Osprey_DDPM1" };
        Command[] = { "UK3CB_BAF_V_Osprey_DDPM1" };
        Sergeant[] = { "UK3CB_BAF_V_Osprey_DDPM2" };
        SQL[] = { "UK3CB_BAF_V_Osprey_DDPM2" };
        FTL[] = { "UK3CB_BAF_V_Osprey_DDPM3" };
        Doctor[] = { "UK3CB_BAF_V_Osprey_DDPM9" };
        Grenadier[] = { "UK3CB_BAF_V_Osprey_DDPM3" };
        Driver[] = { "UK3CB_BAF_V_Osprey_DDPM1" };
        HeliPilot[] = { "UK3CB_BAF_V_Pilot_DDPM" };
        JetPilot[] = { "UK3CB_BAF_V_Pilot_DDPM" };
    };

    class backpack: backpack {
        Lead[] = { "UK3CB_BAF_B_Bergen_DDPM_SL_A", "UK3CB_BAF_B_Bergen_TAN_SL_A" };
        Command[] = { "UK3CB_BAF_B_Bergen_DDPM_SL_A", "UK3CB_BAF_B_Bergen_TAN_SL_A" };
        Sergeant[] = { "UK3CB_BAF_B_Bergen_DDPM_SL_A", "UK3CB_BAF_B_Bergen_TAN_SL_A" };
        SQL[] = { "UK3CB_BAF_B_Bergen_DDPM_SL_A", "UK3CB_BAF_B_Bergen_TAN_SL_A" };
        Doctor[] = { "UK3CB_BAF_B_Kitbag_DDPM", "UK3CB_BAF_B_Kitbag_TAN" };
        LMG[] = {
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
            };
        LMGAsst[] = {
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
            };
        MMG[] = {
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
            };
        MMGAsst[] = {
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
                "UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
            };
        ATSpecialist[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        ATSpecialistAsst[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        AASpecialist[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        AASpecialistAsst[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        EOD[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        Engineer[] = { "UK3CB_BAF_B_Carryall_DDPM", "UK3CB_BAF_B_Carryall_TAN" };
        JTAC[] = { "UK3CB_BAF_B_Bergen_TAN_JTAC_H_A", "UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
        ATSpecialist[] = { { 1, "UK3CB_BAF_Javelin_CLU" } };
        JTAC[] = { { 4, "Laserbatteries" } };
        ATSpecialistAsst[] = { {1, "UK3CB_BAF_Javelin_Slung_Tube" } };
    };

    class helmet: helmet {
        Default[] = {
                "UK3CB_BAF_H_Mk6_DDPM_A",
                "UK3CB_BAF_H_Mk6_DDPM_B",
                "UK3CB_BAF_H_Mk6_DDPM_C",
                "UK3CB_BAF_H_Mk6_DDPM_D",
                "UK3CB_BAF_H_Mk6_DDPM_E",
                "UK3CB_BAF_H_Mk6_DDPM_F"
            };
        Lead[] = { "UK3CB_BAF_H_Beret_TYR_PRR" };
        Driver[] = { "UK3CB_BAF_H_CrewHelmet_B" };
        HeliPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        HeliCrew[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        JetPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
    };

    class primary: primary {
        Default[] = { keko_W_BAF_L85A2 };
        Lead[] = { keko_W_BAF_L85A2_UGL_HUNTIR };
        Sergeant[] = { keko_W_BAF_L85A2_UGL_HUNTIR };
        SQL[] = { keko_W_BAF_L85A2_UGL_HUNTIR };
        FTL[] = { keko_W_BAF_L85A2_UGL };
        Grenadier[] = { keko_W_BAF_L85A2_UGL };
        LMG[] = { keko_W_BAF_L110 };
        MMG[] = { keko_W_BAF_L7A2 };
        Marksman[] = { keko_W_BAF_L129A1 };
        JTAC[] = { keko_W_BAF_L85A2_UGL_SMOKE };
        UAVOperator[] = { keko_W_BAF_L85A2_UGL_HUNTIR };
    };

    class secondary: secondary {
        Default[] = { keko_W_BAF_L131A1 };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_AT4 };
        ATSpecialist[] = { keko_W_BAF_JAVELIN };
        AASpecialist[] = { keko_W_STRINGER };
    };

};
