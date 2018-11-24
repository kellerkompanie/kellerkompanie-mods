#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag_red"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "200Rnd_65x39_cased_Box_Tracer"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define SECONDARY_MAG "11Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_F"
#define AA_LAUNCHER "launch_B_Titan_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsUNTOFIAAS {
	// Primary
	class keko_W_A3_Mk20: kekoPrimaryWeapon
	{
		cfgName = "NAA_arifle_Mk20_black_F";
		items[] = {"acc_flashlight","optic_aco"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"muzzle_snds_m"};
	};

	// Staff
	class keko_W_A3_Mk20C: keko_W_A3_Mk20
	{
		cfgName = "NAA_arifle_Mk20C_black_F";
		items[] = {};
	};

	// Grenadier
	class keko_W_A3_Mk20_GL: keko_W_A3_Mk20	{
		cfgName = "NAA_arifle_Mk20_GL_black_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_Mk20_GL_HuntIR: keko_W_A3_Mk20_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};


	// Marksman
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "srifle_EBR_MRCO_LP_BI_F";
		items[] = {"acc_pointer_IR","optic_SOS","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
		silencer[] = {"muzzle_snds_b"};
	};

	// LMG
	class keko_W_A3_Stoner: kekoPrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		items[] = {"acc_flashlight","optic_aco"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_sand_F";
		items[] = {"acc_flashlight","bipod_01_F_blk","optic_aco"};
		magazines[] = {PRIMARY_MAG_MMG};
		silencer[] = {"muzzle_snds_338_black"};
	};


	// Secondary
	class keko_W_TACTICAL: kekoSecondaryWeapon
	{
		cfgName = "MYR_pistol_heavy_1_black";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
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
