class CfgVehicles {

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            #include "ACE_SelfActions.hpp"
        };
    };

    class FlagCarrier;
    class keko_flag: FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Kellerkompanie)";

        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\x\keko\addons\common\ui\keko_flag.paa'";
        };
    };

    class Banner_01_base_F;
    class keko_banner: Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Banner (Kellerkompanie)";
        hiddenSelectionsTextures[] = {QPATHTOF(ui\keko_flag.paa)};
    };


    class Item_Base_F;
    class keko_RifleMagItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifle Mag";
        author = "Schwaggot";
        class TransportItems {
            class RifleMag {
                name = "keko_RifleMag";
                count = 1;
            };
        };
    };
    class keko_RifleMagTracerItem: keko_RifleMagItem {
        displayName = "Rifle Mag (Tracer)";
        class TransportItems {
            class RifleMagTracer {
                name = "keko_RifleMag_Tracer";
                count = 1;
            };
        };
    };

    class keko_MGMagItem: keko_RifleMagItem {
        displayName = "MG Mag";
        class TransportItems {
            class MGMag {
                name = "keko_MGMag";
                count = 1;
            };
        };
    };
    class keko_MGMagTracerItem: keko_MGMagItem {
        displayName = "MG Mag (Tracer)";
        class TransportItems {
            class MGMagTracer {
                name = "keko_MGMag_Tracer";
                count = 1;
            };
        };
    };

    class keko_PistolMagItem: keko_RifleMagItem {
        displayName = "Pistol Mag";
        class TransportItems {
            class PistolMag {
                name = "keko_PistolMag";
                count = 1;
            };
        };
    };

    class keko_UGLMagItem: keko_RifleMagItem {
        displayName = "UGL Mag";
        class TransportItems {
            class UGLMag {
                name = "keko_UGLMag";
                count = 1;
            };
        };
    };

    class keko_AntiTankMagItem: keko_RifleMagItem {
        displayName = "Anti-Tank Missile";
        model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
        class TransportItems {
            class AntiTankMag {
                name = "keko_AntiTankMag";
                count = 1;
            };
        };
    };

    class keko_AntiAirMagItem: keko_RifleMagItem {
        displayName = "Anti-Air Missile";
        model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        class TransportItems {
            class AntiAirMag {
                name = "keko_AntiAirMag";
                count = 1;
            };
        };
    };

    // visibility for air vehicles
    class Plane;
    class Plane_Base_F: Plane
    {
        featureType = 2;
    };
    class Helicopter;
    class Helicopter_Base_F: Helicopter
    {
        featureType = 2;
    };


    class Logic;
    class Module_F: Logic {
        class EventHandlers;
        class ModuleDescription;

        class AttributesBase
            {
                class Default;
                class Edit;
                class Combo;
                class Checkbox;
                class CheckboxNumber;
                class ModuleDescription;
                class Units;

                expression = "_this setVariable ['%s',_value];";
            };
    };

    class ModuleEndMission_F : Module_F {
        scopeCurator = 1;
        scope = 1;
    };

    class GVAR(moduleBase): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class GVAR(moduleBase3den): Module_F {
        author = "Schwaggot";
        category = "KEKO";
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        scope = 2;
        scopeCurator = 1;
    };
    class GVAR(moduleInitMission3den): GVAR(moduleBase3den)    {
        displayName        = "Initialize Mission";
        category           = QGVAR(Default);
        function           = QFUNC(moduleInitMission3den);
        icon = QPATHTOF(ui\icon_init.paa);

        class EventHandlers: EventHandlers {
            AttributesChanged3DEN = "_this call keko_common_fnc_3denAttributesChanged;";
        };

        class Attributes: AttributesBase {
            class MissionTitle: Edit {
                property = "keko_common_ModuleInit_MissionTitle";
                displayName = "Title";
                typeName = "STRING";
                defaultValue = "'Kellerkompanie Mission'";
            };
            class MissionAuthor: Edit {
                property = "keko_common_ModuleInit_MissionAuthor";
                displayName = "Author";
                typeName = "STRING";
                defaultValue = "profileName";
            };
            class MissionPicture: Edit {
                property = "keko_common_ModuleInit_MissionPicture";
                displayName = "Picture";
                typeName = "STRING";
                defaultValue = "'\x\keko\addons\common\pictures\intro.paa'";
            };
            class MissionPictureSubtitle: Edit {
                property = "keko_common_ModuleInit_MissionPictureSubtitle";
                displayName = "Picture Subtitle";
                typeName = "STRING";
                defaultValue = "'www.kellerkompanie.com'";
            };
            class SideRelations: Combo {
                property = "keko_common_ModuleInit_SideRelations";
                displayName="Independent verbündet mit";
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class opfBlu {name = "OPFOR + BLUFOR"; value = 3;};
                    class opf {name = "OPFOR"; value = 2;};
                    class blu {name = "BLUFOR"; value = 1;};
                    class none {name = "keiner"; value = 0;};
                };
            };
            class ModuleDescription: ModuleDescription{};
        };
    };
    class keko_ModuleInitMission3den: GVAR(moduleInitMission3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Initialize Mission";
        category           = QGVAR(Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleRespawnPosition3den): GVAR(moduleBase3den)    {
        displayName        = "Respawn Position";
        category           = QGVAR(Default);
        function           = QFUNC(moduleRespawnPosition3den);
        icon = QPATHTOF(ui\icon_destination.paa);

        class Attributes: AttributesBase {
            class RespawnSide: Combo {
                property = "keko_common_ModuleRespawn_Side";
                displayName = "Respawn Side";
                description = "Choose one";
                typeName = "NUMBER";
                defaultValue = 0;
                class Values
                {
                    class all        {name = "ALL";      value = 0;};
                    class blufor     {name = "BLUFOR";    value = 1;};
                    class indfor     {name = "INDFOR";    value = 2;};
                    class opfor      {name = "OPFOR";    value = 3;};
                    class civilian    {name = "CIVILIAN";    value = 4;};
                };
            };
        };
    };
    class keko_ModuleRespawnPosition3den: GVAR(moduleRespawnPosition3den) {
        displayName        = "(DEPRECATED - DO NOT USE) Respawn Position";
        category           = QGVAR(Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleACEGarrison3den): GVAR(moduleBase3den)    {
        displayName        = "(DEPRECATED - DO NOT USE) ACE AI Garrison";
        category           = QGVAR(Default);
        function           = QFUNC(moduleACEGarrison3den);
        icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Garrison_ca.paa";
        scope = 1;
        scopeCurator = 0;

        class Attributes: AttributesBase {
              class Radius: Edit {
                property = "keko_common_ModuleACEGarrison_Radius";
                displayName = "Radius";
                typeName = "STRING";
                defaultValue = "'100'";
            };
            class Teleport: Checkbox {
                property = "keko_common_ModuleACEGarrison_Teleport";
                displayName = "Teleport";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class TopDown: Checkbox {
                property = "keko_common_ModuleACEGarrison_TopDown";
                displayName = "Fill from top to bottom";
                typeName = "BOOL";
                defaultValue = 0;
            };
            class Mode: Combo {
                property = "keko_common_ModuleACEGarrison_Mode";
                displayName = "Mode";
                typeName = "NUMBER";
                defaultValue = 1;
                class Values {
                    class even {name = "Even filling"; value = 0;};
                    class building {name = "Building by building"; value = 1;};
                    class random {name = "Random filling"; value = 2;};
                };
            };
        };
    };
    class keko_ModuleACEGarrison3den: GVAR(moduleACEGarrison3den) {
        displayName        = "(DEPRECATED - DO NOT USE) ACE Garrison";
        category           = QGVAR(Deprecated);
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(moduleReplaceMagsWithTracers3den): GVAR(moduleBase3den)    {
        displayName        = "Replace Mags with Tracers";
        category           = QGVAR(Default);
        function           = QFUNC(moduleReplaceMagsWithTracers3den);

        class Attributes: AttributesBase {
            class GVAR(ReplaceSide): Combo {
                property = QGVAR(ReplaceSide);
                displayName = "Units";
                description = "Choose side of which to replace the mags";
                typeName = "NUMBER";
                defaultValue = 0;
                class Values
                {
                    class synchronized {name = "Only synchronized units/groups";      value = 0;};
                    class all        {name = "All";      value = 1;};
                    class blufor     {name = "BLUFOR";    value = 2;};
                    class indfor     {name = "INDFOR";    value = 3;};
                    class opfor      {name = "OPFOR";    value = 4;};
                };
            };
        };
    };
    class GVAR(moduleRespawnPosition): GVAR(moduleBase)    {
        displayName        = "Respawn Position";
        category           = QGVAR(Default);
        function           = QFUNC(moduleRespawnPosition);
        icon = QPATHTOF(ui\icon_destination.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleLimitWounds): GVAR(moduleBase) {
        displayName        = "Limit Wounds";
        category           = QGVAR(Default);
        function           = QFUNC(moduleLimitWounds);
        icon = QPATHTOF(ui\icon_full_heal.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleRemoveAllActions): GVAR(moduleBase) {
        displayName        = "Remove all menus";
        category           = QGVAR(Default);
        function           = QFUNC(moduleRemoveAllActions);
        icon = QPATHTOF(ui\icon_delete.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleLockDoors): GVAR(moduleBase) {
        displayName        = "(Un-)Lock Doors ";
        category           = QGVAR(Default);
        function           = QFUNC(moduleLockDoors);
        icon = QPATHTOF(ui\icon_lock.paa);
    };
    class GVAR(moduleMissionSuccess): GVAR(moduleBase) {
        displayName        = "End Mission (Success)";
        category           = QGVAR(ScenarioFlow);
        function           = QFUNC(moduleMissionEndSuccess);
        icon = QPATHTOF(ui\icon_success.paa);
    };
    class GVAR(moduleMissionFail): GVAR(moduleBase)    {
        displayName        = "End Mission (Fail)";
        category           = QGVAR(ScenarioFlow);
        function           = QFUNC(moduleMissionEndFail);
        icon = QPATHTOF(ui\icon_fail.paa);
    };
    class GVAR(moduleLightning): GVAR(moduleBase)    {
        displayName        = "Lightning without damage";
        category           = QGVAR(Default);
        function           = QFUNC(moduleLightning);
        icon="\a3\Modules_F_Curator\Data\iconLightning_ca.paa";
        portrait="\a3\Modules_F_Curator\Data\portraitLightning_ca.paa";
        isTriggerActivated=1;
        curatorCanAttach=1;
    };
    class GVAR(moduleCuratorCamEars): GVAR(moduleBase)    {
        displayName        = "Enable/Disable CuratorCam Ears";
        category           = QGVAR(Default);
        function           = QFUNC(moduleCuratorCamEars);
    };
    class GVAR(moduleUnflipVehicle): GVAR(moduleBase) {
        displayName        = "Unflip Vehicle";
        category           = QGVAR(Default);
        function           = QFUNC(moduleUnflipVehicle);
        icon = QPATHTOF(ui\icon_unflip_vehicle.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleMakeSpectator): GVAR(moduleBase) {
        displayName        = "Make Spectator";
        category           = QGVAR(Default);
        function           = QFUNC(moduleMakeSpectator);
        icon = QPATHTOF(ui\icon_make_spectator.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleDance): GVAR(moduleBase) {
        displayName        = "Dance";
        category           = QGVAR(Default);
        function           = QFUNC(moduleDance);
        icon = QPATHTOF(ui\icon_dance.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleResurrect): GVAR(moduleBase) {
        displayName        = "Resurrect AI";
        category           = QGVAR(Default);
        function           = QFUNC(moduleResurrect);
        icon = QPATHTOF(ui\icon_resurrect.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleFixMapBug): GVAR(moduleBase) {
        displayName        = "Fix Map Bug";
        category           = QGVAR(Default);
        function           = QFUNC(moduleFixMapBug);
        curatorCanAttach   = 1;
    };
};
