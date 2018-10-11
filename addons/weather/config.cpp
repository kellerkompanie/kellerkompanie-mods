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
            "cba_main",
			"ace_zeus"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "ui\snow_defines.hpp"
#include "ui\snow.hpp"
#include "ui\dust_defines.hpp"
#include "ui\dust.hpp"

#include "CfgSounds.hpp"
