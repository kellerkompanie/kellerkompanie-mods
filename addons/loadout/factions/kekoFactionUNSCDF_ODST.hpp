class kekoFactionUNSCDF_ODST: kekoFactionBase {

	name = "[Sci-Fi] UNSCDF (ODST) - U.N. Space Command Defense Force (ODST)";
	roles[] = {
		{"Führung", {
			kekoCommand,
			kekoLead,
			kekoSergeant,
			kekoRadioOperator,
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
			kekoATSpecialist,
			kekoATSpecialistAsst,
			kekoAASpecialist,
			kekoAASpecialistAsst}},
		{"Support", {
			kekoMarksman,
			kekoEOD,
			kekoEngineer}
		}
	};
	weaponCfg = kekoWeaponsUNSCDF;

	logisticsHelicopter = "OPTRE_Pelican_unarmed";

	// define all weapons and mags
	#include "kekoWeaponsUNSCDF.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierUNSCDF_ODST: kekoSoldier {
		uniform[] = {"OPTRE_UNSC_ODST_Uniform"};

		vest[] = {"OPTRE_UNSC_M52D_Armor_Rifleman"};

		helmet[] = {"OPTRE_UNSC_CH252D_Helmet"};

		primary[] = {keko_W_OPTRE_MA37};

		secondary[] = {keko_W_OPTRE_M6G};
	};

	class kekoLead: kekoSoldierUNSCDF_ODST	{
		name = "Lead";
		rank = "LIEUTENANT";
		vest[] = {"OPTRE_UNSC_M52D_Armor"};
		optics[] = {"OPTRE_Smartfinder"};
		backpack[] = {"OPTRE_ILCS_Rucksack_Black_Lead"};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		backpack[] = {"OPTRE_ANPRC_521_Black"};
	};

	class kekoSQL: kekoSoldierUNSCDF_ODST	{
		name = "Squad Leader";
		rank = "SERGEANT";
		vestInventory[] = {
			{4, "OPTRE_36Rnd_95x40_Mag"},
			{4, "OPTRE_36Rnd_95x40_Mag_Tracer"},
			{2, "OPTRE_36Rnd_95x40_Mag"}
		};
		primary[] = {keko_W_OPTRE_BR55HB};
		backpack[] = {"OPTRE_ILCS_Rucksack_Black_Lead"};
		optics[] = {"OPTRE_Smartfinder"};
		secondary[] = {
			keko_W_OPTRE_M6G};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierUNSCDF_ODST	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"OPTRE_Binoculars"};
		backpack[] = {
			"OPTRE_ILCS_Rucksack_Black_Lead"
		};
		primary[] = {
			keko_W_OPTRE_MA37GL
		};
	};

	class kekoDoctor: kekoSoldierUNSCDF_ODST {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"OPTRE_UNSC_M52D_Armor_Medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"OPTRE_ILCS_Rucksack_Medical"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierUNSCDF_ODST {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"OPTRE_UNSC_M52D_Armor_Medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"OPTRE_ILCS_Rucksack_Medical"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierUNSCDF_ODST	{
		name = "Rifleman";
	};

	class kekoRadioOperator: kekoSoldierUNSCDF_ODST {
		name = "Radio Operator";
		backpack[] = {"OPTRE_ANPRC_521_Black"};
	};

	class kekoRiflemanAT: kekoSoldierUNSCDF_ODST	{
		name = "Rifleman Anti-Tank";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		backpackInventory[] = {
			{1, "OPTRE_M41_Twin_HEAP"},
			{1, "OPTRE_M41_Twin_HEAT"}
		};
		launcher[] = {keko_W_OPTRE_M41_SSR};
	};

	class kekoGrenadier: kekoSoldierUNSCDF_ODST {
		name = "Grenadier";
		primary[] = {
			keko_W_OPTRE_MA37GL};
	};

	class kekoLMG: kekoSoldierUNSCDF_ODST {
		name = "Light Machine Gunner";
		primary[] = {keko_W_OPTRE_M73};
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
	};

	class kekoLMGAsst: kekoSoldierUNSCDF_ODST {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		optics[] = {"OPTRE_Binoculars"};
	};

	class kekoATSpecialist: kekoSoldierUNSCDF_ODST {
		name = "Anti-Tank Specialist";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		launcher[] = {keko_W_OPTRE_M41_SSR};
	};

	class kekoATSpecialistAsst: kekoSoldierUNSCDF_ODST {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		optics[] = {"OPTRE_Smartfinder"};
	};

	class kekoAASpecialist: kekoSoldierUNSCDF_ODST {
		name = "Anti-Air Specialist";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		launcher[] = {keko_W_OPTRE_M41_SSR_G};
	};

	class kekoAASpecialistAsst: kekoSoldierUNSCDF_ODST {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		optics[] = {"OPTRE_Smartfinder"};
	};

	class kekoMarksman: kekoSoldierUNSCDF_ODST {
		name = "Marksman";
		vest[] = {"OPTRE_UNSC_M52D_Armor_Marksman"};
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {
			keko_W_OPTRE_M392_DMR
		};
	};

	class kekoEOD: kekoSoldierUNSCDF_ODST {
		name = "Explosive Specialist";
		vest[] = {"OPTRE_UNSC_M52D_Armor_Demolitions"};
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierUNSCDF_ODST {
		name = "Engineer";
		backpack[] = {"OPTRE_ILCS_Rucksack_Heavy"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};
};
