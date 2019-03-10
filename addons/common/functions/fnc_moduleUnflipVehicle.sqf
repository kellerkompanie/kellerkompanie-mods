#include "script_component.hpp"

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
        _target remoteExec [QFUNC(unflipVehicle), _target];
    };
};

deleteVehicle _logic;
