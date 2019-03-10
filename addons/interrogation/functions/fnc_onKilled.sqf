#include "script_component.hpp"

params ["_unit"];

private _group = group _unit;
private _onKilledCodeString = _group getVariable [QGVAR(onKilledCode), ""];

if (count _onKilledCodeString == 0) then {
    call compile _onKilledCodeString;
};

private _initialUnitCount = _group getVariable [QGVAR(initialUnitCount), -1];

if (_initialUnitCount == -1) exitWith {};

private _deadThreshold = _group getVariable [QGVAR(deathThreshold), -1];
private _surrenderChance = _group getVariable [QGVAR(surrenderChance), -1];
private _enemyNearbyInfluence = _group getVariable ["EnemyNearbyInfluence", -1];
private _enemyNearbyRadius = _group getVariable ["EnemyNearbyRadius", -1];
private _enemyNearbyFactor = _group getVariable ["EnemyNearbyFactor", -1];

if ( (_deadThreshold == -1) || (_surrenderChance == -1) ) exitWith {};

if(_enemyNearbyInfluence > 0) then {
    private _nearbyMen = _unit nearEntities ["Man", _enemyNearbyRadius];
    private _enemyCount = _unit countEnemy _nearbyMen;
    if (_enemyCount >= _enemyNearbyInfluence) then {
        _surrenderChance = _surrenderChance + _enemyNearbyFactor;
    };
};

private _survivorCount = {alive _x && _x != _unit && !(_x getVariable ["ace_captives_isSurrendering", false]) } count (units _group);

if ( _survivorCount <= _deadThreshold ) then {
    {
        private _isSurrendering = _x getVariable ["ace_captives_isSurrendering", false];
        if (alive _x && _x != _unit && !_isSurrendering) then {
            private _randomChance = random 1;
            (format ["%1 _randomChance = %2", _x, _randomChance]) remoteExec ["systemChat", [0, -2] select isDedicated];
            if (_randomChance <= _surrenderChance) then {
                ["ace_captives_setSurrendered", [_x, true], _x] call CBA_fnc_targetEvent;
            };
        };
    } forEach units _group;
};
