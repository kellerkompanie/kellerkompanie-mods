class kekoFactionBAFMTP: kekoFactionBase {

	name = "[Event] BAF MTP - British Armed Forces MTP";
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

	// define all weapons and mags
	#include "kekoWeaponsBAF.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierBAFMTP: kekoSoldier {
		uniform[] = {
			"UK3CB_BAF_U_CombatUniform_MTP",
			"UK3CB_BAF_U_CombatUniform_MTP_RM",
			"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
			"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve_RM"
		};

		vest[] = {
			"UK3CB_BAF_V_Osprey_Rifleman_A",
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_V_Osprey_Rifleman_C",
			"UK3CB_BAF_V_Osprey_Rifleman_D",
			"UK3CB_BAF_V_Osprey_Rifleman_E",
			"UK3CB_BAF_V_Osprey_Rifleman_F"
		};

		helmet[] = {
			"UK3CB_BAF_H_Mk7_Camo_A",
			"UK3CB_BAF_H_Mk7_Camo_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"UK3CB_BAF_H_Mk7_Camo_E",
			"UK3CB_BAF_H_Mk7_Camo_F",
			"UK3CB_BAF_H_Mk7_Camo_CESS_A",
			"UK3CB_BAF_H_Mk7_Camo_CESS_B",
			"UK3CB_BAF_H_Mk7_Camo_CESS_C",
			"UK3CB_BAF_H_Mk7_Camo_CESS_D",
			"UK3CB_BAF_H_Mk7_Camo_ESS_A",
			"UK3CB_BAF_H_Mk7_Camo_ESS_B",
			"UK3CB_BAF_H_Mk7_Camo_ESS_C",
			"UK3CB_BAF_H_Mk7_Camo_ESS_D",
			"UK3CB_BAF_H_Mk7_Net_A",
			"UK3CB_BAF_H_Mk7_Net_B",
			"UK3CB_BAF_H_Mk7_Net_C",
			"UK3CB_BAF_H_Mk7_Net_D",
			"UK3CB_BAF_H_Mk7_Net_CESS_A",
			"UK3CB_BAF_H_Mk7_Net_CESS_B",
			"UK3CB_BAF_H_Mk7_Net_CESS_C",
			"UK3CB_BAF_H_Mk7_Net_CESS_D",
			"UK3CB_BAF_H_Mk7_Net_ESS_A",
			"UK3CB_BAF_H_Mk7_Net_ESS_B",
			"UK3CB_BAF_H_Mk7_Net_ESS_C",
			"UK3CB_BAF_H_Mk7_Net_ESS_D",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"UK3CB_BAF_H_Mk7_Scrim_B",
			"UK3CB_BAF_H_Mk7_Scrim_C",
			"UK3CB_BAF_H_Mk7_Scrim_D",
			"UK3CB_BAF_H_Mk7_Scrim_E",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_A",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_C"
		};

		primary[] = {
			keko_W_BAF_L85A2
		};

		secondary[] = {
			keko_W_BAF_L131A1
		};
	};

	class kekoSoldierLight: kekoSoldierBAFMTP {
		primary[] = {
			keko_W_BAF_L85A2
		};
	};

	class kekoLead: kekoSoldierBAFMTP	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"U_B_CombatUniform_mcam"};
		vest[] = {"UK3CB_BAF_V_Osprey_SL_A"};
		helmet[] = {"UK3CB_BAF_H_Beret_TYR_PRR"};
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_A"};
		backpackInventory[] = {};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierBAFMTP	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_A"};
		backpackInventory[] = {	};
		optics[] = {"Rangefinder"};
		vest[] = {
			"UK3CB_BAF_V_Osprey_SL_B",
			"UK3CB_BAF_V_Osprey_SL_C",
			"UK3CB_BAF_V_Osprey_SL_D"
		};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierBAFMTP	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Medic_B",
			"UK3CB_BAF_V_Osprey_Medic_C",
			"UK3CB_BAF_V_Osprey_Medic_D"
		};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_H_B"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Medic_B",
			"UK3CB_BAF_V_Osprey_Medic_C",
			"UK3CB_BAF_V_Osprey_Medic_D"
		};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_H_B"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierBAFMTP	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBAFMTP	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_AT4};
	};

	class kekoGrenadier: kekoSoldierBAFMTP {
		name = "Grenadier";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_V_Osprey_Grenadier_B"
		};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_BAF_L85A2_UGL};
	};

	class kekoLMG: kekoSoldierBAFMTP {
		name = "Light Machine Gunner";
		vest[] = {
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_V_Osprey_MG_B"
		};
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_BAF_L110};
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierBAFMTP {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierBAFMTP {
		name = "Medium Machine Gunner";
		vest[] = {
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_V_Osprey_MG_B"
		};
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_BAF_L7A2};
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
	};

	class kekoMMGAsst: kekoSoldierBAFMTP {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierBAFMTP {
		name = "Anti-Tank Specialist";

		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_BAF_JAVELIN};
	};

	class kekoATSpecialistAsst: kekoSoldierBAFMTP {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_STRINGER};
	};

	class kekoAASpecialistAsst: kekoSoldierBAFMTP {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierBAFMTP {
		name = "Marksman";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Marksman_A"
		};
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_BAF_L129A1};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
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
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_BAF_L85A2_UGL};
		vestInventory[] = {
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_A"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_BAF_L85A2_UGL};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};

	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor";
		vestInventory[] = {
			{1,PRIMARY_MAG},
			{1,SECONDARY_MAG}};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"
		};
	};
};
