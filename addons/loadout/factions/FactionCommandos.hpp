class FactionCommandos: FactionBase {
	name = "[Ironfront] Commandos";

	#include "WeaponsCommandos.hpp"

	class role {
		Officer = "Officer";
		SectionCommander = "Section Commander";
		TeamLeader = "Team Leader";
		RadioOperator = "Radio Operator";
		Medic = "Medic";
		Rifleman = "Rifleman / Ammo Carrier";
		BrenGunner = "Machine Gunner (Bren)";
		BrenAsst = "Asst. Bren Gunner";
		ATGunner = "AT Gunner";
		ATAsst = "Asst. AT Gunner";
		Sapper = "Sapper";
	};

	class rank {
		Default = "PRIVATE"
		Officer = "LIEUTENANT";
		SectionCommander = "SERGEANT";
		TeamLeader = "CORPORAL"
	};

	class uniform: uniform {
		Default[] = { "fow_u_uk_bd40_commando_01_private" };
	};

	class uniformInventory: uniformInventory {
		Default[] = {
				{ 15, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_KSF1" }
			};
		Officer[] = {
				{ 10, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_KSF1" },
				{ 1, "ACE_MapTools" }
			};
		SectionCommander[] = {
				{ 10, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_KSF1" },
				{ 1, "ACE_MapTools" }
			};
		TeamLeader[] = {
				{ 10, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_KSF1" },
				{ 1, "ACE_MapTools" }
			};
		ATGunner[] = {
				{ 11, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_KSF1" }
			};
	};

	class vest: vest {
		Default[] = { "fow_v_uk_base_green" };
		Officer[] = { "fow_v_uk_officer_green" };
		SectionCommander[] = { "fow_v_uk_sten_green" };
		TeamLeader[] = { "fow_v_uk_sten_green" };
		BrenGunner[] = { "fow_v_uk_bren_green" };
		BrenAsst[] = { "fow_v_uk_bren_green" };
	};

	class backpack: backpack {
		Officer[] = { "fow_b_uk_bergenpack_thompson" };
		SectionCommander[] = { "fow_b_uk_bergenpack_thompson" };
		TeamLeader[] = { "fow_b_uk_bergenpack_thompson" };
		RadioOperator[] = { "fow_b_uk_p37_radio_blanco" };
		Medic[] = { "fow_b_uk_bergenpack_medic" };
		Rifleman[] = { "fow_b_uk_bergenpack_rifleman" };
		BrenGunner[] = { "fow_b_uk_bergenpack_bren" };
		BrenAsst[] = { "fow_b_uk_bergenpack_bren" };
		ATGunner[] = { "fow_b_uk_piat_at" };
		ATAsst[] = { "fow_b_uk_piat_at" };
		Sapper[] = { "fow_b_uk_bergenpack" };
	};

	class backpackInventory: backpackInventory {
		Medic[] = {
				{ 2, "ACE_salineIV" },
				{ 2, "ACE_salineIV_500" },
				{ 40, "ACE_elasticBandage" },
				{ 10, "adv_aceSplint_splint" }
			};
		Sapper[] = {
				{ 1, "ACE_EntrenchingTool" },
				{ 1, "ACE_wirecutter" },
				{ 1, "ACE_LIB_LadungPM" },
				{ 1, "LIB_ToolKit" },
				{ 1, "ACE_LIB_FireCord" },
				{ 1, "LIB_Ladung_Big_MINE_mag" }
			};
	};

	class helmet: helmet {
		Default[] = { "fow_h_uk_beret_commando" };
	};

	class primary: primary {
		Default[] = { keko_W_Lee };
		Officer[] = { keko_W_Thompson };
		SectionCommander[] = { keko_W_Thompson };
		TeamLeader[] = { keko_W_Thompson };
		BrenGunner[] = { keko_W_Bren };
		ATGunner[] = { keko_W_Piat };
	};

	class secondary: secondary {
		Default[] = {  };
		Officer[] = { keko_W_Webley };
		SectionCommander[] = { keko_W_Webley };
		TeamLeader[] = { keko_W_Webley };
		ATGunner[] = { keko_W_Webley };
	};

};
