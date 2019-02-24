class kekoFactionBundeswehrTropen: Faction_base {

	name = "[Main] Bundeswehr (Tropentarn)";
	roles[] = {
		{"Führung", {
			kekoCommand,
			kekoLead,
			kekoSergeant,
			kekoSQL,
			kekoFTL,
			kekoDoctor,
			kekoMedic}},
		{"Plebs", {
			kekoRifleman,
			kekoRiflemanAT,
			kekoGrenadier,
			kekoLMG,
			kekoLMGAsst}},
		{"Heavy Weapons", {
			kekoMMG,
			kekoMMGAsst,
			kekoATSpecialist,
			kekoATSpecialistAsst,
			kekoAASpecialist,
			kekoAASpecialistAsst}},
		{"Support", {
			kekoMarksman,
			kekoSniper,
			kekoSpotter,
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoHeliCrew,
			kekoJetPilot,
			kekoJTAC,
			kekoUAVOperator,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsBundeswehr;

	logisticsHelicopter = "kyo_MH47E_base";

	// define all weapons and mags
	#include "kekoWeaponsBundeswehr.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierBundeswehrTropen: kekoSoldier {
		uniform[] = {
			"PBW_Uniform3_tropen",
			"PBW_Uniform4_tropen",
			"PBW_Uniform4K_tropen"};

		vest[] = {
			"BWA3_Vest_JPC_Radioman_Tropen",
			"BWA3_Vest_JPC_Rifleman_Tropen",
			"BWA3_Vest_JPC_Leader_Tropen"};

		helmet[] = {
			"PBW_Helm1_tropen",
			"PBW_Helm1_tropen_HBO",
			"PBW_Helm1_tropen_HBOD",
			"PBW_Helm1_tropen_H",
			"PBW_Helm3_tropen",
			"PBW_Helm4_tropen",
			"PBW_Helm4_tropen_HBO",
			"PBW_Helm4_tropen_HBOD",
			"PBW_Helm4_tropen_H",
			"PBW_Helm6_tropen"};

		primary[] = {
			keko_W_G36,
			keko_W_G36_D};

		secondary[] = {
			keko_W_P8};
	};

	class kekoSoldierLight: kekoSoldierBundeswehrTropen {

	};

	class kekoLead: kekoSoldierBundeswehrTropen	{
		name = "Zugführer";
		rank = "LIEUTENANT";
		helmet[] = {"PBW_muetze2_tropen"};
		backpack[] = {"TFAR_rt1523g_big_bwmod_tropen"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_G36_GL_HuntIR,
			keko_W_G36_GL_HuntIR_D};
	};

	class kekoCommand: kekoLead	{
		name = "Oberkommando";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"PBW_muetze1_tropen"};
	};

	class kekoSQL: kekoSoldierBundeswehrTropen	{
		name = "Gruppenführer";
		rank = "SERGEANT";
		primary[] = {
			keko_W_G36_GL_HuntIR,
			keko_W_G36_GL_HuntIR_D};
		backpack[] = {"TFAR_rt1523g_big_bwmod_tropen"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Stellv. Zugführer";
	};

	class kekoFTL: kekoSoldierBundeswehrTropen	{
		name = "Truppführer";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_G36_GL,
			keko_W_G36_GL_D};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Arzt";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Sanitäter";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierBundeswehrTropen	{
		name = "Schütze";
	};

	class kekoRiflemanAT: kekoSoldierBundeswehrTropen	{
		name = "Schütze AT (Panzerfaust)";
		launcher[] = {keko_W_PZF3};
		backpack[] = {"BWA3_AssaultPack_Tropen"};
		backpackInventory[] = {{1,AT_MAG}};
	};

	class kekoGrenadier: kekoSoldierBundeswehrTropen {
		name = "Grenadier";
		primary[] = {
			keko_W_G36_GL,
			keko_W_G36_GL_D};
	};

	class kekoLMG: kekoSoldierBundeswehrTropen {
		name = "Leichtes MG";
		primary[] = {
			keko_W_MG4};
		backpack[] = {"BWA3_FieldPack_Tropen"};
	};

	class kekoLMGAsst: kekoSoldierBundeswehrTropen {
		name = "Leichtes MG Helfer";
		backpack[] = {"BWA3_FieldPack_Tropen"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierBundeswehrTropen {
		name = "MMG Schütze";
		primary[] = {
			keko_W_MG3};
		backpack[] = {"BWA3_FieldPack_Tropen"};
	};

	class kekoMMGAsst: kekoSoldierBundeswehrTropen {
		name = "MMG Helfer";

		backpack[] = {"BWA3_FieldPack_Tropen"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierBundeswehrTropen {
		name = "ATGM Milan Schütze (Rohr)";

		backpack[] = {"Redd_Milan_Static_Barrel"};
	};

	class kekoATSpecialistAsst: kekoSoldierBundeswehrTropen {
		name = "ATGM Milan Helfer (Dreibein)";

		backpack[] = {"Redd_Milan_Static_Tripod"};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Fliegerfaust Schütze";
		backpack[] = {"BWA3_FieldPack_Tropen"};
		launcher[] = {keko_W_Fliegerfaust};
	};

	class kekoAASpecialistAsst: kekoSoldierBundeswehrTropen {
		name = "Fliegerfaust Helfer";
		backpack[] = {"BWA3_FieldPack_Tropen"};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierBundeswehrTropen {
		name = "Zielfernrohrschütze";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_G28};
	};

	class kekoSniper: kekoSoldierBundeswehrTropen {
		name = "Scharfschütze";
		uniform[] = {"U_B_FullGhillie_sard"};
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
			{8,"ACE_fieldDressing"}};
		vestInventory[] = {
			{8,"ACE_7Rnd_408_305gr_Mag"}
		};
		primary[] = {
			keko_W_G29};
		secondary[] = {keko_W_TACTICAL_SPECOPS};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{10,"ACE_30Rnd_65x47_Scenar_mag"}
		};
		primary[] = {
			keko_W_G28};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Sprengmittel Spezialist";
		backpack[] = {"BWA3_Carryall_Tropen"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Pionier";
		backpack[] = {"BWA3_Carryall_Tropen"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Fahrer/Besatzung";
		vest[] = {"BWA3_Vest_Tropen"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helikopter Pilot";
		uniform[] = {"BWA3_Uniform_Helipilot"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helikopter Besatzung";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_G36_GL_JTAC,
			keko_W_G36_GL_JTAC_D};
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
		backpack[] = {"TFAR_rt1523g_big_bwmod_tropen"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_G36_GL_HuntIR,
			keko_W_G36_GL_HuntIR_D};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};
};
