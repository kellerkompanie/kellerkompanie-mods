#define SMOKE_WHITE "BWA3_DM25"
#define SMOKE_GREEN "SmokeShellGreen"
#define SMOKE_RED "SmokeShellRed"
#define SMOKE_ORANGE "BWA3_DM32_Orange"
#define SMOKE_YELLOW "BWA3_DM32_Yellow"
#define GRENADE "BWA3_DM51A1"

#define PRIMARY_MAG "hlc_30rnd_556x45_EPR_G36"
#define PRIMARY_MAG_TRACER "hlc_30rnd_556x45_Tracers_G36"
#define PRIMARY_MAG_LMG "BWA3_200Rnd_556x45_Tracer"
#define PRIMARY_MAG_MMG "hlc_100Rnd_762x51_M_MG3"
#define PRIMARY_MAG_MARKSMAN "hlc_20rnd_762x51_b_G3"
#define SECONDARY_MAG "BWA3_15Rnd_9x19_P8"

#define AT_LAUNCHER "BWA3_Pzf3"
#define AA_LAUNCHER "BWA3_Fliegerfaust"

#define AT_MAG "BWA3_Pzf3_IT"
#define AA_MAG "BWA3_Fliegerfaust_Mag"
#define UGL_MAG "1Rnd_HE_Grenade_shell"

class kekoWeaponsBundeswehr {
	// Primary
	class keko_W_G36: kekoPrimaryWeapon
	{
		cfgName = "hlc_rifle_G36V";
		items[] = {"acc_pointer_IR","BWA3_optic_EOTech_Mag_On"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
	};
	
	// Grenadier
	class keko_W_G36_GL: keko_W_G36
	{
		cfgName = "hlc_rifle_G36VAG36";
		uglMagazines[] = {UGL_MAG};
	};

	// Marksman
	class keko_W_G3A3: kekoPrimaryWeapon
	{
		cfgName = "hlc_rifle_g3a3";
		items[] = {"HLC_Optic_ZFSG1"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	
	// LMG
	class keko_W_MG4: kekoPrimaryWeapon
	{
		cfgName = "BWA3_MG4";
		magazines[] = {PRIMARY_MAG_LMG};
	};
	
	// MMG
	class keko_W_MG3: kekoPrimaryWeapon
	{
		cfgName = "hlc_lmg_MG3";
		magazines[] = {PRIMARY_MAG_MMG};
	};

	// Sniper
	class keko_W_A3_LRR: kekoPrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};
	class keko_W_A3_LRR_CAMO: keko_W_A3_LRR
	{
		cfgName = "srifle_LRR_camo_F";		
	};



	// Secondary
	class keko_W_P8: kekoSecondaryWeapon
	{
		cfgName = "BWA3_P8";
		items[] = {};
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_PZF3: kekoLauncherWeapon
	{
		cfgName = AT_LAUNCHER;
		magazines[] = {AT_MAG};
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