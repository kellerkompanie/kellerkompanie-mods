#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleRunGarbageCollection),
            QGVAR(moduleBlacklist)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
