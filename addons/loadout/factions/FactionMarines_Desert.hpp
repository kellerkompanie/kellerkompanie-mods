class FactionMarines_Desert: FactionBase {
	name = "[Main] U.S. Marine Corps - Marine Pattern Desert";
	logisticsHelicopter = "rhsusf_CH53E_USMC_D";

	#include "WeaponsMarines.hpp"

	class uniform: uniform {
		Default[] = { "rhs_uniform_FROG01_d" };
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
		Default[] = { "rhsusf_spc_light" };
		Lead[] = { "rhsusf_spc_light" };
		SQL[] = { "rhsusf_spc_squadleader" };
		Doctor[] = { "rhsusf_spc_corpsman" };
		Medic[] = { "rhsusf_spc_corpsman" };
		Grenadier[] = { "rhsusf_spc_iar" };
		LMG[] = { "rhsusf_spc_iar" };
		MMG[] = { "rhsusf_spc_mg" };
		Marksman[] = { "rhsusf_spc_marksman" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "rhsusf_hgu56p_visor_black" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "tfw_ilbe_d" };
		SQL[] = { "tfw_ilbe_d" };
		Doctor[] = { "rhsusf_assault_eagleaiii_coy" };
		Medic[] = { "rhsusf_assault_eagleaiii_coy" };
		LMG[] = { "rhsusf_assault_eagleaiii_coy" };
		LMGAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		MMG[] = { "rhsusf_assault_eagleaiii_coy" };
		MMGAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		ATSpecialist[] = { "rhsusf_assault_eagleaiii_coy" };
		ATSpecialistAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		AASpecialist[] = { "rhsusf_assault_eagleaiii_coy" };
		AASpecialistAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		EOD[] = { "rhsusf_assault_eagleaiii_coy" };
		Engineer[] = { "rhsusf_assault_eagleaiii_coy" };
		JTAC[] = { "tfw_ilbe_a_d" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		ATSpecialist[] = { { 4, "rhs_mag_smaw_SR" } };
		ATSpecialistAsst[] = { { 4, "rhs_mag_smaw_SR" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"rhsusf_mich_helmet_marpatd",
				"rhsusf_mich_helmet_marpatd_alt",
				"rhsusf_mich_helmet_marpatd_alt_headset",
				"rhsusf_mich_helmet_marpatd_headset",
				"rhsusf_mich_helmet_marpatd_norotos",
				"rhsusf_mich_helmet_marpatd_norotos_arc",
				"rhsusf_mich_helmet_marpatd_norotos_arc_headset",
				"rhsusf_mich_helmet_marpatd_norotos_headset",
				"rhsusf_lwh_helmet_marpatd",
				"rhsusf_lwh_helmet_marpatd_ess",
				"rhsusf_lwh_helmet_marpatd_headset"
			};
		Lead[] = { "rhs_8point_marpatd" };
		Command[] = { "rhs_booniehat2_marpatd" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_HelmetCrew_B" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "rhsusf_hgu56p_visor_mask_black" };
		JetPilot[] = { "RHS_jetpilot_usaf" };
	};

	class primary: primary {
		Default[] = { keko_W_RHS_M16A4 };
		Lead[] = { keko_W_RHS_M4A1_GL_HUNTIR };
		SQL[] = { keko_W_RHS_M4A1_GL_HUNTIR };
		FTL[] = { keko_W_RHS_M16A4_GL };
		Doctor[] = { keko_W_RHS_M4A1 };
		Medic[] = { keko_W_RHS_M4A1 };
		Grenadier[] = { keko_W_RHS_M16A4_GL };
		LMG[] = { keko_W_RHS_M249 };
		MMG[] = { keko_W_RHS_M240B };
		Marksman[] = { keko_W_RHS_M14EBR };
		Sniper[] = { keko_W_A3_LRR };
		Spotter[] = { keko_W_RHS_M16A4 };
		JTAC[] = { keko_W_RHS_M16A4_GL_HUNTIR };
		UAVOperator[] = { keko_W_RHS_M16A4_GL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_RHS_M9 };
		Sniper[] = { keko_W_RHS_M9 };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RHS_M136_HEDP };
		ATSpecialist[] = { keko_W_RHS_SMAW };
		AASpecialist[] = { keko_W_RHS_STINGER };
	};

};
