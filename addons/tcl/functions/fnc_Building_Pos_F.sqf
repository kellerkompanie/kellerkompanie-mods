#include "script_component.hpp"

params ["_building"];

private _index = 0;

while { True } do {
	if (_building buildingPos _index isEqualTo [0,0,0]) exitWith {
		_index = _index - 1;
	};
	
	_index = _index + 1;
};

_index