class FactionUNSCDFDesert: FactionBase {
	name = "[Sci-Fi] UNSCDF (Desert) - U.N. Space Command Defense Force (Desert)";
	logisticsHelicopter = "OPTRE_Pelican_unarmed";

	#include "WeaponsUNSCDF.hpp"

	class uniform: uniform {
		Default[] = { "OPTRE_UNSC_Army_Uniform_DES" };
		Lead[] = { "OPTRE_UNSC_Army_Uniform_S_DES" };
		Command[] = { "OPTRE_UNSC_Army_Uniform_S_DES" };
	};

	class vest: vest {
		Default[] = { "OPTRE_UNSC_M52A_Armor_Rifleman_DES" };
		Lead[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
		Command[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
		Sergeant[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
		SQL[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
		FTL[] = { "OPTRE_UNSC_M52A_Armor_TL_DES" };
		Doctor[] = { "OPTRE_UNSC_M52A_Armor_Medic_DES" };
		Medic[] = { "OPTRE_UNSC_M52A_Armor_Medic_DES" };
		LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_DES" };
		Driver[] = { "OPTRE_UNSC_M52A_Armor3_DES" };
	};

	class backpack: backpack {
		Command[] = { "OPTRE_ANPRC_521_Black" };
		Sergeant[] = { "OPTRE_UNSC_Rucksack_Lead" };
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
		RiflemanAT[] = { { 1, "OPTRE_M41_Twin_HEAP" }, { 1, "OPTRE_M41_Twin_HEAT" } };
		LMGAsst[] = { {3, "OPTRE_200Rnd_95x40_Box_Tracer" } };
		ATSpecialistAsst[] = { {2, "OPTRE_M41_Twin_HEAT" } };
		AASpecialistAsst[] = { {2, "OPTRE_M41_Twin_HEAT_G" } };
	};

	class helmet: helmet {
		Default[] = { "OPTRE_UNSC_CH252_Helmet_DES" };
		Lead[] = { "OPTRE_UNSC_PatrolCap_Army" };
		Command[] = { "OPTRE_UNSC_PatrolCap_Army" };
		Sergeant[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
		SQL[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
		FTL[] = { "OPTRE_UNSC_CH252_Helmet2_DES" };
		Doctor[] = { "OPTRE_UNSC_CH252_Helmet2_DES_MED" };
		Medic[] = { "OPTRE_UNSC_CH252_Helmet2_DES_MED" };
		Driver[] = { "H_HelmetCrew_B" };
	};

	class primary: primary {
		Default[] = { keko_W_OPTRE_MA37 };
		Lead[] = {  };
		Sergeant[] = { keko_W_OPTRE_BR55HB };
		SQL[] = { keko_W_OPTRE_BR55HB };
		FTL[] = { keko_W_OPTRE_MA37GL };
		Grenadier[] = { keko_W_OPTRE_MA37GL };
		LMG[] = { keko_W_OPTRE_M73 };
		Marksman[] = { keko_W_OPTRE_M392_DMR };
		Driver[] = { keko_W_OPTRE_M7 };
	};

	class secondary: secondary {
		Default[] = { keko_W_OPTRE_M6G };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_OPTRE_M41_SSR };
		ATSpecialist[] = { keko_W_OPTRE_M41_SSR };
		AASpecialist[] = { keko_W_OPTRE_M41_SSR_G };
	};

};