#include "script_component.hpp"

params ["_player", "_vehicle"];

if!(_vehicle call FUNC(isSupportedVehicle)) exitWith { false };

private _existingVehicle = _player getVariable [QGVAR(RopesVehicle), []];
if(count _existingVehicle > 0) exitWith { false };

private _existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];
if((count _existingRopes) == 0) exitWith { true };

private _activeRopes = _vehicle call FUNC(getActiveRopes);
if((count _existingRopes) > 0 && (count _existingRopes) == (count _activeRopes)) exitWith { false };

true;
