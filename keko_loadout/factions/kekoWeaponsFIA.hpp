#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "200Rnd_65x39_cased_Box_Tracer"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define SECONDARY_MAG "9Rnd_45ACP_Mag"

#define RAT_LAUNCHER "launch_RPG32_F"
#define RAT_MAG "RPG32_F"

#define UGL_MAG "1Rnd_HE_Grenade_shell"

class kekoWeaponsFIA {
	// Primary
	class keko_W_A3_Mk20: kekoPrimaryWeapon
	{
		cfgName = "arifle_Mk20_F";
		items[] = {"acc_flashlight","optic_ACO_grn"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};
	class keko_W_A3_TRG21: keko_W_A3_Mk20
	{
		cfgName = "arifle_TRG21_F";
	};

	// Staff
	class keko_W_A3_Mk20C: keko_W_A3_Mk20
	{
		cfgName = "arifle_Mk20C_F";
	};

	// Grenadier
	class keko_W_A3_Mk20_GL: keko_W_A3_Mk20
	{
		cfgName = "arifle_Mk20_GL_F";
	};
	class keko_W_A3_TRG21_GL: keko_W_A3_Mk20_GL
	{
		cfgName = "arifle_TRG21_GL_F";
	};

	// Marksman
	class keko_W_A3_DMR: kekoPrimaryWeapon
	{
		cfgName = "srifle_DMR_06_olive_F";
		items[] = {"acc_flashlight","optic_KHS_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_A3_Mk200: kekoPrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		items[] = {"acc_flashlight","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		items[] = {"acc_flashlight","bipod_01_F_snd"};
		magazines[] = {PRIMARY_MAG_MMG};
	};



	// Secondary
	class keko_W_M1911: kekoSecondaryWeapon
	{
		cfgName = "hgun_ACPC2_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_RPG32: kekoLauncherWeapon
	{
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