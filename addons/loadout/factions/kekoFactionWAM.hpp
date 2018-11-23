class kekoFactionWAM: kekoFactionBase {

	name = "[Minimal] WAM - West Altian Militia";
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
	weaponCfg = kekoWeaponsWAM;

	// define all weapons and mags
	#include "kekoWeaponsWAM.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierWAM: kekoSoldier {
		uniform[] = {
			"U_B_CombatUniform_mcam"};

		vest[] = {
			"V_PlateCarrier1_rgr"};

		helmet[] = {
			"H_HelmetSpecB_blk"};

		primary[] = {
			keko_W_A3_MX};

		secondary[] = {
			keko_W_TACTICAL};
	};

	class kekoSoldierLight: kekoSoldierWAM {
		primary[] = {
			keko_W_A3_MXC,
			keko_W_A3_MXC_BLACK};
	};

	class kekoLead: kekoSoldierWAM	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"U_B_CombatUniform_mcam"};
		vest[] = {"V_Chestrig_rgr"};
		helmet[] = {"H_MilCap_mcamo"};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_MX_GL_HUNTIR,
			keko_W_A3_MX_GL_BLACK_HUNTIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_tan_specops_US"};
	};

	class kekoSQL: kekoSoldierWAM	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_MX_GL_HUNTIR,
			keko_W_A3_MX_GL_BLACK_HUNTIR};
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
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}};
		primary[] = {
			keko_W_A3_MX_GL,
			keko_W_A3_MX_GL_BLACK};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierSpec_rgr"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_mcamo"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierSpec_rgr"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_mcamo"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierWAM	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierWAM	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoGrenadier: kekoSoldierWAM {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MX_GL,
			keko_W_A3_MX_GL_BLACK};
	};

	class kekoLMG: kekoSoldierWAM {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MX_SW,
			keko_W_A3_MX_SW_BLACK};
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierWAM {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierWAM {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MMG,
			keko_W_A3_MMG_BLACK};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGAsst: kekoSoldierWAM {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierWAM {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT};
	};

	class kekoATSpecialistAsst: kekoSoldierWAM {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierWAM {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierWAM {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_MXM,
			keko_W_A3_MXM_BLACK};
	};

	class kekoSniper: kekoSoldierWAM {
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
			{1,SMOKE_WHITE},
			{1,SMOKE_GREEN},
			{8,"ACE_7Rnd_408_305gr_Mag"},
			{2,SECONDARY_MAG}};
		helmet[] = {"H_HelmetSpecB"};
		primary[] = {
			keko_W_A3_LRR,
			keko_W_A3_LRR_CAMO};
		secondary[] = {keko_W_TACTICAL_SPECOPS};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{10,"ACE_30Rnd_65x47_Scenar_mag"},
			{1,GRENADE}};
		primary[] = {
			keko_W_A3_MXM,
			keko_W_A3_MXM_BLACK};
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
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_A3_MX_GL_HUNTIR,
			keko_W_A3_MX_GL_BLACK_HUNTIR};
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
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_MX_GL_HUNTIR,
			keko_W_A3_MX_GL_BLACK_HUNTIR};
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
			"H_HeadBandage_bloody_F"};
	};
};
