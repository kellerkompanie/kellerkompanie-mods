#include "script_component.hpp"

params ["_unit","_group"];

private _leader = (leader _group);
private _array = ( (GVAR(Heal) select 0) + (GVAR(Rearm) select 0) + (GVAR(Take_Cover) select 0) + (GVAR(House_Search) select 0) );

if (_unit in _array) exitWith {True};

True
