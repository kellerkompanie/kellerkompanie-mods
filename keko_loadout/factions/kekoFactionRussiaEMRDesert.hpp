class kekoFactionRussiaEMRDesert: kekoFactionBase {

	name = "[Main] Russia EMR (Desert)";
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
	weaponCfg = kekoWeaponsRussiaEMR;

	// define all weapons and mags
	#include "kekoWeaponsRussiaEMR.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierRussiaEMRDesert: kekoSoldier {
		uniform[] = {
			"rhs_uniform_emr_des_patchless"};

		vest[] = {
			"rhs_6b23_6sh116","rhs_6b23_digi_6sh92",
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b23_digi_6sh92_radio",
			"rhs_6b23_digi_6sh92_spetsnaz2"};

		helmet[] = {
			"rhs_6b27m_green_ess_bala",
			"rhs_6b27m_green_ess",
			"rhs_6b27m_green_bala",
			"rhs_6b27m_digi",
			"rhs_6b27m_digi_bala",
			"rhs_6b27m_digi_ess",
			"rhs_6b27m_digi_ess_bala",
			"rhs_6b27m_green"};	

		primary[] = {
			keko_W_AK74M};

		secondary[] = {
			keko_W_Makarov};
	};

	class kekoSoldierLight: kekoSoldierRussiaEMRDesert {
		primary[] = {
			keko_W_AK74M_FOLDED};
	};

	class kekoLead: kekoSoldierRussiaEMRDesert	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {"rhs_6b23_digi_6sh92_headset_mapcase"};
		helmet[] = {"rhs_fieldcap_digi"};
		backpack[] = {"TFAR_rt1523g_green"};		
		optics[] = {"Rangefinder"};
	}; 

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";		
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"rhs_fieldcap_digi"};
	};

	class kekoSQL: kekoSoldierRussiaEMRDesert	{
		name = "Squad Leader";
		rank = "SERGEANT";
		backpack[] = {"TFAR_rt1523g_green"};		
		optics[] = {"Rangefinder"};
		vest[] = {"rhs_6b23_digi_6sh92_headset"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierRussiaEMRDesert	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		vest[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_6sh116_vog"};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"rhs_6b23_digi_medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhssaf_kitbag_smb"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"rhs_6b23_digi_medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhssaf_kitbag_smb"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierRussiaEMRDesert	{
		name = "Rifleman";		
	};

	class kekoRiflemanAT: kekoSoldierRussiaEMRDesert	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RPG26};
	};

	class kekoGrenadier: kekoSoldierRussiaEMRDesert {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_AK74M_GL};	
		vest[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b23_6sh116_vog"};		
	};

	class kekoLMG: kekoSoldierRussiaEMRDesert {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},{1, SMOKE_WHITE},{2, GRENADE}};
		primary[] = {
			keko_W_M84};
		backpack[] = {"rhs_assault_umbts"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierRussiaEMRDesert {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"rhs_assault_umbts"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoMMG: kekoSoldierRussiaEMRDesert {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},{2, GRENADE}};
		primary[] = {
			keko_W_PKP};
		backpack[] = {"rhs_assault_umbts"};
	};

	class kekoMMGAsst: kekoSoldierRussiaEMRDesert {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"rhs_assault_umbts"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialist: kekoSoldierRussiaEMRDesert {
		name = "Anti-Tank Specialist";

		backpack[] = {"rhs_rpg_empty"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_RPG7};
	};

	class kekoATSpecialistAsst: kekoSoldierRussiaEMRDesert {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"rhs_rpg_empty"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"rhs_rpg_empty"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_Igla};
	};

	class kekoAASpecialistAsst: kekoSoldierRussiaEMRDesert {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"rhs_rpg_empty"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierRussiaEMRDesert {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN_TRACER}};
		primary[] = {
			keko_W_SVD};
		vest[] = {"rhs_6b23_digi_sniper"};
	};

	class kekoSniper: kekoSoldierRussiaEMRDesert {
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
			keko_W_A3_LRR};
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
		primary[] = {keko_W_AK74M};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
		vest[] = {"rhs_6b23_digi_engineer"};
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
		vest[] = {"rhs_6b23_digi_engineer"};
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"rhs_vest_pistol_holster"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"rhs_tsh4"};
		optics[] = {"Binocular"};
		primary[] = {keko_W_AKS74U};
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		uniform[] = {"rhs_uniform_df15"};
		vest[] = {"rhs_vest_pistol_holster"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"rhs_zsh7a_mike"};
		optics[] = {"Binocular"};
		primary[] = {keko_W_AKS74U};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"rhs_zsh7a_mike_alt"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		helmet[] = {"rhs_zsh7a_alt"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_AK74M_GL};
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
		backpack[] = {"TFAR_rt1523g_green"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_AK74M};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{4,PRIMARY_MAG},
			{4,PRIMARY_MAG_TRACER}};
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
