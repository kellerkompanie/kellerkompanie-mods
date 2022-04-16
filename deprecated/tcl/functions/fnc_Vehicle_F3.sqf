#include "script_component.hpp"

params ["_group","_vehicle"];
	
private _array = [];
_array pushBack _vehicle;
private _units = (units _group);
private _leader = (leader _group);

if ( (isNull objectParent _leader) || (_leader in _vehicle) ) then {
	_array = _array;
}
else {
	_array pushBack (vehicle _leader);
};

{
	_x forceSpeed 0;
} forEach _array;

sleep 10;

{
	_x forceSpeed -1;
} forEach _array;

if (isNull objectParent _leader) then {
	_leader forceSpeed -1;
};

_units doFollow _leader;
	