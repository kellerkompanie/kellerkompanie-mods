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
            "cba_jam",

            "Redd_Vehicles_Main",
            "Redd_Tank_Gepard_1A2",
            "Redd_Tank_Fuchs_1A4",
            "Redd_Milan_Static",
            "Redd_Marder_1A5",
            "Redd_Tank_LKW_leicht_gl",
            "Redd_Tank_M120_Tampella",
            "Redd_Tank_Wiesel_1A2_TOW",
            "Redd_Tank_Wiesel_1A4_MK20"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
