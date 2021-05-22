#include "script_component.hpp"

params ["_group"];

private _count = 0;

while { _count < count units _group } do {
	sleep 1;	
	_count = _count + 1;
};

if (GVAR(Multiplayer)) then {
	private _leader = (leader _group);
	
	if (local _leader) exitWith {};
	
	sleep 1;
	
	private _driver = objNull;	
	private _vehicle = objNull;
	
	if (isNull objectParent _leader) then {
		_driver = objNull;		
		_vehicle = objNull;
	}
	else {
		_vehicle = (vehicle _leader);		
		_driver = (driver _vehicle);
	};
	
	if (_group in (GVAR(Zeus) select 0) ) then {
		_group setGroupOwner 2;
	};
	
	if (alive _driver) then {
		if (local _driver) exitWith {};
		
		while { _driver in _vehicle } do {
			sleep 1;
		};
		
		_driver moveInDriver _vehicle;
	};
};

private _value = GVAR(System) select 8;
sleep _value;
private _units = (units _group);

if (_units findIf { (alive _x) } > -1) then {
	_group = [_group];	
	[_group] call FUNC(Groups_F1);
};