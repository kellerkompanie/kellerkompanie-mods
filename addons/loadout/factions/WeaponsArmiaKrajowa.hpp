class Weapons {
	// Primary
	class keko_W_THOMPSON: PrimaryWeapon
	{
		cfgName = "LIB_M1928A1_Thompson";
		magazines[] = {"LIB_30Rnd_45ACP"};
	};
	class keko_W_BAR: PrimaryWeapon
	{
		cfgName = "GLIB_POL_WZ28";
		magazines[] = {"GLIB_POL_20Rnd_792x57mm"};
	};
	class keko_W_MOSIN: PrimaryWeapon
	{
		cfgName = "LIB_M38";
		magazines[] = {"LIB_5Rnd_762x54"};
	};
	class keko_W_K98: PrimaryWeapon
	{
		cfgName = "LIB_K98";
		magazines[] = {"lib_5Rnd_792x57"};
	};

	// Machine Guns
	class keko_W_PPSH: PrimaryWeapon
	{
		cfgName = "LIB_PPSh41_d";
		magazines[] = {"LIB_71Rnd_762x25"};
	};
	class keko_W_G33: PrimaryWeapon
	{
		cfgName = "LIB_G3340";
		magazines[] = {"lib_5Rnd_792x57"};
	};



	// Secondary
	class keko_W_REV: SecondaryWeapon
	{
		cfgName = "GLIB_FRA_REV1982";
		magazines[] = {"GLIB_FRA_6Rnd_827mm"};
	};
	class keko_W_P38: SecondaryWeapon
	{
		cfgName = "LIB_P38";
		magazines[] = {"lib_8Rnd_9x19"};
	};
	class keko_W_MAUSER: SecondaryWeapon
	{
		cfgName = "LIB_M1896";
		magazines[] = {"LIB_6Rnd_763x25"};
	};
};
