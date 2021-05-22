#include "script_component.hpp"

params ["_group"];
	
private _array = (_group getVariable QGVAR(Behaviour));

_group setBehaviour (_array select 0);
_group setCombatMode (_array select 1);
_group setFormation (_array select 2);
_group setSpeedMode (_array select 3);
[_group] spawn FUNC(Remount_F6);

True
