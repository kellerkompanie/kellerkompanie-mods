#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "UK3CB_BAF_556_30Rnd"
#define PRIMARY_MAG_TRACER "UK3CB_BAF_556_30Rnd_T"
#define PRIMARY_MAG_LMG "UK3CB_BAF_762_200Rnd_T"
#define PRIMARY_MAG_MMG "UK3CB_BAF_762_100Rnd_T"
#define PRIMARY_MAG_MARKSMAN "UK3CB_BAF_762_L42A1_20Rnd"
#define SECONDARY_MAG "UK3CB_BAF_9_17Rnd"

#define RAT_LAUNCHER "UK3CB_BAF_AT4_CS_AP_Launcher"
#define AT_LAUNCHER "UK3CB_BAF_Javelin_Slung_Tube"
#define AA_LAUNCHER "rhs_weap_fim92"

#define AT_MAG "UK3CB_BAF_Javelin_Slung_Tube"
#define AA_MAG "rhs_fim92_mag"
#define UGL_MAG "UK3CB_BAF_1Rnd_HE_Grenade_Shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsBAF {
	// Primary
	class keko_W_BAF_L85A2: kekoPrimaryWeapon
	{
		cfgName = "UK3CB_BAF_L85A2";
		scopes[] = {"RKSL_optic_LDS"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_BAF_L85A2_UGL: keko_W_BAF_L85A2
	{
		cfgName = "UK3CB_BAF_L85A2_UGL";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_BAF_L85A2_UGL_HUNTIR: keko_W_BAF_L85A2_UGL
	{
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_BAF_L85A2_UGL_SMOKE: keko_W_BAF_L85A2_UGL_HUNTIR
	{
		uglMagazines[] = {"1Rnd_Smoke_Grenade_shell"};
	};

	// Marksman
	class keko_W_BAF_L129A1: kekoPrimaryWeapon
	{
		cfgName = "UK3CB_BAF_L129A1";
		scopes[] = {"UK3CB_BAF_TA648_308"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_BAF_L110: kekoPrimaryWeapon
	{
		cfgName = "UK3CB_BAF_L110_762";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_BAF_L7A2: kekoPrimaryWeapon
	{
		cfgName = "UK3CB_BAF_L7A2";
		magazines[] = {PRIMARY_MAG_MMG};
	};


	// Secondary
	class keko_W_BAF_L131A1: kekoSecondaryWeapon
	{
		cfgName = "UK3CB_BAF_L131A1";
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_BAF_JAVELIN: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
		scopes[] = {"UK3CB_BAF_Javelin_CLU"};
	};
	class keko_W_STRINGER: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_AT4: kekoLauncherWeapon
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
