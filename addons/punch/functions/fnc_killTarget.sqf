#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {false};

params ["_player"];

[_player, cursorTarget] spawn {
    params ["_player","_target"];

    private _dist = (_player distance _target);

    if (_dist <= 3) then {
        if (_target isKindOf "Man") then {
            if ((alive _target) && (_target getVariable ['ACE_isUnconscious', false])) then {

                _player playActionNow "PutDown";

                [_player, QGVAR(KillSound)] remoteExec ["say3D", 0, false];

                _target call ace_medical_status_fnc_setDead;

                if(isPlayer _target) then {
                    private["_msg"];

                    _msg = format ["[KEKO] (kill) %1 killed %2 by snapping the neck", name _player, name _target];
                    if (GVAR(showChatMessages)) then {
                        _msg remoteExec ["systemChat", 0, false];
                    };
                    _msg remoteExec ["diag_log", 2, false];
                };
            };
        };
    };
};

true
