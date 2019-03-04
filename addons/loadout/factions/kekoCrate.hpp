
class EmptyCrate {
	name = "Leere Kiste";
	cfgName[] = {"B_CargoNet_01_ammo_F","I_CargoNet_01_ammo_F","O_CargoNet_01_ammo_F"};
	inventory[] = {};
};

class FireTeamCrate: EmptyCrate {
	name = "Fire Team Kiste";
	cfgName[] = {"Box_NATO_Ammo_F","Box_IND_Ammo_F","Box_East_Ammo_F"};
	inventory[] = {
			{20, "keko_PrimaryMag"},
			{6, "keko_MGMag"},
			{2, "keko_PistolMag"},
			{2, "keko_RATLauncher"},
			{6, "keko_UGLMag"},
			{6, "HandGrenade"},
			{4, "SmokeShell"},
			{4, "SmokeShellGreen"},
			{20, "ACE_fieldDressing"},
			{4, "ACE_morphine"},
			{4, "ACE_epinephrine"},
			{8, "ACE_tourniquet"},
			{10, "adv_aceSplint_splint"},
			{2, "ACE_CableTie"},
			{2, "KAT_Painkillers"}
		};
};

class InfantryCrate: FireTeamCrate {
	name = "Infanterie Kiste";
	inventory[] =  {
			{60, "keko_PrimaryMag"},
			{10, "keko_MGMag"},
			{6, "keko_PistolMag"},
			{10, "keko_UGLMag"}
		};
};

class GrenadesCrate: EmptyCrate {
	name = "Granaten Kiste";
	cfgName[] = {"Box_NATO_Grenades_F","Box_Ind_Grenades_F","Box_East_Grenades_F"};
	inventory[] = {
			{20, "keko_UGLMag"},
			{10, "HandGrenade"},
			{10, "SmokeShell"},
			{10, "SmokeShellGreen"},
			{10, "SmokeShellRed"},
			{5, "SmokeShellPurple"},
			{5, "SmokeShellOrange"},
			{5, "SmokeShellBlue"}
		};
};

class MGCrate: EmptyCrate {
	name = "MG Kiste";
	cfgName[] = {"Box_NATO_WpsSpecial_F","Box_IND_WpsSpecial_F","Box_EAST_WpsSpecial_F"};
	inventory[] = {
			{20, "keko_MGMag"},
			{1, "B_Carryall_cbr"},
			{2, "ACE_SpareBarrel"}
		};
};

class ATCrate: EmptyCrate {
	name = "Anti-Tank Kiste";
	cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
	inventory[] = {
			{1, "keko_ATLauncher"},
			{3, "keko_ATMag"},
			{1, "B_FieldPack_cbr"},
			{2, "keko_RATLauncher"}
		};
};

class ATGustavCrate: EmptyCrate {
	name = "Anti-Tank Kiste (Gustav)";
	cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
	inventory[] = {
			{2, "launch_MRAWS_green_rail_F"},
			{1, "launch_MRAWS_green_F"},
			{6, "MRAWS_HEAT_F"},
			{1, "B_FieldPack_cbr"}
		};
};

class AACrate: ATCrate {
	name = "Anti-Air Kiste";
	inventory[] = {
			{1, "keko_AALauncher"},
			{3, "keko_AAMag"},
			{1, "B_FieldPack_cbr"}
		};
};

class MedicCrate: EmptyCrate {
	name = "Medic Kiste";
	cfgName[] = {"ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced"};
	inventory[] = {
			{50, "ACE_fieldDressing"},
			{50, "ACE_elasticBandage"},
			{20, "ACE_quikclot"},
			{4, "ACE_bodyBag"},
			{10, "ACE_epinephrine"},
			{10, "ACE_morphine"},
			{10, "ACE_salineIV"},
			{10, "ACE_salineIV_500"},
			{2, "ACE_surgicalKit"},
			{10, "ACE_tourniquet"},
			{10, "KAT_larynx"},
			{10, "KAT_guedel"},
			{1, "KAT_accuvac"},
			{30, "adv_aceSplint_splint"},
			{5, "KAT_Painkillers"}
		};
};

class SupportCrate: EmptyCrate {
	name = "Support Kiste";
	cfgName[] = {"Box_NATO_Support_F","Box_IND_Support_F","Box_East_Support_F"};
	inventory[] = {
			{2, "SmokeShell"},
			{2, "ToolKit"},
			{2, "ACE_EntrenchingTool"},
			{2, "ACE_SpraypaintRed"},
			{1, "ACE_wirecutter"},
			{2, "ACE_SpraypaintGreen"},
			{1, "ACE_rangecard"},
			{10, "ACE_sandbag"},
			{2, "ACE_MapTools"},
			{10, "ACE_CableTie"},
			{2, "ACE_UAVBattery"},
			{1, "ACE_DefusalKit"},
			{1, "ACE_minedetector"},
			{1, "ACE_RangeTable_82mm"},
			{4, "ACE_IR_Strobe"},
			{8, "ACE_HandFlare_Red"},
			{1, "adv_aceCPR_AED"},
			{1, "ACE_personalAidKit"},
			{4, "ACE_bodyBag"},
			{1, "KAT_X_AED"},
			{5, "KAT_Painkillers"}
		};
};

class EODCrate: EmptyCrate {
	name = "Sprengmittel Kiste";
	cfgName[] = {"Box_NATO_AmmoOrd_F","Box_IND_AmmoOrd_F","Box_East_AmmoOrd_F"};
	inventory[] = {
			{4, "ACE_Cellphone"},
			{2, "ACE_Clacker"},
			{2, "ACE_M26_Clacker"},
			{4, "ACE_DefusalKit"},
			{2, "ACE_DeadManSwitch"},
			{1, "MineDetector"},
			{1, "ToolKit"},
			{1, "ACE_VMH3"},
			{1, "ACE_VMM3"},
			{3, "ATMine_Range_Mag"},
			{4, "APERSTripMine_Wire_Mag"},
			{4, "ClaymoreDirectionalMine_Remote_Mag"},
			{4, "SatchelCharge_Remote_Mag"},
			{10, "DemoCharge_Remote_Mag"}
		};
};

class RationsCrate: SupportCrate {
	name = "Rationen Kiste";
	inventory[] = {
			{20, "murshun_cigs_matches"},
			{20, "murshun_cigs_cigpack"},
			{10, "immersion_pops_poppack"},
			{10, "ACE_banana"},
			{10, "KAT_Painkillers"}
		};
};

class CQBCrate: GrenadesCrate {
	name = "OHK/CQB Kiste";
	inventory[] =  {
			{40, "ACE_M84"},
			{20, "ACE_CableTie"},
			{10, "ACE_SpraypaintGreen"},
			{10, "ACE_SpraypaintRed"}
		};
};

class SpareWheel: EmptyCrate {
	name = "Ersatzrad";
	cfgName[] = {"ACE_Wheel","ACE_Wheel","ACE_Wheel"};
};

class SpareTrack: EmptyCrate {
	name = "Ersatzkette";
	cfgName[] = {"ACE_Track","ACE_Track","ACE_Track"};
};
