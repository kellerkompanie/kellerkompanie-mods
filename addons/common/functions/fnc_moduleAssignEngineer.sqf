#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _unit = attachedTo _logic;
TRACE_3("assignEngineer",_logic,_unit,typeOf _unit);

switch (true) do {
    case (isNull _unit): {
    	ERROR("_unit is null");
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (isPlayer _unit): {
    	_unit setVariable ["ACE_IsEngineer",1,true];
    };
    case (!alive _unit): {
    	ERROR("_unit is not alive");
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        [objNull, "place on player"] call bis_fnc_showCuratorFeedbackMessage;
    };
};

deleteVehicle _logic;
