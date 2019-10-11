#include "script_component.hpp"
// Original by ALIAS http://www.armaholic.com/page.php?id=34293
// Creates 1 spark at object position (objSrc) and waits for specified amount of time afterwards

if (!hasInterface) exitWith {};

params ["_objSrc","_pauseBetweenSparks"];

private _bbr = boundingBoxReal vehicle _objSrc;
private _p1 = _bbr select 0;
private _p2 = _bbr select 1;
private _maxHeight = abs ((_p2 select 2) - (_p1 select 2));

//_spark_poz_rel = [getPos _objSrc select 0,getPos _objSrc select 1,_maxHeight-0.5];
private _spark_poz_rel = (_maxHeight/2)-0.45;
private _spark_type = selectRandom ["white","orange"];

private _drop = 0.001+(random 0.05);
private _scantei_spark = "#particlesource" createVehicleLocal (getPosATL _objSrc);
_scantei_spark setParticleCircle [0, [0, 0, 0]];

if (_spark_type == "orange") then {
    _scantei_spark setParticleRandom [1, [0.1, 0.1, 0.1], [0, 0, 0], 0, 0.25, [0, 0, 0, 0], 0, 0];
} else {
    _scantei_spark setParticleRandom [1, [0.05, 0.05, 0.1], [5, 5, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0];
};

_scantei_spark setParticleParams [
    ["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1],
    "",
    "SpaceObject",
    1, 1,
    [0, 0,_spark_poz_rel],
    [0, 0, 0],
    0, 15, 7.9, 0,
    [0.5,0.5,0.05],
    [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]],
    [0.08], 1, 0, "", "",
    _objSrc,0,true,0.3,[[0,0,0,0]]
];
_scantei_spark setDropInterval _drop;

_objSrc say3D [selectRandom ["spark1","spark3","spark11","spark2","spark22","spark5","spark4"], 350];
sleep _pauseBetweenSparks;
deleteVehicle _scantei_spark;
