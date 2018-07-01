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
            "keko_common",
            "ace_main",
            "ace_modules"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;       
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_category_teleport: NO_CATEGORY
    {
        displayName = "Kellerkompanie Teleport";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
        };
    };
    class keko_ModuleAddTeleportDestination3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Fast-Travel Destination"; 
        category           = "keko_category_teleport";
        function           = "keko_teleport_fnc_moduleAddTeleportDestination3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_dest_icon.paa";

        class Arguments: ArgumentsBaseUnits {
            class teleportDestination {
                displayName = "Destination name";
                description = "The name of the Fast-Travel destination";
                typeName = "STRING";
            };
            class allowBLUFOR {
                displayName = "BLUFOR";
                description = "Allow BLUFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowINDFOR {
                displayName = "INDFOR";
                description = "Allow INDFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowOPFOR {
                displayName = "OPFOR";
                description = "Allow OPFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowCIV {
                displayName = "Civilian";
                description = "Allow Civilian to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
        };
    };
    class keko_ModuleAddTeleportMenu3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Fast-Travel Menu"; 
        category           = "keko_category_teleport";
        function           = "keko_teleport_fnc_moduleAddTeleportMenu3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_teleport\icons\teleport_menu_icon.paa";

        class Arguments: ArgumentsBaseUnits {
            class allowBLUFOR {
                displayName = "BLUFOR";
                description = "Allow BLUFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowINDFOR {
                displayName = "INDFOR";
                description = "Allow INDFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowOPFOR {
                displayName = "OPFOR";
                description = "Allow OPFOR to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
            class allowCIV {
                displayName = "Civilian";
                description = "Allow Civilian to travel here.";
                typeName = "BOOL";
                defaultValue = true;
            };
        };
    };
    class keko_ModuleAddTeleportDestination: Module_F
    {
        displayName        = "Add Fast-Travel Destination";
        icon               = "\keko_teleport\icons\teleport_dest_icon.paa"; 
        category           = "keko_category_teleport";
        function           = "keko_teleport_fnc_moduleAddTeleportDestination";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;        
        scope              = 1; 
        scopeCurator       = 2;
    };
    class keko_ModuleAddTeleportMenu: Module_F
    {
        displayName        = "Add Fast-Travel Menu"; 
        icon               = "\keko_teleport\icons\teleport_menu_icon.paa";
        category           = "keko_category_teleport";
        function           = "keko_teleport_fnc_moduleAddTeleportMenu";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;        
        scope              = 1; 
        scopeCurator       = 2;
        curatorCanAttach   = 1;       
    };
};

class CfgFunctions 
{
    class keko_teleport 
    {
        tag = "keko_teleport";
        class teleport 
        {
            file = "keko_teleport\functions";
            class addTeleportDestination {};
            class addTeleportMenu {};
            class dialogTeleportInit {};
            class dialogTeleport {};
            class dialogJump {};
            class dialogTeleportDestination {};
            class dialogTeleportMenu {};
            class moduleAddTeleportDestination3den {};
            class moduleAddTeleportMenu3den {}; 
            class moduleAddTeleportDestination {};
            class moduleAddTeleportMenu {};  
            class createMarker{}; 
            class dialogMenuInit{};
            class dialogDestinationInit{};
        };
    };
};

#include "\keko_teleport\functions\dialog_baseClasses.hpp"
#include "\keko_teleport\functions\dialog_teleport.hpp"
#include "\keko_teleport\functions\dialog_teleportDestination.hpp"
#include "\keko_teleport\functions\dialog_teleportMenu.hpp"