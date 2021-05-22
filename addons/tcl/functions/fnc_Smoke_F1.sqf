#include "script_component.hpp"

params ["_enemy","_group"];

if (GVAR(Feature) select 3) then {
	if (floor (random 100) < (GVAR(Feature) select 4) ) then {
		private _units = (units _group);
		
		if (_units findIf { (alive _x) } > -1) then {
			private _muzzle = [];
			private _magazine = "SmokeShell";
			
			if (count _this == 3) then {
				_magazine = "SmokeShellRed";
			};
			
			private ["_unit","_magazines"];
			private _count = 0;
			
			for "_count" from _count to (count _units - 1) do {
				_unit = (_units select _count);
				_magazines = (magazines _unit);
				
				if ( (alive _unit) && { (_magazine in _magazines) } ) exitWith {
					if (_magazine isEqualTo "SmokeShell") then {
						_muzzle = ["SmokeShellMuzzle","SmokeShellMuzzle"];
					}
					else {
						_muzzle = ["SmokeShellRedMuzzle","SmokeShellRedMuzzle"];
					};
				};
			};
			
			if (_muzzle isEqualTo [] ) exitWith {};
			
			_unit doWatch (getPos _enemy);
			sleep 1 + (random 3);
			_unit forceWeaponFire _muzzle;
		};
	};
};
