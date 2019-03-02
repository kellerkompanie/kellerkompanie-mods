class Weapons {
	// Primary
	class keko_HK416: PrimaryWeapon
	{
		cfgName = "SMA_HK416afg";
		scopes[] = {"SMA_ELCAN_SPECTER_RDS"};
		rails[] = {"sma_sfpeq_hktop_blk"};
		silencers[] = {"sma_supp1bod_556"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1_Tracer"};
	};
	class keko_HK416_PaintedOD: keko_HK416 {
		cfgName = "SMA_HK416_afg_ODPAINTED";
	};
	class keko_HK416_CustomOD: keko_HK416 {
		cfgName = "SMA_HK416afgOD";
	};

	// Grenadier
	class keko_HK416_GL: keko_HK416	{
		cfgName = "SMA_HK416GL";
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};
	class keko_HK416_GL_PaintedOD: keko_HK416_GL {
		cfgName = "SMA_HK416_GL_ODPAINTED";
	};
	class keko_HK416_GL_CustomOD: keko_HK416_GL {
		cfgName = "SMA_HK416GLOD";
	};

	// Marksman
	class keko_HK417: PrimaryWeapon
	{
		cfgName = "SMA_HK417_16in";
		scopes[] = {"sma_spitfire_03_rds_low_black"};
		rails[] = {"sma_anpeq15_blk"};
		silencers[] = {"sma_gemtech_one_blk"};
		magazines[] = {"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic"};
	};

	// LMG
	class keko_MINIMI: PrimaryWeapon
	{
		cfgName = "sma_minimi_mk3_762tsb";
		scopes[] = {"SMA_ELCAN_SPECTER_RDS"};
		silencers[] = {"sma_gemtech_one_wdl"};
		magazines[] = {"SMA_150Rnd_762_M80A1_Mixed"};
	};


	// Secondary
	class keko_FIVESEVEN: SecondaryWeapon
	{
		cfgName = "RH_fn57";
		rails[] = {"rh_m6x"};
		silencers[] = {"rh_sfn57"};
		magazines[] = {"RH_20Rnd_57x28_FN"};
	};



	// Launcher
	class keko_M72: LauncherWeapon
	{
		cfgName = "rhs_weap_m72a7";
	};
};
