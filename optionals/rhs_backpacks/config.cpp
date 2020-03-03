#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]= {};
        weapons[] = {};
        requiredVersion= REQUIRED_VERSION;
        requiredAddons[]= {
            "rhs_main",
            "rhsgref_main",
            "rhsusf_main",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_troops",
            "rhsusf_c_uav",
            "rhs_c_troops"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
