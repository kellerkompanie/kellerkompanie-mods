class kekoFactionNato: kekoFactionBase {

	name = "[Minimal] NATO - North Atlantic Treaty Organization";
	roles[] = {
		{"Führung", {
			kekoLeadNato,
			kekoSQLNato,
			kekoFTLNato,
			kekoDoctorNato,
			kekoMedicNato}},
		{"Plebs", {
			kekoRiflemanNato,
			kekoRiflemanATNato,
			kekoGrenadierNato,
			kekoLMGNato,
			kekoLMGAsstNato}},
		{"Heavy Weapons", {
			kekoMMGNato,
			kekoMMGAsstNato,
			kekoATSpecialistNato,
			kekoATSpecialistAsstNato,
			kekoAASpecialistNato,
			kekoAASpecialistAsstNato}},
		{"Support", {
			kekoMarksmanNato,
			kekoSniperNato,
			kekoSpotterNato,
			kekoEODNato,
			kekoEngineerNato,
			kekoPilotNato,
			kekoJTACNato,
			kekoUAVOperatorNato}}
	};
	weaponCfg = kekoWeaponsNato;

	class kekoSoldierNato: kekoSoldier {
		uniform[] = {
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn"};

		vest[] = {
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr"};

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

		primary[] = {
			keko_W_A3_MX, 
			keko_W_A3_MX_BLACK};

		secondary[] = {
			keko_W_TACTICAL};
	};

	class kekoSoldierLightNato: kekoSoldierNato {
		primary[] = {
			keko_W_A3_MXC, 
			keko_W_A3_MXC_BLACK};
	};

	class kekoLeadNato: kekoSoldierLightNato	{
		name = "Lead";
		rank = "LIEUTENANT";		
		uniform[] = {"U_B_CombatUniform_mcam"};
		vest[] = {"V_Chestrig_rgr"};
		helmet[] = {"H_Beret_02","H_Beret_Colonel","H_Beret_blk","H_MilCap_mcamo"};
		backpack[] = {"TFAR_rt1523g_rhs"};
	};

	class kekoSQLNato: kekoSoldierNato	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_MX, 
			keko_W_A3_MX_BLACK};

		backpack[] = {"TFAR_rt1523g_rhs"};
	};

	class kekoFTLNato: kekoSoldierNato	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		primary[] = {
			keko_W_A3_MX, 
			keko_W_A3_MX_BLACK};
	};

	class kekoDoctorNato: kekoSoldierLightNato {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierSpec_rgr"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_mcamo"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedicNato: kekoSoldierLightNato {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierSpec_rgr"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_mcamo"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRiflemanNato: kekoSoldierNato	{
		name = "Rifleman";		
	};

	class kekoRiflemanATNato: kekoSoldierNato	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoGrenadierNato: kekoSoldierNato {
		name = "Grenadier";
		vest[] = {"V_PlateCarrierGL_rgr"};
		primary[] = {
			keko_W_A3_MX_GL, 
			keko_W_A3_MX_GL_BLACK};
	};

	class kekoLMGNato: kekoSoldierNato {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{4, "#PRIMARY_MAG_LMG"},
			{1, "#SMOKE_WHITE"},
			{2, "#GRENADE"}};
		primary[] = {
			keko_W_A3_MX_SW, 
			keko_W_A3_MX_SW_BLACK};

		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoLMGAsstNato: kekoSoldierNato {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGNato: kekoSoldierNato {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, "#PRIMARY_MAG_MMG"},
			{2, "#GRENADE"}};
		primary[] = {
			keko_W_A3_MMG, 
			keko_W_A3_MMG_BLACK};

		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoMMGAsstNato: kekoSoldierNato {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_FieldPack_khk"};
	};

	class kekoATSpecialistNato: kekoSoldierNato {
		name = "Anti-Tank Specialist";

		backpack[] = {"B_FieldPack_cbr"};

		launcher[] = {keko_W_TITAN_AT};
	};

	class kekoATSpecialistAsstNato: kekoSoldierNato {
		name = "Anti-Tank Specialist Assistant";

		backpack[] = {"B_FieldPack_cbr"};
	};

	class kekoAASpecialistNato: kekoSoldierLightNato {
		name = "Anti-Air Specialist";

		backpack[] = {"B_FieldPack_cbr"};

		launcher[] = {keko_W_TITAN_AA};
	};

	class kekoAASpecialistAsstNato: kekoSoldierNato {
		name = "Anti-Air Specialist Assistant";

		backpack[] = {"B_FieldPack_cbr"};
	};

	class kekoMarksmanNato: kekoSoldierNato {
		name = "Marksman";
		vestInventory[] = {
			{5, "#PRIMARY_MAG_MARKSMAN"},
			{1, "#SMOKE_WHITE"},
			{2, "#GRENADE"},
			{5, "#PRIMARY_MAG_MARKSMAN_TRACER"}};
		primary[] = {
			keko_W_A3_MXM, 
			keko_W_A3_MXM_BLACK};
	};

	class kekoSniperNato: kekoSoldierNato {
		name = "Sniper";
		uniform[] = {"U_B_FullGhillie_sard"};
		uniformInventory[] = {
			{1,"ACE_ATragMX"},
			{10,"ACE_quikclot"},
			{1,"ACE_Flashlight_MX991"},
			{1,"ACE_IR_Strobe_Item"},
			{1,"ACE_Kestrel4500"},
			{1,"ACE_MapTools"},
			{1,"ACE_microDAGR"},
			{2,"ACE_morphine"},
			{3,"ACE_tourniquet"},
			{1,"ACE_surgicalKit"},
			{1,"ACE_RangeCard"},
			{2,"ACE_epinephrine"},
			{1,"ACE_salineIV"},
			{8,"ACE_fieldDressing"}};
		vest[] = {"V_PlateCarrier2_blk"};
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{8,"ACE_7Rnd_408_305gr_Mag"},
			{2,"11Rnd_45ACP_Mag"}};
		helmet[] = {"H_HelmetSpecB"};
		primary[] = {
			keko_W_A3_LRR, 
			keko_W_A3_LRR_CAMO};
		secondary[] = {keko_W_TACTICAL_SPECOPS};
	};

	class kekoSpotterNato: kekoSniperNato {
		name = "Spotter";	
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{2,"11Rnd_45ACP_Mag"},
			{10,"ACE_30Rnd_65x47_Scenar_mag"},
			{1,"HandGrenade"}};	
		primary[] = {
			keko_W_A3_MXM, 
			keko_W_A3_MXM_BLACK};
	};

	class kekoEODNato: kekoSoldierLightNato {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoEngineerNato: kekoSoldierLightNato {
		name = "Engineer";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoPilotNato: kekoSoldierLightNato {
		name = "Pilot";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{2, "#SECONDARY_MAG"},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
	};

	class kekoJTACNato: kekoGrenadierNato {
		name = "JTAC";
		vestInventory[] = {
			{2,"#PRIMARY_MAG"},
			{2,"#PRIMARY_MAG_TRACER"},
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
	};

	class kekoUAVOperatorNato: kekoSoldierLightNato	{
		name = "UAV Operator";
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2, "#PRIMARY_MAG"},
			{2, "#PRIMARY_MAG_TRACER"},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
	};
};