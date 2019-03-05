#include "script_component.hpp"

// by Alias
// nul = [] execvm "scriptsmisc\umblator.sqf";

if ((!isServer)or(!isNull hunt_alias)) exitWith {};

//if (!isNull hunt_alias) exitWith {hint "yoyo"};

private _umbla= "Land_HelipadEmpty_F" createVehicle [0,0,0];

while {true} do {
// >> you can tweak sleep value if you want to hear ambient sounds more or less often
    sleep (120 + random ambient_sounds_al);
    private _natura = ["lup_01","lup_02","lup_03"] call BIS_fnc_selectRandom;

    pos_umbla = [hunt_alias,100+random 200, random 360] call BIS_fnc_relPos;
    _umbla setpos [pos_umbla select 0,pos_umbla select 1,50 + random 50];

    //[[umbla, _natura], "say3d", true] call BIS_fnc_MP;
    [_umbla,[_natura,300]] remoteExec ["say3d"];
};
