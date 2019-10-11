#include "script_component.hpp"

if !(isServer) exitWith {};

params ["_target", "_player", "_params"];
_params params ["_loc_id","_loc_name","_loc_type","_loc_radius"];

private _flagObject = createVehicle ["keko_redneck_flag", position _target, [], 0, "CAN_COLLIDE"];
private _fireworksLocation = (getPos _target) vectorAdd [0,0,6];
private _smokeLocation = getPos _target;
deleteVehicle _target;
_flagObject allowDamage false;

private _idx = GVAR(LocationMapKeys) find _loc_id;
private _previousVal = GVAR(LocationMapValues) select _idx;
_previousVal set [3, 'REDNECK'];
GVAR(LocationMapValues) set [_idx, _previousVal];
[_loc_id, 'REDNECK'] call FUNC(dbUpdateLocation);
publicVariable QGVAR(LocationMapValues);

private _musicTrack = selectRandom [QGVAR(capture01),QGVAR(capture02),QGVAR(capture03),QGVAR(capture04)];
private _allHCs = entities "HeadlessClient_F";
private _allHPs = allPlayers - _allHCs;
{
    _musicTrack remoteExec ["playMusic", _x];
    [250,0] remoteExecCall ["HG_fnc_addOrSubXP",_x];
    [["Location captured (+250XP)", "PLAIN"]] remoteExec ["cutText", _x];
} forEach _allHPs;

[QGVAR(onLocationCaptured), [_player,_loc_id,_loc_name,_loc_type,_loc_radius]] call CBA_fnc_globalEvent;

private _smokerRed = "SmokeShellRed" createVehicle (_smokeLocation vectorAdd [0.1,0,0.1]);
private _smokerBlue = "SmokeShellBlue" createVehicle (_smokeLocation vectorAdd [-0.1,0,0.1]);
_smokerRed setDamage 1;
_smokerBlue setDamage 1;
_smokerRed hideObjectGlobal true;
_smokerBlue hideObjectGlobal true;

[_fireworksLocation] spawn {
    params ["_fireworksLocation"];

    sleep 5;
    [_fireworksLocation, 'random','random'] call GRAD_fireworks_fnc_prepareFireworks;
    sleep 1;
    [_fireworksLocation, 'random','random'] call GRAD_fireworks_fnc_prepareFireworks;
    sleep 1;
    [_fireworksLocation, 'random','random'] call GRAD_fireworks_fnc_prepareFireworks;
};


private _areaMarkerName = _loc_id + "_area";
_areaMarkerName setMarkerColor "colorBLUFOR";

private _markerName = _loc_id;
_markerName setMarkerColor "colorBLUFOR";
