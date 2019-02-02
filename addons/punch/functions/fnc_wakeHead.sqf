#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {WARNING("punching disabled, exiting"); false};

params ["_player", "_target"];

[_player, _target] spawn {
	params ["_player", "_target"];

	_player playActionNow "PutDown";

	sleep 0.5;

	[_target, QGVAR(InhaleSound)] remoteExec ["say3D", 0, false];

	sleep 4;

	[_target, false, 7, true] call ace_medical_fnc_setUnconscious;
};
