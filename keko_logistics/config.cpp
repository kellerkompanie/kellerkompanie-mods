class CfgPatches
{
    class keko_logistics
    {
        units[] = {            
            "keko_ModuleAddLogisticsMenu",
            "keko_ModuleAddLogisticsMenu3den",
            "keko_ModuleSpawnCrate",
            "keko_ModuleSupplyDrop",
            "keko_ModuleFuelConsumption3den",
            "keko_ModuleCustomLogistics3den"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"3den",
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
    class keko_ModuleFuelConsumption3den: Module_F {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Fuel Consumption"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleFuelConsumption3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon               = "\keko_logistics\icons\icon_fuel.paa";

        class Attributes: AttributesBase
		{
			class EnableFuelConsumption: Checkbox {
            	property = "keko_logistics_ModuleFuel_Enable";
                displayName = "Give map";
                typeName = "BOOL";
                defaultValue = true;                
            };
			class ConsumptionCar: Edit {
				property = "keko_logistics_ModuleFuel_Car";
				displayName = "Consumption Car";
				typeName = "STRING"; 
				defaultValue = "'[0.0002, 0.0004, 0.0006]'";			
			};
			class ConsumptionTruck: Edit {
				property = "keko_logistics_ModuleFuel_Truck";
                displayName = "Consumption Truck";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0004, 0.0006]'";
            };
            class ConsumptionTank: Edit {
            	property = "keko_logistics_ModuleFuel_Tank";
            	displayName = "Consumption Tank";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0004, 0.0006]'";
            };
            class ConsumptionHelo: Edit {
            	property = "keko_logistics_ModuleFuel_Helo";
            	displayName = "Consumption Helo";
                typeName = "STRING";
                defaultValue = "'[0.0005, 0.0005, 0.0005]'";
            };
            class ConsumptionPlane: Edit {
            	property = "keko_logistics_ModuleFuel_Plane";
            	displayName = "Consumption Plane";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0005, 0.0009]'";
            };

			class ModuleDescription: ModuleDescription{};
		};
    };
    class keko_ModuleCustomLogistics3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Custom Crates"; 
        category           = "keko_category_logistics";
        function           = "keko_logistics_fnc_moduleCustomLogistics3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_logistics\icons\icon_crate.paa";       
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
            class moduleFuelConsumption3den {};

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

            class addFuelConsumptionHandler {};

            class moduleCustomLogistics3den {};
        };

        class init
        {
        	file = "keko_logistics\functions\init";
        	class postInit {postInit = 1;};
        };
    };
};

#include "\keko_logistics\functions\dialog_baseClasses.hpp"
#include "\keko_logistics\functions\dialog_logisticsMenu.hpp"
#include "\keko_logistics\functions\dialog_spawnCrate.hpp"
#include "\keko_logistics\functions\dialog_supplyDrop.hpp"