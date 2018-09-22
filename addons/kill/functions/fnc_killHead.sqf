#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {diag_log text "[KEKO] (kill) killing disabled, exiting"; false};

[_this select 0, _this select 1] spawn {
	private["_player","_target"];

	_player = _this select 0;
	_target = _this select 1;

	_player playActionNow "PutDown";

	[_player, QGVAR(KillSound)] remoteExec ["say3D", 0, false];

	//[_target, true, 60, true] call ace_medical_fnc_setUnconscious;
	_target call ace_medical_fnc_setDead;

	if(isPlayer _target) then {
		private "_msg";
		_msg = format ["[KEKO] (kill) %1 killed %2 by snapping the neck", name _player, name _target];
		_msg remoteExec ["systemChat", 0, false];
		_msg remoteExec ["diag_log", 2, false];
	};
};
