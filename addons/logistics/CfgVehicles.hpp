class CfgVehicles {
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

    class GVAR(moduleAddLogisticsMenu): GVAR(moduleBase) {
        displayName        = "Add Logistics Menu";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleAddLogisticsMenu);
        icon               = QPATHTOF(ui\icon_logistics.paa);
        curatorCanAttach   = 1;
    };
    class GVAR(moduleAddLogisticsMenu3den): GVAR(moduleBase3den) {
        displayName        = "Add Logistics Menu";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleAddLogisticsMenu3den);
        icon               = QPATHTOF(ui\icon_logistics.paa);
    };
	class keko_ModuleAddLogisticsMenu3den: GVAR(moduleAddLogisticsMenu3den) {
		displayName        = "(DEPRECATED - DO NOT USE) Add Logistics Menu";
        category           = QEGVAR(common,Deprecated);
	};
    class GVAR(moduleSpawnCrate): GVAR(moduleBase) {
        displayName        = "Spawn Crate";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleSpawnCrate);
        icon               = QPATHTOF(ui\icon_crate.paa);
    };
    class GVAR(moduleSupplyDrop): GVAR(moduleBase) {
        displayName        = "Supply Drop";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleSupplyDrop);
        icon               = QPATHTOF(ui\icon_paradrop.paa);
    };
	class GVAR(moduleHeliDrop): GVAR(moduleBase) {
        displayName        = "Heli Drop";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleHeliDrop);
        icon               = QPATHTOF(ui\icon_paradrop.paa);
    };
    class GVAR(moduleFuelConsumption3den): GVAR(moduleBase3den) {
        displayName        = "Fuel Consumption";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleFuelConsumption3den);
        icon               = QPATHTOF(ui\icon_fuel.paa);

        class Attributes: AttributesBase
		{
			class EnableFuelConsumption: Checkbox {
            	property = QGVAR(EnableFuelConsumption);
                displayName = "Give map";
                typeName = "BOOL";
                defaultValue = true;
            };
			class ConsumptionCar: Edit {
				property = QGVAR(ConsumptionCar);
				displayName = "Consumption Car";
				typeName = "STRING";
				defaultValue = "'[0.0002, 0.0004, 0.0006]'";
			};
			class ConsumptionTruck: Edit {
				property = QGVAR(ConsumptionTruck);
                displayName = "Consumption Truck";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0004, 0.0006]'";
            };
            class ConsumptionTank: Edit {
            	property = QGVAR(ConsumptionTank);
            	displayName = "Consumption Tank";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0004, 0.0006]'";
            };
            class ConsumptionHelo: Edit {
            	property = QGVAR(ConsumptionHelo);
            	displayName = "Consumption Helo";
                typeName = "STRING";
                defaultValue = "'[0.0005, 0.0005, 0.0005]'";
            };
            class ConsumptionPlane: Edit {
            	property = QGVAR(ConsumptionPlane);
            	displayName = "Consumption Plane";
                typeName = "STRING";
                defaultValue = "'[0.0002, 0.0005, 0.0009]'";
            };

			class ModuleDescription: ModuleDescription{};
		};
    };
    class GVAR(moduleCustomLogistics3den): GVAR(moduleBase3den) {
        displayName        = "Custom Crates";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleCustomLogistics3den);
        icon 			   = QPATHTOF(ui\icon_crate.paa);
    };
	class GVAR(moduleUAVBase3den): GVAR(moduleBase3den) {
        displayName        = "UAV Supply Base";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleUAVBase3den);
        icon 			   = QPATHTOF(ui\icon_uav.paa);
    };
	class GVAR(moduleHeliEntry3den): GVAR(moduleBase3den) {
        displayName        = "Heli Entry";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleHeliEntry3den);
    };
	class GVAR(moduleHeliExit3den): GVAR(moduleBase3den) {
        displayName        = "Heli Exit";
        category           = QGVAR(Logistics);
        function           = QFUNC(moduleHeliExit3den);
    };
	class keko_ModuleCustomLogistics3den: GVAR(moduleCustomLogistics3den) {
		displayName        = "(DEPRECATED - DO NOT USE) Custom Crates";
        category           = QEGVAR(common,Deprecated);
	};
};
