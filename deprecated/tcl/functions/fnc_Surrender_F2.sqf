#include "script_component.hpp"

params ["_unit","_dummy","_weapon"];

private _courage = (_unit skill "courage");
_courage = (_courage / 3);
private ["_random","_fleeing"];
_fleeing = 0;

while { ( (alive _unit) && { (captive _unit) } ) } do {
	_random = (random _courage);
	_fleeing = (_fleeing + _random);
	_unit allowFleeing _fleeing;
	sleep 10 + (random 30);
	
	if (fleeing _unit) exitWith {
		_unit switchMove "";
		
		if (floor (random 100) < 50) then {
			if (True) exitWith {
				[_unit, _dummy, _dummy, _weapon] spawn FUNC(Rearm_F4);
			};
			
			_unit forceSpeed 0;
			_unit doWatch _dummy;
			_unit setUnitPos "MIDDLE";
			_unit action ["TakeWeapon", _dummy, _weapon];
			sleep 3;
			_unit action ["REARM", _dummy];
			_unit forceSpeed -1;
			_unit doWatch objNull;
			_unit setUnitPos "AUTO";
		};
		
		sleep 10 + (random 30);
		
		_unit setCaptive False;
	};
};

DELETE_AT(GVAR(Surrender), 0, _unit);
