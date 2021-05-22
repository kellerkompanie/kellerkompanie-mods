#include "script_component.hpp"

params ["_unit","_group","_object","_bool"];

_unit forceSpeed -1;
_unit doWatch objNull;
_unit setUnitPos "AUTO";

DELETE_AT(GVAR(Rearm),0,_unit);

[_unit, _group] call FUNC(Follow_F1);

if (_bool) then {
	sleep 10 + (random 30);
	DELETE_AT(GVAR(Rearm),2,_object);
}
else {
	sleep 30 + (random 50);
};

DELETE_AT(GVAR(Rearm),1,_unit);
