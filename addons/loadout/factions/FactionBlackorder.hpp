class FactionBlackorder: FactionBase {
	name = "[Main] Black Order";
	logisticsHelicopter = "O_RHS_UH60M2_BlackOrder_F";
	class role: role {
		Lead = "Lead";
		Command = "Command";
		SQL = "Squad Leader";
		Sergeant = "Sergeant";
		FTL = "Fire Team Leader";
		Doctor = "Doctor";
		Medic = "Medic";
		Rifleman = "Rifleman";
		RiflemanAT = "Rifleman Anti-Tank";
		Grenadier = "Grenadier";
		LMG = "Light Machine Gunner";
		LMGAsst = "Light Machine Gunner Asst.";
		MMG = "Medium Machine Gunner";
		MMGAsst = "Medium Machine Gunner Asst.";
		ATSpecialist = "Anti-Tank Specialist";
		ATSpecialistAsst = "Anti-Tank Specialist Assistant";
		AASpecialist = "Anti-Air Specialist";
		AASpecialistAsst = "Anti-Air Specialist Assistant";
		Marksman = "Marksman";
		Sniper = "Sniper";
		Spotter = "Spotter";
		EOD = "Explosive Specialist";
		Engineer = "Engineer";
		Driver = "Driver/Crewman";
		HeliPilot = "Helicopter Pilot";
		HeliCrew = "Helicopter Crew";
		JetPilot = "Jet Pilot";
		JTAC = "JTAC";
		UAVOperator = "UAV Operator";
	};

	class rank: rank {
		Lead = "LIEUTENANT";
		Command = "COLONEL";
		SQL = "SERGEANT";
		FTL = "CORPORAL";
		Doctor = "SERGEANT";
		Medic = "CORPORAL";
	};

	class uniform: uniform {
		Default[] = { "U_BlackOrder_Uniform_1" };
		Doctor[] = { "U_BlackOrder_Uniform_1_Medic" };
		Medic[] = { "U_BlackOrder_Uniform_1_Medic" };
		Sniper[] = { "U_B_FullGhillie_sard" };
		HeliPilot[] = { "U_BlackOrder_HeliPilotCoveralls" };
		JetPilot[] = { "U_BlackOrder_PilotCoveralls" };
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
		Default[] = { "V_BlackOrder_PlateCarrier" };
		Lead[] = { "V_BlackOrder_Chestrig" };
		Doctor[] = { "V_BlackOrder_PlateCarrier_medic" };
		Medic[] = { "V_BlackOrder_PlateCarrier_medic" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_blk" };
		HeliPilot[] = { "V_BlackOrder_TacVest_1" };
		JetPilot[] = { "V_BlackOrder_TacVest_1" };
	};

	class backpack: backpack {
		Lead[] = { "FRXA_tf_rt1523g_Black" };
		SQL[] = { "FRXA_tf_rt1523g_Black" };
		Doctor[] = { "B_MU_Kitbag_blk" };
		Medic[] = { "B_MU_Kitbag_blk" };
		LMG[] = { "B_AssaultPack_blk" };
		LMGAsst[] = { "B_AssaultPack_blk" };
		MMG[] = { "B_FieldPack_blk" };
		MMGAsst[] = { "B_FieldPack_blk" };
		ATSpecialist[] = { "B_FieldPack_blk" };
		ATSpecialistAsst[] = { "B_FieldPack_blk" };
		AASpecialist[] = { "B_FieldPack_blk" };
		AASpecialistAsst[] = { "B_FieldPack_blk" };
		EOD[] = { "B_MU_Carryall_blk" };
		Engineer[] = { "B_MU_Carryall_blk" };
		JTAC[] = { "FRXA_tf_rt1523g_big_Black" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"H_BlackOrder_CombatHelmet",
				"H_BlackOrder_mich_bare",
				"H_BlackOrder_mich_bare_headset"
			};
		Lead[] = { "H_BlackOrder_MilCap" };
		Command[] = { "H_BlackOrder_Cap_01" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_BlackOrder_cvc_helmet" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_BlackOrder_PilotHelmet" };
	};

	class primary: primary {
		Default[] = { keko_W_Tavor };
		Lead[] = { keko_W_MK18_M320_HUNTIR };
		SQL[] = { keko_W_MK18_M320_HUNTIR };
		FTL[] = { keko_W_MK18_M320 };
		Grenadier[] = { keko_W_MK18_M320 };
		LMG[] = { keko_W_M249 };
		MMG[] = { keko_W_MG42 };
		Marksman[] = { keko_W_SIG556 };
		Sniper[] = { keko_W_M40A5 };
		Spotter[] = { keko_W_MK18_M320 };
		JTAC[] = { keko_W_MK18_M320_HUNTIR };
		UAVOperator[] = { keko_W_MK18_M320_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_Glock };
		Sniper[] = { keko_W_Glock };
	};

	class launcher: launcher {
		RiflemanAT[] = {
				keko_W_M136,
				keko_W_M80,
				keko_W_M72
			};
		ATSpecialist[] = { keko_W_MAAWS };
		AASpecialist[] = { keko_W_STINGER };
	};

};
