#include "script_component.hpp"

private _logic = _this select 0;

if !(isServer) exitWith {};

private _pos = getPos _logic;

_pos = [_pos select 0, _pos select 1, 100];

GVAR(heliEntryPoint) = _pos;
publicVariable QGVAR(heliEntryPoint);

deleteVehicle _logic;
