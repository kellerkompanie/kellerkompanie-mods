#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "VME_QBZ95_1_30Rnd_DBP10"
#define PRIMARY_MAG_TRACER "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"
#define PRIMARY_MAG_LMG "VME_QJB95_1_75Rnd_DBP10"
#define PRIMARY_MAG_MMG "150Rnd_93x64_Mag"
#define PRIMARY_MAG_MARKSMAN "VME_QBU88_10Rnd_DBP10"
#define SECONDARY_MAG "16Rnd_9x21_Mag"

#define RAT_LAUNCHER "vme_pla_PF89"
#define AT_LAUNCHER "launch_O_Titan_short_F"
#define AA_LAUNCHER "launch_O_Titan_F"

#define RAT_MAG "vme_pla_PF89_Rocket"
#define AT_MAG "Titan_AT"
#define AA_MAG "Titan_AA"
#define UGL_MAG "VME_1Rnd_HE_GL"

class kekoWeaponsChinesePLA {
	// Primary
	class keko_W_QBZ95: kekoPrimaryWeapon
	{
		cfgName = "vme_pla_qbz95_1";
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};

	// Grenadier
	class keko_W_QBZ95_GL: keko_W_QBZ95
	{
		cfgName = "vme_pla_qbz95_1GL";
		uglMagazines[] = {UGL_MAG};
	};

	// Marksman
	class keko_W_QBU88: kekoPrimaryWeapon
	{
		cfgName = "vme_pla_qbu88";
		items[] = {"VME_QBU88_Scope"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};

	// LMG
	class keko_W_QJB95: kekoPrimaryWeapon
	{
		cfgName = "vme_pla_qjb95_1";
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_01_tan_F";
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: kekoPrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_Rook: kekoSecondaryWeapon
	{
		cfgName = "hgun_Rook40_F";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
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
	class keko_W_PF89: kekoLauncherWeapon
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