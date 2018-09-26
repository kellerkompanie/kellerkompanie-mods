#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[]= {};
		weapons[] = {};
		requiredVersion= REQUIRED_VERSION;
		requiredAddons[]= {
            "rhs_main",
            "rhssaf_main",
            "rhssaf_backpacks",
            "rhsgref_main",
			"rhsusf_main",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_troops",
            "rhsusf_c_uav",
            "rhs_c_troops"
		};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
