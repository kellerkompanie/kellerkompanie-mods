#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ModulePostprocess_F"
        };
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

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgPostProcessTemplates.hpp"
