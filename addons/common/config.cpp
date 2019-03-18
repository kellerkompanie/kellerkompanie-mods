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

            keko_RifleMagItem,
            keko_MGMagItem,
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
            keko_MGMag,
            keko_PistolMag,
            keko_UGLMag,
            keko_AntiTankMag,
            keko_AntiAirMag,
            keko_DisposableRocketLauncher,
            keko_AntiTankLauncher,
            keko_AntiAirLauncher
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_main",
            "3den",
            "ace_ai",
            "ace_hearing",
            "cba_main",
            "A3_Modules_F",
            "A3_Modules_F_Curator",
            "A3_Weapons_F",
            "A3_Weapons_F_Launchers_NLAW",
            "A3_Weapons_F_Launchers_Titan",
            "acex_headless",
            "3denEnhanced",
            "A3_Air_F_Beta",
            "A3_Air_F_Gamma_Plane_Fighter_03",
            "A3_Air_F_EPC_Plane_CAS_01",
            "A3_Air_F_EPC_Plane_CAS_02",
            "A3_Air_F_Exp_Plane_Civil_01",
            "A3_Air_F_Jets_Plane_Fighter_01",
            "A3_Air_F_Jets_Plane_Fighter_02",
            "A3_Air_F_Jets_Plane_Fighter_04",
            "A3_Air_F_Jets_UAV_05",
            "A3_Air_F",
            "A3_Air_F_Heli",
            "A3_Weapons_F_Jets",
            "A3_Armor_F_Beta_APC_Tracked_01",
            "A3_Armor_F_Beta_APC_Tracked_02",
            "A3_Armor_F_Gamma_MBT_01",
            "A3_Armor_F_Gamma_MBT_02",
            "A3_Armor_F_EPB_APC_Tracked_03",
            "A3_Armor_F_EPB_MBT_03",
            "A3_Soft_F",
            "A3_Soft_F_Exp_Offroad_02"
        };
        author = ECSTRING(common,Schwaggot);
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

#include "defines.hpp"

#include "ui\dialog_lockDoors.hpp"
#include "ui\dialog_changeGroupName.hpp"

#include "CfgEventHandlers.hpp"

// remove BI default missions
class CfgMissions {
    class MPMissions {};
};
