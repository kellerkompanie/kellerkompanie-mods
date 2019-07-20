#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for unflipping a vehicle.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleUnflipVehicle
 *
 */

params ["_logic"];

if (!local _logic) exitWith {};

private _target = attachedTo _logic;

switch (true) do {
    case (isNull _target): {
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _target): {
        [objNull, "target is destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        [true, true, true] remoteExec ["ace_spectator_fnc_setSpectator", _target];
    };
};

deleteVehicle _logic;
