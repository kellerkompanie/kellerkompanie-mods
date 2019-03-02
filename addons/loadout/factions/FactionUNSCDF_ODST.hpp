class FactionUNSCDF_ODST: FactionBase {
	name = "[Sci-Fi] UNSCDF (ODST) - U.N. Space Command Defense Force (ODST)";
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
	};

	class rank: rank {
		Lead = "LIEUTENANT";
		Command = "COLONEL";
		SQL = "SERGEANT";
		FTL = "CORPORAL";
		Doctor = "SERGEANT";
		Medic = "CORPORAL";
	};

	class uniform: uniform {
		Default[] = { "OPTRE_UNSC_ODST_Uniform" };
	};

	class vest: vest {
		Default[] = { "OPTRE_UNSC_M52D_Armor_Rifleman" };
		Lead[] = { "OPTRE_UNSC_M52D_Armor" };
		Doctor[] = { "OPTRE_UNSC_M52D_Armor_Medic" };
		Medic[] = { "OPTRE_UNSC_M52D_Armor_Medic" };
		Marksman[] = { "OPTRE_UNSC_M52D_Armor_Marksman" };
		EOD[] = { "OPTRE_UNSC_M52D_Armor_Demolitions" };
	};

	class backpack: backpack {
		Lead[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
		Command[] = { "OPTRE_ANPRC_521_Black" };
		SQL[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
		FTL[] = { "OPTRE_ILCS_Rucksack_Black_Lead" };
		Doctor[] = { "OPTRE_ILCS_Rucksack_Medical" };
		Medic[] = { "OPTRE_ILCS_Rucksack_Medical" };
		RadioOperator[] = { "OPTRE_ANPRC_521_Black" };
		RiflemanAT[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		LMG[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		LMGAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		ATSpecialist[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		ATSpecialistAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		AASpecialist[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		AASpecialistAsst[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		EOD[] = { "OPTRE_ILCS_Rucksack_Heavy" };
		Engineer[] = { "OPTRE_ILCS_Rucksack_Heavy" };
	};

	class backpackInventory: backpackInventory {
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		RiflemanAT[] = { { 1, "OPTRE_M41_Twin_HEAP" }, { 1, "OPTRE_M41_Twin_HEAT" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
	};

	class helmet: helmet {
		Default[] = { "OPTRE_UNSC_CH252D_Helmet" };
	};

	class primary: primary {
		Default[] = { keko_W_OPTRE_MA37 };
		SQL[] = { keko_W_OPTRE_BR55HB };
		FTL[] = { keko_W_OPTRE_MA37GL };
		Grenadier[] = { keko_W_OPTRE_MA37GL };
		LMG[] = { keko_W_OPTRE_M73 };
		Marksman[] = { keko_W_OPTRE_M392_DMR };
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
