class kekoFactionGuerilla: kekoFactionBase {

	name = "[Minimal] Guerilla";
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
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsGuerilla;

	// define all weapons and mags
	#include "kekoWeaponsGuerilla.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierGuerilla: kekoSoldier {
		uniform[] = {
			"U_MU_B_GuerillaGarment_blue",
			"U_MU_B_GuerillaGarment_brown",
			"U_MU_B_GuerillaGarment_grey",
			"U_MU_B_GuerillaGarment_redcamo",
			"U_MU_B_GuerillaGarment_orange",
			"U_MU_B_GuerillaGarment_skull",
			"U_MU_B_GuerillaGarment_yellow",
			"U_MU_B_GuerillaGarment2",
			"U_MU_B_GuerillaGarment2_blue",
			"U_MU_B_GuerillaGarment2_brown",
			"U_MU_B_GuerillaGarment2_grey",
			"U_MU_I_GuerillaGarment2_redcamo",
			"U_MU_B_GuerillaGarment2_orange",
			"U_MU_B_GuerillaGarment2_skull",
			"U_MU_B_GuerillaGarment2_yellow",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_1",
			"U_BG_Guerilla2_3"};

		uniformInventory[] = {
			{15, "ACE_fieldDressing"},
			{1, "ACE_morphine"},
			{2, "ACE_tourniquet"},
			{1, "ACE_Flashlight_XL50"},
			{1, SECONDARY_MAG},
			{1, SMOKE_WHITE},
			{1, SMOKE_GREEN}};

		vest[] = {
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_rgr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_Chestrig_blk",
			"V_Chestrig_rgr",
			"V_Chestrig_khk",
			"V_Chestrig_oli"};

		vestInventory[] = {
			{3, PRIMARY_MAG},
			{3, PRIMARY_MAG_TRACER},
			{1, SMOKE_WHITE},
			{2, GRENADE}};

		helmet[] = {
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_camo",
			"H_Shemag_olive",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"};	

		primary[] = {			 
			keko_W_A3_TRG21};

		secondary[] = {
			keko_W_Rook};

		goggles[] = {" ", " ", " ", "G_Shades_Black","G_Shades_Blue","G_Sport_Checkered"};
	};

	class kekoSoldierLight: kekoSoldierGuerilla {

	};

	class kekoLead: kekoSoldierGuerilla	{
		name = "Lead";
		rank = "LIEUTENANT";		
		uniform[] = {"U_IG_leader"};
		backpack[] = {"TFAR_rt1523g"};
		backpackInventory[] = {{6,"UGL_FlareWhite_F"},{3,"UGL_FlareGreen_F"},{3,"UGL_FlareRed_F"}};
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_TRG21_GL};
		helmet[] = {"H_Bandanna_khk_hs"};
	}; 

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";		
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierGuerilla	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_TRG21_GL};
		backpack[] = {"TFAR_rt1523g"};
		backpackInventory[] = {{6,"UGL_FlareWhite_F"},{3,"UGL_FlareGreen_F"},{3,"UGL_FlareRed_F"}};
		optics[] = {"Binocular"};
		helmet[] = {"H_Shemag_olive_hs"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierGuerilla	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};	
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_TacVestIR_blk"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk","B_Kitbag_cbr","B_MU_Kitbag_digi","B_Kitbag_rgr","B_Kitbag_mcamo","B_Kitbag_sgg"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_TacVestIR_blk"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_MU_Kitbag_blk","B_Kitbag_cbr","B_MU_Kitbag_digi","B_Kitbag_rgr","B_Kitbag_mcamo","B_Kitbag_sgg"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierGuerilla	{
		name = "Rifleman";		
	};

	class kekoRiflemanAT: kekoSoldierGuerilla	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
		backpack[] = {"B_TacticalPack_blk"};
	};

	class kekoGrenadier: kekoSoldierGuerilla {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{4, UGL_MAG},
			{5, "UGL_FlareWhite_F"},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_TRG21_GL};		
	};

	class kekoLMG: kekoSoldierGuerilla {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{3, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{1, GRENADE}};
		primary[] = {
			keko_W_A3_Mk200};
		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierGuerilla {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};	
	};

	class kekoMMG: kekoSoldierGuerilla {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{1, GRENADE}};
		primary[] = {
			keko_W_A3_MMG};
		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
	};

	class kekoMMGAsst: kekoSoldierGuerilla {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};	
	};

	class kekoATSpecialist: kekoSoldierGuerilla {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_RPG7};
	};

	class kekoATSpecialistAsst: kekoSoldierGuerilla {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoAASpecialist: kekoSoldierGuerilla {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierGuerilla {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};

	class kekoMarksman: kekoSoldierGuerilla {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{3, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{3, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_DMR};		
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_MU_Carryall_blk","B_Carryall_cbr","B_Carryall_khk","B_Carryall_mcamo","B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"B_MU_Carryall_blk","B_Carryall_cbr","B_Carryall_khk","B_Carryall_mcamo","B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		uniform[] = {"U_BG_Guerrilla_6_1"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		optics[] = {"Binocular"};
		helmet[] = {"H_Cap_marshal"};
	};

	class kekoSurvivor: kekoSoldierLight {
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
