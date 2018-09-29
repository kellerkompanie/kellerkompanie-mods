#include "script_component.hpp"

private _logic = _this select 0;

INFO("running moduleFuelConsumption3den");

if(isServer) then {
	GVAR(enableFuelConsumption) = _logic getVariable "EnableFuelConsumption";
	GVAR(fuelConsumption_car) = parseSimpleArray (_logic getVariable "ConsumptionCar");
	GVAR(fuelConsumption_truck) = parseSimpleArray (_logic getVariable "ConsumptionTruck");
	GVAR(fuelConsumption_tank) = parseSimpleArray (_logic getVariable "ConsumptionTank");
	GVAR(fuelConsumption_helo) = parseSimpleArray (_logic getVariable "ConsumptionHelo");
	GVAR(fuelConsumption_plane) = parseSimpleArray (_logic getVariable "ConsumptionPlane");

	publicVariable QGVAR(enableFuelConsumption);
	publicVariable QGVAR(fuelConsumption_car);
	publicVariable QGVAR(fuelConsumption_truck);
	publicVariable QGVAR(fuelConsumption_tank);
	publicVariable QGVAR(fuelConsumption_helo);
	publicVariable QGVAR(fuelConsumption_plane);

	deleteVehicle _logic;
};
