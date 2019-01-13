#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[]= {};
		weapons[] = {};
		magazines[] = {
			QGVAR(LIB_75Rnd_792x57),
			QGVAR(LIB_150Rnd_792x57),
			QGVAR(LIB_250Rnd_792x57),
			QGVAR(FOW_75Rnd_792x57),
			QGVAR(FOW_150Rnd_792x57),
			QGVAR(FOW_250Rnd_792x57)
		};
		requiredVersion= REQUIRED_VERSION;
		requiredAddons[]= {
			"fow_munitions",
			"fow_weapons",
			"LIB_weapons",
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"fow_weapons_c"
		};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
