#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(autoKitItem),
            QGVAR(manualKitItem),
            QGVAR(FAKItem)
        };
        weapons[] = {
            QGVAR(autoKit),
            QGVAR(manualKit),
            QGVAR(FAK)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_main",
            "ace_medical",
            "adv_aceCPR",
            "adv_aceSplint",
            "kat_aceAirway"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

#include "ACE_Medical_Treatments.hpp"
