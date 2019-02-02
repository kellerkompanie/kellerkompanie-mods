#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "200Rnd_65x39_cased_Box_Tracer"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_RPG7_F"
#define AA_LAUNCHER "launch_I_Titan_F"

#define AT_MAG "RPG7_F"
#define AA_MAG "Titan_AA"

#define UGL_MAG "1Rnd_HE_Grenade_shell"

class kekoWeaponsGuerilla {
	// Primary
	class keko_W_A3_TRG21: kekoPrimaryWeapon
	{
		cfgName = "arifle_TRG21_F";
		scopes[] = {"optic_ACO_grn"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_m"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_A3_TRG21_GL: keko_W_A3_TRG21
	{
		cfgName = "arifle_TRG21_GL_F";
		uglMagazines[] = {UGL_MAG};
	};

	// Marksman
	class keko_W_A3_DMR: kekoPrimaryWeapon
	{
		cfgName = "srifle_DMR_06_olive_F";
		scopes[] = {"optic_KHS_blk"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_Mk200: kekoPrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_h_mg"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		scopes[] = {"optic_Arco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_01_F_snd"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {PRIMARY_MAG_MMG};
	};



	// Secondary
	class keko_W_Rook: kekoSecondaryWeapon
	{
		cfgName = "hgun_Rook40_F";
		silencers[] = {"muzzle_snds_l"};
		magazines[] = {SECONDARY_MAG};		
	};



	// Launcher
	class keko_W_NLAW: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
	};
	class keko_W_RPG7: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_TITAN_AA: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
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
