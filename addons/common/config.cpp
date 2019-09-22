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
            QGVAR(moduleUnflipVehicle),
            QGVAR(moduleMakeSpectator),
            QGVAR(moduleDance),
            QGVAR(moduleResurrect),

            keko_RifleMagItem,
            keko_RifleMagTracerItem,
            keko_MGMagItem,
            keko_MGMagTracerItem,
            keko_PistolMagItem,
            keko_UGLMagItem,
            keko_AntiTankMagItem,
            keko_AntiAirMagItem,

            "keko_ModuleInitMission3den",
            "keko_ModuleRespawnPosition3den",
            "keko_ModuleACEGarrison3den"
        };
        weapons[] = {
            keko_RifleMag,
            keko_RifleMag_Tracer,
            keko_MGMag,
            keko_MGMag_Tracer,
            keko_PistolMag,
            keko_UGLMag,
            keko_AntiTankMag,
            keko_AntiAirMag,
            keko_DisposableRocketLauncher,
            keko_AntiTankLauncher,
            keko_AntiAirLauncher,

            GVAR(canteen_generic),
            GVAR(painkiller_generic),
            GVAR(cigpack_generic),
            GVAR(lighter_generic),
            GVAR(matches_generic),
            GVAR(lollipop_generic)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_main",
            "ace_ai",
            "ace_hearing",
            "acex_main",
            "3denEnhanced"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG_COMMON;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgFunctions.hpp"
#include "CfgMarkers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "Cfg3DEN.hpp"
#include "CfgActions.hpp"
#include "CfgInGameUI.hpp"
#include "CfgMoves.hpp"
#include "Display3den.hpp"

#include "defines.hpp"

#include "ui\dialog_lockDoors.hpp"
#include "ui\dialog_changeGroupName.hpp"

#include "CfgEventHandlers.hpp"

// remove BI default missions
class CfgMissions {
    class MPMissions {};
};

#include "kekoGenericMagazines.hpp"
