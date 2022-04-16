#include "script_component.hpp"

params ["_array","_position","_shape","_size","_type","_color"];

private _marker = _array joinString "";

if (getMarkerPos _marker isEqualTo [0,0,0]) then {
	createMarker [_marker, _position];	
	_marker setMarkerShape _shape;	
	_marker setMarkerSize _size;
	
	private _array = ["Horizontal","Border","FDiagonal"];
	
	if (_type in _array) then {
		_marker setMarkerBrush _type;
	}
	else {
		_marker setMarkerType _type;
	};
	
	_marker setMarkerColor _color;
}
else {
	_marker = "";
};

_marker