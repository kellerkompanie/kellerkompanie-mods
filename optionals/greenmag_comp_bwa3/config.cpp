#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {
            "greenmag_ammo_46x30_basic_1Rnd",
            "greenmag_ammo_46x30_basic_10Rnd",
            "greenmag_ammo_46x30_basic_20Rnd",
            "greenmag_ammo_46x30_basic_30Rnd",
            "greenmag_ammo_46x30_basic_40Rnd",
            "greenmag_ammo_46x30_basic_50Rnd",
            "greenmag_ammo_46x30_basic_60Rnd",
            "greenmag_ammo_46x30_sd_1Rnd",
            "greenmag_ammo_46x30_sd_10Rnd",
            "greenmag_ammo_46x30_sd_20Rnd",
            "greenmag_ammo_46x30_sd_30Rnd",
            "greenmag_ammo_46x30_sd_40Rnd",
            "greenmag_ammo_46x30_sd_50Rnd",
            "greenmag_ammo_46x30_sd_60Rnd"
        };
        magazines[] = {};
        requiredAddons[] = {
            "greenmag_main",
            "bwa3_mp7"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"