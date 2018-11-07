#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_65x39_caseless_mag"
#define PRIMARY_MAG_TRACER "30Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_416 "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER_416 "30Rnd_556x45_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "100Rnd_65x39_caseless_mag_Tracer"
#define PRIMARY_MAG_LMG_STONER "200Rnd_65x39_cased_Box_Tracer"
#define PRIMARY_MAG_LMG_416 "150Rnd_556x45_Drum_Mag_F"
#define PRIMARY_MAG_LMG_TRACER_416 "150Rnd_556x45_Drum_Mag_Tracer_F"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MMG_MINIMI "200Rnd_556x45_Box_Red_F"
#define PRIMARY_MAG_MMG_TRACER_MINIMI "200Rnd_556x45_Box_Tracer_Red_F"
#define PRIMARY_MAG_MARKSMAN "ACE_30Rnd_65x47_Scenar_mag"
#define PRIMARY_MAG_MARKSMAN_417 "20Rnd_762x51_Mag"
#define PRIMARY_MAG_MARKSMAN_TRACER_417 "ACE_20Rnd_762x51_Mag_Tracer"
#define PRIMARY_MAG_P90 "50Rnd_570x28_SMG_03"

#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_B_Titan_short_F"
#define AA_LAUNCHER "launch_B_Titan_F"
#define GUSTAV_LAUNCHER "launch_MRAWS_green_F"

#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define GUSTAV_MAG "MRAWS_HEAT_F"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsUSBlackOpsTropic {
	// Primary
	class keko_W_A3_MX_TROPIC: kekoPrimaryWeapon
	{
		cfgName = "arifle_MX_khk_F";
		items[] = {"acc_pointer_IR","optic_Hamr_khk_F"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"muzzle_snds_h"};
	};
	class keko_W_A3_MX_BLACK: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MX_Black_F";
		items[] = {"acc_pointer_IR","optic_Hamr"};
	};

	class keko_W_A3_HK416: kekoPrimaryWeapon
	{
		cfgName = "arifle_SPAR_01_blk_F";
		items[] = {"acc_pointer_IR","optic_ERCO_blk_F"};
		magazines[] = {PRIMARY_MAG_416,PRIMARY_MAG_TRACER_416};
		silencer[] = {"muzzle_snds_m"};
	};
	class keko_W_A3_HK416_TROPIC: keko_W_A3_HK416
	{
		cfgName = "arifle_SPAR_01_khk_F";
		items[] = {"acc_pointer_IR","optic_erco_khk_f"};
	};



	// Staff
	class keko_W_A3_MXC_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MXC_khk_F";
		items[] = {"acc_pointer_IR","optic_Aco"};
	};
	class keko_W_A3_MXC_BLACK: keko_W_A3_MXC_TROPIC
	{
		cfgName = "arifle_MXC_Black_F";
	};

	class keko_W_A3_P90: kekoPrimaryWeapon
	{
		cfgName = "SMG_03C_black";
		magazines[] = {PRIMARY_MAG_P90};
		silencer[] = {"muzzle_snds_570"};
	};
	class keko_W_A3_P90_TROPIC: keko_W_A3_P90
	{
		cfgName = "SMG_03C_khaki";
	};





	// Grenadier
	class keko_W_A3_MX_GL_TROPIC: keko_W_A3_MX_TROPIC {
		cfgName = "arifle_MX_GL_khk_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_MX_GL_TROPIC_HUNTIR: keko_W_A3_MX_GL_TROPIC {
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_MX_GL_BLACK: keko_W_A3_MX_GL_TROPIC {
		items[] = {"acc_pointer_IR","optic_Hamr"};
		cfgName = "arifle_MX_GL_Black_F";
	};
	class keko_W_A3_MX_GL_BLACK_HUNTIR: keko_W_A3_MX_GL_BLACK {
		uglMagazines[] = {HUNTIR_MAG};
	};

	class keko_W_A3_HK416_GL: keko_W_A3_HK416 {
		cfgName = "arifle_SPAR_01_GL_blk_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_HK416_GL_HUNTIR: keko_W_A3_HK416_GL {
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_HK416_GL_TROPIC: keko_W_A3_HK416_TROPIC {
		cfgName = "arifle_SPAR_01_GL_khk_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_HK416_GL_TROPIC_HUNTIR: keko_W_A3_HK416_GL_TROPIC {
		uglMagazines[] = {HUNTIR_MAG};
	};




	// Marksman
	class keko_W_A3_MXM_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MXM_khk_F";
		items[] = {"acc_pointer_IR","optic_SOS_khk_F","bipod_01_F_khk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	class keko_W_A3_MXM_BLACK: keko_W_A3_MXM_TROPIC
	{
		cfgName = "arifle_MXM_Black_F";
		items[] = {"optic_SOS","acc_pointer_IR"};
	};

	class keko_W_A3_HK417: kekoPrimaryWeapon
	{
		cfgName = "arifle_SPAR_03_blk_F";
		items[] = {"bipod_01_F_blk","optic_SOS"};
		magazines[] = {PRIMARY_MAG_MARKSMAN_417,PRIMARY_MAG_MARKSMAN_TRACER_417};
		silencer[] = {"muzzle_snds_b"};
	};
	class keko_W_A3_HK417_TROPIC: keko_W_A3_HK417
	{
		cfgName = "arifle_SPAR_03_khk_F";
		items[] = {"bipod_01_F_snd","optic_SOS"};
	};



	// LMG
	class keko_W_A3_MX_SW_TROPIC: keko_W_A3_MX_TROPIC
	{
		cfgName = "arifle_MX_SW_khk_F";
		magazines[] = {PRIMARY_MAG_LMG};
	};
	class keko_W_A3_MX_SW_BLACK: keko_W_A3_MX_SW_TROPIC
	{
		cfgName = "arifle_MX_SW_Black_F";
	};

	class keko_W_A3_HK416_DRUM: keko_W_A3_HK416
	{
		cfgName = "arifle_SPAR_02_blk_F";
		items[] = {"bipod_01_F_blk","acc_pointer_IR","optic_ERCO_blk_F"};
		magazines[] = {PRIMARY_MAG_LMG_416,PRIMARY_MAG_LMG_TRACER_416};
	};
	class keko_W_A3_HK416_DRUM_TROPIC: keko_W_A3_HK416_DRUM
	{
		cfgName = "arifle_SPAR_02_khk_F";
		items[] = {"bipod_01_F_snd","acc_pointer_IR","optic_erco_khk_f"};
	};

	class keko_W_A3_STONER: kekoPrimaryWeapon {
		cfgName = "LMG_Mk200_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_LMG_STONER};
		silencer[] = {"muzzle_snds_h_mg"};
	};




	// MMG
	class keko_W_A3_MMG_BLACK: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		magazines[] = {PRIMARY_MAG_MMG};
		silencer[] = {"muzzle_snds_338_black"};
	};

	class keko_W_A3_MINIMI: kekoPrimaryWeapon
	{
		cfgName = "LMG_03_F";
		magazines[] = {PRIMARY_MAG_MMG_TRACER_MINIMI,PRIMARY_MAG_MMG_MINIMI};
		silencer[] = {"muzzle_snds_m"};
	};



	// Secondary
	class keko_W_P99: kekoSecondaryWeapon
	{
		cfgName = "hgun_P07_F";
		items[] = {"muzzle_snds_L"};
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"muzzle_snds_570"};
	};
	class keko_W_P99_TROPIC: keko_W_P99
	{
		cfgName = "hgun_P07_khk_F";

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
	class keko_W_GUSTAV: kekoLauncherWeapon
	{
		cfgName = GUSTAV_LAUNCHER;
		items[] = {"ACE_acc_pointer_green"};
		magazines[] = {GUSTAV_MAG};
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
