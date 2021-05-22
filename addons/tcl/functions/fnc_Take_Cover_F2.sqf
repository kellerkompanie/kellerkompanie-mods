#include "script_component.hpp"

params ["_unit","_enemy","_group","_bool"];

if (alive _enemy) then {
	private _array = (_unit getVariable QGVAR(Take_Cover));
	
	if (isNil "_array") then {
		_unit setVariable [QGVAR(Take_Cover), [time, [], (getPos _unit) ] ];
		_array = (_unit getVariable QGVAR(Take_Cover));
		private _text = format ["Take_Cover_F > Error > %1 > %2 > %3 > %4", _unit, (side _unit), _group, (typeOf _unit) ];
		diag_log ("////////////////////////////////// TCL error dump //////////////////////////////////" + endl + _text + endl + "///////////////////////////////////////////////////////////////////////////");
		player sideChat _text;
		_string = format ["%1<t align='center'>Ups...!<br/>Something went wrong %2...<br/>Don't worry the problem will be solved as soon as this message appears.<br/>Please help me fix this issue by reporting the line stored in your .rpt file!</t>", "<t size='1.5' color='#ffff00' underline='True'>Information:</t><br/>", name player];
		hint parseText _string;
	};
	
	if (time > (_array select 0) ) then {
		private _time = (time + 15);
		
		if (_unit knowsAbout vehicle _enemy > 0) then {
			_time = _time + (random 30);
			private _object = [_unit, _enemy, _group, _bool, _array] call FUNC(Take_Cover_F3);
			
			if (alive _object) then {
				(GVAR(Take_Cover) select 0) pushBack _unit;
				(GVAR(Take_Cover) select 1) pushBack _object;
				[_unit, _enemy, _group, _object, _bool] spawn FUNC(Take_Cover_F4);
			};
		};
		
		_array set [0, _time];
	};
};

True
	