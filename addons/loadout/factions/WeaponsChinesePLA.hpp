class Weapons {
	// Primary
	class keko_W_QBZ95: PrimaryWeapon
	{
		cfgName = "vme_pla_qbz95_1";
		silencers[] = {"vme_qbz95_1_silencer"};
		magazines[] = {"VME_QBZ95_1_30Rnd_DBP10","VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"};
	};

	// Grenadier
	class keko_W_QBZ95_GL: keko_W_QBZ95
	{
		cfgName = "vme_pla_qbz95_1GL";
		uglMagazines[] = {"VME_1Rnd_HE_GL"};
	};

	// Marksman
	class keko_W_QBU88: PrimaryWeapon
	{
		cfgName = "vme_pla_qbu88";
		scopes[] = {"VME_QBU88_Scope"};
		silencers[] = {"vme_qbz95_1_silencer"};
		magazines[] = {"VME_QBU88_10Rnd_DBP10"};
	};

	// LMG
	class keko_W_QJB95: PrimaryWeapon
	{
		cfgName = "vme_pla_qjb95_1";
		silencers[] = {"vme_qbz95_1_silencer"};
		magazines[] = {"VME_QJB95_1_75Rnd_DBP10"};
	};

	// MMG
	class keko_W_A3_MMG: PrimaryWeapon
	{
		cfgName = "MMG_01_tan_F";
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {"150Rnd_93x64_Mag"};
	};

	// Sniper
	class keko_W_A3_LRR: PrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_Rook: SecondaryWeapon
	{
		cfgName = "hgun_Rook40_F";
		magazines[] = {"16Rnd_9x21_Mag"};
	};



	// Launcher
	class keko_W_TITAN_AT: LauncherWeapon
	{
		cfgName = "launch_O_Titan_short_F";
		magazines[] = {"Titan_AT"};
	};
	class keko_W_TITAN_AA: LauncherWeapon
	{
		cfgName = "launch_O_Titan_F";
		magazines[] = {"Titan_AA"};
	};
	class keko_W_PF89: LauncherWeapon
	{
		cfgName = "vme_pla_PF89";
		magazines[] = {"vme_pla_PF89_Rocket"};
	};

};
