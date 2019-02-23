class kekoFactionUSArmyUCP: kekoFactionBase {

	name = "[Main] U.S. Army (UCP)";
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
	weaponCfg = kekoWeaponsUSArmy;

	logisticsHelicopter = "RHS_UH60M";

	// define all weapons and mags
	#include "kekoWeaponsUSArmy.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierUSArmyUCP: kekoSoldier {
		uniform[] = {
			"rhs_uniform_cu_ucp","rhs_uniform_cu_ucp_101st","rhs_uniform_cu_ucp_10th","rhs_uniform_cu_ucp_1stcav","rhs_uniform_cu_ucp_82nd"};

		vest[] = {
			"rhsusf_iotv_ucp_Rifleman"};

		helmet[] = {
			"rhsusf_ach_helmet_ucp_norotos","rhsusf_ach_helmet_headset_ess_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_ucp"};

		primary[] = {
			keko_W_M4};

		secondary[] = {
			keko_W_M9};
	};

	class kekoSoldierLight: kekoSoldierUSArmyUCP {
	};

	class kekoLead: kekoSoldierUSArmyUCP	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {"rhsusf_iotv_ucp_Teamleader"};
		helmet[] = {"rhsusf_patrolcap_ucp"};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_M4_GL_HUNTIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_tan_specops_US"};
	};

	class kekoSQL: kekoSoldierUSArmyUCP	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_M4_GL_HUNTIR};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierUSArmyUCP	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_M4_GL};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"rhsusf_iotv_ucp_Medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"rhsusf_iotv_ucp_Medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierUSArmyUCP	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierUSArmyUCP	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_M136};
	};

	class kekoGrenadier: kekoSoldierUSArmyUCP {
		name = "Grenadier";
		primary[] = {
			keko_W_M4_GL};
		vest[] = {"rhsusf_iotv_ucp_Grenadier"};
	};

	class kekoLMG: kekoSoldierUSArmyUCP {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_M249};
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		vest[] = {"rhsusf_iotv_ucp_SAW"};
	};

	class kekoLMGAsst: kekoSoldierUSArmyUCP {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierUSArmyUCP {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_M240B};
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		vest[] = {"rhsusf_iotv_ucp_SAW"};
	};

	class kekoMMGAsst: kekoSoldierUSArmyUCP {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierUSArmyUCP {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_Carryall_cbr"};
		launcher[] = {keko_W_Javelin};
	};

	class kekoATSpecialistAsst: kekoSoldierUSArmyUCP {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_Carryall_cbr"};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		launcher[] = {keko_W_Stinger};
	};

	class kekoAASpecialistAsst: kekoSoldierUSArmyUCP {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierUSArmyUCP {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_M14};
	};

	class kekoSniper: kekoSoldierUSArmyUCP {
		name = "Sniper";
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
		vest[] = {"V_PlateCarrier2_blk"};
		vestInventory[] = {
			{8,"ACE_7Rnd_408_305gr_Mag"}
		};
		helmet[] = {"H_HelmetSpecB"};
		primary[] = {
			keko_W_A3_LRR};
		secondary[] = {keko_W_M9};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"}
		};
		primary[] = {
			keko_W_M4_GL};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
		vest[] = {"rhsusf_iotv_ucp_Repair"};
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
		vest[] = {"rhsusf_iotv_ucp_Repair"};
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
		uniform[] = {"rhs_uniform_cu_ucp_1stcav"};
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
			keko_W_M4_GL_HUNTIR};
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
			keko_W_M4_GL_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}
		};
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
