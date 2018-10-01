#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {
	WARNING("punching disabled, exiting");
	false
};

[_this select 0, _this select 1] spawn {
	private _player = _this select 0;
	private _target = _this select 1;

	[_player, QGVAR(ShovelSound)] remoteExec ["say3D", 0, false];

	[_player, "AinvPknlMstpSnonWnonDnon_medic4"] remoteExec ["playMove", _player];

	sleep 17;

	[_target] remoteExec ["deleteVehicle", _target];
};
