#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Module that garrisons units based on ACE garrison a few seconds after mission
 * start in order to allow first headless clients taking over.
 *
 * Arguments:
 * 0: Garrison 3den module <OBJECT>
 *
 * Return Value:
 * handle
 *
 * Example:
 * _logic call keko_common_fnc_moduleACEGarrison3den
 *
 */

if !(isServer) exitWith{};

params ["_logic"];

private _handle = _this spawn {
    params ["_logic"];

    // give enough time for headless clients to take over AI
    waitUntil{time > 30};

    private _pos = getPos _logic;
    private _radiusStr = _logic getVariable ["Radius", 100];
    private _radius = parseNumber _radiusStr;
    private _teleport = _logic getVariable ["Teleport", true];
    private _topDownMode = _logic getVariable ["TopDown", false];
    private _mode = _logic getVariable ["Mode", 1];

    private _objects = synchronizedObjects _logic;
    if ((count _objects) > 0) then {
        private _units = [];

        {
            private _group = units _x;
            {
                _units pushBackUnique _x;
            } forEach _group;
        } forEach _objects;

        [_pos, ["Building"], _units, _radius, _mode, _topDownMode, _teleport] call ace_ai_fnc_garrison;
    };
    deleteVehicle _logic;
};

_handle;
