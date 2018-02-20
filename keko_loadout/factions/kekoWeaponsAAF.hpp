class kekoWeaponsAAF {
	// Primary
	class keko_W_A3_F2000: kekoPrimaryWeapon {
		cfgName = "arifle_Mk20_F";
		items[] = {"acc_pointer_IR","optic_MRCO"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green"};
	};
	class keko_W_A3_F2000_UGL: keko_W_A3_F2000 {
		cfgName = "arifle_Mk20_GL_F";
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};
	class keko_W_A3_F2000_SHORT: keko_W_A3_F2000 {
		cfgName = "arifle_Mk20C_F";
	};
	class keko_W_A3_STONER: kekoPrimaryWeapon {
		cfgName = "LMG_Mk200_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer"};
	};
	class keko_W_A3_MMG_AAF: kekoPrimaryWeapon {		
		cfgName = "MMG_02_black_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk"};
		magazines[] = {"130Rnd_338_Mag"};
	};
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "srifle_EBR_MRCO_LP_BI_F";
		items[] = {"acc_pointer_IR","optic_SOS","bipod_03_F_blk"};
		magazines[] = {"20Rnd_762x51_Mag"};
	};
	class keko_W_A3_GM6: kekoPrimaryWeapon {
		cfgName = "srifle_GM6_LRPS_F";
		items[] = {"acc_pointer_IR","optic_LRPS","bipod_03_F_blk"};
		magazines[] = {"5Rnd_127x108_Mag"};
	};



	// Secondary
	class keko_W_A3_ACP: kekoSecondaryWeapon {
		cfgName = "hgun_ACPC2_F";
		magazines[] = {"9Rnd_45ACP_Mag"};
	};
	class keko_W_A3_ACP_SILENCED: keko_W_A3_ACP {
		items[] = {"muzzle_snds_acp"};
	};



	// Launcher
	class keko_W_NLAW: kekoLauncherWeapon {
		cfgName = "launch_NLAW_F";
	};
	class keko_W_TITAN_AT_AAF: kekoLauncherWeapon {
		cfgName = "launch_I_Titan_short_F";
		magazines[] = {"Titan_AT"};
	};
	class keko_W_TITAN_AA_AAF: kekoLauncherWeapon {
		cfgName = "launch_I_Titan_F";
		magazines[] = {"Titan_AA"};
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = "HandGrenade";
	};
	class keko_W_SMOKE_WHITE {
		cfgName = "SmokeShell";
	};
	class keko_W_SMOKE_GREEN {
		cfgName = "SmokeShellGreen";
	};
};