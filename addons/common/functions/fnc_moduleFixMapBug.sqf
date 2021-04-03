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
		false remoteExec ["RR_mapStuff_fnc_mapEH", _target];
		{
			detach _x; 
			deleteVehicle _x;
		} forEach attachedObjects _target;
    };
};

deleteVehicle _logic;