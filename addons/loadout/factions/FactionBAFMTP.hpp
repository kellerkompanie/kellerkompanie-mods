class FactionBAFMTP: FactionBase {
	name = "[Event] BAF MTP - British Armed Forces MTP";
	logisticsHelicopter = "UK3CB_BAF_Chinook_HC2_MTP";

	#include "WeaponsBAF.hpp"

	class uniform: uniform {
		Default[] = { "UK3CB_BAF_U_CombatUniform_MTP", "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve" };
		Lead[] = { "UK3CB_BAF_U_RolledUniform_MTP" };
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
		Lead[] = { "UK3CB_BAF_B_Bergen_MTP_Radio_L_A", "UK3CB_BAF_B_Bergen_MTP_Radio_L_B" };
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

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		ATSpecialist[] = { { 1, "UK3CB_BAF_Javelin_CLU" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
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
				"UK3CB_BAF_H_Mk7_Net_ESS_D",
				"UK3CB_BAF_H_Mk7_Scrim_A",
				"UK3CB_BAF_H_Mk7_Scrim_A",
				"UK3CB_BAF_H_Mk7_Scrim_B",
				"UK3CB_BAF_H_Mk7_Scrim_C",
				"UK3CB_BAF_H_Mk7_Scrim_D",
				"UK3CB_BAF_H_Mk7_Scrim_E",
				"UK3CB_BAF_H_Mk7_Scrim_F",
				"UK3CB_BAF_H_Mk7_Scrim_ESS_A",
				"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
				"UK3CB_BAF_H_Mk7_Scrim_ESS_C"
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
