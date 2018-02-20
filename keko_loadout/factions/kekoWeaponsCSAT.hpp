class kekoWeaponsCSAT {
	// Primary
	class keko_W_A3_MX
	{
		cfgName = "arifle_MX_F";
		items[] = {"acc_pointer_IR","optic_Hamr"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
	};
	class keko_W_A3_MX_BLACK: keko_W_A3_MX
	{
		cfgName = "arifle_MX_Black_F";
	};

	// Staff
	class keko_W_A3_MXC: keko_W_A3_MX
	{
		cfgName = "arifle_MXC_F";
	};
	class keko_W_A3_MXC_BLACK: keko_W_A3_MXC
	{
		cfgName = "arifle_MXC_Black_F";
	};

	// Grenadier
	class keko_W_A3_MX_GL: keko_W_A3_MX
	{
		cfgName = "arifle_MX_GL_F";
		uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
	};
	class keko_W_A3_MX_GL_BLACK: keko_W_A3_MX_GL
	{
		cfgName = "arifle_MX_GL_Black_F";
	};

	// Marksman
	class keko_W_A3_MXM: keko_W_A3_MX
	{
		cfgName = "arifle_MXM_F";
		magazines[] = {"30Rnd_65x39_caseless_mag", "ACE_30Rnd_65x47_Scenar_mag"};
	};
	class keko_W_A3_MXM_BLACK: keko_W_A3_MXM
	{
		cfgName = "arifle_MXM_Black_F";
	};

	// LMG
	class keko_W_A3_MX_SW: keko_W_A3_MX
	{
		cfgName = "arifle_MX_SW_F";
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer"};
	};
	class keko_W_A3_MX_SW_BLACK: keko_W_A3_MX_SW
	{
		cfgName = "arifle_MX_SW_Black_F";
	};

	// MMG
	class keko_W_A3_MMG: keko_W_A3_MX
	{
		cfgName = "MMG_02_sand_F";
		magazines[] = {"130Rnd_338_Mag"};
	};
	class keko_W_A3_MMG_BLACK: keko_W_A3_MMG
	{
		cfgName = "MMG_02_black_F";
	};

	// Sniper
	class keko_W_A3_LRR: keko_W_A3_MX
	{
		cfgName = "srifle_LRR_F";
		magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
	};
	class keko_W_A3_LRR_CAMO: keko_W_A3_LRR
	{
		cfgName = "srifle_LRR_camo_F";		
	};



	// Secondary
	class keko_W_TACTICAL: kekoSecondaryWeapon
	{
		cfgName = "hgun_Pistol_heavy_01_F";
		items[] = {};
		magazines[] = {"11Rnd_45ACP_Mag"};
	};
	class keko_W_TACTICAL_SPECOPS: keko_W_TACTICAL
	{
		items[] = {"muzzle_snds_acp","acc_flashlight_pistol","optic_MRD"};		
	};



	// Launcher
	class keko_W_TITAN_AT: kekoLauncherWeapon
	{
		cfgName = "launch_B_Titan_short_F";
		magazines[] = {"Titan_AT"};
	};
	class keko_W_TITAN_AA: kekoLauncherWeapon
	{
		cfgName = "launch_B_Titan_F";
		magazines[] = {"Titan_AA"};
	};
	class keko_W_NLAW: kekoLauncherWeapon
	{
		cfgName = "launch_NLAW_F";
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