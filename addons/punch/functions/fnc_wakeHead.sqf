#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {false};

params ["_player", "_target"];

[_player, _target] spawn {
    params ["_player", "_target"];

    _player playActionNow "PutDown";

    sleep 0.5;

    [_target, QGVAR(InhaleSound)] remoteExec ["say3D", 0, false];

    sleep 4;

    ["ace_medical_WakeUp", _target, _target] call CBA_fnc_targetEvent;
};
