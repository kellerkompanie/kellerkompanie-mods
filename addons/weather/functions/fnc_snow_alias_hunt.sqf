#include "script_component.hpp"

// by ALIAS
// nul = [] execVM "AL_snowstorm\alias_hunt.sqf";

if (!isServer) exitWith {};

while {true} do {
    private  _allunits = [];
    {
        if (alive _x) then
        {
            _allunits pushBack _x;
        };
    }  foreach (if (isMultiplayer) then {playableUnits} else {switchableUnits});
    hunt_alias = _allunits call BIS_fnc_selectRandom;
    publicVariable "hunt_alias";
    sleep 60;
};
