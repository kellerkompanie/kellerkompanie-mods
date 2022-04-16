#include "script_component.hpp"

params ["_units","_leader","_vehicle"];

private _turrets = [_vehicle] call FUNC(Get_In_F3);
private _array = [];

{if (vehicle _x isKindOf "Man") then {_array pushBack _x} } forEach _units;

private ["_unit","_turret"];
private _count = 0;

for "_count" from _count to (count _array - 1) do {
	_unit = (_array select _count);
	
	if (_vehicle emptyPositions "Driver" > 0) then {
		_unit assignAsDriver _vehicle;
		_unit moveInDriver _vehicle;
	}
	else {
		if (_vehicle emptyPositions "Commander" > 0) then {
			_unit assignAsCommander _vehicle;
			_unit moveInCommander _vehicle;
		}
		else {
			if (count _turrets > 1) then {
				_turret = (_turrets select 0);				
				_unit assignAsTurret [_vehicle, _turret];
				_unit moveInTurret [_vehicle, _turret];				
				_turrets deleteAt (_turrets find _turret);
			}
			else {
				if (_vehicle emptyPositions "Gunner" > 0) then {
					_unit assignAsGunner _vehicle;
					_unit moveInGunner _vehicle;
				}
				else {
					if (_vehicle emptyPositions "Cargo" > 0) then {
						_unit assignAsCargo _vehicle;
						_unit moveInCargo _vehicle;
					}
					else {
						private _type = (_leader getVariable QGVAR(Get_In));
						
						if (_type) then	{
							[_leader, _vehicle] call FUNC(Get_In_F1);
						};
					};
				};
			};
		};
	};
};

True
