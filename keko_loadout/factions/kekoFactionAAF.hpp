class kekoFactionAAF: kekoFactionBase {

	name = "[Minimal] AAF - Altis Armed Forces";
	roles[] = {
		{"Führung", {
			kekoCommandAAF,
			kekoLeadAAF,
			kekoSQLAAF,
			kekoFTLAAF,
			kekoDoctorAAF,
			kekoMedicAAF}},
		{"Plebs", {
			kekoRiflemanAAF,
			kekoRiflemanATAAF,
			kekoGrenadierAAF,
			kekoLMGAAF,
			kekoLMGAsstAAF}},
		{"Heavy Weapons", {
			kekoMMGAAF,
			kekoMMGAsstAAF,
			kekoATSpecialistAAF,
			kekoATSpecialistAsstAAF,
			kekoAASpecialistAAF,
			kekoAASpecialistAsstAAF}},
		{"Support", {
			kekoMarksmanAAF,
			kekoSniperAAF,
			kekoSpotterAAF,
			kekoEODAAF,
			kekoEngineerAAF,
			kekoHeliPilotAAF,
			kekoJetPilotAAF,
			kekoJTACAAF,
			kekoUAVOperatorAAF}}
	};
	weaponCfg = kekoWeaponsAAF;

	// define all weapons and mags
	#include "kekoWeaponsAAF.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierAAF: kekoSoldier {
		uniform[] = {
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve"};

		vest[] = {
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl"};

		helmet[] = {
			"H_HelmetIA"};	

		primary[] = {
			keko_W_A3_F2000};

		secondary[] = {
			keko_W_A3_ACP};
	};

	class kekoSoldierLightAAF: kekoSoldierAAF {
		primary[] = {
			keko_W_A3_F2000_SHORT};
	};

	class kekoLeadAAF: kekoSoldierLightAAF	{
		name = "Lead";
		rank = "LIEUTENANT";		
		uniform[] = {"U_I_OfficerUniform"};
		vest[] = {"V_TacVest_oli"};
		helmet[] = {"H_MilCap_dgtl"};
		backpack[] = {"TFAR_anprc155"};
		optics[] = {"Rangefinder"};
	};

	class kekoCommandAAF: kekoLeadAAF	{
		name = "Command";
		rank = "COLONEL";	
		medicClass = 2;	
		engineerClass = 2;
		helmet[] = {"H_Cap_blk_Raven"};
	};

	class kekoSQLAAF: kekoSoldierAAF	{
		name = "Squad Leader";
		rank = "SERGEANT";
		backpack[] = {"TFAR_anprc155"};
		optics[] = {"Rangefinder"};
	};

	class kekoFTLAAF: kekoSoldierAAF	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};		
	};

	class kekoDoctorAAF: kekoSoldierLightAAF {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedicAAF: kekoSoldierLightAAF {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRiflemanAAF: kekoSoldierAAF	{
		name = "Rifleman";		
	};

	class kekoRiflemanATAAF: kekoSoldierAAF	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoGrenadierAAF: kekoSoldierAAF {
		name = "Grenadier";
		primary[] = {
			keko_W_A3_F2000_UGL};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
	};

	class kekoLMGAAF: kekoSoldierAAF {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_STONER};

		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsstAAF: kekoSoldierAAF {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoMMGAAF: kekoSoldierAAF {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MMG_AAF};

		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoMMGAsstAAF: kekoSoldierAAF {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialistAAF: kekoSoldierAAF {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT_AAF};
	};

	class kekoATSpecialistAsstAAF: kekoSoldierAAF {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{2, AT_MAG}};
	};

	class kekoAASpecialistAAF: kekoSoldierLightAAF {
		name = "Anti-Air Specialist";

		backpack[] = {"B_FieldPack_oli"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA_AAF};
	};

	class kekoAASpecialistAsstAAF: kekoSoldierAAF {
		name = "Anti-Air Specialist Assistant";
		backpackInventory[] = {{2, AA_MAG}};
		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoMarksmanAAF: kekoSoldierAAF {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_EBR};
	};

	class kekoSniperAAF: kekoSoldierAAF {
		name = "Sniper";
		uniform[] = {"U_I_GhillieSuit"};
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
		vest[] = {"V_Chestrig_oli"};
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{8,"5Rnd_127x108_Mag"},
			{2,"9Rnd_45ACP_Mag"}};
		helmet[] = {"H_HelmetIA"};
		primary[] = {keko_W_A3_GM6};
		secondary[] = {keko_W_A3_ACP_SILENCED};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotterAAF: kekoSniperAAF {
		name = "Spotter";	
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"9Rnd_45ACP_Mag"},
			{10,"30Rnd_556x45_Stanag"},
			{1,"HandGrenade"}};	
		primary[] = {
			keko_W_A3_F2000};
	};

	class kekoEODAAF: kekoSoldierLightAAF {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineerAAF: kekoSoldierLightAAF	{
		name = "Engineer";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoHeliPilotAAF: kekoSoldierLightAAF {
		name = "Heli Pilot";
		uniform[] = {"U_I_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_I"};
		backpack[] = {"ACE_NonSteerableParachute"};
		optics[] = {"Binocular"};
	};

	class kekoJetPilotAAF: kekoHeliPilotAAF {
		name = "Jet Pilot";
		uniform[] = {"U_I_pilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_I"};
		optics[] = {"Binocular"};
	};

	class kekoJTACAAF: kekoGrenadierAAF {
		name = "JTAC";
		primary[] = {
			keko_W_A3_F2000_UGL};
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
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperatorAAF: kekoSoldierLightAAF	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_F2000_UGL};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"I_UAV_01_backpack_F"};
		items[] = {"I_UavTerminal"};
	};
};