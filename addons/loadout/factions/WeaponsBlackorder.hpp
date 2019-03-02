class Weapons {
	// Primary
	class keko_W_MK18: PrimaryWeapon
	{
		cfgName = "rhs_weap_mk18_bk";
		scopes[] = {"rhsusf_acc_acog"};
		rails[] = {"rhsusf_acc_anpeq15_bk"};
		bipods[] = {"rhsusf_acc_grip2"};
		silencers[] = {"rhsusf_acc_rotex5_grey"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"};
	};

	class keko_W_MK18_M320: keko_W_MK18
	{
		cfgName = "rhs_weap_mk18_m320";
		uglMagazines[] = {"rhs_mag_M441_HE"};
	};

	class keko_W_MK18_M320_HUNTIR: keko_W_MK18_M320
	{
		uglMagazines[] = {"ACE_HuntIR_M203"};
	};

	class keko_W_SIG556: PrimaryWeapon
	{
		cfgName = "srifle_DMR_03_blackorder_F";
		scopes[] = {"rhsusf_acc_acog3"};
		rails[] = {"bwa3_acc_varioray_irlaser"};
		bipods[] = {"rhsusf_acc_harris_bipod"};
		silencers[] = {"bwa3_muzzle_snds_rotex_iia"};
		magazines[] = {"ACE_20Rnd_762x51_M993_AP_Mag","rhsgref_296Rnd_792x57_SmK_alltracers_belt"};
	};

	class keko_W_M40A5: PrimaryWeapon
	{
		cfgName = "rhs_weap_m40a5_blackorder";
		scopes[] = {"rhsusf_acc_leupoldmk4"};
		bipods[] = {"rhsusf_acc_harris_swivel"};
		magazines[] = {"rhsusf_10Rnd_762x51_m118_special_Mag","rhsusf_10Rnd_762x51_m62_Mag"};
	};

	class keko_W_M249: PrimaryWeapon
	{
		cfgName = "rhs_weap_m249_pip_S";
		scopes[] = {"rhsusf_acc_elcan_ard"};
		rails[] = {"rhsusf_acc_anpeq15side_bk"};
		silencers[] = {"rhsusf_acc_rotex5_grey"};
		magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200rnd_556x45_mixed_box"};
	};

	class keko_W_MG42: PrimaryWeapon
	{
		cfgName = "rhs_weap_mg42";
		magazines[] = {"rhsgref_296Rnd_792x57_SmK_belt","rhsgref_296Rnd_792x57_SmK_alltracers_belt"};
	};

	class keko_W_Tavor: PrimaryWeapon
	{
		cfgName = "SMA_CTARBLK_F";
		scopes[] = {"sma_barska"};
		rails[] = {"sma_anpeq15_blk"};
		silencers[] = {"sma_supp1bb_556"};
		magazines[] = {"SMA_30Rnd_556x45_Mk262","SMA_30Rnd_556x45_Mk262_Tracer"};
	};





	// Secondary
	class keko_W_Glock: SecondaryWeapon
	{
		cfgName = "rhsusf_weap_glock17g4";
		scopes[] = {"acc_flashlight_pistol"};
		silencers[] = {"rhsusf_acc_omega9k"};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_FMJ"};
	};



	// Launcher
	class keko_W_MAAWS: LauncherWeapon
	{
		cfgName = "rhs_weap_maaws";
		scopes[] = {"rhs_optic_maaws"};
		magazines[] = {"rhs_mag_maaws_HEAT"};
	};
	class keko_W_STINGER: LauncherWeapon
	{
		cfgName = "rhs_weap_fim92";
		magazines[] = {"rhs_fim92_mag"};
	};
	class keko_W_M136: LauncherWeapon
	{
		cfgName = "rhs_weap_M136";
	};
	class keko_W_M80: LauncherWeapon
	{
		cfgName = "rhs_weap_m80";
	};
	class keko_W_M72: LauncherWeapon
	{
		cfgName = "rhs_weap_m72a7";
	};

};
