class Weapons {
	// Primary
	class keko_W_M4: PrimaryWeapon
	{
		cfgName = "rhs_weap_m4";
		scopes[] = {"rhsusf_acc_compm4"};
		rails[] = {"rhsusf_acc_anpeq15"};
		silencers[] = {"rhsusf_acc_nt4_black"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
	};

	// Grenadier
	class keko_W_M4_GL: keko_W_M4 {
		cfgName = "rhs_weap_m4_m320";
		uglMagazines[] = {"rhs_mag_M441_HE"};
	};
	class keko_W_M4_GL_HUNTIR: keko_W_M4_GL {
		uglMagazines[] = {"ACE_HuntIR_M203"};
	};

	// Marksman
	class keko_W_M14: PrimaryWeapon
	{
		cfgName = "rhs_weap_m14ebrri";
		scopes[] = {"rhsusf_acc_ACOG3"};
		rails[] = {"rhsusf_acc_anpeq15"};
		bipods[] = {"rhsusf_acc_harris_bipod"};
		magazines[] = {"rhsusf_20Rnd_762x51_m993_Mag"};
	};

	// LMG
	class keko_W_M249: PrimaryWeapon
	{
		cfgName = "rhs_weap_m249_pip_L";
		scopes[] = {"rhsusf_acc_elcan"};
		silencers[] = {"rhsusf_acc_nt4_black"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW"};
	};

	// MMG
	class keko_W_M240B: PrimaryWeapon
	{
		cfgName = "rhs_weap_m240B";
		scopes[] = {"rhsusf_acc_elcan"};
		silencers[] = {"muzzle_snds_h_mg"};
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer"};
	};

	// Sniper
	class keko_W_A3_LRR: PrimaryWeapon
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};



	// Secondary
	class keko_W_M9: SecondaryWeapon
	{
		cfgName = "rhsusf_weap_m9";
		magazines[] = {SECONDARY_MAG};
	};



	// Launcher
	class keko_W_Javelin: LauncherWeapon
	{
		cfgName = "rhs_weap_fgm148";
		magazines[] = {"rhs_fgm148_magazine_AT"};
	};
	class keko_W_Stinger: LauncherWeapon
	{
		cfgName = "rhs_weap_fim92";
		magazines[] = {"rhs_fim92_mag"};
	};
	class keko_W_M136: LauncherWeapon
	{
		cfgName = "rhs_weap_M136";
	};
};
