class FactionBundeswehrTropen: FactionBase {
	name = "[Main] Bundeswehr (Tropentarn)";
	logisticsHelicopter = "kyo_MH47E_base";

	#include "WeaponsBundeswehr.hpp"

	class role: role {
		Lead = "Zugführer";
		Command = "Oberkommando";
		SQL = "Gruppenführer";
		Sergeant = "Stellv. Zugführer";
		FTL = "Truppführer";
		Doctor = "Arzt";
		Medic = "Sanitäter";
		Rifleman = "Schütze";
		RiflemanAT = "Schütze AT (Panzerfaust)";
		Grenadier = "Grenadier";
		LMG = "Leichtes MG";
		LMGAsst = "Leichtes MG Helfer";
		MMG = "MMG Schütze";
		MMGAsst = "MMG Helfer";
		ATSpecialist = "ATGM Milan Schütze (Rohr)";
		ATSpecialistAsst = "ATGM Milan Helfer (Dreibein)";
		AASpecialist = "Fliegerfaust Schütze";
		AASpecialistAsst = "Fliegerfaust Helfer";
		Marksman = "Zielfernrohrschütze";
		EOD = "Sprengmittel Spezialist";
		Engineer = "Pionier";
		Driver = "Fahrer/Besatzung";
		HeliPilot = "Helikopter Pilot";
		HeliCrew = "Helikopter Besatzung";
	};

	class uniform: uniform {
		Default[] = {
				"PBW_Uniform3_tropen",
				"PBW_Uniform4_tropen",
				"PBW_Uniform4K_tropen"
			};
		HeliPilot[] = { "BWA3_Uniform_Helipilot" };
		JetPilot[] = { "U_B_PilotCoveralls" };
	};

	class vest: vest {
		Default[] = {
				"BWA3_Vest_JPC_Radioman_Tropen",
				"BWA3_Vest_JPC_Rifleman_Tropen",
				"BWA3_Vest_JPC_Leader_Tropen"
			};
		Driver[] = { "BWA3_Vest_Tropen" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_big_bwmod_tropen" };
		Command[] = { "TFAR_rt1523g_big_bwmod_tropen" };
		Sergeant[] = { "TFAR_rt1523g_big_bwmod_tropen" };
		SQL[] = { "TFAR_rt1523g_big_bwmod_tropen" };
		Doctor[] = { "BWA3_Kitbag_Tropen_Medic" };
		Medic[] = { "BWA3_Kitbag_Tropen_Medic" };
		RiflemanAT[] = { "BWA3_AssaultPack_Tropen" };
		LMG[] = { "BWA3_FieldPack_Tropen" };
		LMGAsst[] = { "BWA3_FieldPack_Tropen" };
		MMG[] = { "BWA3_FieldPack_Tropen" };
		MMGAsst[] = { "BWA3_FieldPack_Tropen" };
		ATSpecialist[] = { "Redd_Milan_Static_Barrel" };
		ATSpecialistAsst[] = { "Redd_Milan_Static_Tripod" };
		AASpecialist[] = { "BWA3_FieldPack_Tropen" };
		AASpecialistAsst[] = { "BWA3_FieldPack_Tropen" };
		EOD[] = { "BWA3_Carryall_Tropen" };
		Engineer[] = { "BWA3_Carryall_Tropen" };
		JTAC[] = { "TFAR_rt1523g_big_bwmod_tropen" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Sergeant[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		RiflemanAT[] = { { 1, AT_MAG } };
		MMGAsst[] = { { 3, PRIMARY_MAG_MMG } };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"PBW_Helm1_tropen",
				"PBW_Helm1_tropen_HBO",
				"PBW_Helm1_tropen_HBOD",
				"PBW_Helm1_tropen_H",
				"PBW_Helm3_tropen",
				"PBW_Helm4_tropen",
				"PBW_Helm4_tropen_HBO",
				"PBW_Helm4_tropen_HBOD",
				"PBW_Helm4_tropen_H",
				"PBW_Helm6_tropen"
			};
		Lead[] = { "PBW_muetze2_tropen" };
		Command[] = { "PBW_muetze1_tropen" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_G36, keko_W_G36_D };
		Lead[] = { keko_W_G36_GL_HuntIR, keko_W_G36_GL_HuntIR_D };
		Sergeant[] = { keko_W_G36_GL_HuntIR, keko_W_G36_GL_HuntIR_D };
		SQL[] = { keko_W_G36_GL_HuntIR, keko_W_G36_GL_HuntIR_D };
		FTL[] = { keko_W_G36_GL, keko_W_G36_GL_D };
		Grenadier[] = { keko_W_G36_GL, keko_W_G36_GL_D };
		LMG[] = { keko_W_MG4 };
		MMG[] = { keko_W_MG3 };
		Marksman[] = { keko_W_G28 };
		JTAC[] = { keko_W_G36_GL_JTAC, keko_W_G36_GL_JTAC_D };
		UAVOperator[] = { keko_W_G36_GL_HuntIR, keko_W_G36_GL_HuntIR_D };
	};

	class secondary: secondary {
		Default[] = { keko_W_P8 };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_PZF3 };
		AASpecialist[] = { keko_W_Fliegerfaust };
	};

};
