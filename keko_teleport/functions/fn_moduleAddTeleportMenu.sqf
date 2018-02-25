_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if !(_activated && local _logic) exitWith {};

_object = objnull;
_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver",[""]];

if ((_mouseOver select 0) == typename objnull) then {
    _object = _mouseOver select 1;
};

if(isnull _object) then {
    [objnull, "Error - Module was not placed on any object"] call bis_fnc_showCuratorFeedbackMessage;
    deletevehicle _logic;
};

if(isNull _object) exitWith{};

[_object] call keko_teleport_fnc_addTeleportMenu;

deletevehicle _logic;