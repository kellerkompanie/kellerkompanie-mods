#define KEKO_LOGISTICS_FT_CRATE_DEFAULT {\
		{10, PRIMARY_MAG},\
		{10, PRIMARY_MAG_TRACER},\
		{6, PRIMARY_MAG_LMG},\
		{2, SECONDARY_MAG},\
		{2, RAT_LAUNCHER},\
		{6, UGL_MAG},\
		{6, GRENADE},\
		{4, SMOKE_WHITE},\
		{4, SMOKE_GREEN},\
		{20, "ACE_fieldDressing"},\
		{4, "ACE_morphine"},\
		{4, "ACE_epinephrine"},\
		{8, "ACE_tourniquet"},\
		{6, "adv_aceSplint_splint"},\
		{2, "ACE_CableTie"}}

#define KEKO_LOGISTICS_INF_CRATE_DEFAULT {\
		{30, PRIMARY_MAG},\
		{30, PRIMARY_MAG_TRACER},\
		{10, PRIMARY_MAG_LMG},\
		{10, PRIMARY_MAG_MARKSMAN},\
		{6, SECONDARY_MAG},\
		{10, UGL_MAG}}

#define KEKO_LOGISTICS_GRE_CRATE_DEFAULT {\
		{20, UGL_MAG},\
		{10, GRENADE},\
		{10, SMOKE_WHITE},\
		{10, SMOKE_GREEN},\
		{10, SMOKE_RED}}

#define KEKO_LOGISTICS_MG_CRATE_DEFAULT {\
		{10, PRIMARY_MAG_LMG},\
		{10, PRIMARY_MAG_MMG},\
		{1, "B_Carryall_cbr"},\
		{2, "ACE_SpareBarrel"}}

#define KEKO_LOGISTICS_AT_CRATE_DEFAULT {\
		{1, AT_LAUNCHER},\
		{3, AT_MAG},\
		{1, "B_FieldPack_cbr"},\
		{2, RAT_LAUNCHER}}

#define KEKO_LOGISTICS_AA_CRATE_DEFAULT {\
		{1, AA_LAUNCHER},\
		{3, AA_MAG},\
		{1, "B_FieldPack_cbr"}}

#define KEKO_LOGISTICS_MED_CRATE_DEFAULT {\
		{50, "ACE_fieldDressing"},\
		{50, "ACE_elasticBandage"},\
		{20, "ACE_quikclot"},\
		{4, "ACE_bodyBag"},\
		{10, "ACE_epinephrine"},\
		{10, "ACE_morphine"},\
		{10, "ACE_salineIV"},\
		{10, "ACE_salineIV_500"},\
		{2, "ACE_surgicalKit"},\
		{10, "ACE_tourniquet"},\
		{10, "SmokeShell"},\
		{10, "adv_aceSplint_splint"},\
		{1, "adv_aceCPR_AED"}}

#define KEKO_LOGISTICS_SUP_CRATE_DEFAULT {\
		{2, "SmokeShell"},\
		{2, "ToolKit"},\
		{2, "ACE_EntrenchingTool"},\
		{2, "ACE_SpraypaintRed"},\
		{1, "ACE_wirecutter"},\
		{2, "ACE_SpraypaintGreen"},\
		{1, "ACE_rangecard"},\
		{10, "ACE_sandbag"},\
		{2, "ACE_MapTools"},\
		{10, "ACE_CableTie"},\
		{2, "ACE_UAVBattery"},\
		{1, "ACE_DefusalKit"},\
		{1, "ACE_minedetector"},\
		{1, "ACE_RangeTable_82mm"},\
		{4, "ACE_IR_Strobe"},\
		{8, "ACE_HandFlare_Red"},\
		{1, "adv_aceCPR_AED"},\
		{1, "ACE_personalAidKit"},\
		{4, "ACE_bodyBag"}}

#define KEKO_LOGISTICS_EOD_CRATE_DEFAULT {\
		{4, "ACE_Cellphone"},\
		{2, "ACE_Clacker"},\
		{2, "ACE_M26_Clacker"},\
		{4, "ACE_DefusalKit"}, \
		{2, "ACE_DeadManSwitch"},\
		{1, "MineDetector"},\
		{1, "ToolKit"},\
		{1, "ACE_VMH3"},\
		{1, "ACE_VMM3"},\
		{3, "ATMine_Range_Mag"},\
		{4, "APERSTripMine_Wire_Mag"},\
		{4, "ClaymoreDirectionalMine_Remote_Mag"},\
		{4, "SatchelCharge_Remote_Mag"},\
		{10, "DemoCharge_Remote_Mag"}}

#define KEKO_LOGISTICS_RAT_CRATE_DEFAULT {\
		{20, "murshun_cigs_matches"},\
		{20, "murshun_cigs_cigpack"},\
		{10, "immersion_pops_poppack"},\
		{10, "ACE_banana"}}

class kekoCrateBase {
	name = "Empty Crate";
	cfgName[] = {};
	inventory[] = {};
};

class kekoFireTeamCrate: kekoCrateBase {
	name = "Fire Team Kiste";
	cfgName[] = {"Box_NATO_Ammo_F","Box_IND_Ammo_F","Box_East_Ammo_F"};
	inventory[] = KEKO_LOGISTICS_FT_CRATE_DEFAULT;
};
class kekoInfantryCrate: kekoFireTeamCrate {
	name = "Infanterie Kiste";
	inventory[] = KEKO_LOGISTICS_INF_CRATE_DEFAULT;
};
class kekoGrenadesCrate: kekoCrateBase {
	name = "Granaten Kiste";
	cfgName[] = {"Box_NATO_Grenades_F","Box_Ind_Grenades_F","Box_East_Grenades_F"};
	inventory[] = KEKO_LOGISTICS_GRE_CRATE_DEFAULT;
};
class kekoMGCrate: kekoCrateBase {
	name = "MG Kiste";
	cfgName[] = {"Box_NATO_WpsSpecial_F","Box_IND_WpsSpecial_F","Box_EAST_WpsSpecial_F"};
	inventory[] = KEKO_LOGISTICS_MG_CRATE_DEFAULT;
};
class kekoATCrate: kekoCrateBase {
	name = "Anti-Tank Kiste";
	cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
	inventory[] = KEKO_LOGISTICS_AT_CRATE_DEFAULT;
};
class kekoAACrate: kekoATCrate {
	name = "Anti-Air Kiste";
	inventory[] = KEKO_LOGISTICS_AA_CRATE_DEFAULT;
};
class kekoMedicCrate: kekoCrateBase {
	name = "Medic Kiste";
	cfgName[] = {"ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced"};
	inventory[] = KEKO_LOGISTICS_MED_CRATE_DEFAULT;
};
class kekoSupportCrate: kekoCrateBase {
	name = "Support Kiste";
	cfgName[] = {"Box_NATO_Support_F","Box_IND_Support_F","Box_East_Support_F"};
	inventory[] = KEKO_LOGISTICS_SUP_CRATE_DEFAULT;
};
class kekoEODCrate: kekoCrateBase {
	name = "Sprengmittel Kiste";
	cfgName[] = {"Box_NATO_AmmoOrd_F","Box_IND_AmmoOrd_F","Box_East_AmmoOrd_F"};
	inventory[] = KEKO_LOGISTICS_EOD_CRATE_DEFAULT;
};
class kekoRationsCrate: kekoSupportCrate {
	name = "Rationen Kiste";
	inventory[] = KEKO_LOGISTICS_RAT_CRATE_DEFAULT;
};	
class kekoEmptyCrate: kekoCrateBase {
	name = "Leere Kiste";
	cfgName[] = {"B_CargoNet_01_ammo_F","I_CargoNet_01_ammo_F","O_CargoNet_01_ammo_F"};
};
class kekoSpareWheel: kekoCrateBase {
	name = "Ersatzrad";
	cfgName[] = {"ACE_Wheel","ACE_Wheel","ACE_Wheel"};
};
class kekoSpareTrack: kekoCrateBase {
	name = "Ersatzkette";
	cfgName[] = {"ACE_Track","ACE_Track","ACE_Track"};
};

#define KEKO_LOGISTICS_DEFAULT_CRATE_LIST {\
	{"Munition", {kekoFireTeamCrate,kekoInfantryCrate,kekoGrenadesCrate,kekoMGCrate,kekoATCrate,kekoAACrate}},\
	{"Support", {kekoMedicCrate,kekoSupportCrate,kekoEODCrate,kekoRationsCrate,kekoEmptyCrate}},\
	{"Andere", {kekoSpareWheel,kekoSpareTrack}}}