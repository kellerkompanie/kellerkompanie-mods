#include "script_component.hpp"

params ["_vehicle"];

private ["_existingRopes","_activeRopes"];

if(player distance _vehicle > 10) exitWith { false };

if!([_vehicle] call FUNC(isSupportedVehicle)) exitWith { false };

_existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];

if((count _existingRopes) == 0) exitWith { false };

_activeRopes = [_vehicle] call FUNC(getActiveRopesWithCargo);

if((count _activeRopes) == 0) exitWith { false };

true;
