#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _time = (GVAR(Radio) select 1);
private _random = (random _time);

_time = (_time + _random);
_skill = [_group] call FUNC(Accuracy_F);
_time = (_time / _skill);
_time = (time + _time);

_time
