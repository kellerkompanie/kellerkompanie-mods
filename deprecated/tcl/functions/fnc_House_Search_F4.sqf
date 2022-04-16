#include "script_component.hpp"

params ["_unit","_group","_logic","_building"];

private _bool = True;
private _time = (time + 30);
private _position = (getPos _unit);
private _boundingBox = (boundingBox _building);
private _value = (_boundingBox select 1 select 0);

if (_value < (_boundingBox select 1 select 1) ) then {
	_value = (_boundingBox select 1 select 1);
};

_value = (_value / 2);

while { ( (alive _unit) && { (_bool) } ) } do {
	if (time > _time) then {
		if (_unit distance _building > _value) then {
			_bool = False;
		}
		else {
			_unit setDamage 1;
		};
	};
	
	sleep 5;
};
