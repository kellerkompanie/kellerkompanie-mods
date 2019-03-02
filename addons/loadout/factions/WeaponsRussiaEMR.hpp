class weapons: weapons {
	// Primary
	class keko_W_AK74M: PrimaryWeapon
	{
		cfgName = "rhs_weap_ak74m_dtk";
		scopes[] = {"rhs_acc_pkas"};
		rails[] = {"rhs_acc_2dpZenit"};
		silencers[] = {"rhs_acc_dtk4short"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_7N6_AK"};
	};
	class keko_W_AK74M_FOLDED: keko_W_AK74M
	{
		cfgName = "rhs_weap_ak74m_folded_dtk";
	};
	class keko_W_AK74M_GL: keko_W_AK74M	{
		cfgName = "rhs_weap_ak74m_gp25_dtk";
		scopes[] = {"rhs_acc_pkas"};
		uglMagazines[] = {"rhs_VOG25"};
	};
	class keko_W_AK74M_GL_HUNTIR: keko_W_AK74M_GL {
		uglMagazines[] = {"ACE_HuntIR_M203"};
	};
	class keko_W_AKS74U: keko_W_AK74M
	{
		cfgName = "rhs_weap_aks74u";
		scopes[] = {"rhs_acc_pgs64_74u"};
	};


	// Marksman
	class keko_W_SVD: PrimaryWeapon
	{
		cfgName = "rhs_weap_svdp";
		scopes[] = {"rhs_acc_pso1m2"};
		silencers[] = {"rhs_acc_tgpv"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1"};
	};

	// LMG
	class keko_W_M84: PrimaryWeapon
	{
		cfgName = "rhs_weap_m84";
		magazines[] = {"rhs_100Rnd_762x54mmR_green"};
	};

	// MMG
	class keko_W_PKP: PrimaryWeapon
	{
		cfgName = "rhs_weap_pkp";
		scopes[] = {"rhs_acc_pkas"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green"};
	};

	// Sniper
	class keko_W_A3_LRR: PrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_Makarov: SecondaryWeapon
	{
		cfgName = "rhs_weap_makarov_pm";
		magazines[] = {"rhs_mag_9x18_8_57N181S"};
	};
	class keko_W_Grach: SecondaryWeapon
	{
		cfgName = "rhs_weap_pya";
		magazines[] = {"rhs_mag_9x19_17"};
	};



	// Launcher
	class keko_W_RPG7: LauncherWeapon
	{
		cfgName = "rhs_weap_rpg7";
		magazines[] = {"rhs_rpg7_PG7VL_mag"};
		scopes[] = {"rhs_acc_pgo7v3"};
	};
	class keko_W_RPG26: LauncherWeapon
	{
		cfgName = "rhs_weap_rpg26";
		magazines[] = {"rhs_rpg26_mag"};
	};
	class keko_W_Igla: LauncherWeapon
	{
		cfgName = "rhs_weap_igla";
		magazines[] = {"rhs_mag_9k38_rocket"};
	};
};
