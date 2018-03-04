class CfgPatches
{
    class keko_logistics
    {
        units[] = {            
            "keko_ModuleAddLogisticsMenu",
            "keko_ModuleAddLogisticsMenu3den",
            "keko_ModuleSpawnCrate",
            "keko_ModuleSupplyDrop"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
            "keko_loadout",
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
    class keko_category_logistics: NO_CATEGORY
    {
        displayName = "Kellerkompanie Logistics";
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
    class keko_ModuleAddLogisticsMenu: Module_F {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Logistics Menu"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleAddLogisticsMenu";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        icon               = "\keko_logistics\icons\icon_logistics.paa";
        curatorCanAttach   = 1;
    };
    class keko_ModuleAddLogisticsMenu3den: Module_F {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Logistics Menu"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleAddLogisticsMenu3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon               = "\keko_logistics\icons\icon_logistics.paa";
    };
    class keko_ModuleSpawnCrate: Module_F {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Spawn Crate"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleSpawnCrate";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon               = "\keko_logistics\icons\icon_crate.paa";
    };
    class keko_ModuleSupplyDrop: Module_F {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Supply Drop"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleSupplyDrop";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon               = "\keko_logistics\icons\icon_paradrop.paa";
    };
};

class CfgFunctions 
{
    class keko_logistics 
    {
        tag = "keko_logistics";
        class logistics 
        {
            file = "keko_logistics\functions";

            class moduleAddLogisticsMenu {};  
            class moduleAddLogisticsMenu3den {};
            class moduleSpawnCrate {};
            class moduleSupplyDrop {};

            class dialogLogisticsMenuInit {};
            class dialogLogisticsMenuCallback {};
            class dialogSpawnCrateInit {};
            class dialogSpawnCrateCallback {};
            class dialogSupplyDropInit {};
            class dialogSupplyDropCallback {};

            class addLogisticsMenu {};
            class spawnCrate {};  
            class supplyDrop {};
            class fillCrate {}; 
            class clearCargo {};         
        };
    };
};

#include "\keko_logistics\functions\dialog_baseClasses.hpp"
#include "\keko_logistics\functions\dialog_logisticsMenu.hpp"
#include "\keko_logistics\functions\dialog_spawnCrate.hpp"
#include "\keko_logistics\functions\dialog_supplyDrop.hpp"