#include "script_macro.hpp"

#define SMOKE_WHITE "rhs_mag_an_m8hc"
#define SMOKE_GREEN "rhs_mag_m18_green"
#define SMOKE_RED "rhs_mag_m18_red"
#define GRENADE "rhs_mag_m67"

#define PRIMARY_MAG "rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define PRIMARY_MAG_TRACER "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"
#define PRIMARY_MAG_LMG "rhsusf_200Rnd_556x45_box"
#define PRIMARY_MAG_LMG_TRACER "rhsusf_200rnd_556x45_mixed_box"
#define PRIMARY_MAG_MMG "rhsgref_296Rnd_792x57_SmK_belt"
#define PRIMARY_MAG_MMG_TRACER "rhsgref_296Rnd_792x57_SmK_alltracers_belt"
#define PRIMARY_MAG_MARKSMAN "ACE_20Rnd_762x51_M993_AP_Mag"
#define PRIMARY_MAG_MARKSMAN_TRACER "ACE_20Rnd_762x51_Mag_Tracer"
#define SECONDARY_MAG "rhsusf_mag_17Rnd_9x19_FMJ"

#define RAT_LAUNCHER "rhs_weap_M136"
#define RAT_LAUNCHER_M80 "rhs_weap_m80"
#define RAT_LAUNCHER_M72 "rhs_weap_m72a7"
#define AT_LAUNCHER "rhs_weap_maaws"
#define AA_LAUNCHER "rhs_weap_fim92"

#define AT_MAG "rhs_mag_maaws_HEAT"
#define AA_MAG "rhs_fim92_mag"
#define UGL_MAG "rhs_mag_M441_HE"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsBlackorder {
	// Primary
	class keko_W_MK18: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_mk18_bk";
		items[] = {"rhsusf_acc_acog","rhsusf_acc_anpeq15_bk","rhsusf_acc_grip2"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"rhsusf_acc_rotex5_grey"};
	};

	class keko_W_MK18_M320: keko_W_MK18
	{
		cfgName = "rhs_weap_mk18_m320";
		uglMagazines[] = {UGL_MAG};
	};

	class keko_W_MK18_M320_HUNTIR: keko_W_MK18_M320
	{
		uglMagazines[] = {HUNTIR_MAG};
	};

	class keko_W_SIG556: kekoPrimaryWeapon
	{
		cfgName = "srifle_DMR_03_blackorder_F";
		items[] = {"rhsusf_acc_acog3","bwa3_acc_varioray_irlaser","rhsusf_acc_harris_bipod"};
		magazines[] = {PRIMARY_MAG_MARKSMAN,PRIMARY_MAG_MARKSMAN_TRACER};
		silencer[] = {"bwa3_muzzle_snds_rotex_iia"};
	};

	class keko_W_M40A5: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m40a5_blackorder";
		items[] = {"rhsusf_acc_leupoldmk4","rhsusf_acc_harris_swivel"};
		magazines[] = {"rhsusf_10Rnd_762x51_m118_special_Mag","rhsusf_10Rnd_762x51_m62_Mag"};
	};

	class keko_W_M249: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m249_pip_S";
		items[] = {"rhsusf_acc_elcan_ard","rhsusf_acc_anpeq15side_bk"};
		magazines[] = {PRIMARY_MAG_LMG,PRIMARY_MAG_LMG_TRACER};
		silencer[] = {"rhsusf_acc_rotex5_grey"};
	};

	class keko_W_MG42: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_mg42";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MMG,PRIMARY_MAG_MMG_TRACER};
	};

	class keko_W_Tavor: kekoPrimaryWeapon
	{
		cfgName = "SMA_CTARBLK_F";
		items[] = {"sma_anpeq15_blk","sma_barska"};
		magazines[] = {"SMA_30Rnd_556x45_Mk262","SMA_30Rnd_556x45_Mk262_Tracer"};
		silencer[] = {"sma_supp1bb_556"};
	};





	// Secondary
	class keko_W_Glock: kekoSecondaryWeapon
	{
		cfgName = "rhsusf_weap_glock17g4";
		items[] = {"acc_flashlight_pistol"};
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"rhsusf_acc_omega9k"};
	};



	// Launcher
	class keko_W_MAAWS: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		items[] = {"rhs_optic_maaws"};
		magazines[] = {AT_MAG};
	};
	class keko_W_STINGER: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_M136: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER;
	};
	class keko_W_M80: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER_M80;
	};
	class keko_W_M72: kekoLauncherWeapon
	{
		cfgName = RAT_LAUNCHER_M72;
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
