class kekoFactionArmiaKrajowaCamo: Faction_base {

	name = "[Ironfront] Polska Armia Krajowa (Camo)";
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

	class kekoSoldierArmiaKrajowaCamo: kekoSoldier {
		uniform[] = {
			"U_LIB_POL_Soldier_camo_21vnpbcgcStSzPpsch41m",
			"U_LIB_POL_Soldier_camo_luftvnpgcbcStSzM9130",
			"U_LIB_POL_Soldier_camo_00vmpbcbcSzM9130",
			"U_LIB_POL_Soldier_camo_15vfpbcbcSzK98",
			"U_LIB_POL_Soldier_camo_09vfpbcbcSzK98"
		};
		uniformInventory[] = {
			{14, "ACE_packingBandage"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"}
		};
		vest[] = {};
		helmet[] = {
			"H_LIB_POL_Cap_BrA2","H_LIB_POL_Cap_WH00A2BR",
			"H_LIB_POL_Cap_FgA1BR",
			"H_LIB_POL_HelmetCamo_11",
			"H_LIB_POL_HelmetCamo_09"
		};
		primary[] = {};
		secondary[] = {};
	};

	class kekoPorucznik: kekoSoldierArmiaKrajowaCamo {
		name = "Porucznik (Lieutenant)";
		uniform[] = {"U_LIB_POL_Soldier_camo_luftvnpgcbcStSzM9130"};
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

	class kekoSierszant: kekoSoldierArmiaKrajowaCamo {
		name = "Sierzant (Sergeant)";
		uniform[] = {"U_LIB_POL_Soldier_camo_11vvpncbcStSztSten","U_LIB_POL_Soldier_camo_15vbpbcgcSztMp40"};
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		uniformInventory[] = {
			{15, "ACE_packingBandage"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"}
		};
		secondary[] = {keko_W_P38};
		helmet[] = {"H_LIB_POL_Helmet_ABRWSS","H_LIB_POL_Cap_WH15A2BR"};
		primary[] = {keko_W_PPSH};
		rank = "SERGEANT";
		items[] = {"ItemCompass","ItemMap"};
		optics[] = {"LIB_Binocular_GER"};
	};

	class kekoKapral: kekoSoldierArmiaKrajowaCamo {
		name = "Kapral (Corporal)";
		uniform[] = {"U_GELIB_POL_VillagerAK02KplP38","U_GELIB_POL_WoodlanderAKKpl04G3340"};
		vest[] = {"V_LIB_WP_Kar98Vest"};
		helmet[] = {"H_LIB_POL_Calot_BrunBR","H_LIB_POL_HelmetCamo_03"};
		primary[] = {keko_W_G33};
		rank = "CORPORAL";
		items[] = {"ItemCompass"};
	};

	class kekoSanitariusz: kekoSoldierArmiaKrajowaCamo {
		name = "Sanitariusz (Medic)";
		uniform[] = {"U_LIB_POL_Soldier_camo_15vbpbcbcSantM1911"};
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
		helmet[] = {"H_LIB_POL_Calot_KakiBR"};
		backpackInventory[] = {
			{30, "ACE_elasticBandage"},
			{2, "ACE_salineIV_500"},
			{8,"adv_aceSplint_splint"}
		};
		medicClass = 2;
	};

	class kekoRadioOperator: kekoSoldierArmiaKrajowaCamo {
		name = "Starszy Szeregowy (Radio Operator)";
		uniform[] = {"U_LIB_POL_Radioman_03vbpbcncKplG43"};
		backpack[] = {"B_LIB_SOV_RA_Radio"};
		vest[] = {"V_LIB_WP_Kar98Vest"};
		primary[] = {keko_W_MOSIN};
		helmet[] = {"H_LIB_POL_Beret_BrunA1"};
		items[] = {"ItemCompass","ItemMap","N_LIB_GER_Cap_Earphone"};
	};

	class kekoSzeregowyThompson: kekoSoldierArmiaKrajowaCamo {
		name = "Szeregowy [Thompson] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		primary[] = {keko_W_THOMPSON};
	};

	class kekoSzeregowyBAR: kekoSoldierArmiaKrajowaCamo {
		name = "Szeregowy [BAR] (Rifleman)";
		backpack[] = {"B_LIB_US_MGbag"};
		vest[] = {"V_LIB_WP_MGVest"};
		primary[] = {keko_W_BAR};
	};

	class kekoSzeregowyMosin: kekoSoldierArmiaKrajowaCamo {
		name = "Szeregowy [Mosin] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_SVTBelt"};
		primary[] = {keko_W_MOSIN};
	};

	class kekoSzeregowyK98: kekoSoldierArmiaKrajowaCamo {
		name = "Szeregowy [K98] (Rifleman)";
		vest[] = {"V_LIB_SOV_RAZV_PPShBelt"};
		primary[] = {keko_W_K98};
	};

};
