class FactionUSArmyUCP: FactionBase {
	name = "[Main] U.S. Army (UCP)";
	logisticsHelicopter = "RHS_UH60M";

	#include "WeaponsUSArmy.hpp"

	class uniform: uniform {
		Default[] = {
				"rhs_uniform_cu_ucp",
				"rhs_uniform_cu_ucp_101st",
				"rhs_uniform_cu_ucp_10th",
				"rhs_uniform_cu_ucp_1stcav",
				"rhs_uniform_cu_ucp_82nd"
			};
		HeliPilot[] = { "rhs_uniform_cu_ucp_1stcav" };
		JetPilot[] = { "U_B_PilotCoveralls" };
	};

	class vest: vest {
		Default[] = { "rhsusf_iotv_ucp_Rifleman" };
		Lead[] = { "rhsusf_iotv_ucp_Teamleader" };
		Command[] = { "rhsusf_iotv_ucp_Teamleader" };
		Sergeant[] = { "rhsusf_iotv_ucp_Squadleader" };
		SQL[] = { "rhsusf_iotv_ucp_Squadleader" };
		Doctor[] = { "rhsusf_iotv_ucp_Medic" };
		Medic[] = { "rhsusf_iotv_ucp_Medic" };
		Grenadier[] = { "rhsusf_iotv_ucp_Grenadier" };
		LMG[] = { "rhsusf_iotv_ucp_SAW" };
		MMG[] = { "rhsusf_iotv_ucp_SAW" };
		EOD[] = { "rhsusf_iotv_ucp_Repair" };
		Engineer[] = { "rhsusf_iotv_ucp_Repair" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_rt1523g_rhs" };
		Command[] = { "TFAR_rt1523g_rhs" };
		Sergeant[] = { "TFAR_rt1523g_rhs" };
		SQL[] = { "TFAR_rt1523g_rhs" };
		Doctor[] = { "rhsusf_assault_eagleaiii_ucp" };
		Medic[] = { "rhsusf_assault_eagleaiii_ucp" };
		LMG[] = { "rhsusf_assault_eagleaiii_ucp" };
		LMGAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
		MMG[] = { "rhsusf_assault_eagleaiii_ucp" };
		MMGAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
		ATSpecialist[] = { "B_Carryall_cbr" };
		ATSpecialistAsst[] = { "B_Carryall_cbr" };
		AASpecialist[] = { "rhsusf_assault_eagleaiii_ucp" };
		AASpecialistAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
		EOD[] = { "rhsusf_assault_eagleaiii_ucp" };
		Engineer[] = { "rhsusf_assault_eagleaiii_ucp" };
		JTAC[] = { "TFAR_rt1523g_rhs" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Sergeant[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		JTAC[] = { { 4, "Laserbatteries" } };
		LMGAsst[] = { {3, "rhs_200rnd_556x45_M_SAW" } };
		MMGAsst[] = { {4, "rhsusf_100Rnd_762x51_m62_tracer" } };
		ATSpecialistAsst[] = { {2, "rhs_fgm148_magazine_AT" } };
		AASpecialistAsst[] = { {2, "rhs_fim92_mag" } };
	};

	class helmet: helmet {
		Default[] = {
				"rhsusf_ach_helmet_ucp_norotos",
				"rhsusf_ach_helmet_headset_ess_ucp",
				"rhsusf_ach_helmet_headset_ucp",
				"rhsusf_ach_helmet_ESS_ucp",
				"rhsusf_ach_helmet_ucp"
			};
		Lead[] = { "rhsusf_patrolcap_ucp" };
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
