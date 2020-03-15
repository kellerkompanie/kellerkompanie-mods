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
            "fow_weapons_c",
            "cba_jam",
            "WW2_Assets_c_Characters_Germans_c_GER_Wehrmacht_Gear",
            "WW2_Core_c_WW2_EditorPreviews_c",
            "fow_characters_c"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
