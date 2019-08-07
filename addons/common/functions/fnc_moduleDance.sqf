#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

private _target = attachedTo _logic;

switch (true) do {
    case (isNull _target): {
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _target): {
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        private _animation = selectRandom ["Acts_Dance_01", "Acts_Dance_02"];
        [_target, _animation] remoteExec ["switchMove", [0, -2] select isDedicated];
        [
            { params ["_target"]; [_target, ""] remoteExec ["switchMove", [0, -2] select isDedicated]; },
            [_target],
            [21, 25] select (_animation == "Acts_Dance_01")
        ] call CBA_fnc_waitAndExecute;
    };
};

deleteVehicle _logic;
