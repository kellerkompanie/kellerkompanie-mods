#include "script_component.hpp"

params ["_enemy","_group","_logic"];

if (GVAR(Feature) select 7) then {
	private _units = (units _group);
	
	if (_group in (GVAR(Flare) select 0) ) exitWith {};
	
	if ( (floor (random 100) < (GVAR(Feature) select 8) ) || ( { (_units findIf { ( (alive _x) && (hmd _x isEqualTo "") ) } > -1) } ) ) then {
		private ["_unit","_muzzles"];
		private _count = 0;
		
		for "_count" from _count to (count _units - 1) do {
			_unit = (_units select _count);
			_muzzles = getArray (configFile >> "CfgWeapons" >> (primaryWeapon _unit) >> "muzzles");
			
			if ( (alive _unit) && (count _muzzles == 2) ) exitWith {
				(GVAR(Flare) select 0) pushBack _group;
				
				private _magazines = [];
				private _magazine = (magazines _unit select 0);
				_magazines pushBack _magazine;
				_unit removeMagazine _magazine;
				private _array = ["1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"];
				
				{
					if ( (_x in _array) || (currentMagazine _unit in _array) ) then {
						_magazines pushBack _x; 
						_unit removeMagazine _x;
					}; 
				} forEach magazines _unit;
				
				private _muzzle = (_muzzles select 1);
				private _flare = "UGL_FlareWhite_F";
				
				sleep 5 + (random 15);
				
				private ["_direction","_random","_range","_distance"];
				private _count = 3 + (random 5);
				
				while { ( (alive _unit) && { (alive _logic) } && { (_count > 0) } ) } do {
					if (_unit distance _logic < 300) then {
						if (floor (random 100) < (GVAR(Feature) select 8) ) then {
							_direction = (_unit getDir _enemy);
							_random = 30 - (random 50);
							_range = (_direction + _random);
							_distance = 130 + (random 50);
							
							if (_unit distance _logic < _distance) then {
								_distance = (_unit distance _logic);
								_distance = (_distance + _random);
							};
							
							_flare = "F_40mm_White" createVehicle [ (getPos _unit select 0) + (_distance * sin _range), (getPos _unit select 1) + (_distance * cos _range), 70 + (random 70) ];
							_flare setVelocity [0,0,-0.3];
							_count = _count - 1;
						};
						
						sleep 30 + (random 50);
					}
					else {
						sleep 10;
					};
				};
				
				if (alive _unit) then { {_unit addMagazine _x} forEach _magazines};
				
				private _value = 70 + (random 50);
				
				sleep _value;
				
				DELETE_AT(GVAR(Flare), 0, _group);
			};
		};
	};
};
