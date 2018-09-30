#include "script_macro.hpp"

#define SMOKE_WHITE "fow_e_nb39b"
#define GRENADE "fow_e_m24"

#define PRIMARY_MAG_K98 "fow_5Rnd_792x57"
#define PRIMARY_MAG_STG44 "fow_30Rnd_792x33"
#define PRIMARY_MAG_MP40 "fow_32Rnd_9x19_mp40"
#define PRIMARY_MAG_MG34 "fow_50Rnd_792x57"
#define PRIMARY_MAG_MG42 "fow_50Rnd_792x57"
#define PRIMARY_MAG_G43 "fow_10nd_792x57"

#define SECONDARY_MAG_P08 "fow_8Rnd_9x19"
#define SECONDARY_MAG_P38 "lib_8Rnd_9x19"

#define LAUNCHER_PZF "fow_w_pzfaust_60"
#define LAUNCHER_MAG_PZF "fow_1Rnd_pzfaust_60"

class kekoWeaponsWehrmacht {
	// Primary
	class keko_W_K98: kekoPrimaryWeapon
	{
		cfgName = "fow_w_k98";
		items[] = {};
		magazines[] = {PRIMARY_MAG_K98};
	};
	class keko_W_STG44: kekoPrimaryWeapon
	{
		cfgName = "fow_w_stg44";
		items[] = {};
		magazines[] = {PRIMARY_MAG_STG44};
	};
	class keko_W_MP40: kekoPrimaryWeapon
	{
		cfgName = "fow_w_mp40";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MP40};
	};
	class keko_W_G43: kekoPrimaryWeapon
	{
		cfgName = "fow_w_g43";
		items[] = {};
		magazines[] = {PRIMARY_MAG_G43};
	};

	// Machine Guns
	class keko_W_MG34: kekoPrimaryWeapon
	{
		cfgName = "fow_w_mg34";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MG34};
	};
	class keko_W_MG42: kekoPrimaryWeapon
	{
		cfgName = "fow_w_mg42";
		items[] = {};
		magazines[] = {PRIMARY_MAG_MG42};
	};



	// Secondary
	class keko_W_P08: kekoSecondaryWeapon
	{
		cfgName = "fow_w_p08";
		items[] = {};
		magazines[] = {SECONDARY_MAG_P08};
	};
	class keko_W_P38: kekoSecondaryWeapon
	{
		cfgName = "LIB_P38";
		items[] = {};
		magazines[] = {SECONDARY_MAG_P38};
	};



	// Launcher
	class keko_W_PZF: kekoLauncherWeapon
	{
		cfgName = LAUNCHER_PZF;
		magazines[] = {LAUNCHER_MAG_PZF};
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = GRENADE;
	};
	class keko_W_SMOKE_WHITE {
		cfgName = SMOKE_WHITE;
	};
};
