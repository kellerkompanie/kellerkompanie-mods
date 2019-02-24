class kekoFactionBAFArctic: Faction_base {

	name = "[Event] BAF Arctic - British Armed Forces (Arctic)";
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

	class kekoSoldierBAFArctic: kekoSoldier {
		uniform[] = {
			"UK3CB_BAF_U_Smock_MTP_Arctic"
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
			"UK3CB_BAF_H_Mk7_Win_A",
			"UK3CB_BAF_H_Mk7_Win_ESS_A",
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
			"UK3CB_BAF_H_Mk7_Net_ESS_D"
		};

		primary[] = {
			keko_W_BAF_L85A2
		};

		secondary[] = {
			keko_W_BAF_L131A1
		};
	};

	class kekoSoldierLight: kekoSoldierBAFArctic {
		primary[] = {
			keko_W_BAF_L85A2
		};
	};

	class kekoLead: kekoSoldierBAFArctic	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {
			"UK3CB_BAF_U_RolledUniform_MTP"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_SL_A"
		};
		helmet[] = {
			"UK3CB_BAF_H_Beret_TYR_PRR"
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
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

	class kekoSQL: kekoSoldierBAFArctic	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_BAF_L85A2_UGL_HUNTIR
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Radio_H_A",
			"UK3CB_BAF_B_Bergen_MTP_Radio_H_B",
			"UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Radio_L_B"
		};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}
		};
		optics[] = {
			"Rangefinder"
		};
		vest[] = {
			"UK3CB_BAF_V_Osprey_SL_B",
			"UK3CB_BAF_V_Osprey_SL_C",
			"UK3CB_BAF_V_Osprey_SL_D"
		};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierBAFArctic	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {
			"Binocular"
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
			"UK3CB_BAF_V_Osprey_Medic_A",
			"UK3CB_BAF_V_Osprey_Medic_B",
			"UK3CB_BAF_V_Osprey_Medic_C",
			"UK3CB_BAF_V_Osprey_Medic_D"
		};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
			"UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
			"UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Medic_L_B"
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

	class kekoRifleman: kekoSoldierBAFArctic	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBAFArctic	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_AT4};
	};

	class kekoGrenadier: kekoSoldierBAFArctic {
		name = "Grenadier";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_V_Osprey_Grenadier_B"
		};
		primary[] = {
			keko_W_BAF_L85A2_UGL
		};
	};

	class kekoLMG: kekoSoldierBAFArctic {
		name = "Light Machine Gunner";
		vest[] = {
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_V_Osprey_MG_B"
		};
		primary[] = {
			keko_W_BAF_L110
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
	};

	class kekoLMGAsst: kekoSoldierBAFArctic {
		name = "Light Machine Gunner Asst.";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoMMG: kekoSoldierBAFArctic {
		name = "Medium Machine Gunner";
		vest[] = {
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_V_Osprey_MG_B"
		};
		primary[] = {
			keko_W_BAF_L7A2
		};
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
	};

	class kekoMMGAsst: kekoSoldierBAFArctic {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		optics[] = {
			"Binocular"
		};
	};

	class kekoATSpecialist: kekoSoldierBAFArctic {
		name = "Anti-Tank Specialist";

		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		backpackInventory[] = {
			{1, "UK3CB_BAF_Javelin_CLU"}
		};
		launcher[] = {
			keko_W_BAF_JAVELIN
		};
	};

	class kekoATSpecialistAsst: kekoSoldierBAFArctic {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		launcher[] = {
			keko_W_STRINGER
		};
	};

	class kekoAASpecialistAsst: kekoSoldierBAFArctic {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
			"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
		};
		optics[] = {
			"Rangefinder"
		};
	};

	class kekoMarksman: kekoSoldierBAFArctic {
		name = "Marksman";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Marksman_A"
		};
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
			"UK3CB_BAF_B_Bergen_MTP_Sapper_H_A",
			"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"
		};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {
			"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A",
			"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"
		};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {
			"UK3CB_BAF_V_Osprey_Lite",
			"UK3CB_BAF_V_Osprey",
			"UK3CB_BAF_V_Osprey_Belt_A"
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
			"UK3CB_BAF_V_Pilot_A"
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
			"UK3CB_BAF_V_Pilot_A"
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
			"UK3CB_BAF_B_Bergen_MTP_JTAC_H_A",
			"UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"
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
};
