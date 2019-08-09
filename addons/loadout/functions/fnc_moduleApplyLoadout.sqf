#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

private _unit = attachedTo _logic;

if (isPlayer _unit && alive _unit) then {
    uiNamespace setVariable [QGVAR(applyLoadoutPlayer), _unit];
    createDialog QGVAR(applyLoadoutDialog);
} else {
    [objNull, "place on player"] call bis_fnc_showCuratorFeedbackMessage;
};

deleteVehicle _logic;
