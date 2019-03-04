class FactionUSArmyOCP: FactionBase {
	name = "[Main] U.S. Army (OCP)";
	logisticsHelicopter = "RHS_UH60M";

	disposableRocketLauncher = rhs_weap_M136;
	antiTankLauncher = rhs_weap_fgm148;
	antiAirLauncher = rhs_weap_fim92;

	#include "WeaponsUSArmy.hpp"

	class uniform: uniform {
		Default[] = {
				"rhs_uniform_cu_ocp",
				"rhs_uniform_cu_ocp_101st",
				"rhs_uniform_cu_ocp_10th",
				"rhs_uniform_cu_ocp_1stcav",
				"rhs_uniform_cu_ocp_82nd"
			};
		HeliPilot[] = { "rhs_uniform_cu_ocp_1stcav" };
		JetPilot[] = { "U_B_PilotCoveralls" };
	};

	class vest: vest {
		Default[] = { "rhsusf_iotv_ocp_Rifleman" };
		Lead[] = { "rhsusf_iotv_ocp_Teamleader" };
		Command[] = { "rhsusf_iotv_ocp_Teamleader" };
		Sergeant[] = { "rhsusf_iotv_ocp_Squadleader" };
		SQL[] = { "rhsusf_iotv_ocp_Squadleader" };
		Doctor[] = { "rhsusf_iotv_ocp_Medic" };
		Medic[] = { "rhsusf_iotv_ocp_Medic" };
		Grenadier[] = { "rhsusf_iotv_ocp_Grenadier" };
		LMG[] = { "rhsusf_iotv_ocp_SAW" };
		MMG[] = { "rhsusf_iotv_ocp_SAW" };
		EOD[] = { "rhsusf_iotv_ocp_Repair" };
		Engineer[] = { "rhsusf_iotv_ocp_Repair" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		Command[] = { "TFAR_rt1523g_rhs" };
		Sergeant[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
		Doctor[] = { "rhsusf_assault_eagleaiii_ocp" };
		Medic[] = { "rhsusf_assault_eagleaiii_ocp" };
		LMG[] = { "rhsusf_assault_eagleaiii_ocp" };
		LMGAsst[] = { "rhsusf_assault_eagleaiii_ocp" };
		MMG[] = { "rhsusf_assault_eagleaiii_ocp" };
		MMGAsst[] = { "rhsusf_assault_eagleaiii_ocp" };
		ATSpecialist[] = { "B_Carryall_cbr" };
		ATSpecialistAsst[] = { "B_Carryall_cbr" };
		AASpecialist[] = { "rhsusf_assault_eagleaiii_ocp" };
		AASpecialistAsst[] = { "rhsusf_assault_eagleaiii_ocp" };
		EOD[] = { "rhsusf_assault_eagleaiii_ocp" };
		Engineer[] = { "rhsusf_assault_eagleaiii_ocp" };
		JTAC[] = { "TFAR_rt1523g_rhs" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Sergeant[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"rhsusf_ach_helmet_ocp_norotos",
				"rhsusf_ach_helmet_camo_ocp",
				"rhsusf_ach_helmet_headset_ess_ocp",
				"rhsusf_ach_helmet_headset_ocp",
				"rhsusf_ach_helmet_ESS_ocp",
				"rhsusf_ach_helmet_ocp"
			};
		Lead[] = { "rhsusf_patrolcap_ocp" };
		Command[] = { "H_Cap_tan_specops_US" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_M4 };
		Lead[] = { keko_W_M4_GL_HUNTIR };
		Sergeant[] = { keko_W_M4_GL_HUNTIR };
		SQL[] = { keko_W_M4_GL_HUNTIR };
		FTL[] = { keko_W_M4_GL };
		Grenadier[] = { keko_W_M4_GL };
		LMG[] = { keko_W_M249 };
		MMG[] = { keko_W_M240B };
		Marksman[] = { keko_W_M14 };
		JTAC[] = { keko_W_M4_GL_HUNTIR };
		UAVOperator[] = { keko_W_M4_GL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_M9 };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_M136 };
		ATSpecialist[] = { keko_W_Javelin };
		AASpecialist[] = { keko_W_Stinger };
	};

};
