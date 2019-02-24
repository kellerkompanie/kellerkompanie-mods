class kekoFactionArmiaKrajowaGrade: Faction_base {

	name = "[Ironfront] Polska Armia Krajowa (Grade)";
	roles[] = {
		{"Partyzanci", {
			kekoPorucznik,
			kekoSierszant,
			kekoKapral,
			kekoSanitariusz,
			kekoRadioOperator,
			kekoSzeregowyThompson,
			kekoSzeregowyBAR,
			kekoSzeregowyMosin,
			kekoSzeregowyK98}}
	};
	weaponCfg = kekoWeaponsArmiaKrajowa;

	// define all weapons and mags
	#include "kekoWeaponsArmiaKrajowa.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierArmiaKrajowaGrade: kekoSoldier {
		uniform[] = {
			"U_GELIB_POL_WoodlanderAKStSz02RKMwz28",
			"U_GELIB_POL_CitizenAK02StSzSten",
			"U_GELIB_POL_CitizenAK04SzK98",
			"U_GELIB_POL_CitizenAK01SzM38",
			"U_GELIB_POL_VillagerAK01SzM9130",
			"U_GELIB_POL_WoodlanderAK01SzM9130"};
		uniformInventory[] = {
			{14, "ACE_packingBandage"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"}
		};
		vest[] = {};
		helmet[] = {
			"H_LIB_POL_Cap_BrA2",
			"H_LIB_POL_Cap_WH00A2BR",
			"H_LIB_POL_Cap_FgA1BR",
			"H_LIB_POL_HelmetCamo_11",
			"H_LIB_POL_HelmetCamo_09"};
		primary[] = {};
		secondary[] = {};
	};

	class kekoPorucznik: kekoSoldierArmiaKrajowaGrade {
		name = "Porucznik (Lieutenant)";
		uniform[] = {"U_GELIB_POL_CitizenAK03PckSten"};
		vest[] = {"V_LIB_GER_PrivateBelt"};
		uniformInventory[] = {
			{15, "ACE_packingBandage"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"}
		};
		secondary[] = {keko_W_MAUSER};
		helmet[] = {"H_LIB_POL_Beret_NoirA1"};
		medicClass = 2;
		engineerClass = 2;
		primary[] = {keko_W_THOMPSON};
		rank = "LIEUTENANT";
		items[] = {"ItemCompass","ItemMap"};
		optics[] = {"LIB_Binocular_SU"};
	};

	class kekoSierszant: kekoSoldierArmiaKrajowaGrade {
		name = "Sierzant (Sergeant)";
		uniform[] = {"U_GELIB_POL_MGunner_gvnpAK13Sten","U_GELIB_POL_WoodlanderAK01StSztPpsch41d"};
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		uniformInventory[] = {
			{15, "ACE_packingBandage"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"}
		};
		secondary[] = {keko_W_P38};
		helmet[] = {"H_LIB_POL_RA_OfficerCap_NoirA1","H_LIB_POL_Beret_NoirA1"};
		primary[] = {keko_W_PPSH};
		rank = "SERGEANT";
		items[] = {"ItemCompass","ItemMap"};
		optics[] = {"LIB_Binocular_GER"};
	};

	class kekoKapral: kekoSoldierArmiaKrajowaGrade {
		name = "Kapral (Corporal)";
		uniform[] = {"U_GELIB_POL_VillagerAK02KplP38","U_GELIB_POL_WoodlanderAKKpl04G3340"};
		vest[] = {"V_LIB_WP_Kar98Vest"};
		helmet[] = {"H_LIB_POL_Beret_NoirBR","H_LIB_POL_Calot_NoirBR"};
		primary[] = {keko_W_G33};
		rank = "CORPORAL";
		items[] = {"ItemCompass"};
	};

	class kekoSanitariusz: kekoSoldierArmiaKrajowaGrade {
		name = "Sanitariusz (Medic)";
		uniform[] = {"U_GELIB_POL_EmployeAKSantREV1982"};
		backpack[] = {"B_LIB_SOV_RA_MedicalBag_00"};
		vest[] = {"V_LIB_DAK_PrivateBelt"};
		uniformInventory[] = {
			{12, "ACE_packingBandage"},
			{1,"ACE_surgicalKit"}
		};
		secondary[] = {keko_W_REV};
		vestInventory[] = {
			{8, "ACE_epinephrine"},
			{8, "ACE_morphine"},
			{6, "ACE_tourniquet"},
			{8, "ACE_elasticBandage"}
		};
		helmet[] = {"H_LIB_POL_RA_OfficerCap_Noir"};
		backpackInventory[] = {
			{30, "ACE_elasticBandage"},
			{2, "ACE_salineIV_500"},
			{8,"adv_aceSplint_splint"}
		};
		medicClass = 2;
	};

	class kekoRadioOperator: kekoSoldierArmiaKrajowaGrade {
		name = "Starszy Szeregowy (Radio Operator)";
		uniform[] = {"U_GELIB_POL_Radioman_StSz02M38"};
		backpack[] = {"B_LIB_SOV_RA_Radio"};
		vest[] = {"V_LIB_WP_Kar98Vest"};
		primary[] = {keko_W_MOSIN};
		helmet[] = {"H_LIB_POL_Helmet_BRLuft"};
		items[] = {"ItemCompass","ItemMap","N_LIB_GER_Cap_Earphone"};
	};

	class kekoSzeregowyThompson: kekoSoldierArmiaKrajowaGrade {
		name = "Szeregowy [Thompson] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		primary[] = {keko_W_THOMPSON};
		helmet[] = {"H_LIB_POL_Cap"};
	};

	class kekoSzeregowyBAR: kekoSoldierArmiaKrajowaGrade {
		name = "Szeregowy [BAR] (Rifleman)";
		backpack[] = {"B_LIB_US_MGbag"};
		vest[] = {"V_LIB_WP_MGVest"};
		primary[] = {keko_W_BAR};
		helmet[] = {"H_LIB_POL_Cap_FgA1BR"};
	};

	class kekoSzeregowyMosin: kekoSoldierArmiaKrajowaGrade {
		name = "Szeregowy [Mosin] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_SVTBelt"};
		primary[] = {keko_W_MOSIN};
		helmet[] = {"H_LIB_CIV_Villager_Cap_4","H_LIB_POL_RA_OfficerCap_NoirA1"};
	};

	class kekoSzeregowyK98: kekoSoldierArmiaKrajowaGrade {
		name = "Szeregowy [K98] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		primary[] = {keko_W_K98};
		helmet[] = {"H_LIB_POL_Calot_BrunBR"};
	};

};
