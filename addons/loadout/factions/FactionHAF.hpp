class FactionHAF: FactionBase {
	name = "[Minimal] HAF - Hellenic Armed Forces";
	logisticsHelicopter = "B_Heli_Transport_03_F";

	#include "WeaponsChineseHAF.hpp"

	class uniform: uniform {
		Default[] = {
				"HEL_fat_1",
				"HEL_fat_2",
				"HEL_fat_3",
				"HEL_fat_4",
				"HEL_fat_5",
				"HEL_fat_6"
			};
		Sniper[] = { "U_B_FullGhillie_sard" };
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
		Default[] = { "HEL_vest_greece_1", "HEL_vest_greece_2" };
		Command[] = { "V_Chestrig_rgr" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
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
		EOD[] = { "B_Carryall_khk" };
		Engineer[] = { "B_Carryall_khk" };
		JTAC[] = { "TFAR_rt1523g_rhs" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"HEL_hel_sf_1",
				"HEL_hel_ech_1",
				"HEL_hel_lgt_1"
			};
		Lead[] = { "HEL_beret_1" };
		Command[] = { "HEL_beret_1" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
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
		UAVOperator[] = { keko_W_A3_MX_GL_HUNTIR, keko_W_A3_MX_GL_BLACK_HUNTIR };
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
