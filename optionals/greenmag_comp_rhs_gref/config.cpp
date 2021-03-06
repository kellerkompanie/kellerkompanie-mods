#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {
            "greenmag_ammo_792x57_basic_1Rnd",
            "greenmag_ammo_792x57_basic_10Rnd",
            "greenmag_ammo_792x57_basic_20Rnd",
            "greenmag_ammo_792x57_basic_30Rnd",
            "greenmag_ammo_792x57_basic_40Rnd",
            "greenmag_ammo_792x57_basic_50Rnd",
            "greenmag_ammo_792x57_basic_60Rnd",
            "greenmag_ammo_792x57_tracer_1Rnd",
            "greenmag_ammo_792x57_tracer_10Rnd",
            "greenmag_ammo_792x57_tracer_20Rnd",
            "greenmag_ammo_792x57_tracer_30Rnd",
            "greenmag_ammo_792x57_tracer_40Rnd",
            "greenmag_ammo_792x57_tracer_50Rnd",
            "greenmag_ammo_792x57_tracer_60Rnd"
        };
        magazines[] = {};
        requiredAddons[] = {
            "greenmag_main",
            "rhsgref_c_weapons",
            "rhsgref_weapons2"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"