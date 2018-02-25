_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if !(_activated && local _logic) exitWith {};

_unit = objnull;
_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver",[""]];
if ((_mouseOver select 0) == typename objnull) then {
    _unit = _mouseOver select 1;
};
if(isnull _unit) then {
    [objnull, "Error - Module was not placed on any unit"] call bis_fnc_showCuratorFeedbackMessage;
    deletevehicle _logic;
};

if(isNull _unit) exitWith{};

_unit setVariable ["ACE_IsEngineer",1,true];

deletevehicle _logic;