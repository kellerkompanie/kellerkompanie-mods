#include "script_component.hpp"

params ["_player"];

[_player, cursorTarget] spawn {
    params ["_player", "_target"];
    private _dist = (_player distance _target);

    if (_dist <= 3) then {
        if (_target isKindOf "Man") then {
            if ([_player, _target] call FUNC(canPunch)) then {

                _player playActionNow "PutDown";

                sleep 0.5;

                [_target, QGVAR(PunchSound)] remoteExec ["say3D", 0, false];

                //[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;

                [_target, true, 60, true] call ace_medical_fnc_setUnconscious;

                [QGVAR(onPunched), [_player, _target]] call CBA_fnc_globalEvent;

                if (isPlayer _target) then {
                    private _msg = format ["[KEKO] (punch) %1 punched %2 in the head", name _player, name _target];
                    if (GVAR(showChatMessages)) then {
                        _msg remoteExec ["systemChat", 0, false];
                    };
                    _msg remoteExec ["diag_log", 2, false];
                };
            };
        };
    };
};
