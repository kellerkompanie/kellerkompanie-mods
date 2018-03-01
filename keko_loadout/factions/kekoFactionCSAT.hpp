class kekoFactionCSAT: kekoFactionBase {

	name = "[Minimal] CSAT - Canton-Protocol Strategic Alliance Treaty";
	roles[] = {
		{"Führung", {
			kekoCommandCSAT,
			kekoLeadCSAT,
			kekoSQLCSAT,
			kekoFTLCSAT,
			kekoDoctorCSAT,
			kekoMedicCSAT}},
		{"Plebs", {
			kekoRiflemanCSAT,
			kekoRiflemanATCSAT,
			kekoGrenadierCSAT,
			kekoLMGCSAT,
			kekoLMGAsstCSAT}},
		{"Heavy Weapons", {
			kekoMMGCSAT,
			kekoMMGAsstCSAT,
			kekoATSpecialistCSAT,
			kekoATSpecialistAsstCSAT,
			kekoAASpecialistCSAT,
			kekoAASpecialistAsstCSAT}},
		{"Support", {
			kekoMarksmanCSAT,
			kekoSniperCSAT,
			kekoSpotterCSAT,
			kekoEODCSAT,
			kekoEngineerCSAT,
			kekoPilotCSAT,
			kekoJetPilotCSAT
			kekoJTACCSAT,
			kekoUAVOperatorCSAT}}
	};
	weaponCfg = kekoWeaponsCSAT;


	// define all weapons and mags
	#include "kekoWeaponsCSAT.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierCSAT: kekoSoldier {
		uniform[] = {
			"U_O_CombatUniform_ocamo"};

		vest[] = {
			"V_HarnessO_brn"};

		helmet[] = {
			"H_HelmetB_sand"};	

		primary[] = {
			keko_W_A3_KATIBA};

		secondary[] = {
			keko_W_ROOK};
	};

	class kekoSoldierLightCSAT: kekoSoldierCSAT {
		primary[] = {
			keko_W_A3_KATIBA_SHORT};
	};

	class kekoLeadCSAT: kekoSoldierLightCSAT	{
		name = "Lead";
		rank = "LIEUTENANT";		
		uniform[] = {"U_O_OfficerUniform_ocamo"};
		vest[] = {"V_BandollierB_cbr"};
		helmet[] = {"H_MilCap_ocamo"};
		backpack[] = {"TFAR_mr3000"};
		optics[] = {"Rangefinder"};
	};

	class kekoCommandCSAT: kekoLeadCSAT	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_brn_SPECOPS"};
	};

	class kekoSQLCSAT: kekoSoldierCSAT	{
		name = "Squad Leader";
		rank = "SERGEANT";
		backpack[] = {"TFAR_mr3000"};
		optics[] = {"Rangefinder"};
	};

	class kekoFTLCSAT: kekoSoldierCSAT	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};	
	};

	class kekoDoctorCSAT: kekoSoldierLightCSAT {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_TacticalPack_ocamo"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedicCSAT: kekoSoldierLightCSAT {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_TacticalPack_ocamo"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRiflemanCSAT: kekoSoldierCSAT	{
		name = "Rifleman";		
	};

	class kekoRiflemanATCSAT: kekoSoldierCSAT	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RPG32};
		backpack[] = {"B_AssaultPack_ocamo"};
		backpackInventory[] = {{1, "RPG32_F"}};
	};

	class kekoGrenadierCSAT: kekoSoldierCSAT {
		name = "Grenadier";
		primary[] = {
			keko_W_A3_KATIBA_GL};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
	};

	class kekoLMGCSAT: kekoSoldierCSAT {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_ZAFIR};

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoLMGAsstCSAT: kekoSoldierCSAT {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
	};

	class kekoMMGCSAT: kekoSoldierCSAT {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MMG_CSAT};

		backpack[] = {"B_FieldPack_ocamo"};
	};

	class kekoMMGAsstCSAT: kekoSoldierCSAT {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialistCSAT: kekoSoldierCSAT {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT_CSAT};
	};

	class kekoATSpecialistAsstCSAT: kekoSoldierCSAT {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};		
	};

	class kekoAASpecialistCSAT: kekoSoldierLightCSAT {
		name = "Anti-Air Specialist";

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA_CSAT};
	};

	class kekoAASpecialistAsstCSAT: kekoSoldierCSAT {
		name = "Anti-Air Specialist Assistant";

		backpack[] = {"B_FieldPack_ocamo"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksmanCSAT: kekoSoldierCSAT {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_DMR};
	};

	class kekoSniperCSAT: kekoSoldierCSAT {
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
			{1,SMOKE_WHITE},
			{1,"SmokeShellGreen"},
			{8,"5Rnd_127x108_Mag"},
			{2,SECONDARY_MAG}};
		helmet[] = {"H_HelmetIA"};
		primary[] = {keko_W_A3_GM6};
		secondary[] = {keko_W_ROOK};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotterCSAT: kekoSniperCSAT {
		name = "Spotter";	
		vestInventory[] = {
			{1,SMOKE_WHITE},
			{1,"SmokeShellGreen"},
			{2,SECONDARY_MAG},
			{10,"30Rnd_556x45_Stanag"},
			{1,GRENADE}};	
		primary[] = {
			keko_W_A3_KATIBA};
	};

	class kekoEODCSAT: kekoSoldierLightCSAT {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_ocamo"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineerCSAT: kekoSoldierLightCSAT	{
		name = "Engineer";
		backpack[] = {"B_Carryall_ocamo"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoPilotCSAT: kekoSoldierLightCSAT {
		name = "Pilot";
		uniform[] = {"U_O_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_O"};
		backpack[] = {"ACE_NonSteerableParachute"};
		optics[] = {"Binocular"};
	};

	class kekoJetPilotCSAT: kekoPilotCSAT {
		name = "Jet Pilot";
		uniform[] = {"U_O_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetHeli_O"};
		optics[] = {"Binocular"};
	};

	class kekoJTACCSAT: kekoGrenadierCSAT {
		name = "JTAC";
		primary[] = {
			keko_W_A3_KATIBA_GL};
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
		backpack[] = {"TFAR_mr3000"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperatorCSAT: kekoSoldierLightCSAT	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_KATIBA_GL};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2, PRIMARY_MAG},
			{2, PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"O_UAV_01_backpack_F"};
		items[] = {"O_UavTerminal"};
	};
};