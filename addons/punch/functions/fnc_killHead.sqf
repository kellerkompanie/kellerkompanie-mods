#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {false};

params ["_player", "_target"];

[_this select 0, _this select 1] spawn {
    params ["_player", "_target"];

    _player playActionNow "PutDown";

    [_player, QGVAR(KillSound)] remoteExec ["say3D", 0, false];

    _target call ace_medical_status_fnc_setDead;

    if(isPlayer _target) then {
        private "_msg";
        _msg = format ["[KEKO] (kill) %1 killed %2 by snapping the neck", name _player, name _target];
        if (GVAR(showChatMessages)) then {
            _msg remoteExec ["systemChat", 0, false];
        };
        _msg remoteExec ["diag_log", 2, false];
    };
};

true
