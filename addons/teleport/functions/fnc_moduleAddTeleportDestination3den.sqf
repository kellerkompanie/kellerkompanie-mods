#include "script_component.hpp"

private _logic = _this select 0;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};

private _destinationName = _logic getVariable ["teleportDestination", ""];

if (_destinationName == "") exitWith {
    ["WARNING: teleport destination module has no name set!!!"] remoteExec ["systemChat", [0, -2] select isDedicated];
};

private _allowBLUFOR = _logic getVariable ["allowBLUFOR", true];
private _allowINDFOR = _logic getVariable ["allowINDFOR", true];
private _allowOPFOR  = _logic getVariable ["allowOPFOR",  true];
private _allowCIV    = _logic getVariable ["allowCIV", true];

private _objects = synchronizedObjects _logic;
switch (count _objects) do {
    case 0: {
        [getPos _logic, _destinationName, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call FUNC(addTeleportDestination);
    };
    case 1: {
        private _objectPosition = getPos (_objects select 0);
        [_objectPosition, _destinationName, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call FUNC(addTeleportDestination);
    };
    default {
        ["WARNING: teleport destination module has cannot be synchronized to more than 1 object!!!"] remoteExec ["systemChat", [0, -2] select isDedicated];
    };
};
