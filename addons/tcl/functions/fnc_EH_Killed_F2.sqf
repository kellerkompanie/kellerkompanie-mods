#include "script_component.hpp"

params ["_vehicle"];
	
private _size = (sizeOf typeOf _vehicle);
private _distance = (_size * 50);
private _array = ( (GVAR(Garrison) select 0) + (GVAR(Advancing) select 0) + (GVAR(Reinforcement) select 0) );
[_vehicle, _array, _distance] call FUNC(Feature_F3);

True
