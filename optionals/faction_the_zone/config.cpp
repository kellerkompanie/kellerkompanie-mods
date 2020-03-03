#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            /* OPFOR units */
            QGVAR(opfor_bandit1),
            QGVAR(opfor_bandit2),
            QGVAR(opfor_bandit3),
            QGVAR(opfor_bandit4),
            QGVAR(opfor_bandit5),
            QGVAR(opfor_bandit6),
            QGVAR(opfor_bandit7),
            QGVAR(opfor_bandit8),
            QGVAR(opfor_bandit9),
            QGVAR(opfor_bandit10),
            QGVAR(opfor_bandit11),
            QGVAR(opfor_bandit12),

            QGVAR(opfor_stalker1),
            QGVAR(opfor_stalker2),
            QGVAR(opfor_stalker3),
            QGVAR(opfor_stalker4),
            QGVAR(opfor_stalker5)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_main"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
