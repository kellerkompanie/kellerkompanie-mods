//
//
//if (VQI_DARK_HINTS == 1) then { hint "x_despawn.sqf"; };


private ["_enemyX"];


_enemyX = _this select 0;

//_v = _enemyX select 0; // vehicle
//_c = _enemyX select 1; // crew
//_g = _enemyX select 2; // group


if (isNil "_enemyX") exitWith {};


// - EXPERIMENTAL - maxSpawn + 500m
waitUntil { sleep 30; player distance ((units _enemyX) select 0) > 3500; }; //


{ if (vehicle _x != _x) then { deleteVehicle vehicle _x; }; deleteVehicle _x }
forEach (units _enemyX);




sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "x_despawn.sqf -END- \n Far X Deleted"; };
//