#include "script_component.hpp"

params ["_unit","_group"];

if (alive _unit) then {
	if (count _this == 2) then {
		sleep 30 + (random 50);
		DELETE_AT(GVAR(Heal), 1, _unit);
	}
	else {
		private _object = (_this select 2);
		
		if (count _this == 3) then {
			if (_unit distance _object < 100) then {
				[_unit, _group, _object] spawn FUNC(Heal_F4);
			}
			else {
				DELETE_AT(GVAR(Heal),0,_unit);
				DELETE_AT(GVAR(Heal),0,_object);
				sleep 10 + (random 30);
				DELETE_AT(GVAR(Heal),1,_unit);
				DELETE_AT(GVAR(Heal),1,_object);
			};
		}
		else {
			private _item = (_this select 3);
			_unit forceSpeed -1;
			private _bool = True;
			private _time = (time + 10);
			_unit doMove (getPos _object);
			private _distance = (_unit distance _object);
			_time = (_time + _distance);
			
			while { ( (alive _unit) && { (time < _time) } ) } do {
				if (_unit distance _object < 1) exitWith {
					_bool = False;
					_unit addItem _item;
					_object removeItem _item; 
					_unit action ["HealSoldierSelf", _unit];
					DELETE_AT(GVAR(Heal),2,_object);
				};
				
				sleep 1;
			};
			
			if (_bool) then {
				DELETE_AT(GVAR(Heal),2,_object);
			};
			
			DELETE_AT(GVAR(Heal),0,_unit);
			
			sleep 30 + (random 50);
			
			DELETE_AT(GVAR(Heal),1,_unit);
		};
	};
};
