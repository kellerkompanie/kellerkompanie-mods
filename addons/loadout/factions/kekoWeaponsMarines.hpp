#include "script_macro.hpp"

// TODO switch to faction specific
#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"
#define PRIMARY_MAG_TRACER "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "rhs_200rnd_556x45_M_SAW"
#define PRIMARY_MAG_MMG "rhsusf_100Rnd_762x51_m62_tracer"
#define PRIMARY_MAG_MARKSMAN "rhsusf_20Rnd_762x51_m993_Mag"
#define PRIMARY_MAG_MARKSMAN_TRACER "rhsusf_20Rnd_762x51_m118_special_Mag"
#define SECONDARY_MAG "rhsusf_mag_15Rnd_9x19_FMJ"

#define RAT_LAUNCHER "rhs_weap_M136"
#define AT_LAUNCHER "rhs_weap_smaw"
#define AA_LAUNCHER "rhs_weap_fim92"

#define AT_MAG "rhs_mag_smaw_HEDP"
#define AA_MAG "rhs_fim92_mag"
#define UGL_MAG "rhs_mag_M441_HE"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsMarines {
	// Primary
	class keko_W_RHS_M16A4: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m16a4_carryhandle";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG_RMR"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	class keko_W_RHS_M4A1: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m4a1_carryhandle";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG_RMR"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_RHS_M16A4_GL: keko_W_RHS_M16A4	{
		cfgName = "rhs_weap_m16a4_carryhandle_M203";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_RHS_M16A4_GL_HUNTIR: keko_W_RHS_M16A4_GL {
		uglMagazines[] = {HUNTIR_MAG};
	};

	class keko_W_RHS_M4A1_GL: keko_W_RHS_M4A1 {
		cfgName = "rhs_weap_m4a1_carryhandle_m203";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_RHS_M4A1_GL_HUNTIR: keko_W_RHS_M4A1_GL {
		uglMagazines[] = {HUNTIR_MAG};
	};

	// Marksman
	class keko_W_RHS_M14EBR: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m14ebrri";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG3","rhsusf_acc_harris_bipod"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_MARKSMAN_TRACER};
	};

	// LMG
	class keko_W_RHS_M249: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m249_pip_L_para";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG3"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_RHS_M240B: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m240B";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG3"};
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	// TODO replace with faction specific
	class keko_W_A3_LRR: kekoPrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_RHS_M9: kekoSecondaryWeapon
	{
		cfgName = "rhsusf_weap_m9";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_RHS_SMAW: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		items[] = {"rhs_weap_optic_smaw"};
		magazines[] = {AT_MAG};
	};
	class keko_W_RHS_STINGER: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_RHS_M136_HEDP: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = GRENADE;
	};
	class keko_W_SMOKE_WHITE {
		cfgName = SMOKE_WHITE;
	};
	class keko_W_SMOKE_GREEN {
		cfgName = SMOKE_GREEN;
	};
	class keko_W_SMOKE_RED {
		cfgName = SMOKE_RED;
	};
};
