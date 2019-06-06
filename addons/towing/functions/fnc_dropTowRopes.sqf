#include "script_component.hpp"

params ["_player", "_vehicle"];

if(local _vehicle) then {
    private ["_helper"];
    _helper = (_player getVariable [QGVAR(towRopesPickUpHelper), objNull]);
    if(!isNull _helper) then {
        {
            _helper ropeDetach _x;
        } forEach (_vehicle getVariable [QGVAR(towRopes),[]]);
        detach _helper;
        deleteVehicle _helper;
    };
    _player setVariable [QGVAR(towRopesVehicle), nil, true];
    _player setVariable [QGVAR(towRopesPickUpHelper), nil, true];
} else {
    _this remoteExecCall [QFUNC(dropTowRopes), _vehicle];
};
