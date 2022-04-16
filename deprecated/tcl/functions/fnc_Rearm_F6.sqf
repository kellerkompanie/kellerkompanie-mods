#include "script_component.hpp"

params ["_unit","_group","_object","_dummy","_weapon"];

if (alive _unit) then {
	private _bool = True;
	private _magazines = getArray (configfile >> "CfgWeapons" >> _weapon >> "magazines");
	private _array = [];
	_array = (magazines _object) select { (_x in _magazines) };
	
	if (_array isEqualTo [] ) then {
		_bool = False;
		(GVAR(Rearm) select 2) pushBack _dummy;
	}
	else {
		if (primaryWeapon _unit isEqualTo "") then {
		
		}
		else {
			_unit action ["DropWeapon", _dummy, (primaryWeapon _unit) ];
			
			sleep 3;
		};
		
		_unit action ["TakeWeapon", _dummy, _weapon];
		
		sleep 3;
		
		_unit action ["REARM", _object];
		_unit selectWeapon (primaryWeapon _unit);
	};
	
	[_unit, _group, _dummy, _bool] spawn FUNC(Rearm_F7);
};
