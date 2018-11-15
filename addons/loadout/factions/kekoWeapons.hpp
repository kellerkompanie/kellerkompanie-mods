class kekoWeaponBase {
	cfgName = objNull;
	items[] = {};
	magazines[] = {};
};

class kekoSilenceableWeapon: kekoWeaponBase {
	silencer[] = {};
};

class kekoPrimaryWeapon: kekoSilenceableWeapon
{
	uglMagazines[] = {};
};

class kekoSecondaryWeapon: kekoSilenceableWeapon
{

};

class kekoLauncherWeapon: kekoWeaponBase
{

};
