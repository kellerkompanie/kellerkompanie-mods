#include "script_component.hpp"

if !(isServer) exitWith {_this remoteExec [QFUNC(supplyDrone), 2]};

if (GVAR(virtualUAVLimit) > -1 && GVAR(currentUAVs) >= GVAR(virtualUAVLimit)) exitWith {
    "[KEKO] (logistics) Maximum number of logistic drones reached, cannot call in more!" remoteExec ["systemChat", 0];
};

if(GVAR(virtualUAVAmount) != -1 && GVAR(virtualUAVAmount) <= 0) exitWith {
    "[KEKO] (logistics) You have used all of your UAVs already, no more available!" remoteExec ["systemChat", 0];
};

private _spawnPos = [];
private _targetPos = [];
private _droneInventory = [];

params ["_spawn", "_target", "_crate_name"];

_spawnPos = _spawn;
_targetPos = _target;

private _descapedString = [_crate_name, "%20", " "] call EFUNC(common,replaceString);

{
    private _entryName = _x select 0;

    if(_entryName isEqualTo _descapedString) then {
        _droneInventory = _x select 2;
    };
} forEach GVAR(crates) select 0;

private _uav = createVehicle ["B_UAV_06_F", _spawnPos, [], 0,""];
createVehicleCrew _uav;

GVAR(currentUAVs) = GVAR(currentUAVs) + 1;
if(GVAR(virtualUAVAmount) != -1 && GVAR(virtualUAVAmount) > 0) then {
    GVAR(virtualUAVAmount) = GVAR(virtualUAVAmount) - 1;
    (format ["[KEKO] (logistics) Number of remaining UAVs: %1", GVAR(virtualUAVAmount)])  remoteExec ["systemChat"];
};

private _uavCrew = crew _uav;
private _uavGroup = group (crew _uav select 0);
_uavGroup deleteGroupWhenEmpty true;
private _civGroup = createGroup civilian;
_uavCrew joinSilent _civGroup;

_uav allowDamage false;
_uav setVariable ["acex_headless_blacklist", true];

[_uav] call FUNC(clearCargo);
[_uav, _droneInventory] call FUNC(fillCrate);

{
    _x setVariable ["acex_headless_blacklist", true];
    _x allowDamage false;
} forEach crew _uav;

private _group = group (crew _uav select 0);
_group setBehaviour "CARELESS";
_group setCombatMode "BLUE";
_group setSpeedMode "FULL";
_group setVariable ["acex_headless_blacklist", true];

private _pilot = driver _uav;
_pilot setSkill 1;
{
    _pilot disableAI _x
} forEach ["TARGET", "AUTOTARGET","AUTOCOMBAT"];
_group allowFleeing 0;
_group deleteGroupWhenEmpty true;

_uav flyInHeight 30;

_uav remoteExec [QFUNC(addDroneActions), [0, -2] select isDedicated];

private _dropLocationWaypoint = _group addWaypoint [_targetPos, 0];
_dropLocationWaypoint setWaypointCompletionRadius 5;
_dropLocationWaypoint setWaypointStatements ["true", 'if (!local (group this)) exitWith {}; private _vehicle = vehicle this; _vehicle flyInHeight 0; if(GVAR(automaticUAVReturn) > 0) then {[{_this remoteExec [QFUNC(droneReturnHome), _this];}, _vehicle, GVAR(automaticUAVReturn) + 15] call CBA_fnc_waitAndExecute;}'];
