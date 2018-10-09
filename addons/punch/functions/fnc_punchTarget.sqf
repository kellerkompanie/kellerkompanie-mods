#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {WARNING("punching disabled, exiting"); false};

[_this select 0, cursorTarget] spawn {
	private _player = _this select 0;
	private _target = _this select 1;
	private _dist = (_player distance _target);

	if (_dist <= 3) then {
		if (_target isKindOf "Man") then {
			if (alive _target && !(_target getVariable ['ACE_isUnconscious', false])) then {

				_player playActionNow "PutDown";

				sleep 0.5;

				[_target, QGVAR(PunchSound)] remoteExec ["say3D", 0, false];

				//[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;

				[_target, true, 60, true] call ace_medical_fnc_setUnconscious;

				[GVAR(onPunched), [_player, _target]] call CBA_fnc_globalEvent;

				if (isPlayer _target) then {
					private _msg = format ["[KEKO] (punch) %1 punched %2 in the head", name _player, name _target];
					_msg remoteExec ["systemChat", 0, false];
					_msg remoteExec ["diag_log", 2, false];
				};
			};
		};
	};
};
