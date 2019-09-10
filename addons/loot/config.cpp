#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "ace_interact_menu"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
<<<<<<< HEAD
#include "CfgVehicles.hpp"
=======
>>>>>>> ff19bf143d7f7f134cc0d9a6e268a197dbd9fa3f
