#include "script_component.hpp"

private ["_array","_vehicle"];

while { True } do {
	_array = GVAR(Heal) select 0;	

	if (_array isEqualTo [] ) exitWith {};	

	_array = GVAR(Heal) select 0;	
	_array = (GVAR(Heal) select 0) select { (alive _x) };	
	GVAR(Heal) set [0, _array];	
	_array = GVAR(Heal) select 1;	
	_array = (GVAR(Heal) select 1) select { (alive _x) };	
	GVAR(Heal) set [1, _array];
	

	_array = GVAR(Rearm) select 0;
	
	if (_array isEqualTo [] ) exitWith {};
	
	_array = GVAR(Rearm) select 0;		
	_array = (GVAR(Rearm) select 0) select { (alive _x) };		
	GVAR(Rearm) set [0, _array];		
	_array = GVAR(Rearm) select 1;		
	_array = (GVAR(Rearm) select 1) select { (alive _x) };		
	GVAR(Rearm) set [1, _array];
	

	_array = GVAR(Flanking) select 0;
	
	if (_array isEqualTo [] ) exitWith {};
	
	_array = GVAR(Flanking) select 1;		
	_array = (GVAR(Flanking) select 1) select { (alive _x) };		
	GVAR(Flanking) set [1, _array];		
	_array = GVAR(Flanking) select 2;		
	_array = (GVAR(Flanking) select 2) select { (alive _x) };		
	GVAR(Flanking) set [2, _array];

	
	_array = GVAR(Artillery) select 0;
	
	if (_array isEqualTo [] ) exitWith {};
	
	_array = _array select {_vehicle = (vehicle leader _x); (getArray (configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "availableForSupportTypes") select 0 isEqualTo "Artillery") };	
	GVAR(Artillery) set [0, _array];

	
	sleep 30;
};