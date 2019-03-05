#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith {};

private _object = attachedTo _logic;

switch (true) do {
    case (!isNull _object && alive _object): {
        _object remoteExec [QEFUNC(persistency,enableObjectPersistency), 2];
    };
    default {
        ERROR("_object is null or destroyed");
        [objNull, "place on not destroyed object/player"] call bis_fnc_showCuratorFeedbackMessage;
    };
};

deleteVehicle _logic;
