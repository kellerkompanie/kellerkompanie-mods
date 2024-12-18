#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(moduleAddTeleportDestination),
            QGVAR(moduleAddTeleportMenu),
            QGVAR(moduleAddTeleportDestination3den),
            QGVAR(moduleAddTeleportMenu3den),
            "keko_ModuleAddTeleportDestination3den",
            "keko_ModuleAddTeleportMenu3den"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "ace_modules"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"
#include "ui\dialog_teleport.hpp"
#include "ui\dialog_teleportDestination.hpp"
#include "ui\dialog_teleportMenu.hpp"
