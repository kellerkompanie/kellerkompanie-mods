class weapons: weapons {

	// Primary
	// SQL
	class keko_W_OPTRE_BR55HB: PrimaryWeapon
	{
		cfgName = "OPTRE_BR55HB";
		scopes[] = {"optre_br55hb_scope"};
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		magazines[] = {"OPTRE_36Rnd_95x40_Mag"};
	};

	// Rifleman
	class keko_W_OPTRE_MA37: PrimaryWeapon
	{
		cfgName = "OPTRE_MA37";
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer"};
	};

	// Grenadier
	class keko_W_OPTRE_MA37GL: keko_W_OPTRE_MA37
	{
		cfgName = "OPTRE_MA37GL";
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};

	// Autorifleman
	class keko_W_OPTRE_M73: PrimaryWeapon
	{
		cfgName = "OPTRE_M73";
		scopes[] = {"optre_m73_smartlink"};
		magazines[] = {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box_Tracer"};
	};

	// Marksman
	class keko_W_OPTRE_M392_DMR: PrimaryWeapon
	{
		cfgName = "OPTRE_M392_DMR";
		scopes[] = {"optre_m392_scope"};
		silencers[] = {"muzzle_snds_65_ti_blk_f"};
		bipods[] = {"bipod_01_f_blk"};
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag_Tracer"};
	};

	// Crewman
	class keko_W_OPTRE_M7: PrimaryWeapon
	{
		cfgName = "OPTRE_M7";
		silencers[] = {"optre_m7_silencer"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag"};
	};





	// Secondary
	class keko_W_OPTRE_M6G: SecondaryWeapon
	{
		cfgName = "OPTRE_M6G";
		scopes[] = {"optre_m6g_scope"};
		rails[] = {"optre_m6g_flashlight"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag"};
	};


	// Launcher
	class keko_W_OPTRE_M41_SSR_G: LauncherWeapon
	{
		cfgName = "OPTRE_M41_SSR_G";
		magazines[] = {"OPTRE_M41_Twin_HEAT_G"};
	};

	class keko_W_OPTRE_M41_SSR: LauncherWeapon
	{
		cfgName = "OPTRE_M41_SSR";
		magazines[] = {"OPTRE_M41_Twin_HEAT"};
	};
};
