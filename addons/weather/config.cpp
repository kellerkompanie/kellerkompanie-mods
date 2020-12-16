#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleSnowStorm),
            QGVAR(moduleDustStorm),
            QGVAR(moduleTornado),
            QGVAR(moduleDisableStorm)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "ace_zeus",

            /* based on https://steamcommunity.com/sharedfiles/filedetails/?id=1397683809 */
            "A3_Map_Tanoabuka",
            "A3_Map_Altis",
            "A3_Map_Stratis",
            "A3_Map_Malden",
            "A3_Map_Data"
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
#include "ui\snow_defines.hpp"
#include "ui\snow.hpp"
//#include "ui\dust_defines.hpp"
#include "ui\dust.hpp"


#include "CfgSounds.hpp"
#include "CfgWorlds.hpp"