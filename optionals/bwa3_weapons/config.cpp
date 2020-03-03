#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]= {};
        weapons[] = {};
        requiredVersion= REQUIRED_VERSION;
        requiredAddons[]= {
            "keko_common",
            "bwa3_pzf3",
            "bwa3_fliegerfaust",
            "bwa3_carlgustav",
            "bwa3_pzf3",
            "bwa3_rgw90",
            "bwa3_comp_ace"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
