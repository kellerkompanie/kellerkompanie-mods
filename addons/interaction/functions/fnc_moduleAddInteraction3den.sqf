#include "script_component.hpp"

params ["_logic"];

if(isServer) then {
    private _type = _logic getVariable ["InteractionType", 0];
    private _action = _logic getVariable ["Action", localize LSTRING(interact)];
    private _actionDuration = _logic getVariable ["Duration", 0.5];
    private _removeAction = _logic getVariable ["RemoveAction", false];
    private _removeObject = _logic getVariable ["RemoveObject",false];
    private _codeOnInteraction = _logic getVariable ["CodeOnInteraction", ""];
    private _condition = _logic getVariable ["Condition", "true"];

    if (typeName _actionDuration == "STRING") then {
        _actionDuration = parseNumber _actionDuration;
    };

    private _objects = synchronizedObjects _logic;
    {
        [_x, _type, _action, _actionDuration, _removeAction, _removeObject, _codeOnInteraction, _condition] call FUNC(addInteraction);
    } forEach _objects;
};
