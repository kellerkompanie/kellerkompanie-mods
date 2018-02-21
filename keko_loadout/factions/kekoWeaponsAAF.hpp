#define SMOKE_WHITE "SmokeShell"
#define SMOKE_GREEN "SmokeShellGreen"
#define GRENADE "HandGrenade"

#define PRIMARY_MAG "30Rnd_556x45_Stanag"
#define PRIMARY_MAG_TRACER "30Rnd_556x45_Stanag_Tracer_Green"
#define PRIMARY_MAG_LMG "200Rnd_65x39_cased_Box_Tracer"
#define PRIMARY_MAG_MMG "130Rnd_338_Mag"
#define PRIMARY_MAG_MARKSMAN "20Rnd_762x51_Mag"
#define SECONDARY_MAG "9Rnd_45ACP_Mag"

class kekoWeaponsAAF {
	// Primary
	class keko_W_A3_F2000: kekoPrimaryWeapon {
		cfgName = "arifle_Mk20_F";
		items[] = {"acc_pointer_IR","optic_MRCO"};
		magazines[] = {PRIMARY_MAG,PRIMARY_MAG_TRACER};
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
		magazines[] = {PRIMARY_MAG_LMG};
	};
	class keko_W_A3_MMG_AAF: kekoPrimaryWeapon {		
		cfgName = "MMG_02_black_F";
		items[] = {"acc_pointer_IR","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_MMG};
	};
	class keko_W_A3_EBR: kekoPrimaryWeapon {
		cfgName = "srifle_EBR_MRCO_LP_BI_F";
		items[] = {"acc_pointer_IR","optic_SOS","bipod_03_F_blk"};
		magazines[] = {PRIMARY_MAG_MARKSMAN};
	};
	class keko_W_A3_GM6: kekoPrimaryWeapon {
		cfgName = "srifle_GM6_LRPS_F";
		items[] = {"acc_pointer_IR","optic_LRPS","bipod_03_F_blk"};
		magazines[] = {"5Rnd_127x108_Mag"};
	};



	// Secondary
	class keko_W_A3_ACP: kekoSecondaryWeapon {
		cfgName = "hgun_ACPC2_F";
		magazines[] = {SECONDARY_MAG};
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
		cfgName = GRENADE;
	};
	class keko_W_SMOKE_WHITE {
		cfgName = SMOKE_WHITE;
	};
	class keko_W_SMOKE_GREEN {
		cfgName = SMOKE_GREEN;
	};
};