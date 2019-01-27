class kekoFactionBAFWDL: kekoFactionBase {

	name = "[Event] BAF WDL - British Armed Forces (WDL)";
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

	class kekoSoldierBAFWDL: kekoSoldier {
		uniform[] = {
			"UK3CB_BAF_U_CombatUniform_DPMW",
			"UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve"
		};

		vest[] = {
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_V_Osprey_DPMW4",
			"UK3CB_BAF_V_Osprey_DPMW5",
			"UK3CB_BAF_V_Osprey_DPMW6",
			"UK3CB_BAF_V_Osprey_DPMW7",
			"UK3CB_BAF_V_Osprey_DPMW8"
		};

		helmet[] = {
			"UK3CB_BAF_H_Mk6_DPMW_A",
			"UK3CB_BAF_H_Mk6_DPMW_B",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"UK3CB_BAF_H_Mk6_DPMW_D",
			"UK3CB_BAF_H_Mk6_DPMW_E",
			"UK3CB_BAF_H_Mk6_DPMW_F"
		};

		primary[] = {
			keko_W_BAF_L85A2
		};

		secondary[] = {
			keko_W_BAF_L131A1
		};
	};

	class kekoSoldierLight: kekoSoldierBAFWDL {
		primary[] = {
			keko_W_BAF_L85A2
		};
	};

	class kekoLead: kekoSoldierBAFWDL	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {
			"UK3CB_BAF_U_RolledUniform_MTP"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_DPMW1"
		};
		helmet[] = {
			"UK3CB_BAF_H_Beret_TYR_PRR"
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_SL_A"
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

	class kekoSQL: kekoSoldierBAFWDL	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_BAF_L85A2_UGL_HUNTIR
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_SL_A",
			"UK3CB_BAF_B_Bergen_OLI_SL_A"
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

	class kekoFTL: kekoSoldierBAFWDL	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {
			"Binocular"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_DPMW3"
		};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}
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
			"UK3CB_BAF_V_Osprey_DPMW9"
		};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {
			"UK3CB_BAF_B_Kitbag_DPMW",
			"UK3CB_BAF_B_Kitbag_OLI"
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

	class kekoRifleman: kekoSoldierBAFWDL	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBAFWDL	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_AT4};
	};

	class kekoGrenadier: kekoSoldierBAFWDL {
		name = "Grenadier";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DPMW3"
		};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}
		};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoLMG: kekoSoldierBAFWDL {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}
		};
		primary[] = {
			keko_W_BAF_L110
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_B",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
		};
		backpackInventory[] = {
			{2, PRIMARY_MAG_LMG}
		};
	};

	class kekoLMGAsst: kekoSoldierBAFWDL {
		name = "Light Machine Gunner Asst.";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_B",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
		};
		backpackInventory[] = {
			{4, PRIMARY_MAG_LMG}
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoMMG: kekoSoldierBAFWDL {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}
		};
		primary[] = {
			keko_W_BAF_L7A2
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_B",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
		};
	};

	class kekoMMGAsst: kekoSoldierBAFWDL {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A",
			"UK3CB_BAF_B_Bergen_DPMW_Rifleman_B",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_A",
			"UK3CB_BAF_B_Bergen_OLI_Rifleman_B"
		};
		backpackInventory[] = {
			{3, PRIMARY_MAG_MMG}
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoATSpecialist: kekoSoldierBAFWDL {
		name = "Anti-Tank Specialist";

		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = {
			{1, "UK3CB_BAF_Javelin_CLU"}
		};
		launcher[] = {
			keko_W_BAF_JAVELIN
		};
	};

	class kekoATSpecialistAsst: kekoSoldierBAFWDL {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = {
			{2, AT_MAG}
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = {
			{1, AA_MAG}
		};
		launcher[] = {
			keko_W_STRINGER
		};
	};

	class kekoAASpecialistAsst: kekoSoldierBAFWDL {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = {
			{2, AA_MAG}
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoMarksman: kekoSoldierBAFWDL {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}
		};
		primary[] = {
			keko_W_BAF_L129A1
		};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {
			"UK3CB_BAF_B_Carryall_DPMW",
			"UK3CB_BAF_B_Carryall_OLI"
		};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {
			"UK3CB_BAF_V_Osprey_DPMW1"
		};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
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
			"UK3CB_BAF_V_Pilot_DPMW"
		};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
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
			"UK3CB_BAF_V_Pilot_DPMW"
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
		backpack[] = {
			"UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A",
			"UK3CB_BAF_B_Bergen_OLI_JTAC_H_A"
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
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
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
		vestInventory[] = {
			{1,PRIMARY_MAG},
			{1,SECONDARY_MAG}
		};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"
		};
	};
};
