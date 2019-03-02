class FactionArmiaKrajowaCamo: FactionBase {
	name = "[Ironfront] Polska Armia Krajowa (Camo)";

	#include "WeaponsArmiaKrajowa.hpp"

	class role: role {
		Porucznik = "Porucznik (Lieutenant)";
		Sierszant = "Sierzant (Sergeant)";
		Kapral = "Kapral (Corporal)";
		Sanitariusz = "Sanitariusz (Medic)";
		RadioOperator = "Starszy Szeregowy (Radio Operator)";
		SzeregowyThompson = "Szeregowy [Thompson] (Rifleman)";
		SzeregowyBAR = "Szeregowy [BAR] (Rifleman)";
		SzeregowyMosin = "Szeregowy [Mosin] (Rifleman)";
		SzeregowyK98 = "Szeregowy [K98] (Rifleman)";
	};

	class rank: rank {
		Porucznik = "LIEUTENANT";
		Sierszant = "SERGEANT";
		Kapral = "CORPORAL";
	};

	class uniform: uniform {
		Default[] = {
				"U_LIB_POL_Soldier_camo_21vnpbcgcStSzPpsch41m",
				"U_LIB_POL_Soldier_camo_luftvnpgcbcStSzM9130",
				"U_LIB_POL_Soldier_camo_00vmpbcbcSzM9130",
				"U_LIB_POL_Soldier_camo_15vfpbcbcSzK98",
				"U_LIB_POL_Soldier_camo_09vfpbcbcSzK98"
			};
		Porucznik[] = { "U_LIB_POL_Soldier_camo_luftvnpgcbcStSzM9130" };
		Sierszant[] = { "U_LIB_POL_Soldier_camo_11vvpncbcStSztSten", "U_LIB_POL_Soldier_camo_15vbpbcgcSztMp40" };
		Kapral[] = { "U_GELIB_POL_VillagerAK02KplP38", "U_GELIB_POL_WoodlanderAKKpl04G3340" };
		Sanitariusz[] = { "U_LIB_POL_Soldier_camo_15vbpbcbcSantM1911" };
		RadioOperator[] = { "U_LIB_POL_Radioman_03vbpbcncKplG43" };
	};

	class uniformInventory: uniformInventory {
		Default[] = {
				{ 14, "ACE_packingBandage" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
		Porucznik[] = {
				{ 15, "ACE_packingBandage" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
		Sierszant[] = {
				{ 15, "ACE_packingBandage" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" }
			};
		Sanitariusz[] = { { 12, "ACE_packingBandage" }, { 1, "ACE_surgicalKit" } };
	};

	class vest: vest {
		Default[] = {  };
		Porucznik[] = { "V_LIB_GER_PrivateBelt" };
		Sierszant[] = { "V_LIB_SOV_RAZV_PPShBelt" };
		Kapral[] = { "V_LIB_WP_Kar98Vest" };
		Sanitariusz[] = { "V_LIB_DAK_PrivateBelt" };
		RadioOperator[] = { "V_LIB_WP_Kar98Vest" };
		SzeregowyThompson[] = { "V_LIB_SOV_RAZV_PPShBelt" };
		SzeregowyBAR[] = { "V_LIB_WP_MGVest" };
		SzeregowyMosin[] = { "V_LIB_SOV_RAZV_SVTBelt" };
		SzeregowyK98[] = { "V_LIB_SOV_RAZV_PPShBelt" };
	};

	class backpack: backpack {
		Sanitariusz[] = { "B_LIB_SOV_RA_MedicalBag_00" };
		RadioOperator[] = { "B_LIB_SOV_RA_Radio" };
		SzeregowyBAR[] = { "B_LIB_US_MGbag" };
	};

	class backpackInventory: backpackInventory {
		Sanitariusz[] = {
				{ 30, "ACE_elasticBandage" },
				{ 2, "ACE_salineIV_500" },
				{ 8, "adv_aceSplint_splint" }
			};
	};

	class helmet: helmet {
		Default[] = {
				"H_LIB_POL_Cap_BrA2",
				"H_LIB_POL_Cap_WH00A2BR",
				"H_LIB_POL_Cap_FgA1BR",
				"H_LIB_POL_HelmetCamo_11",
				"H_LIB_POL_HelmetCamo_09"
			};
		Porucznik[] = { "H_LIB_POL_Beret_NoirA1" };
		Sierszant[] = { "H_LIB_POL_Helmet_ABRWSS", "H_LIB_POL_Cap_WH15A2BR" };
		Kapral[] = { "H_LIB_POL_Calot_BrunBR", "H_LIB_POL_HelmetCamo_03" };
		Sanitariusz[] = { "H_LIB_POL_Calot_KakiBR" };
		RadioOperator[] = { "H_LIB_POL_Beret_BrunA1" };
	};

	class primary: primary {
		Default[] = {  };
		Porucznik[] = { keko_W_THOMPSON };
		Sierszant[] = { keko_W_PPSH };
		Kapral[] = { keko_W_G33 };
		RadioOperator[] = { keko_W_MOSIN };
		SzeregowyThompson[] = { keko_W_THOMPSON };
		SzeregowyBAR[] = { keko_W_BAR };
		SzeregowyMosin[] = { keko_W_MOSIN };
		SzeregowyK98[] = { keko_W_K98 };
	};

	class secondary: secondary {
		Default[] = {  };
		Porucznik[] = { keko_W_MAUSER };
		Sierszant[] = { keko_W_P38 };
		Sanitariusz[] = { keko_W_REV };
	};

};
