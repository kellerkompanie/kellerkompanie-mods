#include "script_component.hpp"

// by ALIAS
// Tutorial: https://www.youtube.com/user/aliascartoons

if (!hasInterface) exitWith {};

enableCamShake true;

[] spawn {
    while {al_duststorm_on} do {
        addCamShake [0.1,27,17];
        sleep (15 + random 120);
    };
};

// increase
[] spawn {
    grain_sand = 0;
    while {grain_sand<2} do {
        effect_screen = ppEffectCreate ["FilmGrain", 2000];
        effect_screen ppEffectEnable true;
        effect_screen ppEffectAdjust [0.1,0.1,grain_sand,0.1,0.1,true];
        effect_screen ppEffectCommit 0;
        grain_sand = grain_sand + 0.1;
        sleep 0.5;
    };
};

[] spawn {
    sleep 5;
    col_fct =1;
    while {col_fct>0.86} do {
        "colorCorrections" ppEffectAdjust[col_fct, 1, 0.01, [-0.14, 0.17, 0.33, col_fct-1],[col_fct, -0.4, col_fct, col_fct],[-0.57, col_fct, -1.2, col_fct]];
        "colorCorrections" ppEffectCommit 0;
        "colorCorrections" ppEffectEnable true;
        col_fct = col_fct-0.001;
        sleep 0.1;
    };
};

sleep 15;

while {al_duststorm_on} do {
    effect_screen = ppEffectCreate ["FilmGrain", 2000];
    effect_screen ppEffectEnable true;
    effect_screen ppEffectAdjust [0.1,0.1,2,0.1,0.1,true];
    effect_screen ppEffectCommit 0;

    "colorCorrections" ppEffectAdjust[ 0.86, 1, 0.01, [-0.14, 0.17, 0.33, -0.14],[0.86, -0.4, 0.86, 0.86],[-0.57, 0.86, -1.2, 0.86]];
    "colorCorrections" ppEffectCommit 0;
    "colorCorrections" ppEffectEnable true;

    // particule in aer
    if (desertVegetation) then {//                                                                                                            <-- !CUSTOMIZED! (test) bool "desertVegetation" needs to be DEFINED!
        particleLocation = "\A3\data_f\ParticleEffects\Hit_Leaves\Sticks";//                                                                <-- ADDED file path for dry shrubs
        publicVariable "particleLocation";
    }else{
        particleLocation = "\A3\data_f\ParticleEffects\Hit_Leaves\Sticks_Green";//                                                            <-- ORIGINAL file path
        publicVariable "particleLocation";
    };

    private _leaves_p  = "#particlesource" createVehicleLocal (getpos player);
    if (vehicle player != player) then {_leaves_p attachto [vehicle player];} else {_leaves_p attachto [player];};//                        <-- check if player is in vehicle
    _leaves_p setParticleRandom [0, [10, 10, 7], [4, 4, 5], 2, 0.1, [0, 0, 0, 0.5], 1, 1];
    _leaves_p setParticleCircle [100, [0, 0, 0]];
    _leaves_p setParticleParams [[particleLocation, 1, 1, 1], "", "SpaceObject", 1,27,[0,0,0],[50,50,10],2,0.000001,0.0,0.1,[0.5+random 5],[[0.68,0.68,0.68,1]],[1.5,1],13,13,"","",vehicle player,0,true,1,[[0,0,0,0]]];

    private _alias_local_fog = "#particlesource" createVehicleLocal (getpos player);
    if (vehicle player != player) then {_alias_local_fog attachto [vehicle player];} else {_alias_local_fog attachto [player];};
    _alias_local_fog setParticleCircle [10, [3, 3, 0]];
    _alias_local_fog setParticleRandom [10, [0.25, 0.25, 0], [1, 1, 0], 1, 1, [0, 0, 0, 0.1], 0, 0];
    _alias_local_fog setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 12, [0, 0, 0], [-1, -1, 0], 3, 10.15, 7.9, 0.01, [10, 10, 20], [[0.65, 0.5, 0.5, 0], [0.65, 0.6, 0.5, 0.3], [1, 0.95, 0.8, 0]], [0.08], 1, 0, "", "", vehicle player];



    _leaves_p setDropInterval leaves_p_drop;
    _alias_local_fog setDropInterval alias_drop_fog_factor;

    sleep (5 + random 10);
    deletevehicle _leaves_p;
    deletevehicle _alias_local_fog;
};

hndl_blur = ppEffectCreate ["DynamicBlur", 500];
hndl_blur ppeffectenable true;
hndl_blur ppeffectadjust [3];
hndl_blur ppeffectcommit 3;
sleep 3;

//hint "desc";sleep 5;
col_fct =0.86;
    while {col_fct<1} do {
        "colorCorrections" ppEffectAdjust[col_fct, 1, 0.01, [1-col_fct, 0.17, 0.33, col_fct-1],[col_fct, -0.4, col_fct, col_fct],[0.299, 0.587, 0.114, 1-col_fct]];
        //"colorCorrections" ppEffectAdjust[1, 1, 0, [0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0]];
        "colorCorrections" ppEffectCommit 0;
        "colorCorrections" ppEffectEnable true;
        col_fct = col_fct+0.001;
        sleep 0.0001;
};

/*
"colorCorrections" ppEffectAdjust[1, 1, 0, [0, 0, 0, 0],[1, 1, 1, 1],[0.299, 0.587, 0.114, 0]];
"colorCorrections" ppEffectCommit 0;
"colorCorrections" ppEffectEnable true;
*/

hndl_blur ppeffectadjust [0];
hndl_blur ppeffectcommit 3;
sleep 3;
hndl_blur ppEffectEnable false;
ppEffectDestroy hndl_blur;

grain_sand = 0;
    while {grain_sand>0} do {
        effect_screen = ppEffectCreate ["FilmGrain", 2000];
        effect_screen ppEffectEnable true;
        effect_screen ppEffectAdjust [0.1,0.1,grain_sand,0.1,0.1,true];
        effect_screen ppEffectCommit 0;
        grain_sand = grain_sand - 0.1;
        sleep 0.5;
    };

effect_screen ppEffectEnable false;
"colorCorrections" ppEffectEnable false;
ppEffectDestroy effect_screen;
enableCamShake false;
