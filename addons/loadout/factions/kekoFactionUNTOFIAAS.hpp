class kekoFactionUNTOFIAAS: Faction_base {

	name = "[Minimal] UNTOFIAAS - United Nations Truce Observation Force In Altis And Stratis";
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
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoHeliCrew,
			kekoJetPilot,
			kekoJTAC,
			kekoUAVOperator,
			kekoSurvivor}},
		{"Officials", {
			kekoObserverCanada,
			kekoObserverChina,
			kekoObserverFinland,
			kekoObserverRussia}}
	};
	weaponCfg = kekoWeaponsUNTOFIAAS;

	// define all weapons and mags
	#include "kekoWeaponsUNTOFIAAS.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierUNTOFIAAS: kekoSoldier {
		uniform[] = {
			"U_MU_B_soldier_wdl",
			"U_MU_B_soldier_wdl_vest",
			"U_MU_B_soldier_wdl_tshirt"
		};

		vest[] = {
			"V_I_G_resistanceLeader_F",
			"V_TacVest_oli",
			"V_TacVest_camo"
		};

		helmet[] = {
			"UNT_basic_helmet",
			"UNT_hel_can_UN"
		};

		primary[] = {
			keko_W_A3_Mk20
		};

		secondary[] = {
			keko_W_TACTICAL
		};
	};

	class kekoSoldierLight: kekoSoldierUNTOFIAAS {
		primary[] = {
			keko_W_A3_Mk20C
		};
	};

	class kekoLead: kekoSoldierUNTOFIAAS	{
		name = "Lead";
		rank = "LIEUTENANT";
		helmet[] = {"UNT_Beret_02"};
		backpack[] = {"TFAR_rt1523g_bwmod"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_Mk20_GL_HuntIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierUNTOFIAAS	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_Mk20_GL_HuntIR};
		backpack[] = {"TFAR_rt1523g_bwmod"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierUNTOFIAAS	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_Mk20_GL};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierIAGL_oli"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierIAGL_oli"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierUNTOFIAAS	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierUNTOFIAAS	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoGrenadier: kekoSoldierUNTOFIAAS {
		name = "Grenadier";
		primary[] = {
			keko_W_A3_Mk20_GL};
	};

	class kekoLMG: kekoSoldierUNTOFIAAS {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_A3_Stoner};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoLMGAsst: kekoSoldierUNTOFIAAS {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierUNTOFIAAS {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_A3_MMG};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGAsst: kekoSoldierUNTOFIAAS {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierUNTOFIAAS {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_FieldPack_cbr"};
		launcher[] = {keko_W_TITAN_AT};
	};

	class kekoATSpecialistAsst: kekoSoldierUNTOFIAAS {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_FieldPack_cbr"};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_cbr"};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierUNTOFIAAS {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_cbr"};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierUNTOFIAAS {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_A3_EBR};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
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
			keko_W_A3_Mk20_GL_HuntIR};
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
		backpack[] = {"TFAR_rt1523g_bwmod"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_Mk20_GL_HuntIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}
		};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};

	class kekoObserverCanada: kekoSoldierUNTOFIAAS {
		name = "U.N. Observer (Canada)";
		rank = "COLONEL";
		uniform[] = {"UNT_fat_cadpat"};
		helmet[] = {"UNT_Beret_02"};
		primary[] = {};
		secondary[] = {};
		vest[] = {};
		vestInventory[] = {};
	};

	class kekoObserverChina: kekoObserverCanada {
		name = "U.N. Observer (China)";
		uniform[] = {"UNT_fat_hex_officer"};
	};

	class kekoObserverFinland: kekoObserverCanada {
		name = "U.N. Observer (Finland)";
		uniform[] = {"UNT_unf_m04_helle_1"};
	};

	class kekoObserverRussia: kekoObserverCanada {
		name = "U.N. Observer (Russia)";
		uniform[] = {"UNT_unf_rus_surpat_1"};
	};
};
