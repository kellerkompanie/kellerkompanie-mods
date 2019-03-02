class FactionRussiaEMRDesert: FactionBase {
	name = "[Main] Russia EMR (Desert)";
	logisticsHelicopter = "RHS_Mi8mt_Cargo_vdv";

	#include "WeaponsRussiaEMR.hpp"

	class uniform: uniform {
		Default[] = { "rhs_uniform_emr_des_patchless" };
		Sniper[] = { "U_B_FullGhillie_sard" };
		HeliPilot[] = { "rhs_uniform_df15" };
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
				"rhs_6b23_6sh116",
				"rhs_6b23_digi_6sh92",
				"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
				"rhs_6b23_digi_6sh92_radio",
				"rhs_6b23_digi_6sh92_spetsnaz2"
			};
		Lead[] = { "rhs_6b23_digi_6sh92_headset_mapcase" };
		SQL[] = { "rhs_6b23_digi_6sh92_headset" };
		FTL[] = { "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_6sh116_vog" };
		Doctor[] = { "rhs_6b23_digi_medic" };
		Medic[] = { "rhs_6b23_digi_medic" };
		Grenadier[] = { "rhs_6b23_digi_6sh92_vog", "rhs_6b23_6sh116_vog" };
		Marksman[] = { "rhs_6b23_digi_sniper" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		EOD[] = { "rhs_6b23_digi_engineer" };
		Engineer[] = { "rhs_6b23_digi_engineer" };
		Driver[] = { "rhs_vest_pistol_holster" };
		HeliPilot[] = { "rhs_vest_pistol_holster" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_green" };
		SQL[] = { "TFAR_rt1523g_green" };
		Doctor[] = { "rhssaf_kitbag_smb" };
		Medic[] = { "rhssaf_kitbag_smb" };
		LMG[] = { "rhs_assault_umbts" };
		LMGAsst[] = { "rhs_assault_umbts" };
		MMG[] = { "rhs_assault_umbts" };
		MMGAsst[] = { "rhs_assault_umbts" };
		ATSpecialist[] = { "rhs_rpg_empty" };
		ATSpecialistAsst[] = { "rhs_rpg_empty" };
		AASpecialist[] = { "rhs_rpg_empty" };
		AASpecialistAsst[] = { "rhs_rpg_empty" };
		EOD[] = { "B_Carryall_oli" };
		Engineer[] = { "B_Carryall_oli" };
		JTAC[] = { "TFAR_rt1523g_green" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"rhs_6b27m_green_ess_bala",
				"rhs_6b27m_green_ess",
				"rhs_6b27m_green_bala",
				"rhs_6b27m_digi",
				"rhs_6b27m_digi_bala",
				"rhs_6b27m_digi_ess",
				"rhs_6b27m_digi_ess_bala",
				"rhs_6b27m_green"
			};
		Lead[] = { "rhs_fieldcap_digi" };
		Command[] = { "rhs_fieldcap_digi" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "rhs_tsh4" };
		HeliPilot[] = { "rhs_zsh7a_mike" };
		HeliCrew[] = { "rhs_zsh7a_mike_alt" };
		JetPilot[] = { "rhs_zsh7a_alt" };
	};

	class primary: primary {
		Default[] = { keko_W_AK74M_FOLDED };
		FTL[] = { keko_W_AK74M_GL };
		Grenadier[] = { keko_W_AK74M_GL };
		LMG[] = { keko_W_M84 };
		MMG[] = { keko_W_PKP };
		Marksman[] = { keko_W_SVD };
		Sniper[] = { keko_W_A3_LRR };
		Spotter[] = { keko_W_AK74M };
		Driver[] = { keko_W_AKS74U };
		HeliPilot[] = { keko_W_AKS74U };
		JTAC[] = { keko_W_AK74M_GL };
		UAVOperator[] = { keko_W_AK74M };
	};

	class secondary: secondary {
		Default[] = { keko_W_Makarov };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RPG26 };
		ATSpecialist[] = { keko_W_RPG7 };
		AASpecialist[] = { keko_W_Igla };
	};

};
