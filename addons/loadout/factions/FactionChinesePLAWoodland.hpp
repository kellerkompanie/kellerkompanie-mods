class FactionChinesePLAWoodland: FactionBase {
	name = "[Main] Chinese PLA (Woodland)";
	logisticsHelicopter = "VME_PLA_Mi17";

	#include "WeaponsChinesePLA.hpp"

	class uniform: uniform {
		Default[] = { "PLA_CombatUniform_SB", "PLA_CombatUniform_SBCB" };
		Lead[] = { "PLA_CombatUniform_SWCB", "PLA_CombatUniform_SW" };
	};

	class vest: vest {
		Default[] = { "PLA_B04_RF", "PLA_T15Vest_RF" };
		Lead[] = { "PLA_T15Vest_RD" };
		SQL[] = { "PLA_T15Vest_RD" };
		LMG[] = { "PLA_B04_MG" };
		MMG[] = { "PLA_B04_MG" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_black" };
		SQL[] = { "TFAR_rt1523g_black" };
		Doctor[] = { "TRYK_B_Kitbag_blk" };
		Medic[] = { "TRYK_B_Kitbag_blk" };
		LMG[] = { "TRYK_B_AssaultPack_UCP" };
		LMGAsst[] = { "TRYK_B_AssaultPack_UCP" };
		MMG[] = { "TRYK_B_AssaultPack_UCP" };
		MMGAsst[] = { "TRYK_B_AssaultPack_UCP" };
		ATSpecialist[] = { "B_FieldPack_oucamo" };
		ATSpecialistAsst[] = { "B_FieldPack_oucamo" };
		AASpecialist[] = { "B_FieldPack_oucamo" };
		AASpecialistAsst[] = { "B_FieldPack_oucamo" };
		EOD[] = { "B_Carryall_oucamo" };
		Engineer[] = { "B_Carryall_oucamo" };
		JTAC[] = { "TFAR_rt1523g_black" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = {  };
		SQL[] = {  };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = { "VME_PLA_Helmet", "VME_PLA_Helmet_G" };
		Lead[] = { "VME_PLA_Hat" };
		SQL[] = { "VME_PLA_Helmet_R_O", "VME_PLA_Helmet_R" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_QBZ95 };
		FTL[] = { keko_W_QBZ95_GL };
		Grenadier[] = { keko_W_QBZ95_GL };
		LMG[] = { keko_W_QJB95 };
		MMG[] = { keko_W_A3_MMG };
		Marksman[] = { keko_W_QBU88 };
		JTAC[] = { keko_W_QBZ95_GL };
	};

	class secondary: secondary {
		Default[] = { keko_W_Rook };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_PF89 };
		ATSpecialist[] = { keko_W_TITAN_AT };
		AASpecialist[] = { keko_W_TITAN_AA };
	};

};
