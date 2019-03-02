class FactionCSAT: FactionBase {
	name = "[Minimal] CSAT - Canton-Protocol Strategic Alliance Treaty";
	logisticsHelicopter = "O_Heli_Transport_04_box_F";
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
		HeliPilot = "Heli Pilot";
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
		Default[] = { "U_O_CombatUniform_ocamo" };
		Lead[] = { "U_O_OfficerUniform_ocamo" };
		Sniper[] = { "U_I_GhillieSuit" };
		HeliPilot[] = { "U_O_PilotCoveralls" };
		JetPilot[] = { "U_O_PilotCoveralls" };
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
		Default[] = { "V_HarnessO_brn" };
		Lead[] = { "V_BandollierB_cbr" };
		Sniper[] = { "V_Chestrig_oli" };
		Driver[] = { "V_BandollierB_khk" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "TFAR_mr3000" };
		SQL[] = { "TFAR_mr3000" };
		Doctor[] = { "B_TacticalPack_ocamo" };
		Medic[] = { "B_TacticalPack_ocamo" };
		RiflemanAT[] = { "B_AssaultPack_ocamo" };
		LMG[] = { "B_FieldPack_ocamo" };
		LMGAsst[] = { "B_FieldPack_ocamo" };
		MMG[] = { "B_FieldPack_ocamo" };
		MMGAsst[] = { "B_FieldPack_ocamo" };
		ATSpecialist[] = { "B_FieldPack_ocamo" };
		ATSpecialistAsst[] = { "B_FieldPack_ocamo" };
		AASpecialist[] = { "B_FieldPack_ocamo" };
		AASpecialistAsst[] = { "B_FieldPack_ocamo" };
		EOD[] = { "B_Carryall_ocamo" };
		Engineer[] = { "B_Carryall_ocamo" };
		JTAC[] = { "TFAR_mr3000" };
		UAVOperator[] = { "O_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		RiflemanAT[] = { { 1, "RPG32_F" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = { "H_HelmetB_sand" };
		Lead[] = { "H_MilCap_ocamo" };
		Command[] = { "H_Cap_brn_SPECOPS" };
		Sniper[] = { "H_HelmetIA" };
		Driver[] = { "H_HelmetCrew_O" };
		HeliPilot[] = { "H_PilotHelmetHeli_O" };
		HeliCrew[] = { "H_CrewHelmetHeli_O" };
		JetPilot[] = { "H_PilotHelmetFighter_O" };
	};

	class primary: primary {
		Default[] = { keko_W_A3_KATIBA_SHORT };
		Lead[] = { keko_W_A3_KATIBA_GL_HUNTIR };
		SQL[] = { keko_W_A3_KATIBA_GL_HUNTIR };
		FTL[] = { keko_W_A3_KATIBA_GL };
		Grenadier[] = { keko_W_A3_KATIBA_GL };
		LMG[] = { keko_W_A3_ZAFIR };
		MMG[] = { keko_W_A3_MMG_CSAT };
		Marksman[] = { keko_W_A3_DMR };
		Sniper[] = { keko_W_A3_GM6 };
		Spotter[] = { keko_W_A3_KATIBA };
		JTAC[] = { keko_W_A3_KATIBA_GL_HUNTIR };
		UAVOperator[] = { keko_W_A3_KATIBA_GL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_ROOK };
		Sniper[] = { keko_W_ROOK };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RPG32 };
		ATSpecialist[] = { keko_W_TITAN_AT_CSAT };
		AASpecialist[] = { keko_W_TITAN_AA_CSAT };
	};

};
