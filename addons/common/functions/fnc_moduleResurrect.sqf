#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for resurrecting AI corpses, e.g., if they were killed
 * by accident.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleResurrect
 *
 */

params ["_logic"];

if !(local _logic) exitWith {};

private _target = attachedTo _logic;

switch (true) do {
    case (isNull _target): {
        ERROR("_target is null");
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (alive _target): {
        ERROR("moduleResurrect: _target is alive");
        [objNull, "place on dead"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        // Get the open wounds for this unit
        private _loadout = getUnitLoadout _target;
        private _class = typeOf _target;
        private _group = grpNull;
        private _side = getNumber(configFile >> "CfgVehicles" >> _class >> "side");
        switch (_side) do {
            case 0: {
                _group = createGroup east;
            };
            case 1: {
                _group = createGroup west;
            };
            case 2: {
                _group = createGroup resistance;
            };
            default {
                _group = createGroup civilian;
            };
        };

        private _unit = _group createUnit [_class, position _target, [], 0, "CAN_COLLIDE"];
        _unit setVariable ["BIS_enableRandomization", false];
        _unit setUnitLoadout _loadout;
        deleteVehicle _target;
    };
};

deleteVehicle _logic;
