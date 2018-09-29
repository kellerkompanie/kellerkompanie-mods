#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _object = attachedTo _logic;
TRACE_3("addLogisticsMenu",_logic,_object,typeOf _object);

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
    	ERROR("_object is not alive");
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        [_object] call FUNC(addLogisticsMenu);
    };
};

deleteVehicle _logic;
