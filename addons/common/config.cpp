#include "script_component.hpp"

cba_settings_whitelist[] = {"76561197987754545"};
enableTargetDebug = 1;
enableDebugConsole[] = {"76561197987754545"};

class CfgPatches {
    class ADDON {
    	name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleLimitWounds),
            QGVAR(moduleRespawnPosition),
            QGVAR(moduleRespawnPosition3den),
            QGVAR(moduleInitMission),
            QGVAR(moduleInitMission3den),
			QGVAR(moduleLightning),
            QGVAR(moduleRemoveAllActions),
            QGVAR(moduleLockDoors),
            QGVAR(moduleMissionSuccess),
            QGVAR(moduleMissionFail),
            QGVAR(moduleACEGarrison3den),
			QGVAR(moduleCuratorCamEars),

			"keko_ModuleInitMission3den",
			"keko_ModuleRespawnPosition3den",
			"keko_ModuleACEGarrison3den"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_main",
        	"3den",
            "ace_ai",
            "cba_main",
            "A3_Modules_F",
  			"A3_Modules_F_Curator" };
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
		VERSION_CONFIG_COMMON;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgVehicles.hpp"

#include "defines.hpp"

#include "ui\dialog_lockDoors.hpp"

#include "CfgEventHandlers.hpp"

// remove BI default missions
class CfgMissions {
	class MPMissions {};
};
