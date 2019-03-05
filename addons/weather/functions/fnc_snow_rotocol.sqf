#include "script_component.hpp"

// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons

private ["_mov_obj","_rotocoale"];

if (!hasInterface) exitWith {};

//_name_terr = worldName;

_mov_obj = _this select 0;

if ((player distance _mov_obj) > 2000) exitWith {};

if (terrain_type_vanilla) then {
    _rotocoale = "#particlesource" createVehicleLocal getpos _mov_obj;
    _rotocoale setParticleCircle [size_rotocol, [5, -5, 2]];
    _rotocoale setParticleRandom [0, [0.25, 0.25, 0], [-3, 3, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
    _rotocoale setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, life_part_rot, [3, 3, 0], [-3, 3, 1], 15, 10.5, 7.9, 0.075, [3, 5, 7], [[1, 1, 1, 0.01], [1, 1, 1, 0.01+random 0.03], [1, 1, 1, 0]], [0.08], 1, 0, "", "",_mov_obj];
    _rotocoale setDropInterval drop_int_rot;

    waitUntil {!finishRotocol};
    deleteVehicle _rotocoale;

} else {
    _rotocoale = "#particlesource" createVehicleLocal getpos _mov_obj;
    _rotocoale setParticleCircle [size_rotocol, [5, -5, 2]];
    _rotocoale setParticleRandom [0, [0.25, 0.25, 0], [-3, 3, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
    _rotocoale setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, life_part_rot, [3, 3, 0], [-3, 3, 1], 15, 10.5, 7.9, 0.075, [3, 5, 7], [[1, 1, 1, 0.01+random 0.05], [1, 1, 1, 0.1], [1, 1, 1, 0]], [0.08], 1, 0, "", "",_mov_obj];
    _rotocoale setDropInterval drop_int_rot;

    waitUntil {!finishRotocol};
    deleteVehicle _rotocoale;
};
