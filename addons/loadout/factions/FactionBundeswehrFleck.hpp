class FactionBundeswehrFleck: FactionBase {
	name = "[Main] Bundeswehr (Flecktarn)";
	logisticsHelicopter = "kyo_MH47E_base";
	class role: role {
		Lead = "Zugführer";
		Command = "Oberkommando";
		SQL = "Gruppenführer";
		Sergeant = "Stellv. Zugführer";
		FTL = "Truppführer";
		Doctor = "Arzt";
		Medic = "Sanitäter";
		Rifleman = "Schütze";
		RiflemanAT = "Schütze AT (Panzerfaust)";
		Grenadier = "Grenadier";
		LMG = "Leichtes MG";
		LMGAsst = "Leichtes MG Helfer";
		MMG = "MMG Schütze";
		MMGAsst = "MMG Helfer";
		ATSpecialist = "ATGM Milan Schütze (Rohr)";
		ATSpecialistAsst = "ATGM Milan Helfer (Dreibein)";
		AASpecialist = "Fliegerfaust Schütze";
		AASpecialistAsst = "Fliegerfaust Helfer";
		Marksman = "Zielfernrohrschütze";
		Sniper = "Scharfschütze";
		Spotter = "Spotter";
		EOD = "Sprengmittel Spezialist";
		Engineer = "Pionier";
		Driver = "Fahrer/Besatzung";
		HeliPilot = "Helikopter Pilot";
		HeliCrew = "Helikopter Besatzung";
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
		Default[] = {
				"PBW_Uniform3_fleck",
				"PBW_Uniform4_fleck",
				"PBW_Uniform4K_fleck"
			};
		Sniper[] = { "U_B_FullGhillie_sard" };
		HeliPilot[] = { "BWA3_Uniform_Helipilot" };
		JetPilot[] = { "U_B_PilotCoveralls" };
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
		Default[] = {
				"BWA3_Vest_JPC_Radioman_Fleck",
				"BWA3_Vest_JPC_Rifleman_Fleck",
				"BWA3_Vest_JPC_Leader_Fleck"
			};
		Driver[] = { "BWA3_Vest_Fleck" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "tf_rt1523g_big_bwmod" };
		SQL[] = { "tf_rt1523g_big_bwmod" };
		Doctor[] = { "BWA3_Kitbag_Fleck_Medic" };
		Medic[] = { "BWA3_Kitbag_Fleck_Medic" };
		RiflemanAT[] = { "BWA3_AssaultPack_Fleck" };
		LMG[] = { "BWA3_FieldPack_Fleck" };
		LMGAsst[] = { "BWA3_FieldPack_Fleck" };
		MMG[] = { "BWA3_FieldPack_Fleck" };
		MMGAsst[] = { "BWA3_FieldPack_Fleck" };
		ATSpecialist[] = { "Redd_Milan_Static_Barrel" };
		ATSpecialistAsst[] = { "Redd_Milan_Static_Tripod" };
		AASpecialist[] = { "BWA3_FieldPack_Fleck" };
		AASpecialistAsst[] = { "BWA3_FieldPack_Fleck" };
		EOD[] = { "BWA3_Carryall_Fleck" };
		Engineer[] = { "BWA3_Carryall_Fleck" };
		JTAC[] = { "tf_rt1523g_big_bwmod" };
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
				"PBW_Helm1_fleck",
				"PBW_Helm2_fleck",
				"PBW_Helm2_fleck_H",
				"PBW_Helm1_fleck_HBOD",
				"PBW_Helm1_fleck_HBO",
				"PBW_Helm1_fleck_H"
			};
		Lead[] = { "PBW_muetze2_fleck" };
		Command[] = { "PBW_muetze1_fleck" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "H_PilotHelmetHeli_B" };
		HeliCrew[] = { "H_CrewHelmetHeli_B" };
		JetPilot[] = { "H_PilotHelmetFighter_B" };
	};

	class primary: primary {
		Default[] = { keko_W_G36 };
		Lead[] = { keko_W_G36_GL_HuntIR };
		SQL[] = { keko_W_G36_GL_HuntIR };
		FTL[] = { keko_W_G36_GL };
		Grenadier[] = { keko_W_G36_GL };
		LMG[] = { keko_W_MG4 };
		MMG[] = { keko_W_MG3 };
		Marksman[] = { keko_W_G28 };
		Sniper[] = { keko_W_A3_LRR, keko_W_A3_LRR_CAMO };
		Spotter[] = { keko_W_A3_MXM, keko_W_A3_MXM_BLACK };
		JTAC[] = { keko_W_G36_GL_JTAC };
		UAVOperator[] = { keko_W_G36_GL_HuntIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_P8 };
		Sniper[] = { keko_W_TACTICAL_SPECOPS };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_PZF3 };
		AASpecialist[] = { keko_W_Fliegerfaust };
	};

};
