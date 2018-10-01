#include "script_component.hpp"

class CfgPatches {
	class ADDON	{
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		units[] = {};
		weapons[] = {
			QGVAR(beerEmpty)
		};
		magazines[] = {
			QGVAR(beer)
		};
		requiredAddons[] = {
			"cba_main",
			"ace_medical",
			"a3_structures_f",
			"a3_weapons_f"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
