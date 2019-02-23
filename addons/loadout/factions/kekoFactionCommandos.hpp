class kekoFactionCommandos: kekoFactionBase {

	name = "[Ironfront] Commandos";
	roles[] = {
		{"Commandos", {
			kekoOfficer,
			kekoSectionCommander,
			kekoTeamLeader,
			kekoRadioOperator,
			kekoMedic,
			kekoRifleman,
			kekoBrenGunner,
			kekoBrenAsst,
			kekoATGunner,
			kekoATAsst,
			kekoSapper}}
	};
	weaponCfg = kekoWeaponsCommandos;

	// define all weapons and mags
	#include "kekoWeaponsCommandos.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierCommandos: kekoSoldier {
		uniform[] = {"fow_u_uk_bd40_commando_01_private"};
		uniformInventory[] = {{15, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_KSF1"}};
		vest[] = {"fow_v_uk_base_green"};
		helmet[] = {"fow_h_uk_beret_commando"};
		primary[] = {keko_W_Lee};
		secondary[] = {};
		items[] = {"ItemCompass","ItemMap"};
	};

	class kekoOfficer: kekoSoldierCommandos {
		name = "Officer";
		backpack[] = {"fow_b_uk_bergenpack_thompson"};
		vest[] = {"fow_v_uk_officer_green"};
		secondary[] = {keko_W_Webley};
		optics[] = {"fow_i_dienstglas"};
		medicClass = 2;
		engineerClass = 2;
		primary[] = {keko_W_Thompson};
		uniformInventory[] = {{10, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_KSF1"},{1, "ACE_MapTools"}};
	};

	class kekoSectionCommander: kekoSoldierCommandos {
		name = "Section Commander";
		backpack[] = {"fow_b_uk_bergenpack_thompson"};
		vest[] = {"fow_v_uk_sten_green"};
		secondary[] = {keko_W_Webley};
		optics[] = {"fow_i_dienstglas"};
		primary[] = {keko_W_Thompson};
		uniformInventory[] = {{10, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_KSF1"},{1, "ACE_MapTools"}};
	};

	class kekoTeamLeader: kekoSoldierCommandos {
		name = "Team Leader";
		backpack[] = {"fow_b_uk_bergenpack_thompson"};
		vest[] = {"fow_v_uk_sten_green"};
		secondary[] = {keko_W_Webley};
		primary[] = {keko_W_Thompson};
		uniformInventory[] = {{10, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_KSF1"},{1, "ACE_MapTools"}};
	};

	class kekoRadioOperator: kekoSoldierCommandos {
		name = "Radio Operator";
		backpack[] = {"fow_b_uk_p37_radio_blanco"};
		items[] = {"ItemCompass","ItemMap","ItemRadio"};
	};

	class kekoMedic: kekoSoldierCommandos {
		name = "Medic";
		backpack[] = {"fow_b_uk_bergenpack_medic"};
		medicClass = 2;
		vestInventory[] = {{8, "ACE_epinephrine"},{4, "ACE_morphine"},{1, "ACE_surgicalKit"},{3, "ACE_tourniquet"}};
		backpackInventory[] = {{2, "ACE_salineIV"},{2, "ACE_salineIV_500"},{40, "ACE_elasticBandage"},{10, "adv_aceSplint_splint"}};
	};

	class kekoRifleman: kekoSoldierCommandos {
		name = "Rifleman / Ammo Carrier";
		backpack[] = {"fow_b_uk_bergenpack_rifleman"};
	};

	class kekoBrenGunner: kekoSoldierCommandos {
		name = "Machine Gunner (Bren)";
		backpack[] = {"fow_b_uk_bergenpack_bren"};
		vest[] = {"fow_v_uk_bren_green"};
		primary[] = {keko_W_Bren};
	};

	class kekoBrenAsst: kekoSoldierCommandos {
		name = "Asst. Bren Gunner";
		backpack[] = {"fow_b_uk_bergenpack_bren"};
		vest[] = {"fow_v_uk_bren_green"};
		vestInventory[] = {{1, "ACE_EntranchingTool"}};
	};

	class kekoATGunner: kekoSoldierCommandos {
		name = "AT Gunner";
		backpack[] = {"fow_b_uk_piat_at"};
		secondary[] = {keko_W_Webley};
		primary[] = {keko_W_Piat};
		uniformInventory[] = {{11, "ACE_fieldDressing"},{1, "ACE_morphine"},{3, "ACE_tourniquet"},{1, "ACE_Flashlight_KSF1"}};
	};

	class kekoATAsst: kekoSoldierCommandos {
		name = "Asst. AT Gunner";
		backpack[] = {"fow_b_uk_piat_at"};
	};

	class kekoSapper: kekoSoldierCommandos {
		name = "Sapper";
		backpack[] = {"fow_b_uk_bergenpack"};
		engineerClass = 2;
		backpackInventory[] = {{1, "ACE_EntrenchingTool"},{1,"ACE_wirecutter"},{1,"ACE_LIB_LadungPM"},{1,"LIB_ToolKit"},{1,"ACE_LIB_FireCord"},{1,"LIB_Ladung_Big_MINE_mag"}};
	};
};
