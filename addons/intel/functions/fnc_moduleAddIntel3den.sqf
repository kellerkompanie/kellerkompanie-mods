#include "script_component.hpp"

params ["_logic"];

if(isServer) then {
    private _type = _logic getVariable ["IntelType", 0];
    private _action = _logic getVariable ["Action", localize LSTRING(pickupDocuments)];
    private _actionDuration = _logic getVariable ["Duration", 0.5];
    private _removeAction = _logic getVariable ["RemoveAction", false];
    private _title = _logic getVariable ["Title",""];
    private _content = _logic getVariable ["Content",""];
    private _removeObject = _logic getVariable ["RemoveObject",false];
    private _codeOnInteraction = _logic getVariable ["CodeOnInteraction", ""];
    private _openMap = _logic getVariable ["OpenMap", false];
    private _shareWith = _logic getVariable ["ShareWith", false];
    private _condition = _logic getVariable ["Condition", "true"];

    if (typeName _actionDuration == "STRING") then {
        _actionDuration = parseNumber _actionDuration;
    };

    private _objects = synchronizedObjects _logic;
    {
        [_x, _type, _action, _actionDuration, _removeAction, _title, _content, _removeObject, _codeOnInteraction, _openMap, _shareWith, _condition] call FUNC(addIntel);
    } forEach _objects;
};
