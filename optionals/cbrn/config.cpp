#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[]= {};
		weapons[] = {};
		requiredVersion= REQUIRED_VERSION;
		requiredAddons[]= {
            "skn_nbc_units"
		};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
