#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]= {};
        weapons[] = {};
        requiredVersion= REQUIRED_VERSION;
        requiredAddons[]= {
            "keko_common",
            "rhsusf_c_weapons",
            "rhsusf_sounds",
            "ace_compat_rhs_usf3",
            "ace_compat_rhs_afrf3",
            "rhs_c_weapons"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
