/*
BWCSM_Fnc_CruiseMissileLaunch 

Author: Big_Wilk

Description: Launches cruise missile from position that will travel to a pos or track and object.

Parameters:
0: Object: Position:(Example Car1, Example [0,0,0]) 
1: Object: Position:(Example Car2, Example [1,1,1]) 
2: Side: (Example: WEST)
3: String: (Example: "hello")
Return: Nothing.

MP: Run by server. 

Example One: 
0 = [getpos a1, a2, EAST] call BWCSM_Fnc_LaunchCruiseMissile;

Example Two: 
0 = [getpos a1, getpos a2, WEST] call BWCSM_Fnc_LaunchCruiseMissile

*/
private ["_launchObject","_targetObject","_side"];

_launchPos = [getPos _launchObject, 50] call CBA_fnc_randPos;
_target = getPos _targetObject;

playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _launchObject];
sleep 6;

_x = (_launchPos select 0);
_y = (_launchPos select 1);
_z = -1; 
_launchSpeed = 30; 

_dir = [_launchPos, _target] call BIS_fnc_dirTo;

//sleep 6;
_misL = "BWCSM_BASE_CruiseMissile1" createVehicle [_x, _y , -1];
_misL setVelocity [0, 0, 100];
playSound3D ["BWCSM_Vehicles\CruiseMissile\Data\Sound\cruisemissile_launch.wss", _launchObject, false, [_x, _y , 1], 1, 1, 2000]; 

// Create Rocket Effects
_source = "#particlesource" createVehicle [0,0,0];
_source attachTo [_misL,[0,0,-2.5]];
_source setParticleCircle [0, [0, 0, 0]];
_source setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_source setParticleParams [["\A3\data_f\Cl_water", 1, 0, 1], "", "Billboard", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [1.2, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _misL];
_source setDropInterval 0.01;

_light = "#lightpoint" createVehicle [0,0,0];
_light setLightBrightness 1;
_light setLightAmbient[.9, .9, .9];
_light setLightColor[.9, .9, 0];
_light lightAttachObject [_misL, [0,0,2]];
_light setLightFlareMaxDistance 500;

_source2 = "#particlesource" createVehicle  [0,0,0];
_source2 attachTo [_misL,[0,0,3]];
_source2 setParticleCircle [0, [0, 0, 0]];
_source2 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_source2 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 2, [0, 0, 0], [0, 0, 3], 0, 20, 2, 0.075, [5.5, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _misL];
_source2 setDropInterval 0.01;

// Control Rocket Ascent 
_dZ = 0.1;
_i = 0;
_vector_start = [0, 0, 1];
_misL setVectorDir [0, 1, 0];
_misL setVectorUp [_vector_start select 0, (_vector_start select 1) - (_i * _dZ), _vector_start select 2];
_count = 0;

while {getPos _misL select 2 < 550} do 
{
	_misL setVelocity [0, 0, _launchSpeed + _count];
	_count = _count + 0.1;
	sleep 0.01;
};

_skyPos = getPos _misL; 
//_obj = "Sh_120_SABOT" createVehicle _skyPos;
//_obj setDamage 1;
{deleteVehicle _x} forEach [_misL,_source,_source2,_light];

// Spawn Cruiser 
_misArray = [_skyPos, _dir, "BWCSM_BASE_CruiseMissile2", _side] call bis_fnc_spawnvehicle; 
_misSky = _misArray select 0;
_misSkyCrew = _misArray select 1;
_misSkyGroup = _misArray select 2; 
_driver = _misArray select 0;
_misSky flyInHeight 20; 
_misSky setFuel 0.04; 
{_driver disableAI _x} forEach ["AUTOTARGET","AUTOTARGET","ANIM","FSM","AIMINGERROR","SUPPRESSION"];
removeAllWeapons _misSky;
_driver setskill 500;


_source = "#particlesource" createVehicle getPos _misL;
/*
_light = "#lightpoint" createVehicle [0,0,0];
_light setLightBrightness 1;
_light setLightAmbient[.9, .9, .9];
_light setLightColor[.9, .9, 0];
_light lightAttachObject [_misSky, [0,0,1]];
//_light setLightFlareMaxDistance 500;
*/

_misSkyGroup setVariable ["BWCSM_CruiseMissileTarget",[_misSky, _target,_misSkyCrew], false];

//_driver doMove _target;
_wp =_misSkyGroup addWaypoint [_target, 0];
_wp setWaypointStatements ["true", "((group this) getVariable ""BWCSM_CruiseMissileTarget"") spawn keko_fnc_cruiseMissileDecent"];
_wp setWaypointBehaviour "CARELESS";
_wp setWaypointCombatMode "BLUE";
_wp setWaypointCompletionRadius 1000;

sleep 4;

_source attachTo [_misSky,[0,0,-5.5]];
_source setParticleCircle [0, [0, 0, 0]];
_source setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_source setParticleParams  [["\A3\data_f\missileSmoke", 1, 0, 1], "", "Billboard", 1, 20, [0, 0, 0], [0, 0, 0.75], 0, 0, 3, 0.075, [1, 2, 4], [[0.5, 0.5, 0.5, 0.5], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _misSky];
_source setDropInterval 0.001;

sleep 14;

deleteVehicle _source; 