#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
	QGVAR(customLogistics), // key/reference variable
	"LIST", // type of setting
	["Logistics", "Enable/Disable logistics"], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[0,1,2], // values
		["Disabled","Default","Custom"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;


[
	QGVAR(accessLevel), // key/reference variable
	"LIST", // type of setting
	["Access Level: Logistics Menu", "Who may spawn crates? Zeus may always."], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[
			ACCESS_EVERYONE,
			ACCESS_CORPORAL,
			ACCESS_SERGEANT,
			ACCESS_LIEUTENANT,
			ACCESS_ENGINEERS,
			ACCESS_JTAC,
			ACCESS_ZEUS
		],
		[
			"Everyone",
			"Corporal/FTL and up",
			"Sergeant/SQL and up",
			"Lead/Lt. and up",
			"Engineers only",
			"JTACs only",
			"Zeus only"
		], // names
		2 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(virtualHeliLogistics), // key/reference variable
	"LIST", // type of setting
	["Access Level", "Enable/Disable virtual heli logistics."], // name and tooltip
	[localize LSTRING(cbaSettingsCategory), "Heli Logistics"], // category
	[
		[
			ACCESS_DISABLED,
			ACCESS_EVERYONE,
			ACCESS_CORPORAL,
			ACCESS_SERGEANT,
			ACCESS_LIEUTENANT,
			ACCESS_UAVOPERATOR,
			ACCESS_JTAC,
			ACCESS_ZEUS
		],
		[
			"Disabled",
			"Everyone",
			"Corporal/FTL and up",
			"Sergeant/SQL and up",
			"Lead/Lt. and up",
			"UAV Operators only",
			"JTACs only",
			"Zeus only"
		], // names
		3 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(virtualHeliAmount),
	"SLIDER",
	["Heli amount", "Set how many Heli drops are initially available. -1 for unlimited."],
	[localize LSTRING(cbaSettingsCategory), "Heli Logistics"],
	[-1, 50, -1, 0],
	1
] call cba_settings_fnc_init;

[
	QGVAR(virtualUAVLogistics), // key/reference variable
	"LIST", // type of setting
	["Access level", "Enable/Disable virtual UAV logistics."], // name and tooltip
	[localize LSTRING(cbaSettingsCategory), "UAV Logistics"], // category
	[
		[
			ACCESS_DISABLED,
			ACCESS_EVERYONE,
			ACCESS_CORPORAL,
			ACCESS_SERGEANT,
			ACCESS_LIEUTENANT,
			ACCESS_UAVOPERATOR,
			ACCESS_JTAC,
			ACCESS_ZEUS
		],
		[
			"Disabled",
			"Everyone",
			"Corporal/FTL and up",
			"Sergeant/SQL and up",
			"Lead/Lt. and up",
			"UAV Operators only",
			"JTACs only",
			"Zeus only"
		], // names
		3 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(virtualUAVLimit),
	"SLIDER",
	["UAV limit", "Set the maximum allowed number of simultaneous UAVs. -1 for unlimited."],
	[localize LSTRING(cbaSettingsCategory), "UAV Logistics"],
	[-1, 20, -1, 0],
	1
] call cba_settings_fnc_init;

GVAR(currentUAVs) = 0;
["keko_loadout_onUAVReturned", {GVAR(currentUAVs) = GVAR(currentUAVs) - 1;}] call CBA_fnc_addEventHandler;

[
	QGVAR(virtualUAVAmount),
	"SLIDER",
	["UAV amount", "Set how many UAVs are initially available. -1 for unlimited."],
	[localize LSTRING(cbaSettingsCategory), "UAV Logistics"],
	[-1, 50, -1, 0],
	1
] call cba_settings_fnc_init;

[
	QGVAR(automaticUAVReturn),
	"SLIDER",
	["Automatic return", "Set after how many seconds UAV should automatically return to base."],
	[localize LSTRING(cbaSettingsCategory), "UAV Logistics"],
	[-1, 1200, 600, 0],
	1
] call cba_settings_fnc_init;








// Fuel Consumption Settings

[
	QGVAR(enableFuelConsumption), // key/reference variable
	"LIST", // type of setting
	["Fuel Consumption", "Enable/Disable fuel consumption"], // name and tooltip
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"], // category
	[
		[true, false], // values
		["Enabled", "Disabled"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;



[
	QGVAR(consumptionCarLow),
	"SLIDER",
	["Car fuel consumption (low speed)", "Set the fuel consumption of cars on low speed (<5 km/h)."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0002, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionCarMid),
	"SLIDER",
	["Car fuel consumption (mid speed)", "Set the fuel consumption of cars on normal speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0004, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionCarHigh),
	"SLIDER",
	["Car fuel consumption (high speed)", "Set the fuel consumption of cars on high speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0006, 4],
	1
] call cba_settings_fnc_init;



[
	QGVAR(consumptionTruckLow),
	"SLIDER",
	["Truck fuel consumption (low speed)", "Set the fuel consumption of trucks on low speed (<5 km/h)."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0002, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionTruckMid),
	"SLIDER",
	["Truck fuel consumption (mid speed)", "Set the fuel consumption of trucks on normal speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0004, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionTruckHigh),
	"SLIDER",
	["Truck fuel consumption (high speed)", "Set the fuel consumption of trucks on high speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0006, 4],
	1
] call cba_settings_fnc_init;




[
	QGVAR(consumptionTankLow),
	"SLIDER",
	["Tank fuel consumption (low speed)", "Set the fuel consumption of tanks on low speed (<5 km/h)."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0002, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionTankMid),
	"SLIDER",
	["Tank fuel consumption (mid speed)", "Set the fuel consumption of tanks on normal speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0004, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionTankHigh),
	"SLIDER",
	["Tank fuel consumption (high speed)", "Set the fuel consumption of tanks on high speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0006, 4],
	1
] call cba_settings_fnc_init;




[
	QGVAR(consumptionHeloLow),
	"SLIDER",
	["Helo fuel consumption (low speed)", "Set the fuel consumption of helos on low speed (<5 km/h)."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0005, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionHeloMid),
	"SLIDER",
	["Helo fuel consumption (mid speed)", "Set the fuel consumption of helos on normal speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0005, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionHeloHigh),
	"SLIDER",
	["Helo fuel consumption (high speed)", "Set the fuel consumption of helos on high speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0005, 4],
	1
] call cba_settings_fnc_init;




[
	QGVAR(consumptionPlaneLow),
	"SLIDER",
	["Plane fuel consumption (low speed)", "Set the fuel consumption of plane on low speed (<5 km/h)."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0002, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionPlaneMid),
	"SLIDER",
	["Plane fuel consumption (mid speed)", "Set the fuel consumption of plane on normal speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0005, 4],
	1
] call cba_settings_fnc_init;

[
	QGVAR(consumptionPlaneHigh),
	"SLIDER",
	["Plane fuel consumption (high speed)", "Set the fuel consumption of plane on high speed."],
	[localize LSTRING(cbaSettingsCategory), "Fuel Consumption"],
	[0.0001, 1, 0.0009, 4],
	1
] call cba_settings_fnc_init;










ADDON = true;
