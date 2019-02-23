class kekoFactionWAM: kekoFactionBase {

	name = "[Minimal] WAM - West Altian Militia (Paramilitary)";
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
			kekoJTAC,
			kekoUAVOperator,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsWAM;

	logisticsHelicopter = "I_Heli_light_03_unarmed_F";

	// define all weapons and mags
	#include "kekoWeaponsWAM.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierWAM: kekoSoldier {
		uniform[] = {
			"WAM_fat_multitarn",
			"WAM_fat_AOR1",
			"WAM_fat_AOR2",
			"WAM_fat_CE_villapaita",
			"WAM_fat_CE_green_pants"
		};

		vest[] = {
			"V_TacVest_khk",
			"MYR_vest_GA_rig_blk",
			"WAM_vest_GA_rig_CAcamo",
			"V_TacVest_oli",
			"V_TacChestrig_cbr_F",
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"WAM_vest_GA_lite_CAcamo",
			"MYR_vest_GA_lite_blk",
			"V_TacVest_camo"
		};

		helmet[] = {
			"H_Cap_headphones",
			"GUR_beret_01"
		};

		primary[] = {
			keko_W_A3_CTAR
		};

		secondary[] = {
			keko_W_Grach
		};
	};

	class kekoSoldierLight: kekoSoldierWAM {
		primary[] = {
			keko_W_A3_CTARC
		};
	};

	class kekoLead: kekoSoldierWAM	{
		name = "Lead";
		rank = "LIEUTENANT";
		helmet[] = {"GUR_beret_01"};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_CTAR_GL_HuntIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierWAM	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_CTAR_GL_HuntIR
		};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierWAM	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_CTAR_GL
		};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"WAM_vest_GA_rig_CAcamo"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"WAM_vest_GA_rig_CAcamo"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierWAM {
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierWAM {
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RPG};
		backpack[] = {"B_AssaultPack_rgr"};
	};

	class kekoGrenadier: kekoSoldierWAM {
		name = "Grenadier";
		primary[] = {
			keko_W_A3_CTAR_GL
		};
	};

	class kekoLMG: kekoSoldierWAM {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_A3_Stoner
		};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoLMGAsst: kekoSoldierWAM {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierWAM {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_A3_MMG
		};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGAsst: kekoSoldierWAM {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierWAM {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_FieldPack_cbr"};
		launcher[] = {keko_W_RPG32};
	};

	class kekoATSpecialistAsst: kekoSoldierWAM {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_FieldPack_cbr"};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_cbr"};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierWAM {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_cbr"};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierWAM {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_A3_EBR
		};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"WAM_Carryall_mcamo_ammo"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"WAM_Carryall_mcamo_ammo"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
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
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_A3_CTAR_GL_HuntIR};
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
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_CTAR_GL_HuntIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};

	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor";
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"
		};
	};
};
