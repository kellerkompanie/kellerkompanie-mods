#include "script_component.hpp"
// Original by ALIAS http://www.armaholic.com/page.php?id=34293

private ["_unit_afect","_e_static"];

if (!hasInterface) exitWith {};

_unit_afect = _this select 0;

private _bbr = boundingBoxReal vehicle _unit_afect;
private _p1 = _bbr select 0;
private _p2 = _bbr select 1;
private _maxWidth = abs ((_p2 select 0) - (_p1 select 0));
private _maxLength = abs ((_p2 select 1) - (_p1 select 1));
private _maxHeight = abs ((_p2 select 2) - (_p1 select 2));

if (_unit_afect isKindOf "MAN") then {
    _e_static = "#particlesource" createVehicleLocal (getPos _unit_afect);
    _e_static setParticleCircle [0,[0,0,0]];
    _e_static setParticleRandom [0.2,[_maxWidth/4,_maxLength/4,_maxHeight],[0,0,0],0,0.001,[0,0,0,1],1,0];
    _e_static setParticleParams [["\A3\data_f\blesk1",1,0,1],"","SpaceObject",1,0.2,[0,0,0],[0,0,0],0,10,7.9,0,[0.002,0.002],[[1,1,0.1,1],[1,1,1,1]],[0.08], 1, 0, "", "", _unit_afect];
    _e_static setDropInterval 0.01;
    [_e_static] spawn {
        params ["_e_static"];
        sleep 1;
        deleteVehicle _e_static;
    };
};

if (_unit_afect isKindOf "LandVehicle") then {
    private _e_car = "#particlesource" createVehicleLocal (getPos _unit_afect);
    _e_car setParticleCircle [_maxWidth-0.5,[0,0,0]];
    _e_car setParticleRandom [0.2,[0.2,0.2,_maxHeight/2-0.5],[0,0,0],0,0.02,[0,0,0,1],1,0];
    _e_car setParticleParams [["\A3\data_f\blesk1",1,0,1],"","SpaceObject",1,0.2,[0,0,0],[0,0,0],0,10,7.9,0,[0.003,0.003],[[1,1,0.1,1],[1,1,1,1]],[0.08], 1, 0, "", "", _unit_afect];
    _e_car setDropInterval 0.01;
    [_e_car] spawn {
        params ["_e_car"];
        sleep 1;
        deleteVehicle _e_car;
    };
};
