#include "script_component.hpp"

if (!hasInterface) exitWith {};

params ["_tsource", "_tornadamid"];

private _vartej_alb = "#particlesource" createVehicle getPos _tsource;
private _urcet = "#particlesource" createVehicle getPos _tsource;
private _rotitor = "#particlesource" createVehicle getPos _tsource;
private _leaves  = "#particlesource" createVehicle getPos _tsource;
private _palarie = "#particlesource" createVehicle getPos _tornadamid;

waitUntil {sleep 1; (player distance _tsource < 3000)};

enableCamShake true;

[_tsource] spawn {
    private _torsouce = _this select 0;
    while {!isNull _torsouce} do {
        if ((player distance _torsouce) < 500) then {
            addCamShake [0.3,7,11];
            sleep (10 + random 60);
        };
    };
};

// vartej alb
_vartej_alb setParticleCircle [50, [0.2, -0.5, 0.9]];
_vartej_alb setParticleRandom [2,[0.25,0.25,0],[0.175,0.175,0.3],0,1,[0,0,0,0.1],0,0];
_vartej_alb setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1, 10, [0, 0, 0], [0, 0, 0.75], 15, 17, 13, 0.7, [15, 17, 19], [[0.5, 0.5, 0.5, 0.3], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08],0.5,0, "", "", _tsource];
_vartej_alb setDropInterval 0.05;

// resturi
_leaves setParticleCircle [35, [10, -10, 0]];
_leaves setParticleRandom [5, [0.25, 0.25, 0], [0.175, 0.175, 0], 2, 0.25, [0, 0, 0, 0.1], 1, 1];
_leaves setParticleParams [["\A3\data_f\ParticleEffects\Hit_Leaves\Sticks_Green", 1, 1, 1], "", "SpaceObject", 1, 15, [0, 0, 5], [0, 0, 25], 0.75, 15, 7.9, 0.085, [5, 5, 5], [[0, 0, 0, 1], [0.25, 0.25, 0.25, 0.5]], [0.08], 1, 0.25, "", "",_tsource];
_leaves setDropInterval 0.3;

// VARTEJ INVARTITOR CU RUBBER
_rotitor setParticleCircle [30,[0,0,0]];
_rotitor setParticleRandom [3,[0.25,0.25,0],[0.175,0.175,0.3],100,1,[0,0,0,0.1],0,0];
_rotitor setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1,10,[0,0,0],[0,0,150],63,1,8,0.5,[12,12,20],[[0.1,0.1,0.1,0.03],[0.1,0.1,0.1,0.1],[0,0,0,0.5]],[0.08],1,1, "", "", _tsource];
_rotitor setDropInterval 0.01;

// VARTEJ INALT
_urcet setParticleCircle [5,[0,0,0]];
_urcet setParticleRandom [3,[0.1,0.1,30],[2,2,1],55,0.51,[0,0,0,0.1],0.1,0.2];
_urcet setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1,8,[0,0,20],[0,0,3],63,5.5,7,0,[3,5,7,8,15,35,40],[[0.1,0.1,0.1,0],[0,0,0,0.5],[0.1,0.1,0.1,0.5],[0.1,0.1,0.1,0.5],[0,0,0,1],[0,0,0,0.5],[0,0,0,0.5]],[0.08],0,0, "", "", _tsource];
_urcet setDropInterval 0.005;
sleep 9;

//palarie
_palarie setParticleCircle [0,[0,0,0]];
_palarie setParticleRandom [5,[20,20,1],[400,400,5],50,2,[0,0,0,0.1],0,0];
_palarie setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1],"","Billboard",1,16,[0,0,150],[0,0,250],80,11.5,7.9,0.1,[10,20,35],[[0,0,0,0.5],[0,0,0,0.5],[0,0,0,0]],[0.08],0,0,"", "", _tornadamid];
_palarie setDropInterval 0.002;

private _effect_screen = "";
While { tornadosino != "goof" } do {
    _effect_screen = ppEffectCreate ["FilmGrain", 2000];
    _effect_screen ppEffectEnable true;
    _effect_screen ppEffectAdjust [0.1,0.1,0.5,0.1,0.1,true];
    _effect_screen ppEffectCommit 0;
    sleep 0.5;
};

private _source_end_part = "#particlesource" createVehicle (getpos _tsource);
_source_end_part setParticleCircle [50, [0.2, 0.5, 0.9]];
_source_end_part setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0.3], 0, 1, [0, 0, 0, 0.1], 0, 0];
_source_end_part setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1, 10, [0, 0, 0], [0, 0, 0.75], 15, 17, 13, 0.7, [15, 17, 19], [[0.5, 0.5, 0.5, 0.3], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 0.1, 3, "", "", _tsource];
_source_end_part setDropInterval 0.05;

deleteVehicle _vartej_alb;
deleteVehicle _urcet;
deleteVehicle _rotitor;
deleteVehicle _leaves;
deleteVehicle _palarie;

sleep 17;

deleteVehicle _source_end_part;

_effect_screen ppEffectEnable false;
ppEffectDestroy _effect_screen;
enableCamShake false;
