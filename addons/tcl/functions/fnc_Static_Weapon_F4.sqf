#include "script_component.hpp"

params ["_unit","_group","_vehicle"];

private _bool = True;
private _missile = False;
private _units = (units _group);
private ["_leader","_weapon","_enemy"];

if (getArray (configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "availableForSupportTypes") isEqualTo [] ) then {
	_bool = False;
	private _weapons = (weapons _vehicle);
	private _magazines = getArray (configfile >> "CfgWeapons" >> (_weapons select 0) >> "magazines");
	private _magazine = (_magazines select 0);
	private _ammo = getText (configfile >> "CfgMagazines" >> _magazine >> "ammo");
	
	if (_ammo isKindOf "MissileBase") then {
		_missile = True;
	};
};

while { ( (alive _unit) && { (_unit == gunner _vehicle) } ) } do {
	_leader = (leader _group);
	
	if ( (canFire _vehicle) && { (someAmmo _vehicle) } ) then {
		if (_bool) then {
			if (_vehicle in (GVAR(Static_Weapon) select 2) ) exitWith {};
			[_unit, _group, _vehicle] spawn FUNC(Mortar_F1);
		};
	}
	else {
		_unit leaveVehicle _vehicle; 
		[_unit] orderGetIn False; 
		[_unit] allowGetIn False;
	};
	
	_enemy = (_group getVariable QGVAR(Enemy));
	
	if (_unit distance _enemy < 10) then {
		[_unit, _group, _vehicle] call FUNC(Static_Weapon_F5);
	};
	
	if (_group in (GVAR(Reinforcement) select 2) ) then {
		[_unit, _group, _vehicle] call FUNC(Static_Weapon_F5);
	};
	
	_group = (group _unit);
	_waypoint = (_group getVariable QGVAR(Waypoint));
	
	if (_unit distance _waypoint > 500) then {
		if (behaviour _leader isEqualTo "COMBAT") then {
			[_unit, _group, _vehicle] call FUNC(Static_Weapon_F5);
		};
	};
	
	sleep 5;
};

if (_unit == gunner _vehicle) then {
	_unit leaveVehicle _vehicle; 
	[_unit] orderGetIn False;
	[_unit] allowGetIn False;
};

DELETE_AT(GVAR(Static_Weapon,0,_unit);

sleep 10 + (random 30);

DELETE_AT(GVAR(Static_Weapon,1,_vehicle);
	
	