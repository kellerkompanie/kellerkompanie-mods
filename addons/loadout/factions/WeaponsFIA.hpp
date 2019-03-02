class Weapons {
	// Primary
	class keko_W_A3_Mk20: PrimaryWeapon
	{
		cfgName = "arifle_Mk20_F";
		scopes[] = {"optic_ACO_grn"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_m"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red"};
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
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};
	class keko_W_A3_TRG21_GL: keko_W_A3_Mk20_GL
	{
		cfgName = "arifle_TRG21_GL_F";
	};

	// Marksman
	class keko_W_A3_DMR: PrimaryWeapon
	{
		cfgName = "srifle_DMR_06_olive_F";
		scopes[] = {"optic_KHS_blk"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {"20Rnd_762x51_Mag"};
	};

	class keko_W_A3_DMR_SILENCED: PrimaryWeapon
	{
		cfgName = "srifle_DMR_06_olive_F";
		scopes[] = {"optic_KHS_blk"};
		rails[] = {"acc_flashlight"};
		silencers[] = {"muzzle_snds_b"};
		magazines[] = {"20Rnd_762x51_Mag"};
	};



	// LMG
	class keko_W_A3_Mk200: PrimaryWeapon
	{
		cfgName = "LMG_Mk200_F";
		scopes[] = {"optic_aco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_03_F_blk"};
		silencers[] = {"muzzle_snds_h_mg"};
		magazines[] = {"200Rnd_65x39_cased_Box_Tracer"};
	};

	// MMG
	class keko_W_A3_MMG: PrimaryWeapon
	{
		cfgName = "MMG_02_black_F";
		scopes[] = {"optic_Arco"};
		rails[] = {"acc_flashlight"};
		bipods[] = {"bipod_01_F_snd"};
		silencers[] = {"muzzle_snds_338_black"};
		magazines[] = {"130Rnd_338_Mag"};
	};

	class keko_W_A3_GM6_CSAT: PrimaryWeapon
	{
		cfgName = "srifle_GM6_camo_F";
		scopes[] = {"optic_lrps"};
		magazines[] = {"5Rnd_127x108_Mag"};
	};



	// Secondary
	class keko_W_M1911: SecondaryWeapon
	{
		cfgName = "hgun_ACPC2_F";
		silencers[] = {"muzzle_snds_acp"};
		magazines[] = {"9Rnd_45ACP_Mag"};
	};



	// Launcher
	class keko_W_RPG32: LauncherWeapon
	{
		cfgName = "launch_RPG32_F";
		magazines[] = {"RPG32_F"};
	};
};
