class FactionIDAP: FactionBase {
	name = "[Minimal] IDAP - International Development and Aid Project";
	logisticsHelicopter = "C_IDAP_Heli_Transport_02_F";

	#include "WeaponsIDAP.hpp"

	class role: role {
		Lead = "Leader";
		SQL = "Group Leader";
		FTL = "Team Leader";
		Doctor = "Doctor";
		Medic = "Paramedic";
		AidWorker = "Aid Worker";
		AidWorkerShorts = "Aid Worker (Shorts)";
		Press = "Press";
		Messenger = "Messenger";
		Driver = "Driver";
		Refugee = "Refugee";
		Fisherman = "Fisherman";
		UtilityWorker = "Utility Worker";
		ConstructionWorkerBlack = "Construction Worker (Black)";
		ConstructionWorkerBlue = "Construction Worker (Blue)";
		ConstructionWorkerRed = "Construction Worker (Red)";
		ConstructionWorkerVRANA = "Construction Worker (VRANA)";
		EOD = "EOD Expert";
		Engineer = "Mechanic";
		HeliPilot = "Pilot";
		DroneOperator = "Drone Operator";
		DroneOperatorUtility = "Drone Operator (Utility)";
		DroneOperatorMedical = "Drone Operator (Medical)";
		DroneOperatorDemining = "Drone Operator (Demining)";
		DroneOperatorUGV = "Drone Operator (UGV)";
	};

	class uniform: uniform {
		Default[] = {
				"U_C_IDAP_Man_cargo_F",
				"U_C_IDAP_Man_Jeans_F",
				"U_C_IDAP_Man_Tee_F"
			};
		Lead[] = { "U_C_IDAP_Man_casual_F" };
		SQL[] = { "U_C_IDAP_Man_cargo_F" };
		FTL[] = { "U_C_IDAP_Man_cargo_F" };
		Doctor[] = {
				"U_Marshal",
				"U_MU_PoloshirtPants2",
				"U_MU_PoloshirtPants1"
			};
		Medic[] = { "U_C_Paramedic_01_F" };
		AidWorker[] = {
				"U_C_IDAP_Man_cargo_F",
				"U_C_IDAP_Man_Jeans_F",
				"U_C_IDAP_Man_Tee_F"
			};
		AidWorkerShorts[] = { "U_C_IDAP_Man_shorts_F", "U_C_IDAP_Man_TeeShorts_F" };
		Press[] = { "U_C_Journalist" };
		Messenger[] = { "U_C_Poor_1" };
		Refugee[] = {
				"U_BG_Guerilla1_2_F",
				"U_MU_B_GuerillaGarment2_yellow",
				"U_MU_B_GuerillaGarment2_skull",
				"U_MU_B_GuerillaGarment2_orange",
				"U_MU_B_GuerillaGarment2_redcamo",
				"U_MU_B_GuerillaGarment2_grey",
				"U_MU_B_GuerillaGarment2_brown",
				"U_MU_B_GuerillaGarment2_blue",
				"U_MU_B_GuerillaGarment2",
				"U_MU_B_GuerillaGarment_yellow",
				"U_MU_B_GuerillaGarment_skull",
				"U_MU_B_GuerillaGarment_orange",
				"U_MU_B_GuerillaGarment_redcamo",
				"U_MU_B_GuerillaGarment_grey",
				"U_MU_B_GuerillaGarment_brown",
				"U_MU_B_GuerillaGarment_blue",
				"U_C_Poor_1",
				"U_BG_Guerilla1_1"
			};
		Fisherman[] = { "U_C_Poloshirt_blue" };
		UtilityWorker[] = { "U_C_ConstructionCoverall_Blue_F" };
		ConstructionWorkerBlack[] = { "U_C_ConstructionCoverall_Black_F" };
		ConstructionWorkerBlue[] = { "U_C_ConstructionCoverall_Blue_F" };
		ConstructionWorkerRed[] = { "U_C_ConstructionCoverall_Red_F" };
		ConstructionWorkerVRANA[] = { "U_C_ConstructionCoverall_Vrana_F" };
		EOD[] = { "U_C_IDAP_Man_casual_F" };
		Engineer[] = { "U_C_Mechanic_01_F" };
		HeliPilot[] = { "U_C_IDAP_Man_casual_F" };
		DroneOperator[] = { "U_C_Man_casual_2_F" };
		DroneOperatorMedical[] = { "U_C_Paramedic_01_F" };
	};

	class uniformInventory: uniformInventory {
		Default[] = {
				{ 10, "ACE_fieldDressing" },
				{ 1, "ACE_morphine" },
				{ 2, "ACE_tourniquet" },
				{ 1, "ACE_Flashlight_XL50" }
			};
		Refugee[] = { { 3, "ACE_fieldDressing" }, { 1, "ACE_tourniquet" } };
	};

	class vest: vest {
		Default[] = {
				" ",
				" ",
				" ",
				" ",
				" ",
				" ",
				" ",
				"V_Plain_medical_F",
				"V_Pocketed_black_F",
				"V_Safety_orange_F"
			};
		Doctor[] = { "V_LegStrapBag_black_F" };
		Medic[] = { "V_LegStrapBag_black_F" };
		Press[] = { "V_Press_F" };
		Messenger[] = { "V_LegStrapBag_coyote_F" };
		Refugee[] = {  };
		Fisherman[] = { "V_Pocketed_coyote_F" };
		UtilityWorker[] = { "V_Safety_yellow_F" };
		ConstructionWorkerBlack[] = {  };
		ConstructionWorkerBlue[] = {  };
		ConstructionWorkerRed[] = {  };
		ConstructionWorkerVRANA[] = {  };
		EOD[] = { "V_EOD_IDAP_blue_F" };
		Engineer[] = { "V_LegStrapBag_coyote_F" };
		HeliPilot[] = { "V_Safety_orange_F" };
	};

	class backpack: backpack {
		Default[] = {
				" ",
				" ",
				" ",
				" ",
				"B_Messenger_Black_F",
				"B_Messenger_Coyote_F",
				"B_Messenger_Gray_F",
				"B_Messenger_IDAP_F"
			};
		Doctor[] = {
				"B_Messenger_Black_F",
				"B_Messenger_Gray_F",
				"B_Messenger_IDAP_F"
			};
		Medic[] = { "B_Messenger_Black_F", "B_Messenger_Gray_F" };
		Press[] = {
				" ",
				" ",
				" ",
				" ",
				" ",
				"B_Messenger_Black_F",
				"B_Messenger_Gray_F"
			};
		Messenger[] = { "B_Messenger_Coyote_F" };
		Refugee[] = {  };
		UtilityWorker[] = { "B_LegStrapBag_black_F" };
		ConstructionWorkerBlack[] = {  };
		ConstructionWorkerBlue[] = {  };
		ConstructionWorkerRed[] = {  };
		ConstructionWorkerVRANA[] = {  };
		EOD[] = { "B_LegStrapBag_coyote_F" };
		Engineer[] = { "B_Messenger_Coyote_F" };
		HeliPilot[] = {  };
		DroneOperator[] = { "C_IDAP_UAV_01_backpack_F" };
		DroneOperatorUtility[] = { "C_IDAP_UAV_06_backpack_F" };
		DroneOperatorMedical[] = { "C_IDAP_UAV_06_medical_backpack_F" };
		DroneOperatorDemining[] = { "C_IDAP_UAV_06_antimine_backpack_F" };
	};

	class helmet: helmet {
		Default[] = {
				"H_HelmetSpecB_blk",
				"H_HelmetSpecB_paint2",
				"H_HelmetSpecB_paint1",
				"H_HelmetSpecB_sand",
				"H_HelmetSpecB_snakeskin",
				"H_HelmetB",
				"H_HelmetB_black",
				"H_HelmetB_camo",
				"H_HelmetB_desert",
				"H_HelmetB_grass",
				"H_HelmetB_sand",
				"H_HelmetB_snakeskin"
			};
	};

	class secondary: secondary {
		EOD[] = { keko_W_VMH3, keko_W_VMM3 };
	};

};
