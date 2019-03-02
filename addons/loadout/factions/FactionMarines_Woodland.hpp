class FactionMarines_Woodland: FactionBase {
	name = "[Main] U.S. Marine Corps - Marine Pattern Woodland";
	logisticsHelicopter = "rhsusf_CH53E_USMC";
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
		Default[] = { "rhs_uniform_FROG01_wd" };
		Sniper[] = { "U_B_FullGhillie_sard" };
		HeliPilot[] = { "U_B_HeliPilotCoveralls" };
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
		Default[] = { "rhsusf_spc_light" };
		Lead[] = { "rhsusf_spc_light" };
		SQL[] = { "rhsusf_spc_squadleader" };
		Doctor[] = { "rhsusf_spc_corpsman" };
		Medic[] = { "rhsusf_spc_corpsman" };
		Grenadier[] = { "rhsusf_spc_iar" };
		LMG[] = { "rhsusf_spc_iar" };
		MMG[] = { "rhsusf_spc_mg" };
		Marksman[] = { "rhsusf_spc_marksman" };
		Sniper[] = { "V_PlateCarrier2_blk" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "V_TacVest_blk" };
		JetPilot[] = { "V_TacVest_blk" };
	};

	class backpack: backpack {
		Lead[] = { "tfw_ilbe_wd" };
		SQL[] = { "tfw_ilbe_wd" };
		Doctor[] = { "rhsusf_assault_eagleaiii_coy" };
		Medic[] = { "rhsusf_assault_eagleaiii_coy" };
		LMG[] = { "rhsusf_assault_eagleaiii_coy" };
		LMGAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		MMG[] = { "rhsusf_assault_eagleaiii_coy" };
		MMGAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		ATSpecialist[] = { "rhsusf_assault_eagleaiii_coy" };
		ATSpecialistAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		AASpecialist[] = { "rhsusf_assault_eagleaiii_coy" };
		AASpecialistAsst[] = { "rhsusf_assault_eagleaiii_coy" };
		EOD[] = { "rhsusf_assault_eagleaiii_coy" };
		Engineer[] = { "rhsusf_assault_eagleaiii_coy" };
		JTAC[] = { "tfw_ilbe_a_wd" };
		UAVOperator[] = { "B_UAV_01_backpack_F" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		SQL[] = { { 1, "ACE_HuntIR_monitor" }, { 4, "ACE_HuntIR_M203" } };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		ATSpecialist[] = { { 4, "rhs_mag_smaw_SR" } };
		ATSpecialistAsst[] = { { 4, "rhs_mag_smaw_SR" } };
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = { { 4, "Laserbatteries" } };
	};

	class helmet: helmet {
		Default[] = {
				"rhsusf_mich_helmet_marpatwd",
				"rhsusf_mich_helmet_marpatwd_alt",
				"rhsusf_mich_helmet_marpatwd_alt_headset",
				"rhsusf_mich_helmet_marpatwd_headset",
				"rhsusf_mich_helmet_marpatwd_norotos",
				"rhsusf_mich_helmet_marpatwd_norotos_arc",
				"rhsusf_mich_helmet_marpatwd_norotos_arc_headset",
				"rhsusf_mich_helmet_marpatwd_norotos_headset",
				"rhsusf_lwh_helmet_marpatwd",
				"rhsusf_lwh_helmet_marpatwd_ess",
				"rhsusf_lwh_helmet_marpatwd_headset"
			};
		Lead[] = { "rhs_8point_marpatwd" };
		Command[] = { "rhs_booniehat2_marpatwd" };
		Sniper[] = { "H_HelmetSpecB" };
		Driver[] = { "H_HelmetCrew_B" };
		HeliPilot[] = { "rhsusf_hgu56p_black" };
		HeliCrew[] = { "rhsusf_hgu56p_visor_black" };
		JetPilot[] = { "RHS_jetpilot_usaf" };
	};

	class primary: primary {
		Default[] = { keko_W_RHS_M16A4 };
		Lead[] = { keko_W_RHS_M4A1_GL };
		SQL[] = { keko_W_RHS_M4A1_GL };
		FTL[] = { keko_W_RHS_M16A4_GL };
		Doctor[] = { keko_W_RHS_M4A1 };
		Medic[] = { keko_W_RHS_M4A1 };
		Grenadier[] = { keko_W_RHS_M16A4_GL };
		LMG[] = { keko_W_RHS_M249 };
		MMG[] = { keko_W_RHS_M240B };
		Marksman[] = { keko_W_RHS_M14EBR };
		Sniper[] = { keko_W_A3_LRR };
		Spotter[] = { keko_W_RHS_M16A4 };
		JTAC[] = { keko_W_RHS_M16A4_GL_HUNTIR };
		UAVOperator[] = { keko_W_RHS_M16A4_GL_HUNTIR };
	};

	class secondary: secondary {
		Default[] = { keko_W_RHS_M9 };
		Sniper[] = { keko_W_RHS_M9 };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RHS_M136_HEDP };
		ATSpecialist[] = { keko_W_RHS_SMAW };
		AASpecialist[] = { keko_W_RHS_STINGER };
	};

};
