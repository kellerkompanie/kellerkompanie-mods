#include "script_component.hpp"

params ["_group","_vehicle"];
	
private _leader = (leader _group);

if (_leader in assignedVehicle _leader) then {
	private _driver = (driver _vehicle);
	
	if !(alive _driver) then {
		[_leader] orderGetIn False;
		_leader assignAsDriver _vehicle;
		[_leader] orderGetIn True;
	};
	
	private _units = (units _group);
	
	if (_count == 0) then {
		if (_units findIf { (currentCommand _x isEqualTo "GET IN") } > -1) then {
			_count = 30;
		}
		else {
			if (_vehicle distance _position > 3) then {
				_count = 30;
				_position = (getPos _vehicle);
			}
			else {
				if (_vehicle in (GVAR(Stuck) select 0) ) then {
					_count = _count - 1;
					_group leaveVehicle _vehicle;
				}
				else {
					_count = 30;
					(GVAR(Stuck) select 0) pushBack _vehicle;
				};
			};
		};
	}
	else {
		private _array = [5, 15, 25];
		
		if (_count in _array) then {
			{
				if ( (isNull objectParent _x) && { (currentCommand _x isEqualTo "GET IN") } && { (_x distance assignedVehicle _x < 100) } ) exitWith { 
					[_group, assignedVehicle _x] spawn FUNC(Vehicle_F3);
				}; 
			} forEach _units;
		};
		
		_count = _count - 1;
	};
};

_count
