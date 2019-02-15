#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleAddIntel),
            QGVAR(moduleAddIntel3den),
			"keko_ModuleAddIntel3den"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
        	"3den",
            "ace_main",
            "ace_modules",
            "cba_main" };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"
#include "ui\dialog_intel.hpp"
