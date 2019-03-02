class FactionWAMVolunteers: FactionBase {
	name = "[Minimal] WAM - West Altian Militia (Volunteers)";
	logisticsHelicopter = "I_Heli_light_03_unarmed_F";

	#include "WeaponsWAMVolunteers.hpp"

	class role: role {
		Lead = "Lead";
		Command = "Command";
		SQL = "Squad Leader";
		Sergeant = "Sergeant";
		FTL = "Fire Team Leader";
		Doctor = "Doctor";
		Medic = "Medic";
		Rifleman = "Rifleman";
		RiflemanAT = "Rifleman Anti-Tank";
		Grenadier = "Grenadier";
		LMG = "Light Machine Gunner";
		LMGAsst = "Light Machine Gunner Asst.";
		MMG = "Medium Machine Gunner";
		MMGAsst = "Medium Machine Gunner Asst.";
		ATSpecialist = "Anti-Tank Specialist";
		ATSpecialistAsst = "Anti-Tank Specialist Assistant";
		AASpecialist = "Anti-Air Specialist";
		AASpecialistAsst = "Anti-Air Specialist Assistant";
		Marksman = "Marksman";
		EOD = "Explosive Specialist";
		Engineer = "Engineer";
		Driver = "Driver/Crewman";
		HeliPilot = "Helicopter Pilot";
		HeliCrew = "Helicopter Crew";
		JTAC = "JTAC";
		UAVOperator = "UAV Operator";
	};

	class rank: rank {
		Lead = "LIEUTENANT";
		Command = "COLONEL";
		SQL = "SERGEANT";
		FTL = "CORPORAL";
		Doctor = "SERGEANT";
		Medic = "CORPORAL";
	};

	class uniform: uniform {
		Default[] = {
				"WAM_fat_CE_villapaita",
				"WAM_fat_1",
				"WAM_fat_4",
				"WAM_fat_jeans",
				"WAM_fat_jeans_2",
				"WAM_fat_21",
				"WAM_fat_22",
				"WAM_fat_5",
				"WAM_fat_3"
			};
		HeliPilot[] = { "U_B_HeliPilotCoveralls" };
	};

	class vest: vest {
		Default[] = {
				"V_BandollierB_blk",
				"V_BandollierB_cbr",
				"V_BandollierB_rgr",
				"V_BandollierB_khk",
				"V_BandollierB_oli",
				"V_TacVest_blk",
				"V_TacVest_brn",
				"V_TacVest_camo",
				"V_TacVest_khk",
				"V_TacVest_oli",
				"V_I_G_resistanceLeader_F",
				"V_TacChestrig_cbr_F",
				"V_TacChestrig_grn_F",
				"V_TacChestrig_oli_F"
			};
		Doctor[] = { "WAM_vest_GA_rig_CAcamo" };
		Medic[] = { "WAM_vest_GA_rig_CAcamo" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
		Doctor[] = { "B_Kitbag_rgr" };
		Medic[] = { "B_Kitbag_rgr" };
		RiflemanAT[] = { "B_AssaultPack_rgr" };
		LMG[] = { "B_FieldPack_khk" };
		LMGAsst[] = { "B_FieldPack_khk" };
		MMG[] = { "B_FieldPack_khk" };
		MMGAsst[] = { "B_FieldPack_khk" };
		ATSpecialist[] = { "B_FieldPack_cbr" };
		ATSpecialistAsst[] = { "B_FieldPack_cbr" };
		AASpecialist[] = { "B_FieldPack_cbr" };
		AASpecialistAsst[] = { "B_FieldPack_cbr" };
		EOD[] = { "WAM_Carryall_mcamo_ammo" };
		Engineer[] = { "WAM_Carryall_mcamo_ammo" };
		JTAC[] = { "TFAR_rt1523g_rhs" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"H_Bandanna_gry",
				"H_Bandanna_blu",
				"H_Bandanna_cbr",
				"H_Bandanna_khk",
				"H_Bandanna_mcamo",
				"H_Bandanna_sgg",
				"H_Bandanna_sand",
				"H_Bandanna_surfer",
				"H_Bandanna_surfer_blk",
				"H_Bandanna_surfer_grn",
				"H_Bandanna_camo",
				"H_Booniehat_khk",
				"H_Booniehat_mcamo",
				"H_Booniehat_oli",
				"H_Booniehat_tan",
				"H_Cap_blk",
				"H_Cap_blu",
				"H_Cap_blk_CMMG",
				"H_Cap_grn",
				"H_Cap_oli",
				"H_Cap_red",
				"H_Cap_tan",
				"H_Hat_blue",
				"H_Hat_brown",
				"H_Hat_camo",
				"H_Hat_checker",
				"H_Hat_grey",
				"H_Hat_tan",
				"H_StrawHat",
				"H_StrawHat_dark"
			};
		Lead[] = { "GUR_beret_01" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_CTARC };
		Lead[] = { keko_W_A3_CTAR_GL_HuntIR };
		SQL[] = { keko_W_A3_CTAR_GL_HuntIR };
		FTL[] = { keko_W_A3_CTAR_GL };
		Grenadier[] = { keko_W_A3_CTAR_GL };
		LMG[] = { keko_W_A3_Stoner };
		MMG[] = { keko_W_A3_MMG };
		Marksman[] = { keko_W_A3_EBR };
		JTAC[] = { keko_W_A3_CTAR_GL_HuntIR };
		UAVOperator[] = { keko_W_A3_CTAR_GL_HuntIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_Grach };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RPG };
		ATSpecialist[] = { keko_W_RPG32 };
		AASpecialist[] = { keko_W_TITAN_AA };
	};

};
