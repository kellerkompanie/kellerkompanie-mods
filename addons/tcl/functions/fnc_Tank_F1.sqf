#include "script_component.hpp"

params ["_enemy","_group","_logic","_units"];

private _vehicle = (vehicle _enemy);

if ( (_vehicle isKindOf "Tank") && { (isEngineOn _vehicle) } ) then {
	private ["_unit","_weapon","_array"];
	private _count = 0;
	
	for "_count" from _count to (count _units - 1) do {
		_unit = (_units select _count);
		_weapon = (secondaryWeapon _unit);
		_array = [];
		
		if (_weapon isKindOf ["Launcher", configFile >> "CfgWeapons"] ) exitWith {
			_array = (magazines _unit) select { (getText (configfile >> "CfgMagazines" >> _x >> "displayNameShort") isEqualTo "AT") };
			
			if (_array isEqualTo [] ) exitWith {};
			
			[_unit, _enemy, _weapon] spawn FUNC(Tank_F2);
		};
	};
};

True
