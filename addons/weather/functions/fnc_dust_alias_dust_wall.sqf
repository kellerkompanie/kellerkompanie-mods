#include "script_component.hpp"

// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons
// [[[],"AL_storm\alias_dust_wall.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;

private ["_sursa_storm"];

if (!hasInterface) exitWith {};

_sursa_storm            = _this select 0;//source
duration_duststorm_w    = _this select 1;//duration
publicVariable "duration_duststorm_w";

private _dir_xx = 0;
private _dir_yy = 0;

// fum negru (black smoke)
private _fum_negru = "#particlesource" createVehicleLocal getPosATL _sursa_storm;
_fum_negru setParticleCircle [60,[0.2, -0.5, 20]];
_fum_negru setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_fum_negru setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1, 9, [_dir_xx, _dir_yy*1.5, 0], [_dir_xx*100,_dir_yy*100, 10], 45, 20, 13, 0.00001, [35, 25, 50,70], [[0, 0, 0, 0.5], [0.3, 0.2, 0.1, 1], [0.9, 0.75, 0.6, 0.8], [0, 0, 0, 0]], [0.08], 0.1, 3, "", "", _sursa_storm];
_fum_negru setDropInterval 0.01;

check = [] spawn {
    sleep duration_duststorm_w;
    //hint "check done";
};
waitUntil {if((scriptDone check) || (!al_duststorm_on)) then {true} else {uiSleep 1;false};};
deleteVehicle _fum_negru;
//hint "waitUntil works";
