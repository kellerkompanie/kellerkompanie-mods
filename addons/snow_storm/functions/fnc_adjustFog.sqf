#include "script_component.hpp"

if (!hasInterface) exitWith {};

waitUntil {!isNil QGVAR(pos_p)};

while {(!isNull player) and GVAR(stormActive)} do {
	if (GVAR(pos_p) == "open") then {
		_alias_local_fog = "#particlesource" createVehicleLocal (getpos player);
		_alias_local_fog setParticleCircle [10,[3,3,0]];
		_alias_local_fog setParticleRandom [2,[0.25,0.25,0],[1,1,0],1,1,[0,0,0,0.1],0,0];
		_alias_local_fog setParticleParams [["\A3\data_f\cl_basic",1,0,1],"","Billboard",1,8,[0,0,0],[-1,-1,0],3,10.15,7.9,0.03,[5,10,10],[[0.5,0.5,0.5,0],[0.5,0.5,0.5,0.1],[1,1,1,0]],[1],1, 0,"","",player];
		_alias_local_fog setDropInterval 0.1;
		waitUntil {GVAR(pos_p) != "open"};
		deleteVehicle _alias_local_fog;
	};
	if (GVAR(pos_p) == "player_car") then 
	{
		_alias_local_fog = "#particlesource" createVehicleLocal (getpos player);
		_alias_local_fog setParticleCircle [30,[3,3,0]];
		_alias_local_fog setParticleRandom [0,[0.25,0.25,0],[1,1,0],1,1,[0,0,0,0.1],0,0];
		_alias_local_fog setParticleParams [["\A3\data_f\cl_basic",1,0,1],"","Billboard",1,4,[0,0,0],[-1,-1,0],3,10.15,7.9,0.03,[5,10,20],[[0.5,0.5,0.5,0],[0.5,0.5,0.5,0.1],[1,1,1,0]],[1],1, 0,"","",player];
		_alias_local_fog setDropInterval 0.1;		
		waitUntil {GVAR(pos_p) != "player_car"};
		deleteVehicle _alias_local_fog;
	};
	if (GVAR(pos_p) =="in_da_house") then  
	{
		_alias_local_fog = "#particlesource" createVehicleLocal (getpos player);
		_alias_local_fog setParticleCircle [GVAR(raza_snow),[3,3,0]];
		_alias_local_fog setParticleRandom [0,[0.25,0.25,0],[1,1,0],1,1,[0,0,0,0.1],0,0];
		_alias_local_fog setParticleParams [["\A3\data_f\cl_basic",1,0,1],"","Billboard",1,4,[0,0,0],[-1,-1,0],3,10.15,7.9,0.03,[5,10,20],[[0.5,0.5,0.5,0],[0.5,0.5,0.5,0.1],[1,1,1,0]],[1],1, 0,"","",player];
		_alias_local_fog setDropInterval 0.1;		
		waitUntil {GVAR(pos_p) != "in_da_house"};
		deleteVehicle _alias_local_fog;
	};	
	if (GVAR(pos_p) =="under_water") then {
		waitUntil {
			sleep 5; 
			GVAR(pos_p) !="under_water"
		};
	};
	if (GVAR(pos_p) =="deep_sea") then {
		waitUntil {
			sleep 5; 
			GVAR(pos_p) !="deep_sea"
		};
	};
};