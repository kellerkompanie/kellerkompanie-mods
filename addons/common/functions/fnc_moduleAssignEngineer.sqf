#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _unit = attachedTo _logic;
diag_log text format["[KEKO] (common) assignEngineer: %1 %2 %3",_logic,_unit,typeOf _unit];

switch (true) do {
    case (isNull _unit): {
    	diag_log text "[KEKO] (common) ERROR: _unit is null";
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (isPlayer _unit): {
    	_unit setVariable ["ACE_IsEngineer",1,true];
    };
    case (!alive _unit): {
    	diag_log text "[KEKO] (common) ERROR: _unit is not alive";
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        [objNull, "place on player"] call bis_fnc_showCuratorFeedbackMessage;
    };
};

deleteVehicle _logic;