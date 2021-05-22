#include "script_component.hpp"

params ["_unit","_group"];

if (alive _unit) then {
	private _objects = nearestObjects [_unit, ["CAManBase"], 100];
	_objects = _objects - (GVAR(Heal) select 2);
	private _array = _objects select { (alive _x) };
	_objects = _objects - _array;
	
	if (_objects isEqualTo [] ) exitWith {};
	
	private _object = (_objects select 0);
	(GVAR(Heal) select 2) pushBack _object;
	private _items = (items _object);
	_items = _items select { ( (_x isEqualTo "Medikit") || (_x isEqualTo "FirstAidKit") ) };
	
	if (_items isEqualTo [] ) exitWith {};
	
	(GVAR(Heal) select 0) pushBack _unit;
	(GVAR(Heal) select 1) pushBack _unit;
	private _item = (_items select 0);
	[_unit, _group, _object, _item] spawn FUNC(Heal_F3);
};

True
