#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Green"
#define PRIMARY_MAG_LMG "200Rnd_556x45_Box_Red_F"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define SECONDARY_MAG "9Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_NLAW_F"
#define AT_LAUNCHER "launch_I_Titan_short_F"
#define AT_LAUNCHER_TANKS "launch_MRAWS_olive_rail_F"
#define AA_LAUNCHER "launch_I_Titan_F"

#define AT_MAG "Titan_AT"
#define AT_MAG_TANKS "MRAWS_HEAT_F"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsNAA {
	// Primary
	class keko_W_A3_F2000: kekoPrimaryWeapon {
		cfgName = "NAA_arifle_Mk20_alpat_ard1";
		items[] = {"acc_pointer_IR","optic_MRCO"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencer[] = {"muzzle_snds_m"};
	};
	class keko_W_A3_F2000_UGL: keko_W_A3_F2000 {
		cfgName = "NAA_arifle_Mk20_GL_alpat_ard1";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_F2000_UGL_HUNTIR: keko_W_A3_F2000_UGL {
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_F2000_SHORT: keko_W_A3_F2000 {
		cfgName = "NAA_arifle_Mk20C_alpat_ard1";
	};
	class keko_W_A3_STONER: kekoPrimaryWeapon {
		cfgName = "NAA_LMG_03_alpat_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk","optic_aco"};
		magazines[] = {PRIMARY_MAG_LMG};
		silencer[] = {"muzzle_snds_h_mg"};
	};
	class keko_W_A3_MMG_AAF: kekoPrimaryWeapon {
		cfgName = "NAA_MMG_02_alpat_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk","optic_Arco"};
		magazines[] = {PRIMARY_MAG_MMG};
		silencer[] = {"muzzle_snds_338_black"};
	};
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "NAA_EBR_alpat";
		items[] = {"acc_pointer_IR","optic_SOS","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
		silencer[] = {"muzzle_snds_b"};
	};
	class keko_W_A3_GM6: kekoPrimaryWeapon {
		cfgName = "srifle_GM6_LRPS_F";
		items[] = {"acc_pointer_IR","optic_LRPS","bipod_03_F_blk"};
		magazines[] = {"5Rnd_127x108_Mag"};
	};



	// Secondary
	class keko_W_A3_ACP: kekoSecondaryWeapon {
		cfgName = "hgun_ACPC2_F";
		magazines[] = {SECONDARY_MAG};
		silencer[] = {"muzzle_snds_acp"};
	};
	class keko_W_A3_ACP_SILENCED: keko_W_A3_ACP {
		items[] = {"muzzle_snds_acp"};
		silencer[] = {"muzzle_snds_acp"};
	};



	// Launcher
	class keko_W_NLAW: kekoLauncherWeapon {
		cfgName = RAT_LAUNCHER;
	};
	class keko_W_TITAN_AT_AAF: kekoLauncherWeapon {
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_TITAN_AA_AAF: kekoLauncherWeapon {
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_MAAWS: kekoLauncherWeapon {
		cfgName = AT_LAUNCHER_TANKS;
		magazines[] = {AT_MAG_TANKS};
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
