class FactionNatoTropic: FactionNato {

	name = "[Minimal] NATO (Tropic) - North Atlantic Treaty Organization (Tropic)";

	// define all weapons and mags
	#include "WeaponsNATOtropic.hpp"

	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class Soldier: Soldier {
		uniform[] = {
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F"
		};

		vest[] = {
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F"
		};

		helmet[] = {
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F"
		};

		primary[] = {
			keko_W_A3_MX_TROPIC
		};

		secondary[] = {
			keko_W_P99_TROPIC
		};
	};

	class Lead: Lead {
		uniform[] = {"U_B_T_Soldier_F"};
		vest[] = {"V_TacChestrig_grn_F"};
		helmet[] = {"H_MilCap_tna_F"};
		backpack[] = {"TFAR_rt1523g_green"};
		primary[] = {keko_W_A3_MX_GL_TROPIC_HUNTIR};
	};

	class Command: Command {
		helmet[] = {"H_Cap_usblack"};
	};

	class SQL: SQL {
		primary[] = {keko_W_A3_MX_GL_TROPIC_HUNTIR};
		backpack[] = {"TFAR_rt1523g_green"};
	};

	class Sergeant: Sergeant {
	};

	class FTL: FTL	{
		primary[] = {keko_W_A3_MX_GL_TROPIC};
	};

	class Doctor: Doctor {
		vest[] = {"V_PlateCarrierSpec_tna_F"};
		backpack[] = {"B_Kitbag_rgr"};
	};

	class Medic: Medic {
		vest[] = {"V_PlateCarrierSpec_tna_F"};
		backpack[] = {"B_Kitbag_rgr"};
	};

	class Rifleman: Rifleman	{
	};

	class RiflemanAT: RiflemanAT	{
	};

	class Grenadier: Grenadier {
		primary[] = {keko_W_A3_MX_GL_TROPIC};
	};

	class LMG: LMG {
		primary[] = {keko_W_A3_MX_SW_TROPIC};
		backpack[] = {"B_AssaultPack_tna_F"};
	};

	class LMGAsst: LMGAsst {
		backpack[] = {"B_AssaultPack_tna_F"};
	};

	class MMG: MMG {
		primary[] = {keko_W_A3_MMG_BLACK};
		backpack[] = {"B_AssaultPack_tna_F"};
	};

	class MMGAsst: MMGAsst {
		backpack[] = {"B_AssaultPack_tna_F"};
		optics[] = {"Binocular"};
	};

	class ATSpecialist: ATSpecialist {
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AT};
	};

	class ATSpecialistAsst: ATSpecialistAsst {
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Rangefinder"};
	};

	class AASpecialist: AASpecialist {
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AA};
	};

	class AASpecialistAsst: AASpecialistAsst {
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Rangefinder"};
	};

	class Marksman: Marksman {
		primary[] = {keko_W_A3_MXM_TROPIC};
	};

	class Sniper: Sniper {
		uniform[] = {"U_B_T_FullGhillie_tna_F"};
		vest[] = {"V_PlateCarrier2_tna_F"};
		optics[] = {"Laserdesignator_01_khk_F"};
	};

	class Spotter: Sniper {
		name = "Spotter";
		primary[] = {keko_W_A3_MXM_TROPIC};
	};

	class EOD: EOD {
		vest[] = {"V_PlateCarrierGL_tna_F"};
		backpack[] = {"B_Carryall_oli"};
	};

	class Engineer: Engineer {
		backpack[] = {"B_Carryall_oli"};
	};

	class Driver: Driver {
		vest[] = {"V_BandollierB_oli"};
	};

	class HeliPilot: HeliPilot {
	};

	class HeliCrew: HeliCrew {
	};

	class JetPilot: JetPilot {
	};

	class JTAC: JTAC {
		primary[] = {keko_W_A3_MX_GL_TROPIC_HUNTIR};
		backpack[] = {"TFAR_rt1523g_green"};
		optics[] = {"Laserdesignator_01_khk_F"};
	};

	class UAVOperator: UAVOperator	{
		primary[] = {keko_W_A3_MX_GL_TROPIC_HUNTIR};
	};
};
