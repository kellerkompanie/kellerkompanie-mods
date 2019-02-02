#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Green"
#define PRIMARY_MAG_LMG "200Rnd_65x39_cased_Box_Tracer"
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

class kekoWeaponsAAF {
	// Primary
	class keko_W_A3_F2000: kekoPrimaryWeapon {
		cfgName = "arifle_Mk20_F";
		scopes[] = {"optic_MRCO"};
		rails[] = {"acc_pointer_IR"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
		silencers[] = {"muzzle_snds_m"};
	};
	class keko_W_A3_F2000_UGL: keko_W_A3_F2000 {
		cfgName = "arifle_Mk20_GL_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_F2000_UGL_HUNTIR: keko_W_A3_F2000_UGL {
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_F2000_SHORT: keko_W_A3_F2000 {
		cfgName = "arifle_Mk20C_F";
	};
	class keko_W_A3_STONER: kekoPrimaryWeapon {
		cfgName = "LMG_Mk200_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_h_mg"};
		magazines[] = {PRIMARY_MAG_LMG};
	};
	class keko_W_A3_MMG_AAF: kekoPrimaryWeapon {
		cfgName = "MMG_02_black_F";
		scopes[] = {"optic_Arco"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {PRIMARY_MAG_MMG};
	};
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "srifle_EBR_MRCO_LP_BI_F";
		scopes[] = {"optic_SOS"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	class keko_W_A3_GM6: kekoPrimaryWeapon {
		cfgName = "srifle_GM6_LRPS_F";
		scopes[] = {"optic_LRPS"};
		rails[] = {"acc_pointer_IR"};
		bipods[] = {"bipod_03_F_blk"};
		magazines[] = {"5Rnd_127x108_Mag"};
	};



	// Secondary
	class keko_W_A3_ACP: kekoSecondaryWeapon {
		cfgName = "hgun_ACPC2_F";
		magazines[] = {SECONDARY_MAG};
		silencers[] = {"muzzle_snds_acp"};
	};
	class keko_W_A3_ACP_SILENCED: keko_W_A3_ACP {
		silencers[] = {"muzzle_snds_acp"};
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
