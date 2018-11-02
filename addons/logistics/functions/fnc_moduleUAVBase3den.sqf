#include "script_component.hpp"

private _logic = _this select 0;

if !(isServer) exitWith {};

private _pos = getPos _logic;

GVAR(uavSupplyBase) = _pos;
publicVariable QGVAR(uavSupplyBase);

deleteVehicle _logic;
