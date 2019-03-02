class FactionMyrimidones: FactionBase {
	name = "[Minimal] Myrimidones Inc. (PMC)";
	logisticsHelicopter = "MYR_ORCA_F";

	#include "WeaponsMyrimidones.hpp"

	class uniform: uniform {
		Default[] = {
				"MYR_fat_7",
				"MYR_fat_5",
				"MYR_fat_6",
				"MYR_fat_8",
				"MYR_fat_3",
				"MYR_fat_2",
				"MYR_fat_4",
				"MYR_fat_1"
			};
		Lead[] = { "MYR_fat_9" };
		Command[] = { "MYR_fat_9" };
		Sniper[] = { "U_B_FullGhillie_sard" };
		HeliPilot[] = { "MYR_fat_9" };
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
		Default[] = {
				"V_PlateCarrier2_blk",
				"GUR_vest_nato_mixed_1_2",
				"MYR_vest_GA_lite_blk",
				"vests_khk_co2",
				"GUR_vest_nato_mixed_1_2"
			};
		Lead[] = { "MYR_vest_GA_lite_blk" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
		Doctor[] = { "GUR_Kitbag_cbr_navid" };
		Medic[] = { "GUR_Kitbag_cbr_navid" };
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
				"MYR_hel_lgt_1",
				"MYR_hel_lgt_1",
				"MYR_hel_lgt_1",
				"MYR_cap_headphones"
			};
		Lead[] = { "MYR_cap_headphones", "MYR_cap_hs" };
		Command[] = { "MYR_cap" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "MYR_hel_heli" };
		HeliCrew[] = { "MYR_hel_heliCrew" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_MXC };
		Lead[] = { keko_W_A3_MX_GL_HUNTIR };
		SQL[] = { keko_W_A3_MX_GL_HUNTIR };
		FTL[] = { keko_W_A3_MX_GL };
		Grenadier[] = { keko_W_A3_MX_GL };
		LMG[] = { keko_W_A3_MX_SW };
		MMG[] = { keko_W_A3_MMG };
		Marksman[] = { keko_W_A3_MXM };
		Sniper[] = { keko_W_A3_LRR };
		Spotter[] = { keko_W_A3_MXM };
		JTAC[] = { keko_W_A3_MX_GL_HUNTIR };
		UAVOperator[] = { keko_W_A3_MX_GL_HUNTIR };
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
