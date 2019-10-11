#include "script_component.hpp"

params ["_player", "_vehicle"];

if(local _vehicle) then {
    private ["_existingTowRopes","_hitchPoint","_rope"];

    _existingTowRopes = _vehicle getVariable [QGVAR(towRopes),[]];
    if(count _existingTowRopes == 0) then {
        _hitchPoint = [_vehicle] call FUNC(getHitchPoints) select 1;
        _rope = ropeCreate [_vehicle, _hitchPoint, GVAR(maxRopeLength)];
        _vehicle setVariable [QGVAR(towRopes),[_rope],true];
        _player setVariable [QGVAR(towRopesVehicle), _vehicle];
        _this call FUNC(pickupTowRopes);
    };
} else {
    _this remoteExecCall [QFUNC(takeTowRopes), _vehicle];
};
