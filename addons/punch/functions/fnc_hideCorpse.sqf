if (keko_settings_punch_enabled == 0) exitWith {diag_log text "[KEKO] (punch) punching disabled, exiting"; false};

[_this select 0, _this select 1] spawn {
	_player = _this select 0;
	_target = _this select 1;

	[_player, "keko_ShovelSound"] remoteExec ["say3D", 0, false];

	[_player, "AinvPknlMstpSnonWnonDnon_medic4"] remoteExec ["playMove", _player];

	sleep 17;

	[_target] remoteExec ["deleteVehicle", _target];
};
