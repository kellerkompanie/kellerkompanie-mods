#include "script_component.hpp"

//[_targetPos select 0, _targetPos select 1, 300]
private _pos = [];
private _crate = "";

params ["_position", "_crate_name"];
_pos = _position;
_crate = [_position, _crate_name] call FUNC(spawnCrate);


private _targetPos = [_pos select 0, _pos select 1, 200];
private _chute = createVehicle ["B_Parachute_02_F", _targetPos, [], 0, "NONE"];
_crate setPos _targetPos;
_crate attachTo [_chute, [0, 0, -0.2]];
_chute setVelocity [0,0,-50];

private _light = createVehicle ["Chemlight_red", (getPosATL _crate), [], 0, "NONE"];
private _IRlight = createVehicle ["B_IRStrobe", (getPosATL _crate), [], 0, "NONE"];
{
    _x attachTo [_crate, [0, 0, 0]];
} forEach [_light,_IRlight];

[_crate,"G_40mm_SmokeGreen"] spawn {
    params ["_crate", "_smoke"];

    waitUntil {sleep 1; ((getPos _crate) select 2) < 30};

    private _smoke = createVehicle [_smoke, (getPos _crate), [], 0, "NONE"];
    _smoke attachTo [_crate, [0, 0, -1]];

    waitUntil {sleep 1; ((getPos _crate) select 2) < 4};

    detach _crate;
};
