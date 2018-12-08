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

class kekoWeaponsHorizonIsland {
	// Primary
	class keko_W_RHS_M16A4: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m16a4_carryhandle";
		items[] = {};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"rhsusf_acc_nt4_black"};
	};

	// Grenadier
	class keko_W_RHS_M16A4_GL: keko_W_RHS_M16A4	{
		cfgName = "rhs_weap_m16a4_carryhandle_M203";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_RHS_M16A4_GL_SMOKE: keko_W_RHS_M16A4_GL	{
		uglMagazines[] = {"1Rnd_SmokeRed_Grenade_shell"};
	};

	// Marksman
	class keko_W_RHS_M14EBR: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m14ebrri";
		items[] = {"rhsusf_acc_harris_bipod","rhsusf_acc_leupoldmk4"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_MARKSMAN_TRACER};
	};

	// LMG
	class keko_W_RHS_M249: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m249";
		items[] = {};
		magazines[] = {PRIMARY_MAG_LMG};
		silencer[] = {"rhsusf_acc_nt4_black"};
	};

	// MMG
	class keko_W_RHS_M240B: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m240B";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MMG};
		silencer[] = {"muzzle_snds_h_mg"};
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
	class keko_W_RHS_M136_HEAT: kekoLauncherWeapon
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
