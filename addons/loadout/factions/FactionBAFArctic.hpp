class FactionBAFArctic: FactionBAFMTP {
    name = "[Event] BAF Arctic - British Armed Forces (Arctic)";

    class uniform: uniform {
        Default[] = { "UK3CB_BAF_U_Smock_MTP_Arctic" };
        Lead[] = { "UK3CB_BAF_U_RolledUniform_MTP" };
        Command[] = { "UK3CB_BAF_U_RolledUniform_MTP" };
        HeliPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
        JetPilot[] = { "UK3CB_BAF_U_HeliPilotCoveralls_RAF" };
    };

    class vest: vest {
        Default[] = {
                "UK3CB_BAF_V_Osprey_Rifleman_A",
                "UK3CB_BAF_V_Osprey_Rifleman_B",
                "UK3CB_BAF_V_Osprey_Rifleman_C",
                "UK3CB_BAF_V_Osprey_Rifleman_D",
                "UK3CB_BAF_V_Osprey_Rifleman_E",
                "UK3CB_BAF_V_Osprey_Rifleman_F"
            };
        Lead[] = { "UK3CB_BAF_V_Osprey_SL_A" };
        Command[] = { "UK3CB_BAF_V_Osprey_SL_A" };
        Sergeant[] = {
                "UK3CB_BAF_V_Osprey_SL_B",
                "UK3CB_BAF_V_Osprey_SL_C",
                "UK3CB_BAF_V_Osprey_SL_D"
            };
        SQL[] = {
                "UK3CB_BAF_V_Osprey_SL_B",
                "UK3CB_BAF_V_Osprey_SL_C",
                "UK3CB_BAF_V_Osprey_SL_D"
            };
        Doctor[] = {
                "UK3CB_BAF_V_Osprey_Medic_A",
                "UK3CB_BAF_V_Osprey_Medic_B",
                "UK3CB_BAF_V_Osprey_Medic_C",
                "UK3CB_BAF_V_Osprey_Medic_D"
            };
        Grenadier[] = { "UK3CB_BAF_V_Osprey_Grenadier_A", "UK3CB_BAF_V_Osprey_Grenadier_B" };
        LMG[] = { "UK3CB_BAF_V_Osprey_MG_A", "UK3CB_BAF_V_Osprey_MG_B" };
        MMG[] = { "UK3CB_BAF_V_Osprey_MG_A", "UK3CB_BAF_V_Osprey_MG_B" };
        Marksman[] = { "UK3CB_BAF_V_Osprey_Marksman_A" };
        Driver[] = {
                "UK3CB_BAF_V_Osprey_Lite",
                "UK3CB_BAF_V_Osprey",
                "UK3CB_BAF_V_Osprey_Belt_A"
            };
        HeliPilot[] = { "UK3CB_BAF_V_Pilot_A" };
        JetPilot[] = { "UK3CB_BAF_V_Pilot_A" };
    };

    class backpack: backpack {
        Lead[] = {
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
            };
        Command[] = {
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
            };
        Sergeant[] = {
                "UK3CB_BAF_B_Bergen_MTP_Radio_H_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_H_B",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
            };
        SQL[] = {
                "UK3CB_BAF_B_Bergen_MTP_Radio_H_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_H_B",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
            };
        Doctor[] = {
                "UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
                "UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
                "UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Medic_L_B"
            };
        LMG[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        LMGAsst[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        MMG[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        MMGAsst[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        ATSpecialist[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        ATSpecialistAsst[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        AASpecialist[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        AASpecialistAsst[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
        EOD[] = { "UK3CB_BAF_B_Bergen_MTP_Sapper_H_A", "UK3CB_BAF_B_Bergen_MTP_Sapper_L_A" };
        Engineer[] = { "UK3CB_BAF_B_Bergen_MTP_Engineer_H_A", "UK3CB_BAF_B_Bergen_MTP_Engineer_L_A" };
        JTAC[] = { "UK3CB_BAF_B_Bergen_MTP_JTAC_H_A", "UK3CB_BAF_B_Bergen_MTP_JTAC_L_A" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
    };

    class helmet: helmet {
        Default[] = {
                "UK3CB_BAF_H_Mk7_Win_A",
                "UK3CB_BAF_H_Mk7_Win_ESS_A",
                "UK3CB_BAF_H_Mk7_Camo_A",
                "UK3CB_BAF_H_Mk7_Camo_B",
                "UK3CB_BAF_H_Mk7_Camo_C",
                "UK3CB_BAF_H_Mk7_Camo_D",
                "UK3CB_BAF_H_Mk7_Camo_E",
                "UK3CB_BAF_H_Mk7_Camo_F",
                "UK3CB_BAF_H_Mk7_Camo_CESS_A",
                "UK3CB_BAF_H_Mk7_Camo_CESS_B",
                "UK3CB_BAF_H_Mk7_Camo_CESS_C",
                "UK3CB_BAF_H_Mk7_Camo_CESS_D",
                "UK3CB_BAF_H_Mk7_Camo_ESS_A",
                "UK3CB_BAF_H_Mk7_Camo_ESS_B",
                "UK3CB_BAF_H_Mk7_Camo_ESS_C",
                "UK3CB_BAF_H_Mk7_Camo_ESS_D",
                "UK3CB_BAF_H_Mk7_Net_A",
                "UK3CB_BAF_H_Mk7_Net_B",
                "UK3CB_BAF_H_Mk7_Net_C",
                "UK3CB_BAF_H_Mk7_Net_D",
                "UK3CB_BAF_H_Mk7_Net_CESS_A",
                "UK3CB_BAF_H_Mk7_Net_CESS_B",
                "UK3CB_BAF_H_Mk7_Net_CESS_C",
                "UK3CB_BAF_H_Mk7_Net_CESS_D",
                "UK3CB_BAF_H_Mk7_Net_ESS_A",
                "UK3CB_BAF_H_Mk7_Net_ESS_B",
                "UK3CB_BAF_H_Mk7_Net_ESS_C",
                "UK3CB_BAF_H_Mk7_Net_ESS_D"
            };
        Lead[] = { "UK3CB_BAF_H_Beret_TYR_PRR" };
        Command[] = { "UK3CB_BAF_H_Beret_TYR_PRR" };
        Driver[] = { "UK3CB_BAF_H_CrewHelmet_B" };
        HeliPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        HeliCrew[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
        JetPilot[] = { "UK3CB_BAF_H_PilotHelmetHeli_A" };
    };
};
