#include "script_component.hpp"

params ["_player", "_vehicle"];

if(local _vehicle) then {
    private ["_attachedObj","_helper"];
    {
        _attachedObj = _x;
        {
            _attachedObj ropeDetach _x;
        } forEach (_vehicle getVariable [QGVAR(towRopes),[]]);
        deleteVehicle _attachedObj;
    } forEach ropeAttachedObjects _vehicle;
    _helper = "Land_Can_V2_F" createVehicle position _player;
    {
        [_helper, [0, 0, 0], [0,0,-1]] ropeAttachTo _x;
        _helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
    } forEach (_vehicle getVariable [QGVAR(towRopes),[]]);
    hideObject _helper;
    [_helper] remoteExec [QFUNC(hideObjectGlobal), [0, 2] select isDedicated];
    _player setVariable [QGVAR(towRopesVehicle), _vehicle,true];
    _player setVariable [QGVAR(towRopesPickUpHelper), _helper,true];
} else {
    _this remoteExecCall [QFUNC(pickupTowRopes), _vehicle];
};
