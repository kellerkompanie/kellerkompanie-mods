#include "script_component.hpp"

_this spawn {
	private ["_temp","_players","_groups","_array","_count","_group","_vehicles","_vehicle"];

	_temp = [];

	while { True } do {
		_players = (playableUnits + switchableUnits);
		

		_players = _players - (GVAR(Players) select 0);	
		_array = (GVAR(Players) select 0) select { (alive _x) };	
		GVAR(Players) set [0, _array];	
		_array = (GVAR(Players) select 1) select { (alive _x) };	
		GVAR(Players) set [1, _array];
		
		if (_players isEqualTo [] ) exitWith {};
		
		[_players] call FUNC(Players_F);
			
		
		_groups	= allGroups;

		_groups = _groups - (GVAR(Groups) select 0);	
		_array = ( (GVAR(Disabled) select 0) + (GVAR(Players) select 2) );	
		_groups = _groups - _array;	
		_groups = _groups select { ( (side _x in (GVAR(System) select 2) ) && { (units _x findIf { (alive _x) } > -1) } ) };	
		_temp = _temp - [grpNull];	
		_groups = _groups - _temp;
		
		if (_groups isEqualTo [] ) exitWith {};
		
		_temp = _temp - (GVAR(Groups) select 0);	
		_temp append _groups;	
		_count = 0;
		
		for "_count" from _count to (count _groups - 1) do {
			_group = (_groups select _count);
			
			[_group] spawn FUNC(Spawn_F);
		};
		
		_vehicles = vehicles;
		_array = ( (GVAR(Vehicles) select 0) + (GVAR(Vehicles) select 1) );	
		_vehicles = _vehicles - _array;	
		_array = _vehicles select { ( (_x isKindOf "WeaponHolderSimulated") || (typeOf _x == "Steerable_Parachute_F") ) };	
		_vehicles = _vehicles - _array;	
		(GVAR(Vehicles) select 1) append _array;
		
		if (_vehicles isEqualTo [] ) exitWith {};
		
		[_vehicles] call FUNC(Vehicles_F);
		_array = GVAR(Artillery) select 0;
		
		if (_array isEqualTo [] ) exitWith {};
		
		_array = _array select {_vehicle = (vehicle leader _x); (getArray (configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "availableForSupportTypes") select 0 isEqualTo "Artillery") };
		GVAR(Artillery) set [0, _array];
		
		sleep 5;
	};
};