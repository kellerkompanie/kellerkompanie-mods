#include "script_component.hpp"

params ["_echo","_kilo"];
	
private _return = False;
private _units = (units _kilo);
private _value = (GVAR(IQ) select 0);
private _knowsAbout = (_units findIf { ( (alive _x) && { (_echo knowsAbout vehicle _x > _value) } ) } );

if (_knowsAbout == -1) then {
	_units = (units _echo);	
	_knowsAbout = (_units findIf { ( (alive _x) && { (_kilo knowsAbout vehicle _x > _value) } ) } );
};

if (_knowsAbout > -1) then {
	_return = True;
};

_return
