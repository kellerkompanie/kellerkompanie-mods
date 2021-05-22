#include "script_component.hpp"

params ["_unit","_group","_logic"];

private _return = objNull;
private _leader = (leader _group);
private _objects = _unit nearEntities ["StaticWeapon", 100];

if (_objects isEqualTo [] ) exitWith {_return};

private _array = ( (GVAR(Static_Weapon) select 1) + (GVAR(Static_Weapon) select 2) );
_objects = _objects - _array;
_objects = _objects select { ( (alive _x) && { (someAmmo _x) } && { (_unit knowsAbout _x > 0) } && { (_x distance _leader < 100) } ) };
private ["_vehicle","_side","_crew"];
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_vehicle = (_objects select _count);
	_side = False;
	
	if (getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "side") isEqualTo getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "side") ) then {
		_side = True;
	};
	
	_crew = (crew _vehicle);
	
	if ( (_side) && { (_crew isEqualTo [] ) } ) exitWith {
		_return = _vehicle;
	};
};

_return
	
	