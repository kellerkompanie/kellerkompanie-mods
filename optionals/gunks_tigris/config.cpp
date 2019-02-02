#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[]= {};
		weapons[] = {
			"missiles_titan_AA"
		};
		requiredVersion= REQUIRED_VERSION;
		requiredAddons[]= {
            "A3_Weapons_F"
		};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
