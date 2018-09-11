class kekoFactionBlackorderRedBerets: kekoFactionBase {

	name = "[Main] Black Order (Red Berets)";
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
	weaponCfg = kekoWeaponsBlackorderRedBerets;

	// define all weapons and mags
	#include "kekoWeaponsBlackorderRedBerets.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierBlackorderRedBerets: kekoSoldier {
		uniform[] = {
			"U_BlackOrder_Uniform_1"};

		vest[] = {
			"V_BlackOrder_PlateCarrier"};

		helmet[] = {
			"H_BlackOrder_CombatHelmet_red"};

		primary[] = {
			keko_W_MK18};

		secondary[] = {
			keko_W_Glock};

		goggles[] = {"VSM_balaclava_Black_Skull"};
	};

	class kekoSoldierLight: kekoSoldierBlackorderRedBerets {
		primary[] = {
			keko_W_Tavor};
	};

	class kekoLead: kekoSoldierBlackorderRedBerets	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {"V_BlackOrder_Chestrig"};
		helmet[] = {"H_BlackOrder_Beret_Red"};
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
		helmet[] = {"H_BlackOrder_Beret_Red"};
	};

	class kekoSQL: kekoSoldierBlackorderRedBerets	{
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

	class kekoFTL: kekoSoldierBlackorderRedBerets	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
	};

	class kekoDoctor: kekoSoldierBlackorderRedBerets {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		uniform[] = {"U_BlackOrder_Uniform_1_Medic"};
		vest[] = {"V_BlackOrder_PlateCarrier_medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierBlackorderRedBerets {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		uniform[] = {"U_BlackOrder_Uniform_1_Medic"};
		vest[] = {"V_BlackOrder_PlateCarrier_medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierBlackorderRedBerets	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierBlackorderRedBerets	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_M136,keko_W_M80,keko_W_M72};
	};

	class kekoGrenadier: kekoSoldierBlackorderRedBerets {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_MK18_M320};
	};

	class kekoLMG: kekoSoldierBlackorderRedBerets {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_M249};
		backpack[] = {"B_AssaultPack_blk"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierBlackorderRedBerets {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_AssaultPack_blk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierBlackorderRedBerets {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_MG42};
		backpack[] = {"B_FieldPack_blk"};
	};

	class kekoMMGAsst: kekoSoldierBlackorderRedBerets {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_FieldPack_blk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierBlackorderRedBerets {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_blk"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_MAAWS};
	};

	class kekoATSpecialistAsst: kekoSoldierBlackorderRedBerets {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_blk"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierBlackorderRedBerets {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_blk"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_STINGER};
	};

	class kekoAASpecialistAsst: kekoSoldierBlackorderRedBerets {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_blk"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierBlackorderRedBerets {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_SIG556};
	};

	class kekoSniper: kekoSoldierBlackorderRedBerets {
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
			{10,"ACE_30Rnd_65x47_Scenar_mag"},
			{1,GRENADE}};
		primary[] = {
			keko_W_MK18_M320};
	};

	class kekoEOD: kekoSoldierBlackorderRedBerets {
		name = "Explosive Specialist";
		backpack[] = {"B_MU_Carryall_blk"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierBlackorderRedBerets {
		name = "Engineer";
		backpack[] = {"B_MU_Carryall_blk"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierBlackorderRedBerets {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_blk"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_BlackOrder_cvc_helmet"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierBlackorderRedBerets {
		name = "Helicopter Pilot";
		uniform[] = {"U_BlackOrder_HeliPilotCoveralls"};
		vest[] = {"V_BlackOrder_TacVest_1"};
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
		backpack[] = {"FRXA_tf_rt1523g_big_Black"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierBlackorderRedBerets	{
		name = "UAV Operator";
		primary[] = {
			keko_W_MK18_M320_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};

	class kekoSurvivor: kekoSoldierBlackorderRedBerets	{
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
