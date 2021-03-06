#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for removing all actions from an object.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleRemoveAllActions
 *
 */

params ["_logic"];
if (!local _logic) exitWith {};

private _object = attachedTo _logic;

switch (true) do {
    case (isNull _object): {
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (isPlayer _object): {
        [objNull, "place on object"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _object): {
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        removeAllActions _object;
        _object remoteExec ["removeAllActions", [0, -2] select isDedicated, true];
    };
};

deleteVehicle _logic;
