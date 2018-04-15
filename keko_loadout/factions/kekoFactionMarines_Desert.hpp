class kekoFactionMarines_Desert: kekoFactionBase {

	name = "[Main] U.S. Marine Corps - Marine Pattern Desert";
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
	weaponCfg = kekoWeaponsMarines;

	// define all weapons and mags
	#include "kekoWeaponsMarines.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierMarine_Desert: kekoSoldier {
		uniform[] = {
			"rhs_uniform_FROG01_d"};

		vest[] = {
			"rhsusf_spc_marksman",
			"rhsusf_spc_patchless",
			"rhsusf_spc_patchless_radio",
			"rhsusf_spc_rifleman",
			"rhsusf_spc_teamleader"};

		helmet[] = {
			"rhsusf_mich_helmet_marpatd",
			"rhsusf_mich_helmet_marpatd_alt",
			"rhsusf_mich_helmet_marpatd_alt_headset",
			"rhsusf_mich_helmet_marpatd_headset",
			"rhsusf_mich_helmet_marpatd_norotos",
			"rhsusf_mich_helmet_marpatd_norotos_arc",
			"rhsusf_mich_helmet_marpatd_norotos_arc_headset",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"rhsusf_lwh_helmet_marpatd",
			"rhsusf_lwh_helmet_marpatd_ess",
			"rhsusf_lwh_helmet_marpatd_headset"};	

		primary[] = {
			keko_W_RHS_M16A4};

		secondary[] = {
			keko_W_RHS_M9};
	};

	class kekoSoldierLight: kekoSoldierMarine_Desert {
		vest[] = {"rhsusf_spc_light"};
	};

	class kekoLead: kekoSoldierMarine_Desert	{
		name = "Lead";
		rank = "LIEUTENANT";		
		vest[] = {"rhsusf_spc_light"};
		helmet[] = {"rhs_8point_marpatd"};
		backpack[] = {"tfw_ilbe_d"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_RHS_M4A1_GL};
	}; 

	// TODO replace headgear with boonie e.g.
	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";		
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"rhs_booniehat2_marpatd"};
	};

	class kekoSQL: kekoSoldierMarine_Desert	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_RHS_M4A1_GL};
		vest[] = {"rhsusf_spc_squadleader"};
		backpack[] = {"tfw_ilbe_d"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierMarine_Desert	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};	
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		primary[] = {keko_W_RHS_M4A1};
		vest[] = {"rhsusf_spc_corpsman"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		primary[] = {keko_W_RHS_M4A1};
		vest[] = {"rhsusf_spc_corpsman"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierMarine_Desert	{
		name = "Rifleman";		
	};

	class kekoRiflemanAT: kekoSoldierMarine_Desert	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RHS_M136_HEDP};
	};

	class kekoGrenadier: kekoSoldierMarine_Desert {
		name = "Grenadier";
		vest[] = {"rhsusf_spc_iar"};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_RHS_M16A4_GL};		
	};

	class kekoLMG: kekoSoldierMarine_Desert {
		name = "Light Machine Gunner";
		vest[] = {"rhsusf_spc_iar"};
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_RHS_M249};
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierMarine_Desert {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoMMG: kekoSoldierMarine_Desert {
		name = "Medium Machine Gunner";
		vest[] = {"rhsusf_spc_mg"};
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_RHS_M240B};
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	};

	class kekoMMGAsst: kekoSoldierMarine_Desert {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialist: kekoSoldierMarine_Desert {
		name = "Anti-Tank Specialist";

		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_RHS_SMAW};
	};

	class kekoATSpecialistAsst: kekoSoldierMarine_Desert {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_RHS_STINGER};
	};

	class kekoAASpecialistAsst: kekoSoldierMarine_Desert {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierMarine_Desert {
		name = "Marksman";
		vest[] = {"rhsusf_spc_marksman"};
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{7, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{3, PRIMARY_MAG_MARKSMAN_TRACER}};
		primary[] = {
			keko_W_RHS_M14EBR};
	};

	class kekoSniper: kekoSoldierMarine_Desert {
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
		secondary[] = {keko_W_RHS_M9};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";	
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{7,PRIMARY_MAG},
			{3,PRIMARY_MAG_TRACER},
			{1,GRENADE}};	
		primary[] = {
			keko_W_RHS_M16A4};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"rhsusf_assault_eagleaiii_coy"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	// TODO adjust helmet etc.
	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_HelmetCrew_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"rhsusf_hgu56p_visor_black"};
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
		helmet[] = {"rhsusf_hgu56p_visor_mask_black"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"RHS_jetpilot_usaf"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_RHS_M16A4_GL};
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
		backpack[] = {"tfw_ilbe_a_d"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_RHS_M16A4_GL};
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
