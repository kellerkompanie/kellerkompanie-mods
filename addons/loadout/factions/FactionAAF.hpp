class FactionAAF: Faction_base {

	name = "[Minimal] AAF - Altis Armed Forces";
	roles[] = {
		{"Führung", {
			Command,
			Lead,
			Sergeant,
			SQL,
			FTL,
			Doctor,
			Medic}
		},
		{"Plebs", {
			Rifleman,
			RiflemanAT,
			Grenadier,
			LMG,
			LMGAsst}
		},
		{"Heavy Weapons", {
			MMG,
			MMGAsst,
			ATSpecialist,
			ATSpecialistAsst,
			AASpecialist,
			AASpecialistAsst}
		},
		{"Support", {
			Marksman,
			Sniper,
			Spotter,
			EOD,
			Engineer,
			Driver,
			HeliPilot,
			HeliCrew,
			JetPilot,
			JTAC,
			UAVOperator,
			Survivor}
		}
	};

	logisticsHelicopter = "I_Heli_Transport_02_F";

	// define all weapons and mags
	#include "WeaponsAAF.hpp"

	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class Soldier: Soldier {
		uniform[] = {
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve"
		};

		vest[] = {
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl"
		};

		helmet[] = {
			"H_HelmetIA"
		};

		primary[] = {
			keko_W_A3_F2000
		};

		secondary[] = {
			keko_W_A3_ACP
		};
	};

	#include "BaseRoleClasses.hpp"

	class Lead: Lead_base {
		uniform[] = {"U_I_OfficerUniform"};
		vest[] = {"V_TacVest_oli"};
		helmet[] = {"H_MilCap_dgtl"};
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
	};

	class Command: Command_base	{
		helmet[] = {"H_Cap_blk_Raven"};
	};

	class SQL: SQL_base	{
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
	};

	class Sergeant: Sergeant_base {
	};

	class FTL: FTL_base {
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_F2000_UGL};
	};

	class Doctor: Doctor_base {
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		backpack[] = {"B_Kitbag_rgr"};
	};

	class Medic: Medic_base {
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		backpack[] = {"B_Kitbag_rgr"};
	};

	class Rifleman: Rifleman_base {
	};

	class RiflemanAT: RiflemanAT_base {
		launcher[] = {keko_W_NLAW};
	};

	class Grenadier: Grenadier_base {
		name = "Grenadier";
		primary[] = {keko_W_A3_F2000_UGL};
	};

	class LMG: LMG_base {
		primary[] = {keko_W_A3_STONER};
		backpack[] = {"B_FieldPack_oli"};
	};

	class LMGAsst: LMGAsst_base {
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Binocular"};
	};

	class MMG: MMG_base {
		primary[] = {keko_W_A3_MMG_AAF};
		backpack[] = {"B_FieldPack_oli"};
	};

	class MMGAsst: MMGAsst_base {
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Binocular"};
	};

	class ATSpecialist: ATSpecialist_base {
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AT_AAF};
	};

	class ATSpecialistAsst: ATSpecialistAsst_base {
		backpack[] = {"B_FieldPack_oli"};
	};

	class AASpecialist: AASpecialist_base {
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AA_AAF};
	};

	class AASpecialistAsst: AASpecialistAsst_base {
		backpack[] = {"B_FieldPack_oli"};
	};

	class Marksman: Marksman_base {
		primary[] = {keko_W_A3_EBR};
	};

	class Sniper: Sniper_base {
		uniform[] = {"U_I_GhillieSuit"};
		uniformInventory[] = {
			{1,"ACE_ATragMX"},
			{10,"ACE_quikclot"},
			{1,"ACE_Flashlight_MX991"},
			{1,"ACE_IR_Strobe_Item"},
			{1,"ACE_Kestrel4500"},
			{1,"ACE_MapTools"},
			{1,"ACE_microDAGR"},
			{2,"ACE_morphine"},
			{3,"ACE_tourniquet"},
			{1,"ACE_surgicalKit"},
			{1,"ACE_RangeCard"},
			{2,"ACE_epinephrine"},
			{1,"ACE_salineIV"},
			{8,"ACE_fieldDressing"}
		};
		vest[] = {"V_Chestrig_oli"};
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{8,"5Rnd_127x108_Mag"},
			{2,"9Rnd_45ACP_Mag"}};
		helmet[] = {"H_HelmetIA"};
		primary[] = {keko_W_A3_GM6};
		secondary[] = {keko_W_A3_ACP_SILENCED};
		optics[] = {"Laserdesignator"};
	};

	class Spotter: Sniper {
		name = "Spotter";
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"9Rnd_45ACP_Mag"}
		};
		primary[] = {keko_W_A3_F2000};
	};

	class EOD: EOD_base {
		backpack[] = {"B_Carryall_oli"};
	};

	class Engineer: Engineer_base {
		backpack[] = {"B_Carryall_oli"};
	};

	class Driver: Driver_base {
		vest[] = {"V_BandollierB_oli"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class HeliPilot: HeliPilot_base {
		uniform[] = {"U_I_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] += {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_PilotHelmetHeli_I"};
		optics[] = {"Binocular"};
	};

	class HeliCrew: HeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"H_CrewHelmetHeli_I"};
	};

	class JetPilot: HeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_I_pilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_I"};
		optics[] = {"Binocular"};
	};

	class JTAC: JTAC_base {
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
		vestInventory[] = {
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class UAVOperator: UAVOperator_base	{
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"}
		};
		backpack[] = {"I_UAV_01_backpack_F"};
		items[] = {"I_UavTerminal"};
	};
};
