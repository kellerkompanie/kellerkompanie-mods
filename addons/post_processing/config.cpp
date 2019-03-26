#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ModulePostprocess_F"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Modules_F_Curator",
            "A3_Modules_F_Events"
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
