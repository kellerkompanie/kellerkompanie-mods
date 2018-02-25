#define KEKO_LOGISTICS_FT_CRATE_DEFAULT {\
		{10, PRIMARY_MAG, "AMMO"},\
		{10, PRIMARY_MAG_TRACER, "AMMO"},\
		{6, PRIMARY_MAG_LMG, "AMMO"},\
		{2, SECONDARY_MAG, "AMMO"},\
		{2, RAT_LAUNCHER, "WEAPON"},\
		{6, UGL_MAG, "AMMO"},\
		{6, GRENADE, "AMMO"},\
		{4, SMOKE_WHITE, "AMMO"},\
		{4, SMOKE_GREEN, "AMMO"},\
		{20, "ACE_fieldDressing", "ITEM"},\
		{4, "ACE_morphine", "ITEM"},\
		{4, "ACE_epinephrine", "ITEM"},\
		{8, "ACE_tourniquet", "ITEM"},\
		{6, "adv_aceSplint_splint", "ITEM"},\
		{2, "ACE_CableTie", "ITEM"}}

#define KEKO_LOGISTICS_INF_CRATE_DEFAULT {\
		{30, PRIMARY_MAG, "AMMO"},\
		{30, PRIMARY_MAG_TRACER, "AMMO"},\
		{10, PRIMARY_MAG_LMG, "AMMO"},\
		{10, PRIMARY_MAG_MARKSMAN, "AMMO"},\
		{6, SECONDARY_MAG, "AMMO"},\
		{10, UGL_MAG, "AMMO"}}

#define KEKO_LOGISTICS_GRE_CRATE_DEFAULT {\
		{20, UGL_MAG, "AMMO"},\
		{10, GRENADE, "AMMO"},\
		{10, SMOKE_WHITE, "AMMO"},\
		{10, SMOKE_GREEN, "AMMO"},\
		{10, SMOKE_RED, "AMMO"}}

#define KEKO_LOGISTICS_MG_CRATE_DEFAULT {\
		{10, PRIMARY_MAG_LMG, "AMMO"},\
		{10, PRIMARY_MAG_MMG, "AMMO"},\
		{1, "B_Carryall_cbr", "ITEM"},\
		{2, "ACE_SpareBarrel", "AMMO"}}

#define KEKO_LOGISTICS_AT_CRATE_DEFAULT {\
		{1, AT_LAUNCHER, "WEAPON"},\
		{3, AT_MAG, "AMMO"},\
		{1, "B_FieldPack_cbr", "BACKPACK"},\
		{2, RAT_LAUNCHER, "WEAPON"}}

#define KEKO_LOGISTICS_AA_CRATE_DEFAULT {\
		{1, AA_LAUNCHER, "WEAPON"},\
		{3, AA_MAG, "AMMO"},\
		{1, "B_FieldPack_cbr", "BACKPACK"}}

#define KEKO_LOGISTICS_MED_CRATE_DEFAULT {\
		{50, "ACE_fieldDressing", "ITEM"},\
		{50, "ACE_elasticBandage", "ITEM"},\
		{20, "ACE_quikclot", "ITEM"},\
		{4, "ACE_bodyBag", "ITEM"},\
		{10, "ACE_epinephrine", "ITEM"},\
		{10, "ACE_morphine", "ITEM"},\
		{10, "ACE_salineIV", "ITEM"},\
		{10, "ACE_salineIV_500", "ITEM"},\
		{2, "ACE_surgicalKit", "ITEM"},\
		{10, "ACE_tourniquet", "ITEM"},\
		{10, "SmokeShell", "AMMO"},\
		{10, "adv_aceSplint_splint", "ITEM"},\
		{1, "adv_aceCPR_AED", "ITEM"}}

#define KEKO_LOGISTICS_SUP_CRATE_DEFAULT {\
		{2, "SmokeShell", "AMMO"},\
		{2, "ToolKit", "ITEM"},\
		{2, "ACE_EntrenchingTool", "ITEM"},\
		{2, "ACE_SpraypaintRed", "ITEM"},\
		{1, "ACE_wirecutter", "ITEM"},\
		{2, "ACE_SpraypaintGreen", "ITEM"},\
		{1, "ACE_rangecard", "ITEM"},\
		{10, "ACE_sandbag", "ITEM"},\
		{2, "ACE_MapTools", "ITEM"},\
		{10, "ACE_CableTie", "ITEM"},\
		{2, "ACE_UAVBattery", "ITEM"},\
		{1, "ACE_DefusalKit", "ITEM"},\
		{1, "ACE_minedetector", "ITEM"},\
		{1, "ACE_RangeTable_82mm", "ITEM"},\
		{4, "ACE_IR_Strobe", "ITEM"},\
		{8, "ACE_HandFlare_Red", "ITEM"},\
		{1, "adv_aceCPR_AED", "ITEM"},\
		{1, "ACE_personalAidKit", "ITEM"},\
		{4, "ACE_bodyBag", "ITEM"}}

#define KEKO_LOGISTICS_EOD_CRATE_DEFAULT {\
		{4, "ACE_Cellphone", "ITEM"},\
		{2, "ACE_Clacker", "ITEM"},\
		{2, "ACE_M26_Clacker", "ITEM"},\
		{4, "ACE_DefusalKit", "ITEM"}, \
		{2, "ACE_DeadManSwitch", "ITEM"},\
		{1, "MineDetector", "ITEM"},\
		{1, "ToolKit", "ITEM"},\
		{1, "ACE_VMH3", "WEAPON"},\
		{1, "ACE_VMM3", "WEAPON"},\
		{3, "ATMine_Range_Mag", "ITEM"},\
		{4, "APERSTripMine_Wire_Mag", "ITEM"},\
		{4, "ClaymoreDirectionalMine_Remote_Mag", "ITEM"},\
		{4, "SatchelCharge_Remote_Mag", "ITEM"},\
		{10, "DemoCharge_Remote_Mag", "ITEM"}}

#define KEKO_LOGISTICS_RAT_CRATE_DEFAULT {\
		{20, "murshun_cigs_matches", "ITEM"},\
		{20, "murshun_cigs_cigpack", "ITEM"},\
		{10, "immersion_pops_poppack", "ITEM"},\
		{10, "ACE_banana", "ITEM"}}

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