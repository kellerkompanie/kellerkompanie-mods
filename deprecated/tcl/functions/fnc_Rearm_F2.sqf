#include "script_component.hpp"

params ["_unit","_group","_magazine","_magazines"];

if (alive _unit) then {
	private _objects = nearestObjects [_unit, ["CAManBase"], 100];
	_objects = _objects - (GVAR(Rearm) select 2);
	private _array = [];
	_array = _objects select { ( (alive _x) || (_unit knowsAbout _x == 0) ) };
	_objects = _objects - _array;
	
	if (_objects isEqualTo [] ) exitWith {
		_objects = nearestObjects [_unit, ["LandVehicle"], 100];
		_objects = _objects - (GVAR(Rearm) select 2);
		_objects = _objects select { ( (alive _x) && { (crew _x isEqualTo [] ) } ) };
		
		if (_objects isEqualTo [] ) exitWith {};
		
		private _object = (_objects select 0);
		_array = (magazineCargo _object);
		
		if (_array isEqualTo [] ) exitWith {};
		
		if (_magazine in _array) then {
			(GVAR(Rearm) select 0) pushBack _unit;
			(GVAR(Rearm) select 2) pushBack _object;
			_array = _array select { (_x in _magazines) };
			[_unit, _group, _object, _array] spawn FUNC(Rearm_F4);
		};
	};
	
	private _object = (_objects select 0);
	private _bool = [_unit, _group, _objects, _magazine, _magazines] call FUNC(Rearm_F3);
	 
	if (_bool) then {
		_objects = nearestObjects [_object, ["WeaponHolderSimulated"], 5];
		_objects = _objects - (GVAR(Rearm) select 2);
		
		if (_objects isEqualTo [] ) exitWith {};
		
		private _dummy = (_objects select 0);
		private _weapons = (weaponCargo _dummy);
		private _weapon = (_weapons select 0);
		
		(GVAR(Rearm) select 0) pushBack _unit;
		(GVAR(Rearm) select 2) pushBack _object;
		
		[_unit, _group, _object, _dummy, _weapon] spawn FUNC(Rearm_F4);
	};
};

True
