#include "script_component.hpp"

params ["_unit","_group","_logic","_vehicle"];

_unit assignAsGunner _vehicle;
_unit doMove (getPos _vehicle);

(GVAR(Static_Weapon) select 0) pushBack _unit;
(GVAR(Static_Weapon) select 1) pushBack _vehicle;

[_unit] orderGetIn True; [_unit] allowGetIn True;

private _time = (time + 30);
private _distance = (_unit distance _vehicle);
_time = (_time + _distance);

while { ( (alive _unit) && { (time < _time) } && { (isNull objectParent _unit) } ) } do {
	sleep 5;
};

if ( (alive _unit) && { (time < _time) } && { (_unit == gunner _vehicle) } ) then {
	[_unit, _group, _vehicle] spawn FUNC(Static_Weapon_F4);
}
else {
	DELETE_AT(GVAR(Static_Weapon,0,_unit);
	DELETE_AT(GVAR(Static_Weapon,1,_vehicle);
	_unit leaveVehicle _vehicle; 
	[_unit] orderGetIn False; 
	[_unit] allowGetIn False;
};
	