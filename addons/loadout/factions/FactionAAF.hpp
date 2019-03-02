class FactionAAF: FactionBase {
	name = "[Minimal] AAF - Altis Armed Forces";
	logisticsHelicopter = "I_Heli_Transport_02_F";

	#include "WeaponsAAF.hpp"

	class uniform: uniform {
		Default[] = { "U_I_CombatUniform", "U_I_CombatUniform_shortsleeve" };
		Lead[] = { "U_I_OfficerUniform" };
		Sniper[] = { "U_I_GhillieSuit" };
		HeliPilot[] = { "U_I_HeliPilotCoveralls" };
		JetPilot[] = { "U_I_pilotCoveralls" };
	};

	class uniformInventory: uniformInventory {
		Sniper[] = {
				{ 1, "ACE_ATragMX" },
				{ 10, "ACE_quikclot" },
				{ 1, "ACE_Flashlight_MX991" },
				{ 1, "ACE_IR_Strobe_Item" },
				{ 1, "ACE_Kestrel4500" },
				{ 1, "ACE_MapTools" },
				{ 1, "ACE_microDAGR" },
				{ 2, "ACE_morphine" },
				{ 3, "ACE_tourniquet" },
				{ 1, "ACE_surgicalKit" },
				{ 1, "ACE_RangeCard" },
				{ 2, "ACE_epinephrine" },
				{ 1, "ACE_salineIV" },
				{ 8, "ACE_fieldDressing" }
			};
	};

	class vest: vest {
		Default[] = { "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl" };
		Lead[] = { "V_TacVest_oli" };
		Doctor[] = { "V_PlateCarrierIA2_dgtl" };
		Medic[] = { "V_PlateCarrierIA2_dgtl" };
		Sniper[] = { "V_Chestrig_oli" };
		Driver[] = { "V_BandollierB_oli" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_anprc155" };
		SQL[] = { "TFAR_anprc155" };
		Doctor[] = { "B_Kitbag_rgr" };
		Medic[] = { "B_Kitbag_rgr" };
		RiflemanATTanks[] = { "B_AssaultPack_dgtl" };
		LMG[] = { "B_FieldPack_oli" };
		LMGAsst[] = { "B_FieldPack_oli" };
		MMG[] = { "B_FieldPack_oli" };
		MMGAsst[] = { "B_FieldPack_oli" };
		ATSpecialist[] = { "B_FieldPack_oli" };
		ATSpecialistAsst[] = { "B_FieldPack_oli" };
		AASpecialist[] = { "B_FieldPack_oli" };
		AASpecialistAsst[] = { "B_FieldPack_oli" };
		EOD[] = { "B_Carryall_oli" };
		Engineer[] = { "B_Carryall_oli" };
		JTAC[] = { "TFAR_anprc155" };
		UAVOperator[] = { "I_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" } };
		RiflemanATTanks[] = { { 2, AT_MAG_TANKS } };
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = { "H_HelmetIA" };
		Lead[] = { "H_MilCap_dgtl" };
		Command[] = { "H_Cap_blk_Raven" };
		Sniper[] = { "H_HelmetIA" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_I" };
		HeliCrew[] = { "H_CrewHelmetHeli_I" };
		JetPilot[] = { "H_PilotHelmetFighter_I" };
		Survivor[] = {
				"H_HeadBandage_clean_F",
				"H_HeadBandage_stained_F",
				"H_HeadBandage_bloody_F"
			};
	};

	class primary: primary {
		Default[] = { keko_W_A3_F2000_SHORT };
		Lead[] = { keko_W_A3_F2000_UGL_HUNTIR };
		SQL[] = { keko_W_A3_F2000_UGL_HUNTIR };
		FTL[] = { keko_W_A3_F2000_UGL };
		Grenadier[] = { keko_W_A3_F2000_UGL };
		LMG[] = { keko_W_A3_STONER };
		MMG[] = { keko_W_A3_MMG_AAF };
		Marksman[] = { keko_W_A3_EBR };
		Sniper[] = { keko_W_A3_GM6 };
		Spotter[] = { keko_W_A3_F2000 };
		JTAC[] = { keko_W_A3_F2000_UGL_HUNTIR };
		UAVOperator[] = { keko_W_A3_F2000_UGL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_A3_ACP };
		Sniper[] = { keko_W_A3_ACP_SILENCED };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_NLAW };
		RiflemanATTanks[] = { keko_W_MAAWS };
		ATSpecialist[] = { keko_W_TITAN_AT_AAF };
		AASpecialist[] = { keko_W_TITAN_AA_AAF };
	};

};
