#include "script_component.hpp"

params ["_unit","_enemy","_array"];
	
private _rgba = [1,1,1,1];
private _marker = format ["%1", _unit];
private _color = "colorWhite";

if (_unit in _array) then {
	_rgba = [1,0,0,1];	
	_color = (markerColor _marker);
};

private _count = 100;

while { _count > 0 } do {
	if (alive _unit) then {
		drawLine3D [getPos _unit, getPos _enemy, _rgba];		
		_marker setMarkerColor _color;		
		sleep 0.01;
	}
	else {
		_count = 0;		
		_marker setMarkerColor "ColorGrey";
	};
	
	_count = _count - 1;
};
