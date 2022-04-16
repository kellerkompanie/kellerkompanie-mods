#include "script_component.hpp"

private ["_unit","_return","_objects","_array","_count","_object"];

_unit = _this select 0;
_return = True;

if (alive _unit) then {
	_objects = _unit nearEntities [ ["Man","Car","Tank","Air"], 100];
	_objects = _objects - [_unit];

	if (count _objects > 0) then {
		_array = [];
		_count = 0;

		for "_count" from _count to (count _objects - 1) do	{
			_object = (_objects select _count);

			if ( ( [_object] call FUNC(Armed_F)) && (_unit countFriendly [_object] > 0) && (side _object != CIVILIAN) && (_unit knowsAbout vehicle _object > 0) ) then {
				_setIn(_array,-1,_object);
			};

			if (count _array > GVAR(Global) select 42 ) exitWith {
				_return = False;
			};
		};
	};
};

_return
	