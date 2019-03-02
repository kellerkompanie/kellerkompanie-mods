class FactionUNSCDFMarinesHCW: FactionBase {
	name = "[Sci-Fi] UNSCDF Marines HCW - U.N. Space Command Defense Force Marines HCW";
	logisticsHelicopter = "OPTRE_Pelican_unarmed";

	#include "WeaponsUNSCDF.hpp"

	class uniform: uniform {
		Default[] = { "OPTRE_FC_Marines_Uniform" };
		Lead[] = { "OPTRE_FC_Marines_Uniform_L" };
		Command[] = { "OPTRE_FC_Marines_Uniform_L" };
	};

	class vest: vest {
		Default[] = { "OPTRE_FC_Marines_Vest" };
		Lead[] = { "OPTRE_FC_Marines_Vest_L" };
		Command[] = { "OPTRE_FC_Marines_Vest_L" };
		Sergeant[] = { "OPTRE_FC_Marines_Vest" };
		SQL[] = { "OPTRE_FC_Marines_Vest" };
		LMG[] = { "OPTRE_UNSC_M52A_Armor_MG_MAR" };
		Driver[] = { "OPTRE_UNSC_M52A_Armor3_MAR" };
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
	};

	class helmet: helmet {
		Default[] = { "OPTRE_FC_Marines_Helmet" };
		Lead[] = { "OPTRE_UNSC_PatrolCap_Marines" };		
		Command[] = { "OPTRE_UNSC_PatrolCap_Marines" };
		Sergeant[] = { "OPTRE_FC_Marines_Helmet" };
		SQL[] = { "OPTRE_FC_Marines_Helmet" };
		Doctor[] = { "OPTRE_FC_Marines_Helmet_Medic" };
		Medic[] = { "OPTRE_FC_Marines_Helmet_Medic" };
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
