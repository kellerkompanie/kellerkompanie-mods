#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"
#define PRIMARY_MAG_TRACER "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
#define PRIMARY_MAG_LMG "rhs_200rnd_556x45_M_SAW"
#define PRIMARY_MAG_MMG "rhsusf_100Rnd_762x51_m62_tracer"
#define PRIMARY_MAG_MARKSMAN "rhsusf_20Rnd_762x51_m993_Mag"
#define SECONDARY_MAG "rhsusf_mag_15Rnd_9x19_FMJ"

#define RAT_LAUNCHER "rhs_weap_M136"
#define AT_LAUNCHER "rhs_weap_fgm148"
#define AA_LAUNCHER "rhs_weap_fim92"

#define AT_MAG "rhs_fgm148_magazine_AT"
#define AA_MAG "rhs_fim92_mag"
#define UGL_MAG "rhs_mag_M441_HE"

class kekoWeaponsUSArmy {
	// Primary
	class keko_W_M4: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m4";
		items[] = {"acc_pointer_IR","rhsusf_acc_compm4"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_M4_GL: keko_W_M4
	{
		cfgName = "rhs_weap_m4_m320";
		uglMagazines[] = {UGL_MAG};
	};

	// Marksman
	class keko_W_M14: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m14ebrri";
		items[] = {"acc_pointer_IR","rhsusf_acc_ACOG3","rhsusf_acc_harris_bipod"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_M249: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m249";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_M240B: kekoPrimaryWeapon
	{
		cfgName = "rhs_weap_m240B";
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: keko_W_A3_MX
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_M9: kekoSecondaryWeapon
	{
		cfgName = "rhsusf_weap_m9";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_Javelin: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
	};
	class keko_W_Stinger: kekoLauncherWeapon
	{
		cfgName = AA_LAUNCHER;
		magazines[] = {AA_MAG};
	};
	class keko_W_M136: kekoLauncherWeapon
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