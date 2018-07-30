class kekoFactionUSBlackOpsTropic: kekoFactionBase {

	name = "[Minimal] U.S. BlackOps (Tropic)";
	roles[] = {
		{"Führung", {
			kekoCommand,
			kekoCommand416,
			kekoLead,
			kekoLead416,
			kekoSergeant,
			kekoSergeant416,
			kekoSQL,
			kekoSQL416,
			kekoFTL,
			kekoFTL416,
			kekoDoctor,
			kekoDoctorP90,
			kekoMedic,
			kekoMedicP90}},
		{"Plebs", {
			kekoRifleman,
			kekoRifleman416,
			kekoRiflemanAT,
			kekoRiflemanAT416,
			kekoRiflemanATGustav,
			kekoRiflemanATGustav416,
			kekoGrenadier,
			kekoGrenadier416,
			kekoLMG,
			kekoLMG416,
			kekoLMGStoner,
			kekoLMGAsst,
			kekoLMGAsstMX416,
			kekoLMGAsstMXStoner,
			kekoLMGAsst416MX,
			kekoLMGAsst416416,
			kekoLMGAsst416Stoner}},
		{"Heavy Weapons", {
			kekoMMG,
			kekoMMGMinimi,
			kekoMMGAsst,
			kekoMMGAsstMXMinimi,
			kekoMMGAsst416Vanilla,
			kekoMMGAsst416Minimi,
			kekoATSpecialist,
			kekoATSpecialist416,
			kekoATSpecialistAsst,
			kekoATSpecialistAsst416,
			kekoAASpecialist,
			kekoAASpecialist416,
			kekoAASpecialistAsst,
			kekoAASpecialistAsst416}},
		{"Support", {
			kekoMarksman,
			kekoMarksman417,
			kekoEOD,
			kekoEOD416,
			kekoEngineer,
			kekoEngineer416,
			kekoDriver,
			kekoDriverP90,
			kekoHeliPilot,
			kekoHeliPilotP90,
			kekoHeliCrew,
			kekoHeliCrewP90,
			kekoJetPilot,
			kekoJetPilotP90,
			kekoJTAC,
			kekoJTAC416,
			kekoUAVOperator,
			kekoUAVOperator416,
			kekoSurvivor,
			kekoSurvivorP90}}
	};
	weaponCfg = kekoWeaponsUSBlackOpsTropic;

	// define all weapons and mags
	#include "kekoWeaponsUSBlackOpsTropic.hpp"

	#define KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{3, PRIMARY_MAG},{3, PRIMARY_MAG_TRACER}}
	#define KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{20,"adv_aceSplint_splint"}}
	#define KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{3, PRIMARY_MAG},{3, PRIMARY_MAG_TRACER}}
	#define KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{1,"adv_aceCPR_AED"},{20,"adv_aceSplint_splint"}}

	#define KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY_P90 {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{6, PRIMARY_MAG_P90}}
	#define KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY_P90 {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{6, PRIMARY_MAG_P90}}

	#define KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY {{6,"DemoCharge_Remote_Mag"},{2,"SatchelCharge_Remote_Mag"},{1,"ACE_DefusalKit"},{1,"ACE_Clacker"}}
	#define KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY {{1, "ToolKit"},{1, "ACE_wirecutter"},{1, "ACE_EntrenchingTool"},{1, "ACE_Fortify"}}

	class kekoSoldier
	{
		name = "Soldier";
		medicClass = 0;
		engineerClass = 0;
		rank = "PRIVATE";

		uniform[] = {};
		uniformInventory[] = {
			{15, "ACE_fieldDressing"},
			{1, "ACE_morphine"},
			{3, "ACE_tourniquet"},
			{1, "ACE_MapTools"},
			{1, "ACE_Flashlight_XL50"},
			{1, "ACE_IR_Strobe_Item"},
			{1, SECONDARY_MAG},
			{1, SMOKE_WHITE},
			{1, SMOKE_GREEN}};
		vest[] = {};
		vestInventory[] = {
			{5, PRIMARY_MAG},
			{5, PRIMARY_MAG_TRACER},
			{1, SMOKE_WHITE},
			{3, GRENADE}};

		helmet[] = {};

		backpack[] = {};
		backpackInventory[] = {};

		primary[] = {};

		secondary[] = {};

		launcher[] = {};

		items[] = {};

		goggles[] = {};

		optics[] = {};
	};

	#define KEKO_LOGISTICS_FT_CRATE_DEFAULT {\
			{6, PRIMARY_MAG},\
			{6, PRIMARY_MAG_416},\
			{6, PRIMARY_MAG_TRACER},\
			{6, PRIMARY_MAG_TRACER_416},\
			{3, PRIMARY_MAG_LMG},\
			{2, PRIMARY_MAG_LMG_416},\
			{2, PRIMARY_MAG_LMG_STONER},\
			{2, SECONDARY_MAG},\
			{1, RAT_LAUNCHER},\
			{6, UGL_MAG},\
			{6, GRENADE},\
			{4, SMOKE_WHITE},\
			{4, SMOKE_GREEN},\
			{20, "ACE_fieldDressing"},\
			{4, "ACE_morphine"},\
			{4, "ACE_epinephrine"},\
			{8, "ACE_tourniquet"},\
			{10, "adv_aceSplint_splint"},\
			{2, "ACE_CableTie"}}

	#define KEKO_LOGISTICS_INF_CRATE_DEFAULT {\
			{14, PRIMARY_MAG},\
			{8, PRIMARY_MAG_TRACER},\
			{14, PRIMARY_MAG_416},\
			{8, PRIMARY_MAG_TRACER_416},\
			{8, PRIMARY_MAG_LMG},\
			{4, PRIMARY_MAG_LMG_416},\
			{4, PRIMARY_MAG_LMG_STONER},\
			{8, PRIMARY_MAG_MARKSMAN},\
			{8, PRIMARY_MAG_MARKSMAN_417},\
			{6, SECONDARY_MAG},\
			{10, UGL_MAG}}

	#define KEKO_LOGISTICS_GRE_CRATE_DEFAULT {\
			{20, UGL_MAG},\
			{10, GRENADE},\
			{10, SMOKE_WHITE},\
			{10, SMOKE_GREEN},\
			{10, SMOKE_RED}}

	#define KEKO_LOGISTICS_MG_CRATE_DEFAULT {\
			{8, PRIMARY_MAG_LMG},\
			{4, PRIMARY_MAG_LMG_STONER},\
			{5, PRIMARY_MAG_LMG_416},\
			{5, PRIMARY_MAG_MMG},\
			{4, PRIMARY_MAG_MMG_MINIMI},\
			{1, "B_Carryall_cbr"},\
			{2, "ACE_SpareBarrel"}}

	#define KEKO_LOGISTICS_AT_CRATE_DEFAULT {\
			{1, AT_LAUNCHER},\
			{3, AT_MAG},\
			{1, "B_FieldPack_cbr"},\
			{2, RAT_LAUNCHER}}

	#define KEKO_LOGISTICS_AT_GUSTAV_CRATE_DEFAULT {\
			{2, "launch_MRAWS_green_rail_F"},\
			{1, "launch_MRAWS_green_F"},\
			{6, "MRAWS_HEAT_F"},\
			{1, "B_FieldPack_cbr"}}

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
			{30, "adv_aceSplint_splint"}}

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
			{4, "ACE_bodyBag"},\
			{1, "adv_aceCPR_AED"}}

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
	class kekoATGustavCrate: kekoCrateBase {
		name = "Anti-Tank Kiste (Gustav)";
		cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
		inventory[] = KEKO_LOGISTICS_AT_GUSTAV_CRATE_DEFAULT;
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
		{"Munition", {kekoFireTeamCrate,kekoInfantryCrate,kekoGrenadesCrate,kekoMGCrate,kekoATCrate,kekoATGustavCrate,kekoAACrate}},\
		{"Support", {kekoMedicCrate,kekoSupportCrate,kekoEODCrate,kekoRationsCrate,kekoEmptyCrate}},\
		{"Andere", {kekoSpareWheel,kekoSpareTrack}}}

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierUSBlackOpsTropic: kekoSoldier {
		uniform[] = {
			"U_MU_B_soldier_wdl",
			"U_MU_B_soldier_wdl_vest",
			"U_MU_B_soldier_wdl_tshirt"};

		vest[] = {
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr"};

		helmet[] = {
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_snakeskin",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_snakeskin"};

		primary[] = {
			keko_W_A3_MX_BLACK,
			keko_W_A3_MX_TROPIC};

		secondary[] = {
			keko_W_P99};
	};
	class kekoSoldierUSBlackOpsTropic416: kekoSoldierUSBlackOpsTropic {
		primary[] = {
			keko_W_A3_HK416,
			keko_W_A3_HK416_TROPIC};

		vestInventory[] = {
			{5, PRIMARY_MAG_416},
			{5, PRIMARY_MAG_TRACER_416},
			{1, SMOKE_WHITE},
			{3, GRENADE}};

		secondary[] = {
			keko_W_P99_TROPIC};
	};





	class kekoSoldierLight: kekoSoldierUSBlackOpsTropic {
		primary[] = {
			keko_W_A3_MXC_BLACK,
			keko_W_A3_MXC_TROPIC};
	};
	class kekoSoldierLightP90: kekoSoldierUSBlackOpsTropic {
		primary[] = {
			keko_W_A3_P90,
			keko_W_A3_P90_TROPIC};
		vestInventory[] = {
			{6, PRIMARY_MAG_P90},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
	};




	class kekoLead: kekoSoldierUSBlackOpsTropic	{
		name = "Lead (MX)";
		rank = "LIEUTENANT";
		uniform[] = {"U_MU_B_soldier_wdl"};
		vest[] = {"V_Chestrig_rgr"};
		helmet[] = {"H_Booniehat_khk_hs"};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_MX_GL_BLACK,
			keko_W_A3_MX_GL_TROPIC};
	};
	class kekoLead416: kekoSoldierUSBlackOpsTropic416	{
		name = "Lead (HK416)";
		rank = "LIEUTENANT";
		uniform[] = {"U_MU_B_soldier_wdl"};
		vest[] = {"V_Chestrig_rgr"};
		helmet[] = {"H_Booniehat_khk_hs"};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_HK416_GL,
			keko_W_A3_HK416_GL_TROPIC};
	};





	class kekoCommand: kekoLead	{
		name = "Command (MX)";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_usblack"};
	};
	class kekoCommand416: kekoLead416	{
		name = "Command (HK416)";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_usblack"};
	};





	class kekoSQL: kekoSoldierUSBlackOpsTropic	{
		name = "Squad Leader (MX)";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_MX_GL_BLACK,
			keko_W_A3_MX_GL_TROPIC};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};
	class kekoSQL416: kekoSoldierUSBlackOpsTropic416	{
		name = "Squad Leader (HK416)";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_HK416_GL,
			keko_W_A3_HK416_GL_TROPIC};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"},
			{4,"ACE_HuntIR_M203"}};
		optics[] = {"Rangefinder"};
	};




	class kekoSergeant: kekoSQL	{
		name = "Sergeant (MX)";
	};
	class kekoSergeant416: kekoSQL416	{
		name = "Sergeant (HK416)";
	};




	class kekoFTL: kekoSoldierUSBlackOpsTropic	{
		name = "Fire Team Leader (MX)";
	};
	class kekoFTL416: kekoSoldierUSBlackOpsTropic416	{
		name = "Fire Team Leader (HK416)";
	};



	class kekoDoctor: kekoSoldierLight {
		name = "Doctor (MX)";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};
	class kekoDoctorP90: kekoSoldierLightP90 {
		name = "Doctor (P90)";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};




	class kekoMedic: kekoSoldierLight {
		name = "Medic (MX)";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};
	class kekoMedicP90: kekoSoldierLightP90 {
		name = "Medic (P90)";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};





	class kekoRifleman: kekoSoldierUSBlackOpsTropic	{
		name = "Rifleman (MX)";
	};
	class kekoRifleman416: kekoSoldierUSBlackOpsTropic416	{
		name = "Rifleman (HK416)";
	};




	class kekoRiflemanAT: kekoSoldierUSBlackOpsTropic	{
		name = "Rifleman Anti-Tank (MX + NLAW)";
		launcher[] = {keko_W_NLAW};
	};
	class kekoRiflemanAT416: kekoSoldierUSBlackOpsTropic416	{
		name = "Rifleman Anti-Tank (HK416 + NLAW)";
		launcher[] = {keko_W_NLAW};
	};




	class kekoRiflemanATGustav: kekoSoldierUSBlackOpsTropic	{
		name = "Rifleman Anti-Tank (MX + Gustav)";
		launcher[] = {keko_W_GUSTAV};
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = {{1, GUSTAV_MAG}};
	};
	class kekoRiflemanATGustav416: kekoSoldierUSBlackOpsTropic416	{
		name = "Rifleman Anti-Tank (HK416 + Gustav)";
		launcher[] = {keko_W_GUSTAV};
		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = {{1, GUSTAV_MAG}};
	};





	class kekoGrenadier: kekoSoldierUSBlackOpsTropic {
		name = "Grenadier (MX)";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MX_GL_BLACK,
			keko_W_A3_MX_GL_TROPIC};
	};
	class kekoGrenadier416: kekoSoldierUSBlackOpsTropic {
		name = "Grenadier (HK416)";
		vestInventory[] = {
			{4, PRIMARY_MAG_416},
			{4, PRIMARY_MAG_TRACER_416},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_HK416_GL,
			keko_W_A3_HK416_GL_TROPIC};
	};





	class kekoLMG: kekoSoldierUSBlackOpsTropic {
		name = "LMG (MX)";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MX_SW_TROPIC,
			keko_W_A3_MX_SW_BLACK};
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMG416: kekoLMG {
		name = "LMG (HK416)";
		vestInventory[] = {
			{2, PRIMARY_MAG_LMG_416},
			{2, PRIMARY_MAG_LMG_TRACER_416},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_HK416_DRUM,
			keko_W_A3_HK416_DRUM_TROPIC};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG_TRACER_416}};
	};

	class kekoLMGStoner: kekoLMG {
		name = "LMG (Stoner)";
		vestInventory[] = {
			{4, PRIMARY_MAG_LMG_STONER},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_STONER};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG_STONER}};
	};





	class kekoLMGAsst: kekoSoldierUSBlackOpsTropic {
		name = "LMG Asst. (MX + MX)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};
	class kekoLMGAsstMX416: kekoSoldierUSBlackOpsTropic {
		name = "LMG Asst. (MX + HK416)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {
			{2, PRIMARY_MAG_LMG_416},
			{2, PRIMARY_MAG_LMG_TRACER_416}};
		optics[] = {"Binocular"};
	};
	class kekoLMGAsstMXStoner: kekoSoldierUSBlackOpsTropic {
		name = "LMG Asst. (MX + Stoner)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG_STONER}};
		optics[] = {"Binocular"};
	};


	class kekoLMGAsst416MX: kekoSoldierUSBlackOpsTropic416 {
		name = "LMG Asst. (HK416 + MX)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};
	class kekoLMGAsst416416: kekoSoldierUSBlackOpsTropic416 {
		name = "LMG Asst. (HK416 + HK416)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {
			{2, PRIMARY_MAG_LMG_416},
			{2, PRIMARY_MAG_LMG_TRACER_416}};
		optics[] = {"Binocular"};
	};
	class kekoLMGAsst416Stoner: kekoSoldierUSBlackOpsTropic416 {
		name = "LMG Asst. (HK416 + Stoner)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG_STONER}};
		optics[] = {"Binocular"};
	};



	class kekoMMG: kekoSoldierUSBlackOpsTropic {
		name = "MMG (Vanilla)";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MMG_BLACK};
		backpack[] = {"B_FieldPack_khk"};
	};
	class kekoMMGMinimi: kekoSoldierUSBlackOpsTropic {
		name = "MMG (Minimi)";
		vestInventory[] = {
			{1, PRIMARY_MAG_MMG_MINIMI},
			{2, PRIMARY_MAG_MMG_TRACER_MINIMI},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_MINIMI};
		backpack[] = {"B_FieldPack_khk"};
	};




	class kekoMMGAsst: kekoSoldierUSBlackOpsTropic {
		name = "MMG Asst. (MX + Vanilla)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};
	class kekoMMGAsstMXMinimi: kekoSoldierUSBlackOpsTropic {
		name = "MMG Asst. (MX + Minimi)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG_TRACER_MINIMI}};
		optics[] = {"Binocular"};
	};

	class kekoMMGAsst416Vanilla: kekoSoldierUSBlackOpsTropic416 {
		name = "MMG Asst. (HK416 + Vanilla)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};
	class kekoMMGAsst416Minimi: kekoSoldierUSBlackOpsTropic416 {
		name = "MMG Asst. (HK416 + Minimi)";
		backpack[] = {"B_FieldPack_khk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG_TRACER_MINIMI}};
		optics[] = {"Binocular"};
	};





	class kekoATSpecialist: kekoSoldierUSBlackOpsTropic {
		name = "Anti-Tank Specialist (MX + Titan)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT};
	};
	class kekoATSpecialist416: kekoSoldierUSBlackOpsTropic416 {
		name = "Anti-Tank Specialist (HK416 + Titan)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AT_MAG}};
		launcher[] = {keko_W_TITAN_AT};
	};





	class kekoATSpecialistAsst: kekoSoldierUSBlackOpsTropic {
		name = "Anti-Tank Specialist Asst. (MX)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};
	class kekoATSpecialistAsst416: kekoSoldierUSBlackOpsTropic416 {
		name = "Anti-Tank Specialist Asst. (HK416)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AT_MAG}};
		optics[] = {"Rangefinder"};
	};





	class kekoAASpecialist: kekoSoldierUSBlackOpsTropic {
		name = "Anti-Air Specialist (MX)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA};
	};
	class kekoAASpecialist416: kekoSoldierUSBlackOpsTropic416 {
		name = "Anti-Air Specialist (HK416)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{1, AA_MAG}};
		launcher[] = {keko_W_TITAN_AA};
	};





	class kekoAASpecialistAsst: kekoSoldierUSBlackOpsTropic {
		name = "Anti-Air Specialist Asst. (MX)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};
	class kekoAASpecialistAsst416: kekoSoldierUSBlackOpsTropic416 {
		name = "Anti-Air Specialist Asst. (HK416)";
		backpack[] = {"B_FieldPack_cbr"};
		backpackInventory[] = {{2, AA_MAG}};
		optics[] = {"Rangefinder"};
	};





	class kekoMarksman: kekoSoldierUSBlackOpsTropic {
		name = "Marksman (MXM)";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_MXM_BLACK,
			keko_W_A3_MXM_TROPIC};
	};
	class kekoMarksman417: kekoSoldierUSBlackOpsTropic416 {
		name = "Marksman (HK417)";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN_417},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN_TRACER_417}};
		primary[] = {
			keko_W_A3_HK417,
			keko_W_A3_HK417_TROPIC};
	};




	class kekoEOD: kekoSoldierUSBlackOpsTropic {
		name = "Explosive Specialist (MX)";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};
	class kekoEOD416: kekoSoldierUSBlackOpsTropic416 {
		name = "Explosive Specialist (HK416)";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};



	class kekoEngineer: kekoSoldierUSBlackOpsTropic {
		name = "Engineer (MX)";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};
	class kekoEngineer416: kekoSoldierUSBlackOpsTropic416 {
		name = "Engineer (HK416)";
		backpack[] = {"B_Carryall_cbr"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};



	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman (MX)";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};
	class kekoDriverP90: kekoSoldierLightP90 {
		name = "Driver/Crewman (P90)";
		vest[] = {"V_BandollierB_rgr"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG_P90},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};



	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot (MX)";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_camo"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};
	class kekoHeliPilotP90: kekoSoldierLightP90 {
		name = "Helicopter Pilot (P90)";
		uniform[] = {"U_B_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_camo"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG_P90},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};





	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew (MX)";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};
	class kekoHeliCrewP90: kekoHeliPilotP90 {
		name = "Helicopter Crew (P90)";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};





	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot (MX)";
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_camo"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};
	class kekoJetPilotP90: kekoHeliPilotP90 {
		name = "Jet Pilot (P90)";
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_camo"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};





	class kekoJTAC: kekoGrenadier {
		name = "JTAC (MX)";
		vestInventory[] = {
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};
	class kekoJTAC416: kekoGrenadier416 {
		name = "JTAC (HK416)";
		vestInventory[] = {
			{2,PRIMARY_MAG_416},
			{2,PRIMARY_MAG_TRACER_416},
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"TFAR_rt1523g_black"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};






	class kekoUAVOperator: kekoGrenadier	{
		name = "UAV Operator (MX)";
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};
	class kekoUAVOperator416: kekoGrenadier416	{
		name = "UAV Operator (HK416)";
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{2,PRIMARY_MAG_416},
			{2,PRIMARY_MAG_TRACER_416},
			{1,"ACE_HuntIR_monitor"},
			{8,"ACE_HuntIR_M203"}};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};



	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor (MX)";
		vestInventory[] = {
			{1,PRIMARY_MAG_416},
			{1,SECONDARY_MAG}};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"};
	};
	class kekoSurvivorP90: kekoSoldierLightP90	{
		name = "Survivor (P90)";
		vestInventory[] = {
			{1,PRIMARY_MAG_P90},
			{1,SECONDARY_MAG}};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"};
	};

};
