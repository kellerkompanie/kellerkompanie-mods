#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "150Rnd_556x45_Drum_Mag_F"
#define PRIMARY_MAG_LMG_TRACER "150Rnd_556x45_Drum_Mag_Tracer_F"
#define PRIMARY_MAG_MMG "200Rnd_556x45_Box_Red_F"
#define PRIMARY_MAG_MMG_TRACER "200Rnd_556x45_Box_Tracer_Red_F"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define PRIMARY_MAG_MARKSMAN_TRACER "ACE_20Rnd_762x51_Mag_Tracer"
#define PRIMARY_MAG_P90 "50Rnd_570x28_SMG_03"
#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_F"
#define AA_LAUNCHER "launch_B_Titan_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsCTRG {
	// Primary
	class keko_W_A3_HK416: kekoPrimaryWeapon
	{
		cfgName = "arifle_SPAR_01_blk_F";
		items[] = {"acc_pointer_IR","optic_ERCO_blk_F"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"muzzle_snds_m"};
	};
	class keko_W_A3_HK416_SAND: keko_W_A3_HK416
	{
		cfgName = "arifle_SPAR_01_snd_F";
		items[] = {"acc_pointer_IR","optic_ERCO_snd_F"};
		silencer[] = {"muzzle_snds_m_snd_f"};
	};

	// Staff
	class keko_W_A3_P90: kekoPrimaryWeapon
	{
		cfgName = "SMG_03C_black";
		magazines[] = {PRIMARY_MAG_P90};
		silencer[] = {"muzzle_snds_570"};
	};
	class keko_W_A3_P90_SAND: keko_W_A3_P90
	{
		cfgName = "SMG_03C_khaki";
	};

	// Grenadier
	class keko_W_A3_HK416_GL: keko_W_A3_HK416
	{
		cfgName = "arifle_SPAR_01_GL_blk_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_HK416_GL_HUNTIR: keko_W_A3_HK416_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_HK416_GL_SAND: keko_W_A3_HK416_SAND	{
		cfgName = "arifle_SPAR_01_GL_snd_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_HK416_GL_SAND_HUNTIR: keko_W_A3_HK416_GL_SAND	{
		uglMagazines[] = {HUNTIR_MAG};
	};

	// Marksman
	class keko_W_A3_HK417: kekoPrimaryWeapon
	{
		cfgName = "arifle_SPAR_03_blk_F";
		items[] = {"bipod_01_F_blk","optic_SOS"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_MARKSMAN_TRACER};
		silencer[] = {"muzzle_snds_b"};
	};
	class keko_W_A3_HK417_SAND: keko_W_A3_HK417
	{
		cfgName = "arifle_SPAR_03_snd_F";
		items[] = {"bipod_01_F_snd","optic_SOS"};
		silencer[] = {"muzzle_snds_b_snd_f"};
	};

	// LMG
	class keko_W_A3_HK416_DRUM: keko_W_A3_HK416
	{
		cfgName = "arifle_SPAR_02_blk_F";
		items[] = {"bipod_01_F_blk","acc_pointer_IR","optic_ERCO_blk_F"};
		magazines[] = {PRIMARY_MAG_LMG,PRIMARY_MAG_LMG_TRACER};
	};
	class keko_W_A3_HK416_DRUM_SAND: keko_W_A3_HK416_DRUM
	{
		cfgName = "arifle_SPAR_02_snd_F";
		items[] = {"bipod_01_F_snd","acc_pointer_IR","optic_ERCO_snd_F"};
		magazines[] = {PRIMARY_MAG_LMG,PRIMARY_MAG_LMG_TRACER};
	};

	// MMG
	class keko_W_A3_MINIMI: kekoPrimaryWeapon
	{
		cfgName = "LMG_03_F";
		items[] = {"optic_ERCO_blk_F","acc_pointer_IR"};
		magazines[] = {PRIMARY_MAG_MMG_TRACER};
		silencer[] = {"muzzle_snds_m"};
	};

	// Sniper
	class keko_W_A3_NOREEN: kekoPrimaryWeapon
	{
		cfgName = "srifle_DMR_02_F";
		items[] = {"optic_KHS_blk"};
		magazines[] = {"10Rnd_338_Mag"};
		silencer[] = {"muzzle_snds_338_black"};
	};
	class keko_W_A3_NOREEN_TAN: keko_W_A3_NOREEN
	{
		cfgName = "srifle_DMR_02_sniper_F";
		items[] = {"optic_KHS_tan"};
		silencer[] = {"muzzle_snds_338_sand"};
	};



	// Secondary
	class keko_W_P99: kekoSecondaryWeapon
	{
		cfgName = "hgun_P07_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"muzzle_snds_570"};
	};
	class keko_W_P99_SPECOPS: keko_W_P99
	{
		items[] = {"muzzle_snds_570"};
		silencer[] = {"muzzle_snds_570"};
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
