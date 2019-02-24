class kekoFactionBlackorder: Faction_base {

	name = "[Main] Black Order";
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
	weaponCfg = kekoWeaponsBlackorder;

	logisticsHelicopter = "O_RHS_UH60M2_BlackOrder_F";

	// define all weapons and mags
	#include "kekoWeaponsBlackorder.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierBlackorder: kekoSoldier {
		uniform[] = {
			"U_BlackOrder_Uniform_1"};

		vest[] = {
			"V_BlackOrder_PlateCarrier"};

		helmet[] = {
			"H_BlackOrder_CombatHelmet",
			"H_BlackOrder_mich_bare",
			"H_BlackOrder_mich_bare_headset"};

		primary[] = {
			keko_W_MK18};

		secondary[] = {
			keko_W_Glock};
	};

	class kekoSoldierLight: kekoSoldierBlackorder {
		primary[] = {
			keko_W_Tavor};
	};

	class kekoLead: kekoSoldierBlackorder	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {"V_BlackOrder_Chestrig"};
		helmet[] = {"H_BlackOrder_MilCap"};
		backpack[] = {"FRXA_tf_rt1523g_Black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_MK18_M320_HUNTIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_BlackOrder_Cap_01"};
	};

	class kekoSQL: kekoSoldierBlackorder	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_MK18_M320_HUNTIR};
		backpack[] = {"FRXA_tf_rt1523g_Black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierBlackorder	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_MK18_M320};
	};

	class kekoDoctor: kekoSoldierBlackorder {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		uniform[] = {"U_BlackOrder_Uniform_1_Medic"};
		vest[] = {"V_BlackOrder_PlateCarrier_medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierBlackorder {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		uniform[] = {"U_BlackOrder_Uniform_1_Medic"};
		vest[] = {"V_BlackOrder_PlateCarrier_medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierBlackorder	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBlackorder	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_M136,keko_W_M80,keko_W_M72};
	};

	class kekoGrenadier: kekoSoldierBlackorder {
		name = "Grenadier";
		primary[] = {
			keko_W_MK18_M320};
	};

	class kekoLMG: kekoSoldierBlackorder {
		name = "Light Machine Gunner";
		primary[] = {
			keko_W_M249};
		backpack[] = {"B_AssaultPack_blk"};
	};

	class kekoLMGAsst: kekoSoldierBlackorder {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_AssaultPack_blk"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierBlackorder {
		name = "Medium Machine Gunner";
		primary[] = {
			keko_W_MG42};
		backpack[] = {"B_FieldPack_blk"};
	};

	class kekoMMGAsst: kekoSoldierBlackorder {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_blk"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierBlackorder {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_FieldPack_blk"};
		launcher[] = {keko_W_MAAWS};
	};

	class kekoATSpecialistAsst: kekoSoldierBlackorder {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_FieldPack_blk"};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierBlackorder {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_blk"};
		launcher[] = {keko_W_STINGER};
	};

	class kekoAASpecialistAsst: kekoSoldierBlackorder {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_blk"};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierBlackorder {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_SIG556};
	};

	class kekoSniper: kekoSoldierBlackorder {
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
			{8,"ACE_7Rnd_408_305gr_Mag"}};
		helmet[] = {"H_HelmetSpecB"};
		primary[] = {
			keko_W_M40A5};
		secondary[] = {keko_W_Glock};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{10,"ACE_30Rnd_65x47_Scenar_mag"}};
		primary[] = {
			keko_W_MK18_M320};
	};

	class kekoEOD: kekoSoldierBlackorder {
		name = "Explosive Specialist";
		backpack[] = {"B_MU_Carryall_blk"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierBlackorder {
		name = "Engineer";
		backpack[] = {"B_MU_Carryall_blk"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierBlackorder {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_blk"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_BlackOrder_cvc_helmet"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierBlackorder {
		name = "Helicopter Pilot";
		uniform[] = {"U_BlackOrder_HeliPilotCoveralls"};
		vest[] = {"V_BlackOrder_TacVest_1"};
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

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_BlackOrder_PilotCoveralls"};
		vest[] = {"V_BlackOrder_TacVest_1"};
		helmet[] = {"H_BlackOrder_PilotHelmet"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_MK18_M320_HUNTIR};
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
		backpack[] = {"FRXA_tf_rt1523g_big_Black"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierBlackorder	{
		name = "UAV Operator";
		primary[] = {
			keko_W_MK18_M320_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};
};
