class FactionNAA: FactionBase {
	name = "[Minimal] NAA - New Altis Army";
	logisticsHelicopter = "NAA_Heli_light_03_unarmed_F";

	#include "WeaponsNAA.hpp"

	class uniform: uniform {
		Default[] = {
				"NAA_fat_alpat_ard3",
				"NAA_fat_alpat_ard2",
				"NAA_fat_alpat_ard1",
				"NAA_fat_alpat_rs_ard1",
				"NAA_fat_alpat_rs_ard3",
				"NAA_fat_alpat_rs_ard2"
			};
		Lead[] = { "U_I_OfficerUniform" };
		Command[] = { "NAA_unf_alpat_ard1" };
		Sniper[] = { "U_I_GhillieSuit" };
		HeliPilot[] = { "NAA_coverals_NAA" };
		JetPilot[] = { "U_I_pilotCoveralls" };
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
				"NAA_vst_GA_heavy_alpat_ard1",
				"NAA_vst_GA_heavy_alpat_ard3",
				"NAA_vst_GA_heavy_alpat_ard2",
				"NAA_vst_GA_lite_alpat_ard2",
				"NAA_vst_GA_lite_alpat_ard1",
				"NAA_vst_GA_lite_alpat_ard3",
				"NAA_vst_GA_rig_alpat_ard2",
				"NAA_vst_GA_rig_alpat_ard3",
				"NAA_vst_GA_rig_alpat_ard1"
			};
		Lead[] = { "V_TacVest_oli" };
		Doctor[] = {
				"NAA_vst_GA_heavy_alpat_ard1",
				"NAA_vst_GA_heavy_alpat_ard3",
				"NAA_vst_GA_heavy_alpat_ard2"
			};
		Medic[] = {
				"NAA_vst_GA_heavy_alpat_ard1",
				"NAA_vst_GA_heavy_alpat_ard3",
				"NAA_vst_GA_heavy_alpat_ard2"
			};
		Sniper[] = { "V_Chestrig_oli" };
		Driver[] = { "V_BandollierB_oli" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_anprc155" };
		SQL[] = { "TFAR_anprc155" };
		Doctor[] = {
				"NAA_bac_kit_alpat_ard1",
				"NAA_bac_kit_alpat_ard2",
				"NAA_bac_kit_alpat_ard3"
			};
		Medic[] = {
				"NAA_bac_kit_alpat_ard1",
				"NAA_bac_kit_alpat_ard2",
				"NAA_bac_kit_alpat_ard3"
			};
		RiflemanATTanks[] = { "NAA_bac_ass_alpat_ard1" };
		LMG[] = { "B_FieldPack_oli" };
		LMGAsst[] = { "B_FieldPack_oli" };
		MMG[] = { "B_FieldPack_oli" };
		MMGAsst[] = { "B_FieldPack_oli" };
		ATSpecialist[] = { "B_FieldPack_oli" };
		ATSpecialistAsst[] = { "B_FieldPack_oli" };
		AASpecialist[] = { "B_FieldPack_oli" };
		AASpecialistAsst[] = { "B_FieldPack_oli" };
		EOD[] = {
				"NAA_bac_carryAll_alpat_ard1",
				"NAA_bac_carryAll_alpat_ard3",
				"NAA_bac_carryAll_alpat_ard2"
			};
		Engineer[] = {
				"NAA_bac_carryAll_alpat_ard1",
				"NAA_bac_carryAll_alpat_ard3",
				"NAA_bac_carryAll_alpat_ard2"
			};
		JTAC[] = { "TFAR_anprc155" };
		UAVOperator[] = { "NAA_UAV_darter_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		RiflemanATTanks[] = { { 2, AT_MAG_TANKS } };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"NAA_hel_can_alpat_ard1",
				"NAA_hel_can_alpat_ard3",
				"NAA_hel_can_alpat_ard2",
				"NAA_hel_sf_alpat_ard1",
				"NAA_hel_ech_alpat_ard1",
				"NAA_hel_camo_alpat_ard1"
			};
		Lead[] = {
				"NAA_hat_milcap_alpat_ard1",
				"NAA_hat_milcap_alpat_ard3",
				"NAA_hat_milcap_alpat_ard2"
			};
		Command[] = { "NAA_beret" };
		Sniper[] = { "H_HelmetIA" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "NAA_hel_heli" };
		HeliCrew[] = { "NAA_hel_heli" };
		JetPilot[] = { "H_PilotHelmetFighter_I" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_F2000_SHORT };
		Lead[] = { keko_W_A3_F2000_UGL_HUNTIR };
		SQL[] = { keko_W_A3_F2000_UGL_HUNTIR };
		FTL[] = { keko_W_A3_F2000_UGL };
		Grenadier[] = { keko_W_A3_F2000_UGL };
		LMG[] = { keko_W_A3_STONER };
		MMG[] = { keko_W_A3_MMG_AAF };
		Marksman[] = { keko_W_A3_EBR };
		Sniper[] = { keko_W_A3_GM6 };
		Spotter[] = { keko_W_A3_F2000 };
		JTAC[] = { keko_W_A3_F2000_UGL_HUNTIR };
		UAVOperator[] = { keko_W_A3_F2000_UGL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_A3_ACP };
		Sniper[] = { keko_W_A3_ACP_SILENCED };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_NLAW };
		RiflemanATTanks[] = { keko_W_MAAWS };
		ATSpecialist[] = { keko_W_TITAN_AT_AAF };
		AASpecialist[] = { keko_W_TITAN_AA_AAF };
	};

};
