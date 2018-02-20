class kekoWeapons
{
	class kekoWeaponBase {
		cfgName = objNull;
		items[] = {};
		magazines[] = {};
	};

	class kekoPrimaryWeapon: kekoWeaponBase
	{
		uglMagazines[] = {};
	};

	class kekoSecondaryWeapon: kekoWeaponBase
	{
		
	};

	class kekoLauncherWeapon: kekoWeaponBase
	{
		
	};

	#include "kekoWeaponsNato.hpp"
	#include "kekoWeaponsAAF.hpp"
	#include "kekoWeaponsCSAT.hpp"
};