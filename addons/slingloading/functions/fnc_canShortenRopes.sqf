#include "script_component.hpp"

params ["_vehicle"];

if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };

private _existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];
if((count _existingRopes) == 0) exitWith { false };

private _activeRopes = [_vehicle] call FUNC(getActiveRopes);
if((count _activeRopes) == 0) exitWith { false };

true;
