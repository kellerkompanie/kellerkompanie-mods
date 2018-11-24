#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "SMA_30Rnd_556x45_M855A1"
#define PRIMARY_MAG_TRACER "SMA_30Rnd_556x45_M855A1_Tracer"
#define PRIMARY_MAG_LMG "SMA_150Rnd_762_M80A1_Mixed"
#define PRIMARY_MAG_MARKSMAN "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic"
#define PRIMARY_MAG_MMG "SMA_150Rnd_762_M80A1_Mixed"
#define SECONDARY_MAG "RH_20Rnd_57x28_FN"

#define RAT_LAUNCHER "rhs_weap_m72a7"

#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsSpecOpsTropic {
	// Primary
	class keko_HK416: kekoPrimaryWeapon
	{
		cfgName = "SMA_HK416afg";
		items[] = {"sma_sfpeq_hktop_blk","SMA_ELCAN_SPECTER_RDS"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"sma_supp1bod_556"};
	};
	class keko_HK416_PaintedOD: keko_HK416 {
		cfgName = "SMA_HK416_afg_ODPAINTED";
	};
	class keko_HK416_CustomOD: keko_HK416 {
		cfgName = "SMA_HK416afgOD";
	};

	// Grenadier
	class keko_HK416_GL: keko_HK416	{
		cfgName = "SMA_HK416GL";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_HK416_GL_PaintedOD: keko_HK416_GL {
		cfgName = "SMA_HK416_GL_ODPAINTED";
	};
	class keko_HK416_GL_CustomOD: keko_HK416_GL {
		cfgName = "SMA_HK416GLOD";
	};

	// Marksman
	class keko_HK417: kekoPrimaryWeapon
	{
		cfgName = "SMA_HK417_16in";
		items[] = {"sma_spitfire_03_rds_low_black","sma_anpeq15_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
		silencer[] = {"sma_gemtech_one_blk"};
	};

	// LMG
	class keko_MINIMI: kekoPrimaryWeapon
	{
		cfgName = "sma_minimi_mk3_762tsb";
		items[] = {"SMA_ELCAN_SPECTER_RDS"};
		magazines[] = {PRIMARY_MAG_LMG};
		silencer[] = {"sma_gemtech_one_wdl"};
	};


	// Secondary
	class keko_FIVESEVEN: kekoSecondaryWeapon
	{
		cfgName = "RH_fn57";
		items[] = {"rh_m6x"};
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"rh_sfn57"};
	};



	// Launcher
	class keko_M72: kekoLauncherWeapon
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