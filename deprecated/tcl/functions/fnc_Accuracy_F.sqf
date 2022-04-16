#include "script_component.hpp"

params ["_group"];

private _skill = 1;
private _leader = (leader _group);

if (alive _leader) then {
	_skill = _skill + (_leader skill "general");	
	_skill = _skill + (_leader skill "commanding");	
	_skill = _skill - (_leader skill "courage");
	
	if (_skill < 1) then {
		_skill = 1;
	};
};

_skill