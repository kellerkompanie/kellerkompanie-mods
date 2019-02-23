class kekoFactionAlSirae: kekoFactionBase {

	name = "[Minimal] Al Sirae (Terrorists)";
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
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsAlSirae;

	logisticsHelicopter = "MU_CIV_Orca";

	// define all weapons and mags
	#include "kekoWeaponsAlSirae.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierAlSirae: kekoSoldier {
		uniform[] = {
			"GUR_fat_ALSIR_32",
			"GUR_fat_ALSIR_31",
			"GUR_fat_ALSIR_33",
			"GUR_fat_Alsir_22",
			"GUR_fat_Alsir_21",
			"GUR_fat_ALSIR_8",
			"GUR_fat_ALSIR_4",
			"GUR_fat_ALSIR_5",
			"GUR_fat_ALSIR_7"};

		vest[] = {
			"V_HarnessOGL_brn",
			"V_TacVest_khk",
			"V_Chestrig_khk",
			"V_BandollierB_cbr",
			"V_PlateCarrierIA1_dgtl",
			"V_Chestrig_oli",
			"V_TacVest_camo",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_oli",
			"V_HarnessO_gry",
			"V_BandollierB_cbr"};

		helmet[] = {
			"H_Shemag_olive",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk",
			"GUR_shemag_red"};

		primary[] = {
			keko_W_A3_F2000,
			keko_W_A3_F2000_SHORT,
			keko_W_A3_TRG21};

		secondary[] = {
			keko_W_A3_ACP};
	};

	class kekoSoldierLight: kekoSoldierAlSirae {
		primary[] = {
			keko_W_A3_F2000_SHORT};
	};

	class kekoLead: kekoSoldierAlSirae	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"GUR_fat_Alsir_1"};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {};
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_F2000_UGL,
			keko_W_A3_TRG21_GL
		};
		goggles[] = {
			"GUR_Balaclava_oli",
			"GUR_Balaclava_blk"
		};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierAlSirae	{
		name = "Squad Leader";
		rank = "SERGEANT";
		uniform[] = {"GUR_fat_ALSIR_6"};
		vest[] = {"V_HarnessOGL_brn"};
		primary[] = {
			keko_W_A3_F2000_UGL,
			keko_W_A3_TRG21_GL
		};
		backpack[] = {"TFAR_rt1523g_rhs"};
		backpackInventory[] = {};
		optics[] = {"Binocular"};
		goggles[] = {
			"GUR_Balaclava_oli",
			"GUR_Balaclava_blk"
		};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierAlSirae	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_F2000_UGL,
			keko_W_A3_TRG21_GL
		};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierIA1_dgtl"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierIA1_dgtl"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierAlSirae	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierAlSirae	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoGrenadier: kekoSoldierAlSirae {
		name = "Grenadier";
		primary[] = {
			keko_W_A3_F2000_UGL,
			keko_W_A3_TRG21_GL
		};
	};

	class kekoLMG: kekoSoldierAlSirae {
		name = "Light Machine Gunner";
		primary[] = {keko_W_A3_STONER};
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {
			{2, PRIMARY_MAG_LMG}
		};
	};

	class kekoLMGAsst: kekoSoldierAlSirae {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierAlSirae {
		name = "Medium Machine Gunner";
		primary[] = {keko_W_A3_MMG_AAF};
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGAsst: kekoSoldierAlSirae {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierAlSirae {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_FieldPack_khk"};
		launcher[] = {keko_W_TITAN_AT};
	};

	class kekoATSpecialistAsst: kekoSoldierAlSirae {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_FieldPack_khk"};
		optics[] = {"Binocular"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_ocamo"};
		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsst: kekoSoldierAlSirae {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_ocamo"};
		optics[] = {"Binocular"};
	};

	class kekoMarksman: kekoSoldierAlSirae {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {keko_W_A3_EBR};
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

	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor";
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"
		};
	};
};
