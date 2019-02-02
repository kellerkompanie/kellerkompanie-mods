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
#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "launch_RPG7_F"
#define AT_LAUNCHER "RPG32_Brown"
#define AA_LAUNCHER "launch_B_Titan_F"

#define RAT_MAG "RPG7_F"
#define AT_MAG "RPG32_F"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsWAMVolunteers {
	// Primary
	class keko_W_A3_CTAR: kekoPrimaryWeapon
	{
		cfgName = "arifle_TRG21_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_m"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Staff
	class keko_W_A3_CTARC: keko_W_A3_CTAR
	{
		cfgName = "arifle_TRG20_F";
		scopes[] = {};
		rails[] = {};
	};

	// Grenadier
	class keko_W_A3_CTAR_GL: keko_W_A3_CTAR	{
		cfgName = "arifle_TRG21_GL_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_CTAR_GL_HuntIR: keko_W_A3_CTAR_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};


	// Marksman
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "srifle_EBR_MRCO_LP_BI_F";
		scopes[] = {"optic_SOS"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_Stoner: kekoPrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		scopes[] = {"optic_holosight"};
		rails[] = {"acc_flashlight"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_sand_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_01_F_blk"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {PRIMARY_MAG_MMG};
	};


	// Secondary
	class keko_W_Grach: kekoSecondaryWeapon
	{
		cfgName = "hgun_Rook40_F";
		silencers[] = {"muzzle_snds_l"};
		magazines[] = {SECONDARY_MAG};		
	};



	// Launcher
	class keko_W_RPG32: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_TITAN_AA: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_RPG: kekoLauncherWeapon
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
