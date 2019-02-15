class kekoFactionUNSCDFMarinesHCW: kekoFactionBase {

	name = "[Sci-Fi] UNSCDF Marines HCW - U.N. Space Command Defense Force Marines HCW";
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
			kekoEngineer,
			kekoDriver,
			kekoUAVOperator}
		}
	};
	weaponCfg = kekoWeaponsUNSCDF;

	logisticsHelicopter = "OPTRE_Pelican_unarmed";

	// define all weapons and mags
	#include "kekoWeaponsUNSCDF.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierUNSCDFMarineHCW: kekoSoldier {
		uniform[] = {"OPTRE_FC_Marines_Uniform"};

		vest[] = {"OPTRE_FC_Marines_Vest"};

		helmet[] = {"OPTRE_FC_Marines_Helmet"};

		primary[] = {keko_W_OPTRE_MA37};

		secondary[] = {keko_W_OPTRE_M6G};
	};

	class kekoLead: kekoSoldierUNSCDFMarineHCW	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"OPTRE_FC_Marines_Uniform_L"};
		vest[] = {"OPTRE_FC_Marines_Vest_L"};
		helmet[] = {"OPTRE_UNSC_PatrolCap_Marines"};
		optics[] = {"OPTRE_Smartfinder"};
		primary[] = {};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		backpack[] = {"OPTRE_ANPRC_521_Black"};
	};

	class kekoSQL: kekoSoldierUNSCDFMarineHCW	{
		name = "Squad Leader";
		rank = "SERGEANT";
		helmet[] = {"OPTRE_FC_Marines_Helmet"};
		vest[] = {"OPTRE_FC_Marines_Vest"};
		vestInventory[] = {
			{4, "OPTRE_36Rnd_95x40_Mag"},
			{4, "OPTRE_36Rnd_95x40_Mag_Tracer"},
			{2, GRENADE},
			{2, "OPTRE_36Rnd_95x40_Mag"}
		};
		primary[] = {keko_W_OPTRE_BR55HB};
		backpack[] = {"OPTRE_UNSC_Rucksack_Lead"};
		backpackInventory[] = {
			{4, SMOKE_WHITE},
			{4, SMOKE_RED},
			{4, SMOKE_GREEN}
		};
		optics[] = {"OPTRE_Smartfinder"};
		secondary[] = {
			keko_W_OPTRE_M6G};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierUNSCDFMarineHCW	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"OPTRE_Binoculars"};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}
		};
		backpack[] = {
			"OPTRE_UNSC_Rucksack_Lead"
		};
		primary[] = {
			keko_W_OPTRE_MA37GL
		};
	};

	class kekoDoctor: kekoSoldierUNSCDFMarineHCW {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		helmet[] = {"OPTRE_FC_Marines_Helmet_Medic"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"OPTRE_UNSC_Rucksack_Medic"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierUNSCDFMarineHCW {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		helmet[] = {"OPTRE_FC_Marines_Helmet_Medic"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"OPTRE_UNSC_Rucksack_Medic"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierUNSCDFMarineHCW	{
		name = "Rifleman";
	};

	class kekoRadioOperator: kekoSoldierUNSCDFMarineHCW {
		name = "Radio Operator";
		backpack[] = {"OPTRE_ANPRC_521_Black"};
	};

	class kekoRiflemanAT: kekoSoldierUNSCDFMarineHCW	{
		name = "Rifleman Anti-Tank";
		backpack[] = {"OPTRE_UNSC_Rucksack_M41"};
		backpackInventory[] = {
			{1, "OPTRE_M41_Twin_HEAP"},
			{1, "OPTRE_M41_Twin_HEAT"}
		};
		launcher[] = {keko_W_OPTRE_M41_SSR};
	};

	class kekoGrenadier: kekoSoldierUNSCDFMarineHCW {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_OPTRE_MA37GL};
	};

	class kekoLMG: kekoSoldierUNSCDFMarineHCW {
		name = "Light Machine Gunner";
		vest[] = {"OPTRE_UNSC_M52A_Armor_MG_MAR"};
		vestInventory[] = {
			{2, PRIMARY_MAG_LMG},
			{2, PRIMARY_MAG_LMG_TRACER},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {keko_W_OPTRE_M73};
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierUNSCDFMarineHCW {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
		backpackInventory[] = {
			{2, PRIMARY_MAG_LMG},
			{2, PRIMARY_MAG_LMG_TRACER}
		};
		optics[] = {"OPTRE_Binoculars"};
	};

	class kekoATSpecialist: kekoSoldierUNSCDFMarineHCW {
		name = "Anti-Tank Specialist";

		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy_M41G"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_OPTRE_M41_SSR};
	};

	class kekoATSpecialistAsst: kekoSoldierUNSCDFMarineHCW {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy_M41G"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"OPTRE_Smartfinder"};
	};

	class kekoAASpecialist: kekoSoldierUNSCDFMarineHCW {
		name = "Anti-Air Specialist";
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy_M41G"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_OPTRE_M41_SSR_G};
	};

	class kekoAASpecialistAsst: kekoSoldierUNSCDFMarineHCW {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy_M41G"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"OPTRE_Smartfinder"};
	};

	class kekoMarksman: kekoSoldierUNSCDFMarineHCW {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{4, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{4, PRIMARY_MAG_MARKSMAN_TRACER}
		};
		primary[] = {
			keko_W_OPTRE_M392_DMR
		};
	};

	class kekoEOD: kekoSoldierUNSCDFMarineHCW {
		name = "Explosive Specialist";
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierUNSCDFMarineHCW {
		name = "Engineer";
		backpack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierUNSCDFMarineHCW {
		name = "Crewman";
		helmet[] = {"H_HelmetCrew_B"};
		vest[] = {"OPTRE_UNSC_M52A_Armor3_MAR"};
		vestInventory[] = {
			{6, "OPTRE_60Rnd_5x23mm_Mag"},
			{1, SMOKE_WHITE}
		};
		primary[] = {
			keko_W_OPTRE_M7
		};
		engineerClass = 2;
	};

	class kekoUAVOperator: kekoSoldierUNSCDFMarineHCW	{
		name = "UAV Operator";
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};
};
