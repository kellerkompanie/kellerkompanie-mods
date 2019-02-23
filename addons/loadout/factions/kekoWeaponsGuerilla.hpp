class kekoWeaponsGuerilla {
	// Primary
	class keko_W_A3_TRG21: kekoPrimaryWeapon
	{
		cfgName = "arifle_TRG21_F";
		scopes[] = {"optic_ACO_grn"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_m"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red"};
	};

	// Grenadier
	class keko_W_A3_TRG21_GL: keko_W_A3_TRG21
	{
		cfgName = "arifle_TRG21_GL_F";
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};

	// Marksman
	class keko_W_A3_DMR: kekoPrimaryWeapon
	{
		cfgName = "srifle_DMR_06_olive_F";
		scopes[] = {"optic_KHS_blk"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {"20Rnd_762x51_Mag"};
	};

	// LMG
	class keko_W_A3_Mk200: kekoPrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_h_mg"};
		magazines[] = {PRIMARY_MAG_LMG};
	};

	// MMG
	class keko_W_A3_MMG: kekoPrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		scopes[] = {"optic_Arco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_01_F_snd"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {"130Rnd_338_Mag"};
	};



	// Secondary
	class keko_W_Rook: kekoSecondaryWeapon
	{
		cfgName = "hgun_Rook40_F";
		silencers[] = {"muzzle_snds_l"};
		magazines[] = {"16Rnd_9x21_Mag"};
	};



	// Launcher
	class keko_W_NLAW: kekoLauncherWeapon
	{
		cfgName = "launch_NLAW_F";
	};
	class keko_W_RPG7: kekoLauncherWeapon
	{
		cfgName = "launch_RPG7_F";
		magazines[] = {"RPG7_F"};
	};
	class keko_W_TITAN_AA: kekoLauncherWeapon
	{
		cfgName = "launch_I_Titan_F";
		magazines[] = {"Titan_AA"};
	};
};
