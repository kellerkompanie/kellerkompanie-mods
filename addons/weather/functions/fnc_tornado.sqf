#include "script_component.hpp"

// by ALIAS

if (!isServer) exitWith {};

_tornado_start    = _this select 0;
_tornado_dest    = _this select 1;

_tornadasource = "Land_HelipadEmpty_F" createVehicle getMarkerPos _tornado_start;
_tornadamid     = "Land_HelipadEmpty_F" createVehicle getMarkerPos _tornado_start;
_tornadamid setPosATL [getPosATL _tornadasource select 0,getPosATL _tornadasource select 1,100];
[_tornadasource,_tornadamid] remoteExec [QFUNC(tornado_effect),0,true];
[_tornadamid] remoteExec [QFUNC(tornado_sound),0,true];
[_tornadasource] spawn {
    _tuner_tor = _this select 0;
    while {!isNull _tuner_tor} do {
        [_tuner_tor] remoteExec [QFUNC(tornado_tunet),0,true];
        sleep 3;
    };
};

tornadosino = "goon";
publicvariable "tornadosino";
al_foglevel        = fog;
al_rainlevel    = rain;
al_thundlevel    = lightnings;
al_windlevel    = wind;
publicVariable "al_foglevel";
publicVariable "al_rainlevel";
publicVariable "al_thundlevel";
publicVariable "al_windlevel";
sleep 0.1;
[] spawn {
    _ifog = 0;
    while { _ifog < 0.3 } do {
        _ifog = _ifog + 0.001;
        0 setFog _ifog;
        sleep 0.01;
    };
};
[] spawn {
    _irain = 0;
    while { _irain < 1 } do {
        _irain = _irain + 0.01;
        0 setrain _irain;
        sleep 0.1;
    };
};

while {tornadosino == "goon"} do {
    _reldir = getpos _tornadasource getDir (getMarkerPos _tornado_dest);
    _fct = selectRandom [90,-90];
    _op_dir = _reldir+random _fct;
    _dist = 3+(random 3);
    _new_poz = [getpos _tornadasource,_dist, _op_dir] call BIS_fnc_relPos;
    _tornadasource setpos _new_poz;
    _nearobjects = nearestObjects[_tornadasource,[],50];
    {
        if(_x != _tornadasource) then {
            if((_x isKindOf "LandVehicle") or (_x isKindOf "Man") or (_x isKindOf "Air")) then {
                _f= selectRandom [-1,1];
                _x setvelocity [(random 10) * _f,(random 10) * _f,20+(random 10)* _f];
                _x setdamage 0.5; sleep 0.5;
            } else {
                _x setdamage [1,false];
            };
        };
    } foreach _nearobjects;
    if (_tornadasource distance (getMarkerPos _tornado_dest) < 20) then    {
        tornadosino = "goof";
        publicvariable "tornadosino"
    };
    sleep 1;
    _tornadamid setPosATL [getPosATL _tornadasource select 0,getPosATL _tornadasource select 1,100];
    sleep 0.5;
};

[_tornadasource,["tornado_uragan_end",2000]] remoteExec ["say3d"];
deleteVehicle _tornadamid;
sleep 20;
deleteVehicle _tornadasource;
60 setFog al_foglevel;
60 setRain al_rainlevel;
60 setLightnings al_thundlevel;
setWind [al_windlevel select 0, al_windlevel select 1, true];
