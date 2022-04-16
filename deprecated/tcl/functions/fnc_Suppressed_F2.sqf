#include "script_component.hpp"

params ["_unit","_group"];

private _units = (units _group);
private _leader = (leader _group);
private _behaviour = (behaviour _leader);
_group setBehaviour "STEALTH";

{_x setUnitPos "DOWN"} count _units;

sleep 10 + (random 30);

if (_units findIf { (alive _x) } > -1) then {
	_group setBehaviour _behaviour;
	{_x setUnitPos "AUTO"} count _units;
	sleep 10 + (random 30);
};

DELETE_AT(GVAR(Suppressed), 0, _group);
