#include "script_component.hpp"

params ["_player", "_target"];

if !([_player, _target] call FUNC(canPunch)) exitWith {false};

[_player, _target] spawn {
    params ["_player", "_target"];

    _player playActionNow "PutDown";

    sleep 0.5;

    [_target, QGVAR(PunchSound)] remoteExec ["say3D", 0, false];

    //[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;

    _target setVariable ["keko_wasPunched", true, true];
    [{(_this select 0) setVariable ["keko_wasPunched", false, true];}, [_target], 5] call CBA_fnc_waitAndExecute;
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

true
