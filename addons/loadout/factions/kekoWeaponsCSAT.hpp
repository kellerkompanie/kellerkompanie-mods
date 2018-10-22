#include "script_macro.hpp"

#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_65x39_caseless_green"
#define PRIMARY_MAG_TRACER "30Rnd_65x39_caseless_green_mag_Tracer"
#define PRIMARY_MAG_LMG "150Rnd_762x54_Box_Tracer"
#define PRIMARY_MAG_MMG "150Rnd_93x64_Mag"
#define PRIMARY_MAG_MARKSMAN "10Rnd_762x54_Mag"
#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "launch_RPG32_F"
#define AT_LAUNCHER "launch_O_Titan_short_F"
#define AA_LAUNCHER "launch_O_Titan_F"

#define RAT_MAG "RPG32_F"
#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "1Rnd_HE_Grenade_shell"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsCSAT {
	// Primary
	class keko_W_A3_KATIBA: kekoPrimaryWeapon {
		cfgName = "arifle_Katiba_F";
		items[] = {"acc_pointer_IR","optic_Arco_blk_F"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};
	class keko_W_A3_KATIBA_SHORT: keko_W_A3_KATIBA {
		cfgName = "arifle_Katiba_C_F";
	};
	class keko_W_A3_KATIBA_GL: keko_W_A3_KATIBA	{
		cfgName = "arifle_Katiba_GL_F";
		uglMagazines[] = {UGL_MAG};
	};
	class keko_W_A3_KATIBA_GL_HUNTIR: keko_W_A3_KATIBA_GL	{
		uglMagazines[] = {HUNTIR_MAG};
	};
	class keko_W_A3_DMR: kekoPrimaryWeapon {
		cfgName = "srifle_DMR_01_DMS_BI_F";
		items[] = {"acc_pointer_IR","optic_DMS","bipod_02_F_hex"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	class keko_W_A3_ZAFIR: kekoPrimaryWeapon {
		cfgName = "LMG_Zafir_F";
		items[] = {"acc_pointer_IR","bipod_02_F_hex","optic_aco"};
		magazines[] = {PRIMARY_MAG_LMG};
	};
	class keko_W_A3_MMG_CSAT: kekoPrimaryWeapon {
		cfgName = "MMG_01_hex_F";
		items[] = {"acc_pointer_IR","bipod_02_F_hex","optic_Arco"};
		magazines[] = {PRIMARY_MAG_MMG};
	};



	// Secondary
	class keko_W_ROOK: kekoSecondaryWeapon {
		cfgName = "hgun_Rook40_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};
	class keko_W_ROOK_SILENCED: keko_W_ROOK {
		items[] = {"muzzle_snds_L"};
	};



	// Launcher
	class keko_W_TITAN_AT_CSAT: kekoLauncherWeapon {
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_TITAN_AA_CSAT: kekoLauncherWeapon {
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_RPG32: kekoLauncherWeapon {
		cfgName = RAT_LAUNCHER;
		magazines[] = {RAT_MAG};
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
