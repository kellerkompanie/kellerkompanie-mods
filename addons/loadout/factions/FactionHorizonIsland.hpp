class FactionHorizonIsland: FactionBase {
	name = "[Main] Horizon Island Defense Forces";
	logisticsHelicopter = "rhs_uh1h_hidf_unarmed";
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
		Marksman = "Marksman";
		EOD = "Explosive Specialist";
		Engineer = "Engineer";
		Driver = "Driver/Crewman";
		HeliPilot = "Helicopter Pilot";
		HeliCrew = "Helicopter Crew";
		JTAC = "JTAC";
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
		Default[] = { "rhsgref_uniform_ERDL" };
		HeliPilot[] = { "U_B_HeliPilotCoveralls" };
	};

	class vest: vest {
		Default[] = { "rhsgref_alice_webbing" };
		Driver[] = { "V_BandollierB_rgr" };
		HeliPilot[] = { "rhsgref_TacVest_ERDL" };
	};

	class backpack: backpack {
		Lead[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
		SQL[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
		Doctor[] = { "rhsgref_hidf_alicepack" };
		Medic[] = { "rhsgref_hidf_alicepack" };
		LMG[] = { "rhsgref_hidf_alicepack" };
		LMGAsst[] = { "rhsgref_hidf_alicepack" };
		MMG[] = { "rhsgref_hidf_alicepack" };
		MMGAsst[] = { "rhsgref_hidf_alicepack" };
		EOD[] = { "rhsgref_hidf_alicepack" };
		Engineer[] = { "rhsgref_hidf_alicepack" };
		JTAC[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
	};

	class backpackInventory: backpackInventory {
		Lead[] = {  };
		SQL[] = {  };
		Doctor = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
		Medic = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
		EOD = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		Engineer = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		JTAC[] = {  };
	};

	class helmet: helmet {
		Default[] = {
				"rhsgref_helmet_M1_liner",
				"rhsgref_helmet_M1_bare",
				"rhsgref_helmet_M1_bare_alt01",
				"rhsgref_helmet_M1_painted",
				"rhsgref_helmet_M1_painted_alt01"
			};
		Lead[] = { "rhsgref_helmet_M1_liner" };
		Driver[] = { "H_HelmetCrew_I" };
		HeliPilot[] = { "rhsusf_hgu56p_green" };
		HeliCrew[] = { "rhsusf_hgu56p_visor_mask_green" };
	};

	class primary: primary {
		Default[] = { keko_W_RHS_M16A4 };
		Lead[] = { keko_W_RHS_M16A4 };
		SQL[] = { keko_W_RHS_M16A4_GL };
		FTL[] = { keko_W_RHS_M16A4_GL };
		Grenadier[] = { keko_W_RHS_M16A4_GL };
		LMG[] = { keko_W_RHS_M249 };
		MMG[] = { keko_W_RHS_M240B };
		Marksman[] = { keko_W_RHS_M14EBR };
		JTAC[] = { keko_W_RHS_M16A4_GL_SMOKE };
	};

	class secondary: secondary {
		Default[] = {  };
	};

	class launcher: launcher {
		RiflemanAT[] = { keko_W_RHS_M136_HEAT };
	};

};
