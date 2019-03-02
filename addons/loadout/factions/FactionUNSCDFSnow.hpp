class FactionUNSCDFSnow: FactionBase {
	name = "[Sci-Fi] UNSCDF (Snow) - U.N. Space Command Defense Force (Snow)";
	logisticsHelicopter = "OPTRE_Pelican_unarmed";

	#include "WeaponsUNSCDF.hpp"

	class role: role {
		Lead = "Lead";
		Command = "Command";
		SQL = "Squad Leader";
		Sergeant = "Sergeant";
		FTL = "Fire Team Leader";
		Doctor = "Doctor";
		Medic = "Medic";
		Rifleman = "Rifleman";
		RadioOperator = "Radio Operator";
		RiflemanAT = "Rifleman Anti-Tank";
		Grenadier = "Grenadier";
		LMG = "Light Machine Gunner";
		LMGAsst = "Light Machine Gunner Asst.";
		ATSpecialist = "Anti-Tank Specialist";
		ATSpecialistAsst = "Anti-Tank Specialist Assistant";
		AASpecialist = "Anti-Air Specialist";
		AASpecialistAsst = "Anti-Air Specialist Assistant";
		Marksman = "Marksman";
		EOD = "Explosive Specialist";
		Engineer = "Engineer";
		Driver = "Crewman";
		UAVOperator = "UAV Operator";
	};

	class uniform: uniform {
		Default[] = { "OPTRE_UNSC_Army_Uniform_SNO" };
		Lead[] = { "OPTRE_UNSC_Army_Uniform_S_SNO" };
	};

	class vest: vest {
		Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_SNO" };
		Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
		SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
		FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_SNO" };
		Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_SNO" };
		Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_SNO" };
		LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_SNO" };
		Driver[] = { "OPTRE_UNSC_M52A_Armor3_SNO" };
	};

	class backpack: backpack {
		Command[] = { "OPTRE_ANPRC_521_Black" };
		SQL[] = { "OPTRE_UNSC_Rucksack_Lead" };
		FTL[] = { "OPTRE_UNSC_Rucksack_Lead" };
		Doctor[] = { "OPTRE_UNSC_Rucksack_Medic" };
		Medic[] = { "OPTRE_UNSC_Rucksack_Medic" };
		RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
		RiflemanAT[] = { "OPTRE_UNSC_Rucksack_M41" };
		LMG[] = { "OPTRE_UNSC_Rucksack_Heavy" };
		LMGAsst[] = { "OPTRE_UNSC_Rucksack_Heavy" };
		ATSpecialist[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
		ATSpecialistAsst[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
		AASpecialist[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
		AASpecialistAsst[] = { "OPTRE_UNSC_Rucksack_Heavy_M41G" };
		EOD[] = { "OPTRE_UNSC_Rucksack_Heavy" };
		Engineer[] = { "OPTRE_UNSC_Rucksack_Heavy" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		RiflemanAT[] = { { 1, "OPTRE_M41_Twin_HEAP" }, { 1, "OPTRE_M41_Twin_HEAT" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
	};

	class helmet: helmet {
		Default[] = { "OPTRE_UNSC_CH252_Helmet_SNO" };
		Lead[] = { "OPTRE_UNSC_PatrolCap_Army" };
		SQL[] = { "OPTRE_UNSC_CH252_Helmet2_SNO" };
		FTL[] = { "OPTRE_UNSC_CH252_Helmet2_SNO" };
		Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_SNO_MED" };
		Medic[] = { "OPTRE_UNSC_CH252_Helmet2_SNO_MED" };
		Driver[] = { "H_HelmetCrew_B" };
	};

	class primary: primary {
		Default[] = { keko_W_OPTRE_MA37 };
		Lead[] = {  };
		SQL[] = { keko_W_OPTRE_BR55HB };
		FTL[] = { keko_W_OPTRE_MA37GL };
		Grenadier[] = { keko_W_OPTRE_MA37GL };
		LMG[] = { keko_W_OPTRE_M73 };
		Marksman[] = { keko_W_OPTRE_M392_DMR };
		Driver[] = { keko_W_OPTRE_M7 };
	};

	class secondary: secondary {
		Default[] = { keko_W_OPTRE_M6G };
		SQL[] = { keko_W_OPTRE_M6G };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_OPTRE_M41_SSR };
		ATSpecialist[] = { keko_W_OPTRE_M41_SSR };
		AASpecialist[] = { keko_W_OPTRE_M41_SSR_G };
	};

};
