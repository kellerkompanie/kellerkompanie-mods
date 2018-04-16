#define SMOKE_WHITE "LIB_nb39"
#define GRENADE "LIB_m39"

#define PRIMARY_MAG_THOMPSON "LIB_30Rnd_45ACP"
#define PRIMARY_MAG_BAR "GLIB_POL_20Rnd_792x57mm"
#define PRIMARY_MAG_MOSIN "LIB_5Rnd_762x54"
#define PRIMARY_MAG_K98 "lib_5Rnd_792x57"
#define PRIMARY_MAG_PPSH "LIB_71Rnd_762x25"
#define PRIMARY_MAG_G33 "lib_5Rnd_792x57"

#define SECONDARY_MAG_REV "GLIB_FRA_6Rnd_827mm"
#define SECONDARY_MAG_P38 "lib_8Rnd_9x19"
#define SECONDARY_MAG_MAUSER "LIB_6Rnd_763x25"

class kekoWeaponsArmiaKrajowa {
	// Primary
	class keko_W_THOMPSON: kekoPrimaryWeapon
	{
		cfgName = "LIB_M1928A1_Thompson";
		items[] = {};
		magazines[] = {PRIMARY_MAG_THOMPSON};
	};
	class keko_W_BAR: kekoPrimaryWeapon
	{
		cfgName = "GLIB_POL_WZ28";
		items[] = {};
		magazines[] = {PRIMARY_MAG_BAR};
	};
	class keko_W_MOSIN: kekoPrimaryWeapon
	{
		cfgName = "LIB_M38";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MOSIN};
	};
	class keko_W_K98: kekoPrimaryWeapon
	{
		cfgName = "LIB_K98";
		items[] = {};
		magazines[] = {PRIMARY_MAG_K98};
	};

	// Machine Guns
	class keko_W_PPSH: kekoPrimaryWeapon
	{
		cfgName = "LIB_PPSh41_d";
		items[] = {};
		magazines[] = {PRIMARY_MAG_PPSH};
	};
	class keko_W_G33: kekoPrimaryWeapon
	{
		cfgName = "LIB_G3340";
		items[] = {};
		magazines[] = {PRIMARY_MAG_G33};
	};



	// Secondary
	class keko_W_REV: kekoSecondaryWeapon
	{
		cfgName = "GLIB_FRA_REV1982";
		items[] = {};
		magazines[] = {SECONDARY_MAG_REV};
	};
	class keko_W_P38: kekoSecondaryWeapon
	{
		cfgName = "LIB_P38";
		items[] = {};
		magazines[] = {SECONDARY_MAG_P38};		
	};
	class keko_W_MAUSER: kekoSecondaryWeapon
	{
		cfgName = "LIB_M1896";
		items[] = {};
		magazines[] = {SECONDARY_MAG_MAUSER};		
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = GRENADE;
	};
	class keko_W_SMOKE_WHITE {
		cfgName = SMOKE_WHITE;
	};
};