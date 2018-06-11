class kekoFactionChinesePLADesert: kekoFactionBase {

	name = "[Main] Chinese PLA (Desert)";
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
	weaponCfg = kekoWeaponsChinesePLA;

	// define all weapons and mags
	#include "kekoWeaponsChinesePLA.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierChinesePLADesert: kekoSoldier {
		uniform[] = {
			"PLA_CombatUniform_HM_SB","PLA_CombatUniform_HM_SBCB"};

		vest[] = {
			"PLA_B04_RF_D","PLA_T15Vest_RF_D"};

		helmet[] = {
			"VME_PLA_Helmet_D","VME_PLA_Helmet_D_G"};	

		primary[] = {
			keko_W_QBZ95};

		secondary[] = {
			keko_W_Rook};
	};

	class kekoSoldierLight: kekoSoldierChinesePLADesert {
	};

	class kekoLead: kekoSoldierChinesePLADesert	{
		name = "Lead";
		rank = "LIEUTENANT";		
		uniform[] = {"PLA_CombatUniform_HM_SW","PLA_CombatUniform_HM_SWCB"};
		vest[] = {"PLA_T15Vest_RD_D"};
		helmet[] = {"VME_PLA_Hat_D"};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {};
		optics[] = {"Rangefinder"};
	}; 

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";		
		medicClass = 2;
		engineerClass = 2;	
	};

	class kekoSQL: kekoSoldierChinesePLADesert	{
		name = "Squad Leader";
		rank = "SERGEANT";
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {};
		optics[] = {"Rangefinder"};
		vest[] = {"PLA_T15Vest_RD_D"};
		helmet[] = {"VME_PLA_Helmet_D_R_O","VME_PLA_Helmet_D_R"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierChinesePLADesert	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {keko_W_QBZ95_GL};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"TRYK_B_Kitbag_blk"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"TRYK_B_Kitbag_blk"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierChinesePLADesert	{
		name = "Rifleman";		
	};

	class kekoRiflemanAT: kekoSoldierChinesePLADesert	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_PF89};
		backpackInventory[] = {{1, RAT_MAG}};
	};

	class kekoGrenadier: kekoSoldierChinesePLADesert {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_QBZ95_GL};		
	};

	class kekoLMG: kekoSoldierChinesePLADesert {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_QJB95};
		backpack[] = {"rhsusf_falconii_coy"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
		vest[] = {"PLA_B04_MG_D"};
	};

	class kekoLMGAsst: kekoSoldierChinesePLADesert {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"rhsusf_falconii_coy"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoMMG: kekoSoldierChinesePLADesert {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MMG};
		backpack[] = {"rhsusf_falconii_coy"};
		vest[] = {"PLA_B04_MG_D"};
	};

	class kekoMMGAsst: kekoSoldierChinesePLADesert {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"rhsusf_falconii_coy"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialist: kekoSoldierChinesePLADesert {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT};
	};

	class kekoATSpecialistAsst: kekoSoldierChinesePLADesert {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierChinesePLADesert {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierChinesePLADesert {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_QBU88};
	};

	class kekoSniper: kekoSoldierChinesePLADesert {
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
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";	
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{8,PRIMARY_MAG_MARKSMAN},
			{1,GRENADE}};	
		primary[] = {
			keko_W_QBU88};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_khk"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"B_Carryall_khk"};
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
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_QBZ95_GL};
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
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{3,PRIMARY_MAG},
			{3,PRIMARY_MAG_TRACER}};
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
