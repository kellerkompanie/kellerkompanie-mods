#include "script_component.hpp"

params ["_vehicle"];

private ["_existingRopes","_activeRopes"];

if(player distance _vehicle > 10) exitWith { false };

if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };

_existingVehicle = player getVariable [QGVAR(RopesVehicle), []];

if(count _existingVehicle > 0) exitWith { false };

_existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];

if((count _existingRopes) == 0) exitWith { true };

_activeRopes = [_vehicle] call FUNC(getActiveRopes);

if((count _existingRopes) > 0 && (count _existingRopes) == (count _activeRopes)) exitWith { false };

true;
