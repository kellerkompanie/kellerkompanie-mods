#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(moduleAddLogisticsMenu),
            QGVAR(moduleAddLogisticsMenu3den),
            QGVAR(moduleSpawnCrate),
            QGVAR(moduleSupplyDrop),
			QGVAR(moduleHeliDrop),
            QGVAR(moduleFuelConsumption3den),
            QGVAR(moduleCustomLogistics3den),
			"keko_ModuleAddLogisticsMenu3den",
			"keko_ModuleCustomLogistics3den"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
        	"3den",
            "keko_loadout",
            "ace_main",
            "ace_modules"};
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"
#include "ui\dialog_logisticsMenu.hpp"
#include "ui\dialog_spawnCrate.hpp"
#include "ui\dialog_supplyDrop.hpp"
#include "ui\dialog_heliDrop.hpp"
