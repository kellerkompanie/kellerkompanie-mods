class kekoFactionIDAP: kekoFactionBase {

	name = "[Minimal] IDAP - International Development and Aid Project";
	roles[] = {
		{"Führung", {
			kekoLead,
			kekoSQL,
			kekoFTL}},
		{"Medical", {
			kekoDoctor,
			kekoMedic}},
		{"Plebs", {
			kekoAidWorker,
			kekoAidWorkerShorts,
			kekoPress,
			kekoMessenger,
			kekoDriver,
			kekoRefugee,
			kekoFisherman}},
		{"Worker", {
			kekoUtilityWorker,
			kekoConstructionWorkerBlack,
			kekoConstructionWorkerBlue,
			kekoConstructionWorkerRed,
			kekoConstructionWorkerVRANA}},
		{"Support", {
			kekoEOD,
			kekoEngineer,
			kekoHeliPilot,
			kekoDroneOperator,
			kekoDroneOperatorUtility,
			kekoDroneOperatorMedical,
			kekoDroneOperatorDemining,
			kekoDroneOperatorUGV}}
	};
	weaponCfg = kekoWeaponsIDAP;

	// define all weapons and mags
	#include "kekoWeaponsIDAP.hpp"
	
	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierIDAP: kekoSoldier {
		uniform[] = {
			"U_C_IDAP_Man_cargo_F",
			"U_C_IDAP_Man_Jeans_F",
			"U_C_IDAP_Man_Tee_F"};
		uniformInventory[] = {
			{10, "ACE_fieldDressing"},
			{1, "ACE_morphine"},
			{2, "ACE_tourniquet"},
			{1, "ACE_Flashlight_XL50"}
		};

		vest[] = {
			" "," "," "," "," "," "," ","V_Plain_medical_F","V_Pocketed_black_F","V_Safety_orange_F"};
		vestInventory[] = {};

		helmet[] = {
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
			"H_HelmetB_snakeskin"};

		backpack[] = {" "," "," "," ","B_Messenger_Black_F","B_Messenger_Coyote_F","B_Messenger_Gray_F","B_Messenger_IDAP_F"};
	};

	class kekoLead: kekoSoldierIDAP {
		name = "Leader";
		uniform[] = {"U_C_IDAP_Man_casual_F"};
		optics[] = {"Binocular"};
		medicClass = 2;
		engineerClass = 2;
		goggles[] = {"G_WirelessEarpiece_F"};
		rank = "LIEUTENANT";
	};

	class kekoSQL: kekoSoldierIDAP {
		name = "Group Leader";
		uniform[] = {"U_C_IDAP_Man_cargo_F"};
		optics[] = {"Binocular"};
		goggles[] = {"G_WirelessEarpiece_F"};
		rank = "SERGEANT";
	};

	class kekoFTL: kekoSoldierIDAP {
		name = "Team Leader";
		uniform[] = {"U_C_IDAP_Man_cargo_F"};
		rank = "CORPORAL";
	};

	class kekoDoctor: kekoSoldierIDAP {
		name = "Doctor";
		uniform[] = {"U_Marshal","U_MU_PoloshirtPants2","U_MU_PoloshirtPants1"};
		vest[] = {"V_LegStrapBag_black_F"};
		vestInventory[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{1,"adv_aceCPR_AED"}};
		backpack[] = {"B_Messenger_Black_F","B_Messenger_Gray_F","B_Messenger_IDAP_F"};
		medicClass = 2;
		goggles[] = {" ", "G_Respirator_white_F"};
		rank = "SERGEANT";
	};

	class kekoMedic: kekoSoldierIDAP {
		name = "Paramedic";
		uniform[] = {"U_C_Paramedic_01_F"};
		vest[] = {"V_LegStrapBag_black_F"};
		vestInventory[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}};
		backpack[] = {"B_Messenger_Black_F","B_Messenger_Gray_F"};
		medicClass = 1;
		goggles[] = {" ", "G_Respirator_white_F"};
		rank = "CORPORAL";
	};

	class kekoAidWorker: kekoSoldierIDAP {
		name = "Aid Worker";
		uniform[] = {"U_C_IDAP_Man_cargo_F","U_C_IDAP_Man_Jeans_F","U_C_IDAP_Man_Tee_F"};
	};

	class kekoAidWorkerShorts: kekoSoldierIDAP {
		name = "Aid Worker (Shorts)";
		uniform[] = {"U_C_IDAP_Man_shorts_F","U_C_IDAP_Man_TeeShorts_F"};
	};

	class kekoPress: kekoSoldierIDAP {
		name = "Press";
		uniform[] = {"U_C_Journalist"};
		vest[] = {"V_Press_F"};
		backpack[] = {" "," "," "," "," ","B_Messenger_Black_F","B_Messenger_Gray_F"};
		goggles[] = {" ","G_Shades_Blue"};
	};

	class kekoMessenger: kekoSoldierIDAP {
		name = "Messenger";
		uniform[] = {"U_C_Poor_1"};
		vest[] = {"V_LegStrapBag_coyote_F"};
		backpack[] = {"B_Messenger_Coyote_F"};
		goggles[] = {" "," ","G_Shades_Blue","G_Shades_Red","G_Shades_Green","G_Aviator","G_Spectacles"};
	};

	class kekoDriver: kekoSoldierIDAP {
		name = "Driver";
		engineerClass = 1;
	};

	class kekoRefugee: kekoSoldierIDAP {
		name = "Refugee";
		uniform[] = {"U_BG_Guerilla1_2_F","U_MU_B_GuerillaGarment2_yellow","U_MU_B_GuerillaGarment2_skull","U_MU_B_GuerillaGarment2_orange","U_MU_B_GuerillaGarment2_redcamo","U_MU_B_GuerillaGarment2_grey","U_MU_B_GuerillaGarment2_brown","U_MU_B_GuerillaGarment2_blue","U_MU_B_GuerillaGarment2","U_MU_B_GuerillaGarment_yellow","U_MU_B_GuerillaGarment_skull","U_MU_B_GuerillaGarment_orange","U_MU_B_GuerillaGarment_redcamo","U_MU_B_GuerillaGarment_grey","U_MU_B_GuerillaGarment_brown","U_MU_B_GuerillaGarment_blue","U_C_Poor_1","U_BG_Guerilla1_1"};
		uniformInventory[] = {
			{3, "ACE_fieldDressing"},
			{1, "ACE_tourniquet"}};
		vest[] = {};
		backpack[] = {};
	};

	class kekoFisherman: kekoSoldierIDAP {
		name = "Fisherman";
		uniform[] = {"U_C_Poloshirt_blue"};
		vest[] = {"V_Pocketed_coyote_F"};
		goggles[] = {" "," ","G_Shades_Blue","G_Shades_Red","G_Shades_Green","G_Aviator","G_Spectacles"};
	};

	class kekoUtilityWorker: kekoSoldierIDAP {
		name = "Utility Worker";
		uniform[] = {"U_C_ConstructionCoverall_Blue_F"};
		vest[] = {"V_Safety_yellow_F"};
		backpack[] = {"B_LegStrapBag_black_F"};
		goggles[] = {" "," ","G_Shades_Blue","G_Shades_Red","G_Shades_Green","G_Aviator","G_Spectacles"};
	};

	class kekoConstructionWorkerBlack: kekoSoldierIDAP {
		name = "Construction Worker (Black)";
		uniform[] = {"U_C_ConstructionCoverall_Black_F"};
		vest[] = {};
		backpack[] = {};
		goggles[] = {" ","G_Respirator_blue_F", "G_Respirator_white_F", "G_Respirator_yellow_F","G_EyeProtectors_F","G_EyeProtectors_Earpiece_F"};
	};

	class kekoConstructionWorkerBlue: kekoSoldierIDAP {
		name = "Construction Worker (Blue)";
		uniform[] = {"U_C_ConstructionCoverall_Blue_F"};
		vest[] = {};
		backpack[] = {};
		goggles[] = {" ","G_Respirator_blue_F", "G_Respirator_white_F", "G_Respirator_yellow_F","G_EyeProtectors_F","G_EyeProtectors_Earpiece_F"};
	};

	class kekoConstructionWorkerRed: kekoSoldierIDAP {
		name = "Construction Worker (Red)";
		uniform[] = {"U_C_ConstructionCoverall_Red_F"};
		vest[] = {};
		backpack[] = {};
		goggles[] = {" ","G_Respirator_blue_F", "G_Respirator_white_F", "G_Respirator_yellow_F","G_EyeProtectors_F","G_EyeProtectors_Earpiece_F"};
	};

	class kekoConstructionWorkerVRANA: kekoSoldierIDAP {
		name = "Construction Worker (VRANA)";
		uniform[] = {"U_C_ConstructionCoverall_Vrana_F"};
		vest[] = {};
		backpack[] = {};
		goggles[] = {" ","G_Respirator_blue_F", "G_Respirator_white_F", "G_Respirator_yellow_F","G_EyeProtectors_F","G_EyeProtectors_Earpiece_F"};
	};

	class kekoEOD: kekoSoldierIDAP {
		name = "EOD Expert";
		uniform[] = {"U_C_IDAP_Man_casual_F"};
		vest[] = {"V_EOD_IDAP_blue_F"};
		backpack[] = {"B_LegStrapBag_coyote_F"};
		secondary[] = {keko_W_VMH3, keko_W_VMM3};
		engineerClass = 2;
		goggles[] = {" ","G_EyeProtectors_F"};
	};

	class kekoEngineer: kekoSoldierIDAP {
		name = "Mechanic";
		uniform[] = {"U_C_Mechanic_01_F"};
		vest[] = {"V_LegStrapBag_coyote_F"};
		backpack[] = {"B_Messenger_Coyote_F"};
		engineerClass = 2;
		goggles[] = {" "," ","G_Shades_Blue","G_Shades_Red","G_Shades_Green","G_Aviator","G_Spectacles"};
	};

	class kekoHeliPilot: kekoSoldierIDAP {
		name = "Pilot";
		uniform[] = {"U_C_IDAP_Man_casual_F"};
		vest[] = {"V_Safety_orange_F"};
		vestInventory[] = {{1, "ACE_microDAGR"},{10, "ACE_quikclot"}};
		backpack[] = {};
	};

	class kekoDroneOperator: kekoSoldierIDAP {
		name = "Drone Operator";
		uniform[] = {"U_C_Man_casual_2_F"};
		backpack[] = {"C_IDAP_UAV_01_backpack_F"};
		items[] = {"C_UavTerminal"};
	};

	class kekoDroneOperatorUtility: kekoSoldierIDAP {
		name = "Drone Operator (Utility)";
		backpack[] = {"C_IDAP_UAV_06_backpack_F"};
		items[] = {"C_UavTerminal"};
	};

	class kekoDroneOperatorMedical: kekoSoldierIDAP {
		name = "Drone Operator (Medical)";
		uniform[] = {"U_C_Paramedic_01_F"};
		backpack[] = {"C_IDAP_UAV_06_medical_backpack_F"};
		items[] = {"C_UavTerminal"};
	};

	class kekoDroneOperatorDemining: kekoSoldierIDAP {
		name = "Drone Operator (Demining)";
		backpack[] = {"C_IDAP_UAV_06_antimine_backpack_F"};
		items[] = {"C_UavTerminal"};
	};

	class kekoDroneOperatorUGV: kekoSoldierIDAP {
		name = "Drone Operator (UGV)";
		items[] = {"C_UavTerminal"};
	};
};
