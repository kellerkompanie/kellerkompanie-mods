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
TRACE_3("addTeleportMenu",_logic,_object,typeOf _object);

switch (true) do {
    case (isNull _object): {
        ERROR("_object is null");
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (isPlayer _object): {
        ERROR("_object is player");
        [objNull, "place on object"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _object): {
        ERROR("_object is destroyed");
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        removeAllActions _object;
        _object remoteExec ["removeAllActions", [0, -2] select isDedicated, true];
    };
};

deleteVehicle _logic;
