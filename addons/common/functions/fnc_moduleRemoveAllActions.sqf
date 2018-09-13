#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _object = attachedTo _logic;
diag_log text format["[KEKO] (teleport) addTeleportMenu: %1 %2 %3",_logic,_object,typeOf _object];

switch (true) do {
    case (isNull _object): {
    	diag_log text "[KEKO] (teleport) ERROR: _object is null";
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (isPlayer _object): {
    	diag_log text "[KEKO] (teleport) ERROR: _object is player";
        [objNull, "place on object"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _object): {
    	diag_log text "[KEKO] (teleport) ERROR: _object is not alive";
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        removeAllActions _object;
        _object remoteExec ["removeAllActions", 0, true];
    };
};

deleteVehicle _logic;