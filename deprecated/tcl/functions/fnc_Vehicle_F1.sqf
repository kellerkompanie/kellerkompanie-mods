#include "script_component.hpp"

params ["_group","_logic"];

private _units = (units _group);
private ["_unit","_vehicle","_gunner","_driver"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (isNull objectParent _unit) then {
		[_unit] orderGetIn False; [_unit] allowGetIn False;
	}
	else {
		if (assignedVehicleRole _unit select 0 == "Cargo") then {
			[_unit] orderGetIn False; [_unit] allowGetIn False;
		}
		else {
			_vehicle = (vehicle _unit);
			_gunner = (gunner _vehicle);
			
			if ( (alive _gunner) && { (canFire _vehicle) } && { (someAmmo _vehicle) } ) then {
				_driver = (driver _vehicle);
				
				if (_unit == _driver) then {
					if (_vehicle in (GVAR(Vehicle) select 0) ) exitWith {};
					[_group, _logic, _vehicle] spawn FUNC(Vehicle_F2);
				};
			}
			else {
				[_unit] orderGetIn False; [_unit] allowGetIn False;
			};
		};
	};
};

True
