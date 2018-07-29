if (keko_settings_punch_enabled == 0) exitWith {diag_log text "[KEKO] (punch) punching disabled, exiting"; false};

[_this select 0, cursorTarget] spawn {
	_player = _this select 0;
	_target = _this select 1;
	_dist = (_player distance _target);
	
	if (_dist <= 3) then {	
		if (_target isKindOf "Man") then {
			if (alive _target) then {
				
				_player playActionNow "PutDown";

				sleep 0.5;
					
				[_target, "keko_PunchSound"] remoteExec ["say3D", 0, false];
	
				//[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;
	
				[_target, true, 60, true] call ace_medical_fnc_setUnconscious;
				
				_msg = format ["[KEKO] (punch) %1 punched %2 in the head", _player, _target];
				_msg remoteExec ["systemChat", 0, false];
				_msg remoteExec ["diag_log", 2, false];
			};
		};
	};
};