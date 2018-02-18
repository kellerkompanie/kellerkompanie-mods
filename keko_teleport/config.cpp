class CfgPatches
{
    class keko_teleport
    {
        units[] = {
            "keko_ModuleAddTeleportDestination",
            "keko_ModuleAddTeleportMenu",
            "keko_ModuleAddTeleportDestination3den",
            "keko_ModuleAddTeleportMenu3den"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
            "A3_UI_F",
            "A3_UI_F_Curator",
            "A3_Functions_F",
            "A3_Functions_F_Curator",
            "A3_Modules_F",
            "A3_Modules_F_Curator"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;       
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_kellerkompanie: NO_CATEGORY
    {
        displayName = "Kellerkompanie";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ArgumentsBaseUnits;
        class ModuleDescription;
    };
    class keko_ModuleAddTeleportDestination3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Fast-Travel Destination"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddTeleportDestination3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_dest_icon.paa";
        picture = "\keko_teleport\icons\teleport_dest_icon.paa";
        portrait = "\keko_teleport\icons\teleport_dest_icon.paa";

        class Arguments: ArgumentsBaseUnits {
            class teleportDestination {
                displayName = "Destination name";
                description = "The name of the Fast-Travel destination";
                typeName = "STRING";
            };
        };
    };
    class keko_ModuleAddTeleportMenu3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Fast-Travel Menu"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddTeleportMenu3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_menu_icon.paa";
        picture = "\keko_teleport\icons\teleport_menu_icon.paa";
        portrait = "\keko_teleport\icons\teleport_menu_icon.paa";
    };
    class keko_ModuleAddTeleportDestination: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Fast-Travel Destination"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddTeleportDestination";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_dest_icon.paa";
        picture = "\keko_teleport\icons\teleport_dest_icon.paa";
        portrait = "\keko_teleport\icons\teleport_dest_icon.paa";
    };
    class keko_ModuleAddTeleportMenu: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Fast-Travel Menu"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddTeleportMenu";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_menu_icon.paa";
        picture = "\keko_teleport\icons\teleport_menu_icon.paa";
        portrait = "\keko_teleport\icons\teleport_menu_icon.paa";
    };
};

class CfgFunctions 
{
    class keko_teleport 
    {
        tag = "keko";
        class teleport 
        {
            file = "keko_teleport\functions";
            class addTeleportDestination {};
            class addTeleportMenu {};
            class dialogTeleportInit {};
            class dialogTeleport {};
            class dialogJump {};
            class dialogTeleportDestination {};
            class moduleAddTeleportDestination3den {};
            class moduleAddTeleportMenu3den {}; 
            class moduleAddTeleportDestination {};
            class moduleAddTeleportMenu {};            
        };
    };
};

#include "\keko_teleport\functions\RscBaseClasses.hpp"
#include "\keko_teleport\functions\teleportDialog.hpp"
#include "\keko_teleport\functions\teleportDestinationDialog.hpp"