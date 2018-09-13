#include "script_component.hpp"

//[_targetPos select 0, _targetPos select 1, 300]
_pos = [];
_crate = "";
if(GVAR(customLogistics) == 2) then {
	params ["_position", "_crate_name"];
	_pos = _position;
	_crate = [_position, _crate_name] call FUNC(spawnCrate);
}
else
{
	params ["_position", "_faction", "_crateCfg"];
	_pos = _position;
	_crate = [_position, _faction, _crateCfg] call FUNC(spawnCrate);
};


_targetPos = [_pos select 0, _pos select 1, 200];
_chute = createVehicle ["B_Parachute_02_F", _targetPos, [], 0, "NONE"];
_crate setPos _targetPos;

{
	_x addCuratorEditableObjects [[_crate], false];
} forEach allCurators;

_crate attachTo [_chute, [0, 0, -0.2]];
_chute setVelocity [0,0,-50];

_light = createVehicle ["Chemlight_red", (getPosATL _crate), [], 0, "NONE"];
_IRlight = createVehicle ["B_IRStrobe", (getPosATL _crate), [], 0, "NONE"];
{
	_x attachTo [_crate, [0, 0, 0]];
} forEach [_light,_IRlight];

[_crate,"G_40mm_SmokeGreen"] spawn {
	waitUntil {sleep 1; ((getPos (_this select 0)) select 2) < 30};

	_smoke = createVehicle [(_this select 1), (getPos (_this select 0)), [], 0, "NONE"];
	_smoke attachTo [(_this select 0), [0, 0, -1]];

	waitUntil {sleep 1; ((getPos (_this select 0)) select 2) < 4};

	detach (_this select 0);
};
