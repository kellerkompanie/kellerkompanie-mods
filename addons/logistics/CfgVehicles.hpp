class CfgVehicles {
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
    class GVAR(moduleBase): Module_F {
        category = "KEKO";
        scope              = 1; 
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        function = QEFUNC(common,dummy);
    };
    class GVAR(moduleBase3den): Module_F {
        category = "KEKO";
        scope              = 2; 
        scopeCurator       = 1;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        function = QEFUNC(common,dummy);
    };

    class keko_ModuleAddLogisticsMenu: GVAR(moduleBase) {        
        displayName        = "Add Logistics Menu"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleAddLogisticsMenu);        
        icon               = QPATHTOF(ui\icon_logistics.paa);
        curatorCanAttach   = 1;
    };
    class keko_ModuleAddLogisticsMenu3den: Module_F {
        displayName        = "Add Logistics Menu"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleAddLogisticsMenu3den);
        icon               = QPATHTOF(ui\icon_logistics.paa);
    };
    class keko_ModuleSpawnCrate: GVAR(moduleBase) {
        displayName        = "Spawn Crate"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleSpawnCrate);
        icon               = QPATHTOF(ui\icon_crate.paa);
    };
    class keko_ModuleSupplyDrop: GVAR(moduleBase) {
        displayName        = "Supply Drop"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleSupplyDrop);
        icon               = QPATHTOF(ui\icon_paradrop.paa);
    };
    class keko_ModuleFuelConsumption3den: GVAR(moduleBase3den) {
        displayName        = "Fuel Consumption"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleFuelConsumption3den);
        icon               = QPATHTOF(ui\icon_fuel.paa);

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
    class keko_ModuleCustomLogistics3den: GVAR(moduleBase3den)
    {
        displayName        = "Custom Crates"; 
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleCustomLogistics3den);
        icon = QPATHTOF(ui\icon_crate.paa);       
    };
};