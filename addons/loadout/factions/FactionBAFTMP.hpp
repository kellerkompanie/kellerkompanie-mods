class FactionBAFTMP: FactionBAFMTP {
    name = "[Event] BAF TMP - British Armed Forces (TMP)";

    class uniform: uniform {
        Default[] = { "UK3CB_BAF_U_CombatUniform_DPMT", "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve" };
        Lead[] = { "UK3CB_BAF_U_CombatUniform_DPMT" };
        HeliPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
        JetPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
    };

    class vest: vest {
        Default[] = {
                "UK3CB_BAF_V_Osprey_DPMT2",
                "UK3CB_BAF_V_Osprey_DPMT4",
                "UK3CB_BAF_V_Osprey_DPMT5",
                "UK3CB_BAF_V_Osprey_DPMT6",
                "UK3CB_BAF_V_Osprey_DPMT7",
                "UK3CB_BAF_V_Osprey_DPMT8"
            };
        Lead[] = { "UK3CB_BAF_V_Osprey_DPMT1" };
        Command[] = { "UK3CB_BAF_V_Osprey_DPMT1" };
        Sergeant[] = { "UK3CB_BAF_V_Osprey_DPMT2" };
        SQL[] = { "UK3CB_BAF_V_Osprey_DPMT2" };
        FTL[] = { "UK3CB_BAF_V_Osprey_DPMT3" };
        Doctor[] = { "UK3CB_BAF_V_Osprey_DPMT9" };
        Grenadier[] = { "UK3CB_BAF_V_Osprey_DPMT3" };
        Driver[] = { "UK3CB_BAF_V_Osprey_DPMT1" };
        HeliPilot[] = { "UK3CB_BAF_V_Pilot_DPMT" };
        JetPilot[] = { "UK3CB_BAF_V_Pilot_DPMT" };
    };

    class backpack: backpack {
        Lead[] = { "UK3CB_BAF_B_Bergen_DPMT_SL_A" };
        Command[] = { "UK3CB_BAF_B_Bergen_DPMT_SL_A" };
        Sergeant[] = { "UK3CB_BAF_B_Bergen_DPMT_SL_A", "UK3CB_BAF_B_Bergen_OLI_SL_A" };
        SQL[] = { "UK3CB_BAF_B_Bergen_DPMT_SL_A", "UK3CB_BAF_B_Bergen_OLI_SL_A" };
        Doctor[] = { "UK3CB_BAF_B_Kitbag_DPMT", "UK3CB_BAF_B_Kitbag_OLI" };
        LMG[] = {
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_B",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
            };
        LMGAsst[] = {
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_B",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
            };
        MMG[] = {
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_B",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
            };
        MMGAsst[] = {
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A",
                "UK3CB_BAF_B_Bergen_DPMT_Rifleman_B",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
                "UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
            };
        ATSpecialist[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        ATSpecialistAsst[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        AASpecialist[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        AASpecialistAsst[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        EOD[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        Engineer[] = { "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_OLI" };
        JTAC[] = { "UK3CB_BAF_B_Bergen_DPMT_JTAC_H_A", "UK3CB_BAF_B_Bergen_OLI_JTAC_H_A" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class helmet: helmet {
        Default[] = {
                "UK3CB_BAF_H_Mk6_DPMT_A",
                "UK3CB_BAF_H_Mk6_DPMT_B",
                "UK3CB_BAF_H_Mk6_DPMT_C",
                "UK3CB_BAF_H_Mk6_DPMT_D",
                "UK3CB_BAF_H_Mk6_DPMT_E",
                "UK3CB_BAF_H_Mk6_DPMT_F"
            };
        Lead[] = { "UK3CB_BAF_H_Beret_TYR_PRR" };
        Command[] = { "UK3CB_BAF_H_Beret_TYR_PRR" };
        Driver[] = { "UK3CB_BAF_H_CrewHelmet_B" };
        HeliPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        HeliCrew[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        JetPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
    };
};
