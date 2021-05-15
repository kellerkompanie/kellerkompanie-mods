#include "script_component.hpp"

private _house = lineIntersectsSurfaces [getPosWorld _this, getPosWorld _this vectorAdd [0,0,50], _this, objNull, true, 1, "GEOM", "NONE"];

if (((_house select 0) select 3) isKindOf "house") exitWith	{
	GVAR(pos_p) = "in_da_house"; 
	GVAR(cladire) = ((_house select 0) select 3); 
	GVAR(casa) = typeOf ((_house select 0) select 3); 
	GVAR(raza_snow) = sizeof GVAR(casa);
};

if ((getPosASL player select 2 < 0) && (getPosASL player select 2 > -3)) exitWith {
	GVAR(pos_p) = "under_water"; 
	GVAR(alias_snow) setPosASL [getPosASL player #0, getPosASL player #1, 1];
};

if (getPosASL player select 2 < -3) exitWith {
	GVAR(pos_p) = "deep_sea";
};

if ((player != vehicle player) && (getPosASL player select 2 > 0)) exitWith {
	GVAR(pos_p) = "player_car"; 
};

GVAR(pos_p) = "open";