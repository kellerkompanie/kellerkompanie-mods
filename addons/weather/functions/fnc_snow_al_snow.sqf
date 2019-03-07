#include "script_component.hpp"

// by ALIAS
// SNOW STORM SCRIPT DEMO- For vanilla terrains
// Tutorial: https://www.youtube.com/user/aliascartoons

if (!isServer) exitWith {};

private _name_terr = worldName;

if (_name_terr=="Altis" or _name_terr=="Stratis" or _name_terr=="Tanoa") then {
    terrain_type_vanilla = true;
    publicVariable "terrain_type_vanilla";
} else {
    terrain_type_vanilla = false;
    publicVariable "terrain_type_vanilla";
};
//hint str _name_terr;

params ["_direction_snowstorm", "_duration_snowstorm", "_effect_on_objects", "_ambient_sounds_al", "_breath_vapors_units", "_snow_burst_server_side", "_snow_burst_client_side", "_al_fog_snow", "_hoverUnit"];


ambient_sounds_al = _ambient_sounds_al;
publicVariable "ambient_sounds_al";

breath_vapors_units = _breath_vapors_units;
publicVariable "breath_vapors_units";

snow_burst_server_side = _snow_burst_server_side;
publicVariable "snow_burst_server_side";

snow_burst_client_side = _snow_burst_client_side;
publicVariable "snow_burst_client_side";

al_fog_snow = _al_fog_snow;
publicVariable "al_fog_snow";

//null = [] execVM "AL_snowstorm\alias_hunt.sqf";
//null = [] execvm "AL_snowstorm\umblator.sqf";
[] spawn FUNC(snow_alias_hunt);
[] spawn FUNC(snow_umblator);


al_snowstorm_om = true;
publicVariable "al_snowstorm_om";

// - memoreaza parametri actuali
al_foglevel        = fog;
al_windlevel    = wind;
publicVariable "al_foglevel";
publicVariable "al_windlevel";

sleep 0.1;

[_duration_snowstorm] spawn {
    params ["_duration_snowstorm"];

    x_duration_snowstorm = _duration_snowstorm;
    if (x_duration_snowstorm<0) then {al_snowstorm_om = true;publicVariable "al_snowstorm_om";}
    else {
    sleep x_duration_snowstorm;

    al_snowstorm_om = false;
    publicVariable "al_snowstorm_om";

    finishRotocol = false;
    publicVariable "finishRotocol";

// restaureaza parametri vreme
    60 setFog al_foglevel;
    setWind [al_windlevel select 0, al_windlevel select 1, true];
    };
};

[] spawn {
    if (snow_burst_server_side) then {
        while {al_snowstorm_om} do {
            //["bcg_wind","playSound"] call BIS_fnc_MP;
            ["bcg_wind"] remoteExec ["playSound"];
            sleep 42;
        };
    } else {
        while {al_snowstorm_om} do {
            //["bcg_wind_mild","playSound"] call BIS_fnc_MP;
            ["bcg_wind_mild"] remoteExec ["playSound"];
            sleep 42;
        };
    };
};

[] spawn {
    sleep 10;
    while {al_snowstorm_om} do {
        private _tuse = ["tuse_1","tuse_2","tuse_3","tuse_4","tuse_5","tuse_6"] call BIS_fnc_selectRandom;
        //[[hunt_alias, _tuse], "say3d", true] call BIS_fnc_MP;
        [hunt_alias,[_tuse,100]] remoteExec ["say3d"];
        // >> you can tweak sleep value if you want to hear playable units coughing more or less often
        sleep (60 + random ambient_sounds_al);//60+random 180;
    };
};

// tree cracks
[] spawn {
    sleep 20;
    treecrack= "Land_HelipadEmpty_F" createVehicle [0,0,0];
    while {al_snowstorm_om} do {
        private _treesu = ["tree_crack_1","tree_crack_2","tree_crack_3","tree_crack_4","tree_crack_5","tree_crack_6","tree_crack_7","tree_crack_8","tree_crack_9"] call BIS_fnc_selectRandom;
        pos_tree = [hunt_alias,3+random 10, random 360] call BIS_fnc_relPos;
        treecrack setpos [pos_tree select 0,pos_tree select 1,3 + random 20];
        //[[treecrack, _treesu], "say3d", true] call BIS_fnc_MP;
        [treecrack,[_treesu,100]] remoteExec ["say3d"];
        // >> you can tweak sleep value if you want to hear trees cracking more or less often
        sleep (31 + random ambient_sounds_al);
    };

};

[] spawn {
    sleep 5;
if (snow_burst_server_side) then {
    private _rotocol= "Land_HelipadEmpty_F" createVehicle [0,0,0];
    private _rotocol_1= "Land_HelipadEmpty_F" createVehicle [0,0,0];

    while {al_snowstorm_om} do {

        finishRotocol = true;
        publicVariable "finishRotocol";

    if (terrain_type_vanilla) then {
            drop_int_rot = 0.001 + random 0.01;
            publicVariable "drop_int_rot";
            life_part_rot = 1+random 3;
            publicVariable "life_part_rot";
            //fulg_p_drop    = 0.001;    //<--- droprate
            //publicVariable "fulg_p_drop";
    } else {
            //fulg_p_drop    = 0.0001;    //<--- droprate
            //publicVariable "fulg_p_drop";
            life_part_rot = 5+random 5;
            publicVariable "life_part_rot";
            drop_int_rot = 0.001;
            publicVariable "drop_int_rot";
    };

        private _fct = [1,-1] call BIS_fnc_selectRandom;
        vitx = 5*_fct;
        publicVariable "vitx";
        vity = 5*_fct;
        publicVariable "vity";

        //hint "agitat";
        private _rafale = ["rafala_1","rafala_2","rafala_6","rafala_7","rafala_9"] call BIS_fnc_selectRandom;
        //[_rafale,"playSound"] call BIS_fnc_MP;
        [_rafale] remoteExec ["playSound"];

        size_rotocol=1+random 9;
        publicVariable "size_rotocol";

        //[[[_rotocol],"AL_snowstorm\rotocol.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;
        //[[[_rotocol_1],"AL_snowstorm\rotocol.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;
        //[[_rotocol],"AL_snowstorm\rotocol.sqf"] remoteExec ["execVM"];
        //[[_rotocol_1],"AL_snowstorm\rotocol.sqf"] remoteExec ["execVM"];

        [[[_rotocol],FUNC(snow_rotocol)],'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP;

        [[[_rotocol_1],FUNC(snow_rotocol)],'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP;

        sleep 1.5;
        private _pos_rotocol = [hunt_alias,5+random 10, random 360] call BIS_fnc_relPos;
        _rotocol setpos [_pos_rotocol select 0,_pos_rotocol select 1,0];
        private _pos_rotocol_1 = [hunt_alias,10+random 10, random 360] call BIS_fnc_relPos;
        _rotocol_1 setpos [_pos_rotocol_1 select 0,_pos_rotocol_1 select 1,0];
        private _dir = ["x","y"] call BIS_fnc_selectRandom;
        private _i=0;
        private _dist=1+floor(random 5);

        while {_i<_dist} do {
            if (_dir == "x") then {
                _rotocol setpos [(getPos _rotocol select 0)+_i,getPos _rotocol select 1,0];
                _rotocol_1 setpos [getPos _rotocol_1 select 0,(getPos _rotocol_1 select 1)+_i,0];
            } else {
                _rotocol setpos [getPos _rotocol select 0,(getPos _rotocol select 1)+_i,0];
                _rotocol_1 setpos [(getPos _rotocol_1 select 0)+_i,getPos _rotocol_1 select 1,0];
            };
            _i=_i+0.05;
            sleep 0.3;
        };
        vitx = 0;
        publicVariable "vitx";
        vity = 0;
        publicVariable "vity";
        //fulg_p_drop    = 0.001+random 0.01;
        //fulg_p_drop    = 0.006;
        //publicVariable "fulg_p_drop";
        finishRotocol = false;
        publicVariable "finishRotocol";
        // >> you can tweak sleep value if you want to have gusts more or less often
        sleep (60 + random ambient_sounds_al);
    };
    deleteVehicle _rotocol;
    deleteVehicle _rotocol_1;
} else {

if (snow_burst_client_side) then {
        while {al_snowstorm_om} do {

        finishRotocol = true;
        publicVariable "finishRotocol";

    if (terrain_type_vanilla) then {
        drop_int_rot = 0.001 + random 0.01;
        publicVariable "drop_int_rot";
        life_part_rot = 1+random 3;
        publicVariable "life_part_rot";
        //fulg_p_drop    = 0.01;
        //publicVariable "fulg_p_drop";
    } else {
        //fulg_p_drop    = 0.001;
        //publicVariable "fulg_p_drop";
        life_part_rot = 5+random 5;
        publicVariable "life_part_rot";
        drop_int_rot = 0.001;
        publicVariable "drop_int_rot";
    };

        private _fct = [1,-1] call BIS_fnc_selectRandom;
        vitx = 5*_fct;
        publicVariable "vitx";
        vity = 5*_fct;
        publicVariable "vity";

        //hint "agitat";
        private _rafale = ["rafala_1","rafala_2","rafala_6","rafala_7","rafala_9"] call BIS_fnc_selectRandom;
        [_rafale,"playSound"] call BIS_fnc_MP;

        size_rotocol=1+random 9;
        publicVariable "size_rotocol";

        //[[[],"AL_snowstorm\rotocol.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;
        //[[],"AL_snowstorm\rotocol_client.sqf"] remoteExec ["execVM"];

        [FUNC(snow_rotocol_client),'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP;


        sleep (5 + random 20);

        vitx = 0;
        publicVariable "vitx";
        vity = 0;
        publicVariable "vity";
        //fulg_p_drop    = 0.001+random 0.01;
        //fulg_p_drop    = 0.006;
        //publicVariable "fulg_p_drop";
        finishRotocol = false;
        publicVariable "finishRotocol";
// >> you can tweak sleep value if you want to have gusts more or less often
        sleep (60 + random ambient_sounds_al);
    };
    } else {
    while {al_snowstorm_om} do {
    finishRotocol = true;
    publicVariable "finishRotocol";

    if (terrain_type_vanilla) then {
            //fulg_p_drop    = 0.001 + random 0.009;
            //publicVariable "fulg_p_drop";
    } else {
            //fulg_p_drop    = 0.0009;
            //publicVariable "fulg_p_drop";
    };

        private _fct = [1,-1] call BIS_fnc_selectRandom;
        vitx = 5 * _fct;
        publicVariable "vitx";
        vity = 5 * _fct;
        publicVariable "vity";

        sleep (60 + random ambient_sounds_al);
        //hint "schimb";
        //fulg_p_drop    = 0.001;
        //publicVariable "fulg_p_drop";

        finishRotocol = false;
        publicVariable "finishRotocol";
        sleep (60 + random ambient_sounds_al);
    };
    };
};
};


if (al_fog_snow) then {
60 setFog [/*fogValue*/1,/*fogDecay*/0.01,/*fogBase*/0.5];
//    [] spawn {        _ifog=0;        while {_ifog <0.5} do {            _ifog=_ifog+0.001; 0 setFog _ifog; sleep 0.01;        };    };
};

// seteaza wind storm functie de directie

raport = 360/_direction_snowstorm;
raport = round (raport * (10 ^ 2)) / (10 ^ 2);
//hint str raport;

if (raport >= 4) then {
    fctx = 1;
    fcty = 1
} else {
    if (raport >= 2) then {
        fctx = 1;
        fcty = -1
    } else {
        if (raport >=1.33) then {
            fctx = -1;
            fcty = -1
        } else {
            fctx = -1;
            fcty = 1
        };
    };
};

if ((raport <= 2) and (raport >= 1.33)) then {
    fctx = -1;
    fcty = -1
};
//hint str fcty;sleep 2;hint str fctx;

private _unx = ((_direction_snowstorm - floor (_direction_snowstorm/90)*90))*fctx;
//hint str _unx;
//_uny    = 90-_unx;

vx = floor (_unx * 0.6);
vy = (54 - vx)*fcty;

// mareste incremental vantul

inx = 0;
iny = 0;

incr = true;
incrx = false;
incry = false;

while {incr} do {
    sleep 0.01;
    if (inx < abs vx) then {inx = inx+0.1;} else {incrx = true};
    if (iny < abs vy) then {iny = iny+0.1} else {incry = true};
    if (incrx and incry) then {incr=false};
    winx = floor (inx*fctx);
    winy = floor (iny*fcty);
    setWind [winx/4,winy/4,true];
};

    alias_drop_fog_factor = 0.01+random 0.1;
    publicVariable "alias_drop_fog_factor";

//[[[],"AL_snowstorm\alias_snowstorm_effect.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;

[FUNC(snow_alias_snowstorm_effect),'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP;


if (breath_vapors_units) then {
    //{[[[_x],"AL_snowstorm\snow_breath.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;sleep 0.5} forEach allUnits;
    {[[[_x],FUNC(snow_breath)],'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP; sleep 0.5} forEach allUnits;

};

if (_effect_on_objects) then {

    while {al_snowstorm_om} do {
        sleep 1;

        al_nearobjects = nearestObjects [hunt_alias,[],50];
        ar_obj_eligibl = [];
        if(_hoverUnit) then {
            {if((_x isKindOf "LandVehicle") or (_x isKindOf "Man") or (_x isKindOf "Air") or (_x isKindOf "Wreck")) then
                {ar_obj_eligibl pushBack _x;};
            } foreach al_nearobjects;
        }else{
            {if((_x isKindOf "LandVehicle") or (_x isKindOf "Air") or (_x isKindOf "Wreck")) then
                {ar_obj_eligibl pushBack _x;};
            } foreach al_nearobjects;
        };

        sleep 1;

        // alege obiect
        private _blowobj= ar_obj_eligibl call BIS_fnc_selectRandom;

        //durata_rafala = 1+random 5;    sleep 30+random 120;
        sleep 1;

        [] spawn {
            //fulg_p_drop            = 0.001;//+random 0.01;
            //publicVariable "fulg_p_drop";
            alias_drop_fog_factor    = 0.01+random 0.1;
            publicVariable "alias_drop_fog_factor";

            private _fct = [1,-1] call BIS_fnc_selectRandom;
            vitx = floor(random 10)*_fct;
            vity = floor(random 10)*_fct;
            publicVariable "vitx";
            publicVariable "vity";
        };

        if (!isNull _blowobj) then {
            private _xblow    = 0.1+random 5;
            private _yblow    = 0.1+random 5;

            // creste viteza incremental
            private _xx = 0;
            private _yy = 0;

            while {(_xx< _xblow) or (_yy< _yblow)} do {
                _blowobj setvelocity [_xx*fctx,_yy*fcty,random 0.1];
                _xx = _xx + 0.01;
                _yy = _yy + 0.01;
                sleep 0.001;
            };

        };
    };

};
