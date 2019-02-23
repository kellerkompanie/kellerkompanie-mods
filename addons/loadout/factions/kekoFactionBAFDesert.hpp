class kekoFactionBAFDesert: kekoFactionBase {

	name = "[Event] BAF Desert - British Armed Forces (Desert)";
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
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsBAF;

	logisticsHelicopter = "UK3CB_BAF_Chinook_HC2_MTP";

	// define all weapons and mags
	#include "kekoWeaponsBAF.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierBAFDesert: kekoSoldier {
		uniform[] = {
			"UK3CB_BAF_U_CombatUniform_DDPM",
			"UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"
		};

		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_V_Osprey_DDPM4",
			"UK3CB_BAF_V_Osprey_DDPM5",
			"UK3CB_BAF_V_Osprey_DDPM6",
			"UK3CB_BAF_V_Osprey_DDPM7",
			"UK3CB_BAF_V_Osprey_DDPM8"
		};

		helmet[] = {
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"UK3CB_BAF_H_Mk6_DDPM_B",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"UK3CB_BAF_H_Mk6_DDPM_D",
			"UK3CB_BAF_H_Mk6_DDPM_E",
			"UK3CB_BAF_H_Mk6_DDPM_F"
		};

		primary[] = {
			keko_W_BAF_L85A2
		};

		secondary[] = {
			keko_W_BAF_L131A1
		};
	};

	class kekoSoldierLight: kekoSoldierBAFDesert {
		primary[] = {
			keko_W_BAF_L85A2
		};
	};

	class kekoLead: kekoSoldierBAFDesert	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM1"
		};
		helmet[] = {
			"UK3CB_BAF_H_Beret_TYR_PRR"
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_SL_A",
			"UK3CB_BAF_B_Bergen_TAN_SL_A"
		};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}
		};
		optics[] = {
			"Rangefinder"
		};
		primary[] = {
			keko_W_BAF_L85A2_UGL_HUNTIR
		};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierBAFDesert	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_BAF_L85A2_UGL_HUNTIR
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_SL_A",
			"UK3CB_BAF_B_Bergen_TAN_SL_A"
		};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}
		};
		optics[] = {
			"Rangefinder"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM2"
		};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierBAFDesert	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {
			"Binocular"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM3"
		};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM9"
		};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {
			"UK3CB_BAF_B_Kitbag_DDPM",
			"UK3CB_BAF_B_Kitbag_TAN"
		};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoDoctor {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierBAFDesert	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBAFDesert	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_AT4};
	};

	class kekoGrenadier: kekoSoldierBAFDesert {
		name = "Grenadier";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM3"
		};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoLMG: kekoSoldierBAFDesert {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_BAF_L110
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
		};
	};

	class kekoLMGAsst: kekoSoldierBAFDesert {
		name = "Light Machine Gunner Asst.";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoMMG: kekoSoldierBAFDesert {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_BAF_L7A2
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
		};
	};

	class kekoMMGAsst: kekoSoldierBAFDesert {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_A",
			"UK3CB_BAF_B_Bergen_TAN_Rifleman_B"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoATSpecialist: kekoSoldierBAFDesert {
		name = "Anti-Tank Specialist";

		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		backpackInventory[] = {
			{1, "UK3CB_BAF_Javelin_CLU"}
		};
		launcher[] = {
			keko_W_BAF_JAVELIN
		};
	};

	class kekoATSpecialistAsst: kekoSoldierBAFDesert {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		launcher[] = {
			keko_W_STRINGER
		};
	};

	class kekoAASpecialistAsst: kekoSoldierBAFDesert {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoMarksman: kekoSoldierBAFDesert {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_BAF_L129A1
		};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DDPM",
			"UK3CB_BAF_B_Carryall_TAN"
		};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DDPM1"
		};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {
			"UK3CB_BAF_H_CrewHelmet_B"
		};
		optics[] = {
			"Binocular"
		};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		uniform[] = {
			"UK3CB_BAF_U_HeliPilotCoveralls_RAF"
		};
		vest[] = {
			"UK3CB_BAF_V_Pilot_DDPM"
		};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {
			"UK3CB_BAF_H_PilotHelmetHeli_A"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {
			"UK3CB_BAF_H_PilotHelmetHeli_A"
		};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {
			"UK3CB_BAF_U_HeliPilotCoveralls_RAF"
		};
		vest[] = {
			"UK3CB_BAF_V_Pilot_DDPM"
		};
		helmet[] = {
			"UK3CB_BAF_H_PilotHelmetHeli_A"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_BAF_L85A2_UGL_SMOKE
		};
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
		backpack[] = {
			"UK3CB_BAF_B_Bergen_TAN_JTAC_H_A",
			"UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A"
		};
		backpackInventory[] = {
			{4,"Laserbatteries"}
		};
		optics[] = {
			"UK3CB_BAF_Soflam_Laserdesignator"
		};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_BAF_L85A2_UGL_HUNTIR
		};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}
		};
		backpack[] = {
			"B_UAV_01_backpack_F"
		};
		items[] = {
			"B_UavTerminal"
		};
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
