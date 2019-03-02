class FactionUSMarines: FactionBase {
	name = "[Minimal] U.S. Marines - U.S. Force Recon Marines";
	logisticsHelicopter = "B_Heli_Transport_03_F";

	#include "WeaponsNATO.hpp"

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
		Sniper = "Sniper";
		Spotter = "Spotter";
		EOD = "Explosive Specialist";
		Engineer = "Engineer";
		Driver = "Driver/Crewman";
		HeliPilot = "Helicopter Pilot";
		HeliCrew = "Helicopter Crew";
		JetPilot = "Jet Pilot";
		JTAC = "JTAC";
		UAVOperator = "UAV Operator";
	};

	class uniform: uniform {
		Default[] = {
				"U_MU_B_soldier_wdl",
				"U_MU_B_soldier_wdl_vest",
				"U_MU_B_soldier_wdl_tshirt"
			};
		Lead[] = { "U_MU_B_soldier_wdl" };
		Sniper[] = { "U_B_FullGhillie_lsh" };
		HeliPilot[] = { "U_B_HeliPilotCoveralls" };
		JetPilot[] = { "U_B_PilotCoveralls" };
	};

	class uniformInventory: uniformInventory {
		Sniper[] = {
				{ 1, "ACE_ATragMX" },
				{ 10, "ACE_quikclot" },
				{ 1, "ACE_Flashlight_MX991" },
				{ 1, "ACE_IR_Strobe_Item" },
				{ 1, "ACE_Kestrel4500" },
				{ 1, "ACE_MapTools" },
				{ 1, "ACE_microDAGR" },
				{ 2, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_surgicalKit" },
				{ 1, "ACE_RangeCard" },
				{ 2, "ACE_epinephrine" },
				{ 1, "ACE_salineIV" },
				{ 8, "ACE_fieldDressing" }
			};
	};

	class vest: vest {
		Default[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr" };
		Lead[] = { "V_Chestrig_rgr" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_camo" };
		JetPilot[] = { "V_TacVest_camo" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_black" };
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
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
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
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_MXC_BLACK };
		Lead[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
		SQL[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
		FTL[] = { keko_W_A3_MX_GL_BLACK };
		Grenadier[] = { keko_W_A3_MX_GL_BLACK };
		LMG[] = { keko_W_A3_MX_SW_BLACK };
		MMG[] = { keko_W_A3_MMG_BLACK };
		Marksman[] = { keko_W_A3_MXM_BLACK };
		Sniper[] = { keko_W_A3_LRR };
		Spotter[] = { keko_W_A3_MXM, keko_W_A3_MXM_BLACK };
		JTAC[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
		UAVOperator[] = { keko_W_A3_MX_GL_BLACK_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_TACTICAL };
		Sniper[] = { keko_W_TACTICAL_SPECOPS };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_NLAW };
		ATSpecialist[] = { keko_W_TITAN_AT };
		AASpecialist[] = { keko_W_TITAN_AA };
	};

};
