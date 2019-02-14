#include "script_macro.hpp"

#define SMOKE_WHITE "OPTRE_M2_Smoke"
#define SMOKE_GREEN "OPTRE_M2_Smoke_Green"
#define SMOKE_RED "OPTRE_M2_Smoke_Orange"
#define GRENADE "OPTRE_M9_Frag"

#define PRIMARY_MAG "OPTRE_32Rnd_762x51_Mag"
#define PRIMARY_MAG_TRACER "OPTRE_32Rnd_762x51_Mag_Tracer"
#define PRIMARY_MAG_LMG "OPTRE_200Rnd_95x40_Box"
#define PRIMARY_MAG_LMG_TRACER "OPTRE_200Rnd_95x40_Box_Tracer"
#define PRIMARY_MAG_MARKSMAN "OPTRE_15Rnd_762x51_Mag"
#define PRIMARY_MAG_MARKSMAN_TRACER "OPTRE_15Rnd_762x51_Mag_Tracer"
#define SECONDARY_MAG "OPTRE_8Rnd_127x40_Mag"

#define RAT_LAUNCHER "OPTRE_M41_SSR"
#define AT_LAUNCHER "OPTRE_M41_SSR"
#define AA_LAUNCHER "OPTRE_M41_SSR_G"

#define AT_MAG "OPTRE_M41_Twin_HEAT"
#define AA_MAG "OPTRE_M41_Twin_HEAT_G"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsUNSCDF {

	// Primary
	// SQL
	class keko_W_OPTRE_BR55HB: kekoPrimaryWeapon
	{
		cfgName = "OPTRE_BR55HB";
		scopes[] = {"optre_br55hb_scope"};
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag"};
	};

	// Rifleman
	class keko_W_OPTRE_MA37: kekoPrimaryWeapon
	{
		cfgName = "OPTRE_MA37";
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_OPTRE_MA37GL: keko_W_OPTRE_MA37
	{
		cfgName = "OPTRE_MA37GL";
		uglMagazines[] = {UGL_MAG};
	};

	// Autorifleman
	class keko_W_OPTRE_M73: kekoPrimaryWeapon
	{
		cfgName = "OPTRE_M73";
		scopes[] = {"optre_m73_smartlink"};
		magazines[] = {PRIMARY_MAG_LMG,PRIMARY_MAG_LMG_TRACER};
	};

	// Marksman
	class keko_W_OPTRE_M392_DMR: kekoPrimaryWeapon
	{
		cfgName = "OPTRE_M392_DMR";
		scopes[] = {"optre_m392_scope"};
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		bipods[] = {"bipod_01_f_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_MARKSMAN_TRACER};
	};

	// Crewman
	class keko_W_OPTRE_M7: kekoPrimaryWeapon
	{
		cfgName = "OPTRE_M7";
		silencers[] = {"optre_m7_silencer"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag"};
	};





	// Secondary
	class keko_W_OPTRE_M6G: kekoSecondaryWeapon
	{
		cfgName = "OPTRE_M6G";
		scopes[] = {"optre_m6g_scope"};
		rails[] = {"optre_m6g_flashlight"};
		magazines[] = {SECONDARY_MAG};
	};


	// Launcher
	class keko_W_OPTRE_M41_SSR_G: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};

	class keko_W_OPTRE_M41_SSR: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
		magazines[] = {AT_MAG};
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
