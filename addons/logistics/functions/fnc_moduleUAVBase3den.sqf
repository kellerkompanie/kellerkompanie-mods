#include "script_component.hpp"

if (isServer) then {
	params ["_logic"];
	private _pos = getPos _logic;

	GVAR(uavSupplyBase) = _pos;
	publicVariable QGVAR(uavSupplyBase);

	deleteVehicle _logic;
};
