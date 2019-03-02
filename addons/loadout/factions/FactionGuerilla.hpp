class FactionGuerilla: FactionBase {
	name = "[Minimal] Guerilla";
	logisticsHelicopter = "I_Heli_light_03_unarmed_F";

	#include "WeaponsChineseGuerilla.hpp"

	class uniform: uniform {
		Default[] = {
				"U_MU_B_GuerillaGarment_blue",
				"U_MU_B_GuerillaGarment_brown",
				"U_MU_B_GuerillaGarment_grey",
				"U_MU_B_GuerillaGarment_redcamo",
				"U_MU_B_GuerillaGarment_orange",
				"U_MU_B_GuerillaGarment_skull",
				"U_MU_B_GuerillaGarment_yellow",
				"U_MU_B_GuerillaGarment2",
				"U_MU_B_GuerillaGarment2_blue",
				"U_MU_B_GuerillaGarment2_brown",
				"U_MU_B_GuerillaGarment2_grey",
				"U_MU_I_GuerillaGarment2_redcamo",
				"U_MU_B_GuerillaGarment2_orange",
				"U_MU_B_GuerillaGarment2_skull",
				"U_MU_B_GuerillaGarment2_yellow",
				"U_BG_Guerrilla_6_1",
				"U_BG_Guerilla1_1",
				"U_BG_Guerilla2_2",
				"U_BG_Guerilla2_1",
				"U_BG_Guerilla2_3"
			};
		Lead[] = { "U_IG_leader" };
		HeliPilot[] = { "U_BG_Guerrilla_6_1" };
	};

	class uniformInventory: uniformInventory {
		Default[] = {
				{ 15, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 2, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" }
			};
	};

	class vest: vest {
		Default[] = {
				"V_BandollierB_blk",
				"V_BandollierB_cbr",
				"V_BandollierB_rgr",
				"V_BandollierB_khk",
				"V_BandollierB_oli",
				"V_HarnessOGL_brn",
				"V_HarnessOGL_gry",
				"V_HarnessO_brn",
				"V_HarnessO_gry",
				"V_Chestrig_blk",
				"V_Chestrig_rgr",
				"V_Chestrig_khk",
				"V_Chestrig_oli"
			};
		Doctor[] = { "V_TacVestIR_blk" };
		Medic[] = { "V_TacVestIR_blk" };
		HeliPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g" };
		SQL[] = { "TFAR_rt1523g" };
		Doctor[] = {
				"B_MU_Kitbag_blk",
				"B_Kitbag_cbr",
				"B_MU_Kitbag_digi",
				"B_Kitbag_rgr",
				"B_Kitbag_mcamo",
				"B_Kitbag_sgg"
			};
		Medic[] = {
				"B_MU_Kitbag_blk",
				"B_Kitbag_cbr",
				"B_MU_Kitbag_digi",
				"B_Kitbag_rgr",
				"B_Kitbag_mcamo",
				"B_Kitbag_sgg"
			};
		RiflemanAT[] = { "B_TacticalPack_blk" };
		LMG[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		LMGAsst[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		MMG[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		MMGAsst[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		ATSpecialist[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		ATSpecialistAsst[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		AASpecialist[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		AASpecialistAsst[] = {
				"B_FieldPack_blk",
				"B_FieldPack_cbr",
				"B_FieldPack_khk",
				"B_FieldPack_oli"
			};
		EOD[] = {
				"B_MU_Carryall_blk",
				"B_Carryall_cbr",
				"B_Carryall_khk",
				"B_Carryall_mcamo",
				"B_Carryall_oli"
			};
		Engineer[] = {
				"B_MU_Carryall_blk",
				"B_Carryall_cbr",
				"B_Carryall_khk",
				"B_Carryall_mcamo",
				"B_Carryall_oli"
			};
	};

	class backpackInventory: backpackInventory {
		Lead[] = {
				{ 6, "UGL_FlareWhite_F" },
				{ 3, "UGL_FlareGreen_F" },
				{ 3, "UGL_FlareRed_F" }
			};
		SQL[] = {
				{ 6, "UGL_FlareWhite_F" },
				{ 3, "UGL_FlareGreen_F" },
				{ 3, "UGL_FlareRed_F" }
			};
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		LMGAsst[] = { { 4, PRIMARY_MAG_LMG } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
	};

	class helmet: helmet {
		Default[] = {
				"H_Bandanna_gry",
				"H_Bandanna_blu",
				"H_Bandanna_cbr",
				"H_Bandanna_khk",
				"H_Bandanna_sgg",
				"H_Bandanna_sand",
				"H_Bandanna_camo",
				"H_Shemag_olive",
				"H_ShemagOpen_tan",
				"H_ShemagOpen_khk"
			};
		Lead[] = { "H_Bandanna_khk_hs" };
		SQL[] = { "H_Shemag_olive_hs" };
		HeliPilot[] = { "H_Cap_marshal" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_TRG21 };
		Lead[] = { keko_W_A3_TRG21_GL };
		SQL[] = { keko_W_A3_TRG21_GL };
		FTL[] = { keko_W_A3_TRG21_GL };
		Grenadier[] = { keko_W_A3_TRG21_GL };
		LMG[] = { keko_W_A3_Mk200 };
		MMG[] = { keko_W_A3_MMG };
		Marksman[] = { keko_W_A3_DMR };
	};

	class secondary: secondary {
		Default[] = { keko_W_Rook };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_NLAW };
		ATSpecialist[] = { keko_W_RPG7 };
		AASpecialist[] = { keko_W_TITAN_AA };
	};

};
