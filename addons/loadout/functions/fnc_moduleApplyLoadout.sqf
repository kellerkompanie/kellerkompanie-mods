#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

private _unit = attachedTo _logic;

if (isPlayer _unit && alive _unit) then {
    uiNamespace setVariable [QGVAR(applyLoadoutPlayer), _unit];
    createDialog QGVAR(applyLoadoutDialog);
} else {
    ERROR("_object is not player or not alive");
    [objNull, "place on player"] call bis_fnc_showCuratorFeedbackMessage;
};

deleteVehicle _logic;
