class kekoFactionWehrmachtAfrica: kekoFactionBase {

	name = "[Ironfront] Wehrmacht (Africa)";
	roles[] = {
		{"Führung", {
			kekoGruppenFuehrerMP40,
			kekoGruppenFuehrerSTG44,
			kekoGruppenFuehrerAsst,
			kekoTruppFuehrer,
			kekoFunker,
			kekoSani}},
		{"Mannschafter", {
			kekoSchuetzeK98,
			kekoSchuetzeG43,
			kekoSchuetzeMP40,
			kekoSchuetzeMP40PzF,
			kekoMunitionstraeger,
			kekoGrenadier,
			kekoMG34,
			kekoMG42,
			kekoMGAsst}}
	};
	weaponCfg = kekoWeaponsWehrmacht;

	// define all weapons and mags
	#include "kekoWeaponsWehrmacht.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierWehrmachtAfrica: kekoSoldier {
		uniform[] = {"fow_u_ger_m43_01_private"};
		uniformInventory[] = {{16, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"}};
		vest[] = {"fow_v_heer_k98"};
		helmet[] = {"fow_h_ger_m40_heer_01","fow_h_ger_m40_heer_02"};
		primary[] = {keko_W_K98};
		secondary[] = {};
	};

	class kekoGruppenFuehrerMP40: kekoSoldierWehrmachtAfrica {
		name = "Gruppenführer (MP40)";
		rank = "LIEUTENANT";
		optics[] = {"LIB_Binocular_GER"};
		uniform[] = {"fow_u_ger_m43_02_corporal"};
		uniformInventory[] = {{9, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_XL50"},{1, "ACE_MapTools"}};
		primary[] = {keko_W_MP40};
		secondary[] = {keko_W_P08};
		medicClass = 2;
		engineerClass = 2;
		items[] = {"ItemCompass","ItemMap"};
		vest[] = {"fow_v_heer_mp40"};

	};

	class kekoGruppenFuehrerSTG44: kekoGruppenFuehrerMP40 {
		name = "Gruppenführer (StG44)";
		rank = "LIEUTENANT";
		optics[] = {"LIB_Binocular_GER"};
		uniform[] = {"fow_u_ger_m43_01_corporal"};
		uniformInventory[] = {{9, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_XL50"},{1, "ACE_MapTools"}};
		primary[] = {keko_W_STG44};
		secondary[] = {keko_W_P08};
		medicClass = 2;
		engineerClass = 2;
		items[] = {"ItemCompass","ItemMap"};
		vest[] = {"fow_v_heer_mp44"};
	};

	class kekoGruppenFuehrerAsst: kekoSoldierWehrmachtAfrica {
		name = "Stellv. Gruppenführer";
		rank = "SERGEANT";
		primary[] = {keko_W_MP40};
		items[] = {"ItemCompass","ItemMap"};
		uniform[] = {"fow_u_ger_m43_01_private"};
		uniformInventory[] = {{14, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_XL50"},{1, "ACE_MapTools"}};
		vest[] = {"fow_v_heer_mp40"};
	};

	class kekoTruppFuehrer: kekoSoldierWehrmachtAfrica {
		name = "Truppführer";
		rank = "CORPORAL";
		primary[] = {keko_W_MP40};
		items[] = {"ItemCompass","ItemMap"};
		uniform[] = {"fow_u_ger_m43_01_corporal"};
		uniformInventory[] = {{15, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_XL50"},{1, "ACE_MapTools"}};
		vest[] = {"fow_v_heer_mp40_nco"};
	};

	class kekoFunker: kekoSoldierWehrmachtAfrica {
		name = "Funker";
		rank = "CORPORAL";
		backpack[] = {"fow_b_torn_radio"};
		backpackInventory[] = {};
		items[] = {"ItemRadio","ItemCompass","ItemMap"};
		uniform[] = {"fow_u_ger_m43_01_private"};
		vest[] = {"fow_v_heer_k98_light"};

	};

	class kekoSani: kekoSoldierWehrmachtAfrica {
		name = "Sanitäter";
		rank = "CORPORAL";
		backpack[] = {"fow_b_tornister_medic"};
		backpackInventory[] = {{40, "ACE_elasticBandage"},{6,"adv_aceSplint_splint"}};
		engineerClass = 2;
		uniform[] = {"fow_u_ger_m43_01_private"};
		vestInventory[] = {{8, "ACE_epinephrine"},{8, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{4,"adv_aceSplint_splint"}};
	};

	class kekoSchuetzeK98: kekoSoldierWehrmachtAfrica {
		name = "Schütze (K98)";
	};

	class kekoSchuetzeG43: kekoSoldierWehrmachtAfrica {
		name = "Schütze (G43)";
		primary[] = {keko_W_G43};
		vest[] = {"fow_v_heer_g43"};
	};

	class kekoSchuetzeMP40: kekoSoldierWehrmachtAfrica {
		name = "Schütze (MP40)";
		primary[] = {keko_W_MP40};
		uniform[] = {"fow_u_ger_m43_01_frag_private"};
		vest[] = {"fow_v_heer_mp40"};
	};

	class kekoSchuetzeMP40PzF: kekoSoldierWehrmachtAfrica {
		name = "Panzerfaust Schütze (MP40)";
		backpack[] = {"fow_b_heer_aframe"};
		primary[] = {keko_W_MP40};
		uniform[] = {"fow_u_ger_m43_01_frag_private"};
		vest[] = {"fow_v_heer_mp40"};

	};

	class kekoMunitionstraeger: kekoSoldierWehrmachtAfrica {
		name = "Munitionsträger";
		backpack[] = {"fow_b_ammoboxes"};
		uniform[] = {"fow_u_ger_m43_01_frag_private"};

	};

	class kekoGrenadier: kekoSoldierWehrmachtAfrica {
		name = "Grenadier";
		backpack[] = {"fow_b_grenadebag"};
		backpackInventory[] = {{2, "fow_e_m24_at"},{4, "fow_e_m24"},{1, "fow_e_nb39b"}};
	};

	class kekoMG34: kekoSoldierWehrmachtAfrica {
		name = "MG Schütze (MG34)";
		backpack[] = {"fow_b_heer_ammo_belt"};
		primary[] = {keko_W_MG34};
		secondary[] = {keko_W_P38};
		uniform[] = {"fow_u_ger_m43_02_lance_corporal"};
		uniformInventory[] = {{14, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"}};
		vest[] = {"fow_v_heer_mg"};
	};

	class kekoMG42: kekoSoldierWehrmachtAfrica {
		name = "MG Schütze (MG42)";
		backpack[] = {"fow_b_heer_ammo_belt"};
		primary[] = {keko_W_MG42};
		secondary[] = {keko_W_P38};
		uniform[] = {"fow_u_ger_m43_02_lance_corporal"};
		uniformInventory[] = {{14, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"}};
		vest[] = {"fow_v_heer_mg"};
	};

	class kekoMGAsst: kekoSoldierWehrmachtAfrica {
		name = "MG Asst.";
		backpack[] = {"fow_b_ammoboxes_mg34_42"};
		uniform[] = {"fow_u_ger_m43_01_frag_private"};
		vest[] = {"fow_v_heer_k98_ass"};
	};
};
