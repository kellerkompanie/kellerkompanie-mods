#include "script_component.hpp"

params ["_array","_ai"];

private _rating = ( (_array select 0) / (_array select 1) );
_rating = (_rating + 0.01) / 2;

if (_rating > 1) then {
	_rating = 1;
};

private _return = False;

if (_rating > _ai) then {
	_return = True;
};

_return
