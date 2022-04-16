#include "script_component.hpp"

params ["_enemy","_group","_logic","_array","_knowsAbout"];

if (_knowsAbout > 0) then {
	private _units = (units _group);
	_array = [_enemy, _units, _group, _logic, _array] call FUNC(Visible_F);
};

if (_array isEqualTo [] ) then {
	if (GVAR(Feature) select 11) then {
		if (floor (random 100) < (GVAR(Feature) select 12) ) then {
			private _leader = (leader _group);
			
			if (_leader distance _logic < 100) then {
				[_enemy, _group, _logic] call FUNC(House_Search_F1);
			};
		};
	};
}
else {
	if (_knowsAbout > 0) then {
		if (GVAR(Feature) select 13) then {
			if (floor (random 100) < (GVAR(Feature) select 14) ) then	{
				[_enemy, _group, _logic] call FUNC(Static_Weapon_F1);
			};
		};
		
		if (GVAR(Feature) select 15) then	{
			[_enemy, _group, _array] call FUNC(Take_Cover_F1);
		};
	};
};

_array
