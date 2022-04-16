#include "script_component.hpp"

params ["_unit","_group","_object","_magazines"];

if (alive _unit) then {
	private _bool = False;
	private _magazine = (_magazines select 0);
	_unit action ["TakeMagazine", _object, _magazine];
	_magazines deleteAt (_magazines find _magazine);
	private _count = (count magazines _unit);
	private _array = [];
	private _index = 0;

	{
		_unit addMagazine _x;
	
		if (count magazines _unit isEqualTo _count) exitWith {
			_bool = True;
		};
		
		_count = (count magazines _unit);
		_index = _index + 1;
		_array = _array + [_x];
		_object removeMagazine _x;
	} forEach _magazines;
	
	if (alive _object) then	{
		_magazines = (magazineCargo _object);
		
		clearMagazineCargo _object;
		
		_count = 0;
		
		for "_count" from _count to (count _magazines - 1) do {
			_magazine = (_magazines select _count);
			
			if (_magazine in _array) then {
				_array deleteAt (_array find _magazine);
			}
			else {
				_object addMagazineCargo [_magazine, 1];
			};
		};
	};
	
	if (count _magazines > _index) then {
		_bool = True;
	};
	
	sleep 3;
	
	_unit selectWeapon (primaryWeapon _unit);
	[_unit, _group, _object, _bool] spawn FUNC(Rearm_F7);
};
