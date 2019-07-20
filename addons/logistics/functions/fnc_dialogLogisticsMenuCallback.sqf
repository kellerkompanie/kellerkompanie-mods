#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";
private _crateName = _arr select 0;

[getPosATL player, _crateName] spawn {
    params ["_pos", "_crateName"];
    private _crateObject = [_pos, _crateName] call FUNC(spawnCrate);
    [_crateObject, player] remoteExecCall ["disableCollisionWith", 0, _crateObject];
};

closeDialog 1;
