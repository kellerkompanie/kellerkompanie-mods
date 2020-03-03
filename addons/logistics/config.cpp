#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(moduleAddLogisticsMenu),
            QGVAR(moduleAddLogisticsMenu3den),
            QGVAR(moduleSpawnCrate),
            QGVAR(moduleSupplyDrop),
            QGVAR(moduleHeliDrop),
            QGVAR(moduleCustomLogistics3den),
            QGVAR(moduleUAVBase3den),
            QGVAR(moduleAddCrate),
            "keko_ModuleAddLogisticsMenu3den",
            "keko_ModuleCustomLogistics3den"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "keko_loadout",
            "ace_modules",
            "ace_cargo"
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
#include "Cfg3DEN.hpp"

#include "defines.hpp"
#include "ui\dialog_logisticsMenu.hpp"
#include "ui\dialog_spawnCrate.hpp"
#include "ui\dialog_supplyDrop.hpp"
#include "ui\dialog_heliDrop.hpp"
