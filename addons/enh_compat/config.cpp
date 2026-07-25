#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "3denEnhanced"
        };
        // skipped instead of erroring when 3den Enhanced is not loaded
        skipWhenMissingDependencies = 1;
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "Cfg3DEN.hpp"
#include "Display3den.hpp"
#include "CfgEventHandlers.hpp"
