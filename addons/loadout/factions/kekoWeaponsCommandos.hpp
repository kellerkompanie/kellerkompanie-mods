#define SMOKE_WHITE "fow_e_no77"
#define GRENADE "fow_e_no36mk1"

#define WEAPON_LEE "fow_w_leeenfield_no4mk1"
#define WEAPON_PIAT "fow_w_piat"
#define WEAPON_BREN "fow_w_bren"
#define WEAPON_THOMPSON "fow_w_m1a1_thompson"

#define WEAPON_WEBLEY "fow_w_webley"

#define PRIMARY_MAG_LEE "fow_10Rnd_303"
#define PRIMARY_MAG_PIAT "fow_1Rnd_piat_HEAT"
#define PRIMARY_MAG_BREN "fow_30Rnd_303_bren"
#define PRIMARY_MAG_THOMPSON "fow_30Rnd_45acp"

#define SECONDARY_WEBLEY "fow_6Rnd_455"


class kekoWeaponsCommandos {
	// Primary
	class keko_W_Lee: kekoPrimaryWeapon
	{
		cfgName = WEAPON_LEE;
		items[] = {};
		magazines[] = {PRIMARY_MAG_LEE};
	};
	class keko_W_Piat: kekoPrimaryWeapon
	{
		cfgName = WEAPON_PIAT;
		items[] = {};
		magazines[] = {PRIMARY_MAG_PIAT};
	};
	class keko_W_Bren: kekoPrimaryWeapon
	{
		cfgName = WEAPON_BREN;
		items[] = {};
		magazines[] = {PRIMARY_MAG_BREN};
	};
	class keko_W_Thompson: kekoPrimaryWeapon
	{
		cfgName = WEAPON_THOMPSON;
		items[] = {};
		magazines[] = {PRIMARY_MAG_THOMPSON};
	};



	// Secondary
	class keko_W_Webley: kekoSecondaryWeapon
	{
		cfgName = WEAPON_WEBLEY;
		items[] = {};
		magazines[] = {SECONDARY_WEBLEY};
	};



	// Throwables
	class keko_W_GRENADE {
		cfgName = GRENADE;
	};
	class keko_W_SMOKE_WHITE {
		cfgName = SMOKE_WHITE;
	};
};