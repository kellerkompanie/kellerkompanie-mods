#include "script_component.hpp"

params ["_unit"];

private _group = group _unit;
private _onKilledCodeString = _group getVariable [QGVAR(onKilledCode), ""];

if (count _onKilledCodeString == 0) exitWith {};

//(format ["%1 died", _unit]) remoteExec ["systemChat", [0, -2] select isDedicated];
//(format ["_onKilledCodeString = %1", _onKilledCodeString]) remoteExec ["systemChat", [0, -2] select isDedicated];
call compile _onKilledCodeString;

private _initialUnitCount = _group getVariable [QGVAR(initialUnitCount), -1];

if (_initialUnitCount == -1) exitWith {};

private _deadThreshold = _group getVariable [QGVAR(deathThreshold), -1];
private _surrenderChance = _group getVariable [QGVAR(surrenderChance), -1];

if ( (_deadThreshold == -1) || (_surrenderChance == -1) ) exitWith {};

private _survivorCount = {alive _x && _x != _unit && !(_x getVariable ["ace_captives_isSurrendering", false]) } count (units _group);
private _survivorRate = _survivorCount / _initialUnitCount;

if ( _survivorRate < _deadThreshold ) then {
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
