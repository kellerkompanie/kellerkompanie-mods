if (keko_settings_punch_enabled == 0) exitWith {diag_log text "[KEKO] (punch) punching disabled, exiting"; false};

[_this select 0, _this select 1] spawn {
	_player = _this select 0;
	_target = _this select 1;

	_player playActionNow "PutDown";

	sleep 0.5;

	[_target, "keko_InhaleSound"] remoteExec ["say3D", 0, false];

	sleep 4;

	[_target, false, 7, true] call ace_medical_fnc_setUnconscious;
};
