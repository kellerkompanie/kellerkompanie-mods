#include "script_component.hpp"

params ["_unit","_vehicle"];

[_unit] join grpNull;

private _group = (group _unit);

(GVAR(Disabled) select 0) pushBack _group;

removeAllWeapons _unit;

_unit allowFleeing 0;
_unit setCaptive True;
_unit setUnitPos "UP";
_unit setSpeedMode "FULL";
_unit setCombatMode "BLUE";
_unit disableAI "AUTOCOMBAT";
_unit setBehaviour "CARELESS";

sleep 10 + (random 30);

if (GVAR(Multiplayer)) then {
	GVAR(Public) = [_unit];	
	publicVariable QGVAR(Public);	
	if (GVAR(Dedicated)) exitWith {};	
	[_unit] spawn FUNC(Fire_FX_F1);
}
else {
	[_unit] spawn FUNC(Fire_FX_F1);
};

_unit setDir (random 360);
_unit setPos (getPos _vehicle);
_unit allowDamage True;

private _array = ["AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr","AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl"];

while { alive _unit } do {
	_unit doMove [
		((getPos _unit select 0) + (random 100 - random 100)), 
		((getPos _unit select 1) + (random 100 - random 100)), 
		0
	];
	
	if (floor (random 100) < 35) then {
		if (_unit distance _vehicle > 5) then {
			if (animationState _unit in _array) exitWith {};
			
			if (floor (random 100) < 50) then {
				_unit playMove "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr";
			}
			else {
				_unit playMove "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl";
			};
		};
	};
	
	_unit setDamage (damage _unit + random 0.1);
	
	if (damage _unit > 0.5) then {
		_unit setDamage 1;
	};
	
	sleep 5;
};
