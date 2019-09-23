#include "script_component.hpp"

params[
    "_player",
    ["_faction", GVAR(loadoutFaction)],
    ["_object", objNull]
];

// make sure stuff happens on the right client
if !(local _player) exitWith {
    _this remoteExecCall [QFUNC(openLoadoutMenu), _player];
    true
};

GVAR(menuDialogFaction) = _faction;
createDialog QGVAR(menuDialog);

true
