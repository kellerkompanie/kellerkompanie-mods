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
#define SECONDARY_MAG "16Rnd_9x21_Mag"
#define SECONDARY_MAG_SPECOPS "11Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_tna_F"
#define AA_LAUNCHER "launch_B_Titan_tna_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"

class kekoWeaponsNatoTropic {
	// Primary
	class keko_W_A3_MX_TROPIC: kekoPrimaryWeapon
	{
		cfgName = "arifle_MX_khk_F";
		items[] = {"acc_pointer_IR","optic_Hamr_khk_F"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Staff
	class keko_W_A3_MXC_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MXC_khk_F";
	};

	// Grenadier
	class keko_W_A3_MX_GL_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MX_GL_khk_F";
		uglMagazines[] = {UGL_MAG};
	};

	// Marksman
	class keko_W_A3_MXM_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MXM_khk_F";
		items[] = {"acc_pointer_IR","optic_SOS_khk_F","bipod_01_F_khk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_MX_SW_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MX_SW_khk_F";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG_BLACK: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: kekoPrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		items[] = {"optic_LRPS_tna_F"};
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};
	class keko_W_A3_LRR_CAMO: keko_W_A3_LRR
	{
		cfgName = "srifle_LRR_camo_F";
	};



	// Secondary
	class keko_W_P99_TROPIC: kekoSecondaryWeapon
	{
		cfgName = "hgun_P07_khk_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};
	class keko_W_TACTICAL: kekoSecondaryWeapon
	{
		cfgName = "hgun_Pistol_heavy_01_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG_SPECOPS};
	};
	class keko_W_TACTICAL_SPECOPS: keko_W_TACTICAL
	{
		items[] = {"muzzle_snds_acp","acc_flashlight_pistol","optic_MRD"};
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
