#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleAddLoadoutMenu),
            QGVAR(moduleAddLoadoutMenu3den),
            QGVAR(moduleCustomLoadouts3den),
            QGVAR(moduleApplyLoadout),
            "keko_ModuleAddLoadoutMenu3den",
            "keko_ModuleCustomLoadouts3den",
            QGVAR(moduleAddLoadouts3den),
            QGVAR(moduleModifyLoadout3den)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_main",
            "ace_modules",
            "keko_faction_generic"};
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

#include "ui\dialog_loadoutMenu.hpp"
#include "ui\dialog_applyLoadout.hpp"

class kekoFactions {
    #include "factions\Faction.hpp"
};
