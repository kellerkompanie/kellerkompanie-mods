#include "script_component.hpp"

if (!hasInterface) exitWith {};

params ["_tunet_tornado"];

private _fulger_prez = random 53;

if (_fulger_prez > 47) then {
    private _direction     = [_tunet_tornado, 2, random 360, [0]] call BIS_fnc_param;
    private _thunder = selectRandom ["thunder_1", "thunder_2"];

    private _relativePosition = [_tunet_tornado, 0, _direction] call bis_fnc_relPos;
    private _bolt = createvehicle ["LightningBolt", _relativePosition, [], 0, "can_collide"];
    _bolt setVelocity [0, 0, -10];
    private _lighting = "lightning_F" createvehiclelocal _relativePosition;
    _lighting setdir random 360;
    _lighting setpos _relativePosition;
    private _light = "#lightpoint" createvehiclelocal _relativePosition;
    _light setLightDayLight true;
    _light setpos _relativePosition;
    _light setLightBrightness random 30;
    _light setLightAmbient [0.5, 0.5, 1];
    _light setlightcolor [1, 1, 2];

    sleep (0.3 + random 0.1);

    _tunet_tornado say3d [_thunder,2000];

    deletevehicle _bolt;
    deletevehicle _light;
    deletevehicle _lighting;
};
