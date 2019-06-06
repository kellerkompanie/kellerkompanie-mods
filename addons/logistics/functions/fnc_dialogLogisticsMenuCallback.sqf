#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";

if(GVAR(customLogistics) == 2) then {
    private _crateName = _arr select 0;

    [getPosATL player, _crateName] spawn {
        params ["_pos", "_crateName"];
        private _crateObject = [_pos, _crateName] call FUNC(spawnCrate);
        [_crateObject, player] remoteExecCall ["disableCollisionWith", 0, _crateObject];
    };
}
else {
    private _faction = _arr select 0;
    private _crate = _arr select 1;

    [getPosATL player, _faction, _crate] spawn {
        params ["_pos", "_faction", "_crate"];
        private _crateObject = [_pos, _faction, _crate] call FUNC(spawnCrate);
        [_crateObject, player] remoteExecCall ["disableCollisionWith", 0, _crateObject];
    };
};

closeDialog 1;
