class FactionAlSirae: FactionBase {
	name = "[Minimal] Al Sirae (Terrorists)";
	logisticsHelicopter = "MU_CIV_Orca";

	#include "WeaponsAlSirae.hpp"

	class uniform: uniform {
		Default[] = {
				"GUR_fat_ALSIR_32",
				"GUR_fat_ALSIR_31",
				"GUR_fat_ALSIR_33",
				"GUR_fat_Alsir_22",
				"GUR_fat_Alsir_21",
				"GUR_fat_ALSIR_8",
				"GUR_fat_ALSIR_4",
				"GUR_fat_ALSIR_5",
				"GUR_fat_ALSIR_7"
			};
		Lead[] = { "GUR_fat_Alsir_1" };
		Command[] = { "GUR_fat_Alsir_1" };
		Sergeant[] = { "GUR_fat_ALSIR_6" };
		SQL[] = { "GUR_fat_ALSIR_6" };
	};

	class vest: vest {
		Default[] = {
				"V_HarnessOGL_brn",
				"V_TacVest_khk",
				"V_Chestrig_khk",
				"V_BandollierB_cbr",
				"V_PlateCarrierIA1_dgtl",
				"V_Chestrig_oli",
				"V_TacVest_camo",
				"V_I_G_resistanceLeader_F",
				"V_BandollierB_oli",
				"V_HarnessO_gry",
				"V_BandollierB_cbr"
			};
		Sergeant[] = { "V_HarnessOGL_brn" };
		SQL[] = { "V_HarnessOGL_brn" };
		Doctor[] = { "V_PlateCarrierIA1_dgtl" };
		Medic[] = { "V_PlateCarrierIA1_dgtl" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		Command[] = { "TFAR_rt1523g_rhs" };
		Sergeant[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
		Doctor[] = { "B_Kitbag_rgr" };
		Medic[] = { "B_Kitbag_rgr" };
		LMG[] = { "B_FieldPack_khk" };
		LMGAsst[] = { "B_FieldPack_khk" };
		MMG[] = { "B_FieldPack_khk" };
		MMGAsst[] = { "B_FieldPack_khk" };
		ATSpecialist[] = { "B_FieldPack_khk" };
		ATSpecialistAsst[] = { "B_FieldPack_khk" };
		AASpecialist[] = { "B_FieldPack_ocamo" };
		AASpecialistAsst[] = { "B_FieldPack_ocamo" };
		EOD[] = { "B_Carryall_cbr" };
		Engineer[] = { "B_Carryall_cbr" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = {  };
		Command[] = {  };
		Sergeant[] = {  };
		SQL[] = {  };
	};

	class helmet: helmet {
		Default[] = {
				"H_Shemag_olive",
				"H_ShemagOpen_tan",
				"H_ShemagOpen_khk",
				"GUR_shemag_red"
			};
	};

	class primary: primary {
		Default[] = { keko_W_A3_F2000_SHORT };
		Lead[] = { keko_W_A3_F2000_UGL, keko_W_A3_TRG21_GL };
		SQL[] = { keko_W_A3_F2000_UGL, keko_W_A3_TRG21_GL };
		FTL[] = { keko_W_A3_F2000_UGL, keko_W_A3_TRG21_GL };
		Grenadier[] = { keko_W_A3_F2000_UGL, keko_W_A3_TRG21_GL };
		LMG[] = { keko_W_A3_STONER };
		MMG[] = { keko_W_A3_MMG_AAF };
		Marksman[] = { keko_W_A3_EBR };
	};

	class secondary: secondary {
		Default[] = { keko_W_A3_ACP };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_NLAW };
		ATSpecialist[] = { keko_W_TITAN_AT };
		AASpecialist[] = { keko_W_TITAN_AA };
	};

};
