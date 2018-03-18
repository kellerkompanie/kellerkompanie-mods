_logic = _this select 0;

diag_log text "[KEKO] (logistics) running moduleFuelConsumption3den";

if(isServer) then {
	keko_var_logistics_enableFuelConsumption = _logic getVariable "EnableFuelConsumption";
	keko_var_logistics_fuelConsumption_car = parseSimpleArray (_logic getVariable "ConsumptionCar");
	keko_var_logistics_fuelConsumption_truck = parseSimpleArray (_logic getVariable "ConsumptionTruck");
	keko_var_logistics_fuelConsumption_tank = parseSimpleArray (_logic getVariable "ConsumptionTank");
	keko_var_logistics_fuelConsumption_helo = parseSimpleArray (_logic getVariable "ConsumptionHelo");
	keko_var_logistics_fuelConsumption_plane = parseSimpleArray (_logic getVariable "ConsumptionPlane");

	publicVariable "keko_var_logistics_enableFuelConsumption";
	publicVariable "keko_var_logistics_fuelConsumption_car";
	publicVariable "keko_var_logistics_fuelConsumption_truck";
	publicVariable "keko_var_logistics_fuelConsumption_tank";
	publicVariable "keko_var_logistics_fuelConsumption_helo";
	publicVariable "keko_var_logistics_fuelConsumption_plane";

	deleteVehicle _logic;
};