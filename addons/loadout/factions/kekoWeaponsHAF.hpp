#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_65x39_caseless_mag"
#define PRIMARY_MAG_TRACER "30Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_LMG "100Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "ACE_30Rnd_65x47_Scenar_mag"
#define SECONDARY_MAG "11Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_F"
#define AA_LAUNCHER "launch_B_Titan_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsHAF {
	// Primary
	class keko_W_A3_MX: kekoPrimaryWeapon
	{
		cfgName = "arifle_MX_Black_F";
		scopes[] = {"optic_Hamr"};
		rails[] = {"acc_pointer_IR"};
		silencers[] = {"muzzle_snds_h"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Staff
	class keko_W_A3_MXC: keko_W_A3_MX
	{
		cfgName = "arifle_MXC_Black_F";
		scopes[] = {"optic_Aco"};
		rails[] = {"acc_pointer_IR"};
	};

	// Grenadier
	class keko_W_A3_MX_GL: keko_W_A3_MX	{
		cfgName = "arifle_MX_GL_Black_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_MX_GL_HUNTIR: keko_W_A3_MX_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};

	// Marksman
	class keko_W_A3_MXM: kekoPrimaryWeapon
	{
		cfgName = "arifle_MXM_Black_F";
		scopes[] = {"optic_SOS"};
		rails[] = {"acc_pointer_IR"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_MX_SW: keko_W_A3_MX
	{
		cfgName = "arifle_MX_SW_Black_F";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		scopes[] = {"optic_Arco"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_01_F_blk"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: keko_W_A3_MX
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_TACTICAL: kekoSecondaryWeapon
	{
		cfgName = "hgun_Pistol_heavy_01_F";
		silencers[] = {"muzzle_snds_acp"};
		magazines[] = {SECONDARY_MAG};

	};
	class keko_W_TACTICAL_SPECOPS: keko_W_TACTICAL
	{
		scopes[] = {"optic_MRD"};
		rails[] = {"acc_flashlight_pistol"};
		silencers[] = {"muzzle_snds_acp"};
	};



	// Launcher
	class keko_W_TITAN_AT: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_TITAN_AA: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_NLAW: kekoLauncherWeapon
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
