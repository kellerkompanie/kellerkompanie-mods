#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_65x39_caseless_mag"
#define PRIMARY_MAG_TRACER "30Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_LMG "100Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_MMG "150Rnd_93x64_Mag"
#define PRIMARY_MAG_MARKSMAN "ACE_30Rnd_65x47_Scenar_mag"
#define SECONDARY_MAG "11Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_F"
#define AA_LAUNCHER "launch_B_Titan_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsMyrimidones {
	// Primary
	class keko_W_A3_MX: kekoPrimaryWeapon
	{
		cfgName = "GUR_arifle_MX_blkANDkhk_F";
		items[] = {"acc_flashlight","optic_Hamr"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"muzzle_snds_h"};
	};

	// Staff
	class keko_W_A3_MXC: keko_W_A3_MX
	{
		cfgName = "GUR_arifle_MXC_blkANDkhk_F";
		items[] = {"acc_flashlight","optic_Aco"};
	};

	// Grenadier
	class keko_W_A3_MX_GL: keko_W_A3_MX	{
		cfgName = "GUR_arifle_MX_GL_blkANDkhk_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_MX_GL_HUNTIR: keko_W_A3_MX_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};

	// Marksman
	class keko_W_A3_MXM: kekoPrimaryWeapon
	{
		cfgName = "arifle_MXM_F";
		items[] = {"optic_SOS","acc_flashlight"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_MX_SW: keko_W_A3_MX
	{
		cfgName = "arifle_MX_SW_F";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "GUR_navid_black_F";
		items[] = {"acc_flashlight","bipod_01_F_blk","optic_Arco"};
		magazines[] = {PRIMARY_MAG_MMG};
		silencer[] = {"muzzle_snds_338_black"};
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
		items[] = {};
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"muzzle_snds_acp"};
	};
	class keko_W_TACTICAL_SPECOPS: keko_W_TACTICAL
	{
		items[] = {"muzzle_snds_acp","acc_flashlight_pistol","optic_MRD"};
		silencer[] = {"muzzle_snds_acp"};
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
