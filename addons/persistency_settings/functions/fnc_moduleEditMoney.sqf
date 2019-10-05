#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

private _object = attachedTo _logic;

switch (true) do {
    case (!isNull _object && alive _object && isPlayer _object): {
        profileNamespace setVariable [QEGVAR(persistency,editMoneyPlayer), _object];
        createDialog QGVAR(editMoneyDialog);
    };
    default {
        ERROR_3("_object is null, destroyed, or not a player: isNull=%1 alive=%2 isPlayer=%3", isNull _object, alive _object, isPlayer _object);
        [objNull, "place on not destroyed object/player"] call bis_fnc_showCuratorFeedbackMessage;
    };
};

deleteVehicle _logic;
