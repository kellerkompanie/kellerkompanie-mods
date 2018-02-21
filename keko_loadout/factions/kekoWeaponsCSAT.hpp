#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_65x39_caseless_green"
#define PRIMARY_MAG_TRACER "30Rnd_65x39_caseless_green_mag_Tracer"
#define PRIMARY_MAG_LMG "150Rnd_762x54_Box_Tracer"
#define PRIMARY_MAG_MMG "150Rnd_93x64_Mag"
#define PRIMARY_MAG_MARKSMAN "10Rnd_762x54_Mag"
#define SECONDARY_MAG "16Rnd_9x21_Mag"

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
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};
	class keko_W_A3_DMR: kekoPrimaryWeapon {
		cfgName = "srifle_DMR_01_DMS_BI_F";
		items[] = {"acc_pointer_IR","optic_DMS","bipod_02_F_hex"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	class keko_W_A3_ZAFIR: kekoPrimaryWeapon {
		cfgName = "LMG_Zafir_F";
		items[] = {"acc_pointer_IR","bipod_02_F_hex"};
		magazines[] = {PRIMARY_MAG_LMG};
	};
	class keko_W_A3_MMG_CSAT: kekoPrimaryWeapson {
		cfgName = "MMG_01_hex_F";
		items[] = {"acc_pointer_IR","bipod_02_F_hex"};
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
		cfgName = "launch_O_Titan_short_F";
		magazines[] = {"Titan_AT"};
	};
	class keko_W_TITAN_AA_CSAT: kekoLauncherWeapon {
		cfgName = "launch_O_Titan_F";
		magazines[] = {"Titan_AA"};
	};
	class keko_W_RPG32: kekoLauncherWeapon {
		cfgName = "launch_RPG32_F";
		magazines[] = {"RPG32_F"};
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = "HandGrenade";
	};
	class keko_W_SMOKE_WHITE {
		cfgName = "SmokeShell";
	};
	class keko_W_SMOKE_GREEN {
		cfgName = "SmokeShellGreen";
	};
};