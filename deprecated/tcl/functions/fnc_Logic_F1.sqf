#include "script_component.hpp"

params ["_enemy"];
	
private _side = createCenter sideLogic;
private _group = createGroup _side;
private _logic = _group createUnit ["Logic", (getPos _enemy), [], 0, "NONE"];

[_logic] join _group;

_logic allowDamage False;

_logic
