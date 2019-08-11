#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredAddons[] = {
            "keko_common",
            "A3_Weapons_F",
            "bwa3_loadorder",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons",
            "cba_jam"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
