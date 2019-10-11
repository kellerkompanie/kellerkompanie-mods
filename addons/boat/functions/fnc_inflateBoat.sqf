#include "script_component.hpp"

params ["_crate"];

private _cratePos = getPos _crate;

[_crate, QGVAR(InflateSound)] remoteExec ["say3D", 0, false];


[{
    private _crate = _this select 0;
    private _cratePos = _this select 1;

    [_crate] remoteExec ["deleteVehicle", _crate];
    ["B_Boat_Transport_01_F", [_cratePos select 0, _cratePos select 1]] remoteExec ["createVehicle", 2];
}, [_crate, _cratePos], 1] call CBA_fnc_waitAndExecute;
