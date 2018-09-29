#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _unit = attachedTo _logic;
TRACE_3("fullHeal",_logic,_unit,typeOf _unit);

switch (true) do {
    case (isNull _unit): {
    	ERROR("_unit is null");
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _unit): {
    	ERROR("_unit is not alive");
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
		[_unit] call FUNC(fullHeal);
    };
};

deleteVehicle _logic;
