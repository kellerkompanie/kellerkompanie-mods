#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "rhs_mag_rgn"

#define PRIMARY_MAG "rhs_30Rnd_545x39_AK"
#define PRIMARY_MAG_TRACER "rhs_30Rnd_545x39_7N6_AK"
#define PRIMARY_MAG_LMG "rhs_100Rnd_762x54mmR_green"
#define PRIMARY_MAG_MMG "rhs_100Rnd_762x54mmR_green"
#define PRIMARY_MAG_MARKSMAN "rhs_10Rnd_762x54mmR_7N1"
#define PRIMARY_MAG_MARKSMAN_TRACER "rhs_10Rnd_762x54mmR_7N1"
#define SECONDARY_MAG "rhs_mag_9x18_8_57N181S"

#define RAT_LAUNCHER "rhs_weap_rpg26"
#define AT_LAUNCHER "rhs_weap_rpg7"
#define AA_LAUNCHER "rhs_weap_igla"

#define RAT_MAG "rhs_rpg26_mag"
#define AT_MAG "rhs_rpg7_PG7VL_mag"
#define AA_MAG "rhs_mag_9k38_rocket"
#define UGL_MAG "rhs_VOG25"

class kekoWeaponsRussiaEMR {
	// Primary
	class keko_W_AK74M: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_ak74m_dtk";
		items[] = {"rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_pkas"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};
	class keko_W_AK74M_FOLDED: keko_W_AK74M
	{
		cfgName = "rhs_weap_ak74m_folded_dtk";
	};
	class keko_W_AK74M_GL: keko_W_AK74M
	{
		cfgName = "rhs_weap_ak74m_gp25_dtk";
		items[] = {"rhs_acc_dtk","rhs_acc_pkas"};
	};
	class keko_W_AKS74U: keko_W_AK74M
	{
		cfgName = "rhs_weap_aks74u";
		items[] = {"rhs_acc_pgs64_74u"};
	};


	// Marksman
	class keko_W_SVD: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_svdp";
		items[] = {"rhs_acc_pso1m2"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_M84: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m84";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_PKP: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_pkp";
		items[] = {"rhs_acc_pkas"};
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: kekoPrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_Makarov: kekoSecondaryWeapon
	{
		cfgName = "rhs_weap_makarov_pm";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};
	class keko_W_Grach: kekoSecondaryWeapon
	{
		cfgName = "rhs_weap_pya";
		items[] = {};
		magazines[] = {"rhs_mag_9x19_17"};
	};



	// Launcher
	class keko_W_RPG7: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
		items[] = {"rhs_acc_pgo7v3"};
	};
	class keko_W_RPG26: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
		magazines[] = {RAT_MAG};
	};
	class keko_W_Igla: kekoLauncherWeapon
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
