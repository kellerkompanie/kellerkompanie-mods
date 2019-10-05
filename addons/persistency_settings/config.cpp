#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleAddPersistencyMenu3den),
            QGVAR(modulePersistencyBlacklist3den),
            QGVAR(moduleSelectivePersistency3den),
            QGVAR(moduleAddPersistencyMenu),
            QGVAR(moduleManualLoad),
            QGVAR(moduleManualLoadCrates),
            QGVAR(moduleManualLoadPlayers),
            QGVAR(moduleManualLoadVehicles),
            QGVAR(moduleManualSave),
            QGVAR(moduleManualSaveCrates),
            QGVAR(moduleManualSavePlayers),
            QGVAR(moduleManualSaveVehicles),
            QGVAR(moduleEnablePersistency),
            QGVAR(moduleEditMoney)
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

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"
#include "ui\dialog_editMoney.hpp"
