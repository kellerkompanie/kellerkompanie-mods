class kekoFactionHorizonIsland: kekoFactionBase {

	name = "[Main] Horizon Island Defense Forces";
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
			kekoMMGAsst}},
		{"Support", {
			kekoMarksman,
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoHeliCrew,
			kekoJTAC,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsHorizonIsland;

	logisticsHelicopter = "rhs_uh1h_hidf_unarmed";

	// define all weapons and mags
	#include "kekoWeaponsHorizonIsland.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierHorizonIsland: kekoSoldier {
		uniform[] = {
			"rhsgref_uniform_ERDL"
		};

		vest[] = {
			"rhsgref_alice_webbing"
		};

		helmet[] = {
			"rhsgref_helmet_M1_liner",
			"rhsgref_helmet_M1_bare",
			"rhsgref_helmet_M1_bare_alt01",
			"rhsgref_helmet_M1_painted",
			"rhsgref_helmet_M1_painted_alt01"
		};

		primary[] = {
			keko_W_RHS_M16A4
		};

		secondary[] = {};
	};

	class kekoLead: kekoSoldierHorizonIsland	{
		name = "Lead";
		rank = "LIEUTENANT";
		helmet[] = {"rhsgref_helmet_M1_liner"};
		backpack[] = {"FRXA_tf_rt1523g_big_Ranger_Green"};
		backpackInventory[] = {};
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_RHS_M16A4};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierHorizonIsland	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_RHS_M16A4_GL};
		backpack[] = {"FRXA_tf_rt1523g_big_Ranger_Green"};
		backpackInventory[] = {};
		optics[] = {"Binocular"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierHorizonIsland	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		primary[] = {
			keko_W_RHS_M16A4_GL};
	};

	class kekoDoctor: kekoSoldierHorizonIsland {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsgref_hidf_alicepack"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierHorizonIsland {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsgref_hidf_alicepack"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierHorizonIsland	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierHorizonIsland	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RHS_M136_HEAT};
	};

	class kekoGrenadier: kekoSoldierHorizonIsland {
		name = "Grenadier";
		primary[] = {
			keko_W_RHS_M16A4_GL};
	};

	class kekoLMG: kekoSoldierHorizonIsland {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_RHS_M249};
		backpack[] = {"rhsgref_hidf_alicepack"};
	};

	class kekoLMGAsst: kekoSoldierHorizonIsland {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"rhsgref_hidf_alicepack"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierHorizonIsland {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_RHS_M240B};
		backpack[] = {"rhsgref_hidf_alicepack"};
	};

	class kekoMMGAsst: kekoSoldierHorizonIsland {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"rhsgref_hidf_alicepack"};
		optics[] = {"Binocular"};
	};

	class kekoMarksman: kekoSoldierHorizonIsland {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_RHS_M14EBR};
	};

	class kekoEOD: kekoSoldierHorizonIsland {
		name = "Explosive Specialist";
		backpack[] = {"rhsgref_hidf_alicepack"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierHorizonIsland {
		name = "Engineer";
		backpack[] = {"rhsgref_hidf_alicepack"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierHorizonIsland {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierHorizonIsland {
		name = "Helicopter Pilot";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"rhsgref_TacVest_ERDL"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"rhsusf_hgu56p_green"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"rhsusf_hgu56p_visor_mask_green"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_RHS_M16A4_GL_SMOKE};
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
		backpack[] = {"FRXA_tf_rt1523g_big_Ranger_Green"};
		backpackInventory[] = {};
		optics[] = {"Binocular"};
	};

	class kekoSurvivor: kekoSoldierHorizonIsland	{
		name = "Survivor";
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"
		};
	};
};
