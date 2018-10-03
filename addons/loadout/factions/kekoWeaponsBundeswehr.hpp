#include "script_macro.hpp"

#define SMOKE_WHITE "BWA3_DM25"
#define SMOKE_GREEN "BWA3_DM32_Green"
#define SMOKE_RED "BWA3_DM32_Red"
#define SMOKE_ORANGE "BWA3_DM32_Orange"
#define SMOKE_YELLOW "BWA3_DM32_Yellow"
#define GRENADE "BWA3_DM51A1"

#define PRIMARY_MAG "BWA3_30Rnd_556x45_G36"
#define PRIMARY_MAG_TRACER "BWA3_30Rnd_556x45_G36_Tracer"
#define PRIMARY_MAG_LMG "BWA3_200Rnd_556x45_Tracer"
#define PRIMARY_MAG_MMG "BWA3_120Rnd_762x51_Tracer"
#define PRIMARY_MAG_MARKSMAN "BWA3_10Rnd_762x51_G28"
#define PRIMARY_MAG_MARKSMAN_TRACER "BWA3_10Rnd_762x51_G28_Tracer"
#define PRIMARY_MAG_SNIPER "BWA3_10Rnd_86x70_G29"
#define PRIMARY_MAG_SNIPER_G82 "BWA3_10Rnd_127x99_G82"
#define SECONDARY_MAG "BWA3_15Rnd_9x19_P8"

#define RAT_LAUNCHER "BWA3_RGW90_Loaded"
#define AT_LAUNCHER "BWA3_Pzf3"
#define AA_LAUNCHER "BWA3_Fliegerfaust"

#define AT_MAG "BWA3_Pzf3_IT"
#define AA_MAG "BWA3_Fliegerfaust_Mag"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsBundeswehr {
	// Primary
	class keko_W_G36: kekoPrimaryWeapon
	{
		cfgName = "BWA3_G36A2";
		items[] = {"bwa3_acc_varioray_irlaser"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};
	class keko_W_G36_D: keko_W_G36
	{
		cfgName = "BWA3_G36A2_tan";
	};

	// Grenadier
	class keko_W_G36_GL: keko_W_G36
	{
		cfgName = "BWA3_G36A2_AG40";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_G36_GL_D: keko_W_G36_GL
	{
		cfgName = "BWA3_G36A2_AG40_tan";
	};

	class keko_W_G36_GL_HuntIR: keko_W_G36
	{
		cfgName = "BWA3_G36A2_AG40";
		uglMagazines[] = {"ACE_HuntIR_M203"};
	};
	class keko_W_G36_GL_HuntIR_D: keko_W_G36_GL_HuntIR
	{
		cfgName = "BWA3_G36A2_AG40_tan";
	};

	class keko_W_G36_GL_JTAC: keko_W_G36
	{
		cfgName = "BWA3_G36A2_AG40";
		uglMagazines[] = {"1Rnd_SmokeGreen_Grenade_shell"};
	};
	class keko_W_G36_GL_JTAC_D: keko_W_G36_GL_JTAC
	{
		cfgName = "BWA3_G36A2_AG40_tan";
	};

	// Marksman
	class keko_W_G28: kekoPrimaryWeapon
	{
		cfgName = "BWA3_G28";
		items[] = {"bwa3_acc_varioray_irlaser","bwa3_optic_zo4x30_microt2_brown"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_TRACER};
	};

	// LMG
	class keko_W_MG4: kekoPrimaryWeapon
	{
		cfgName = "BWA3_MG4";
		items[] = {"BWA3_optic_ZO4x30_MicroT2"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_MG3: kekoPrimaryWeapon
	{
		cfgName = "BWA3_MG3";
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_G29: kekoPrimaryWeapon
	{
		cfgName = "BWA3_G29";
		items[] = {"bwa3_optic_m5xi_msr_microt2","bwa3_acc_varioray_irlaser"};
		magazines[] = {PRIMARY_MAG_SNIPER};
	};
	class keko_W_G82: kekoPrimaryWeapon
	{
		cfgName = "BWA3_G82";
		items[] = {"bwa3_optic_hensoldt"};
		magazines[] = {PRIMARY_MAG_SNIPER_G82};
	};


	// Secondary
	class keko_W_P8: kekoSecondaryWeapon
	{
		cfgName = "BWA3_P8";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_PZF3: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_RGW90: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
		magazines[] = {};
	};
	class keko_W_Fliegerfaust: kekoLauncherWeapon
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
