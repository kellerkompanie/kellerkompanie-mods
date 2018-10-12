#include "script_component.hpp"

private _nearbyVehicles = missionNamespace getVariable [QGVAR(NearbyVehicles),[]];
private _closestVehicle = objNull;
private _closestRopeIndex = 0;
private _closestDistance = -1;

{
	private _vehicle = _x;
	{
		private _activeRope = _x;
		private _ropes = [_vehicle,(_activeRope select 0)] call FUNC(getRopes);
		{
			private _ends = ropeEndPosition _x;
			if(count _ends == 2) then {
				private _end1 = _ends select 0;
				private _end2 = _ends select 1;
				private _minEndDistance = ((position player) distance _end1) min ((position player) distance _end2);
				if(_closestDistance == -1 || _closestDistance > _minEndDistance) then {
					_closestDistance = _minEndDistance;
					_closestRopeIndex = (_activeRope select 0);
					_closestVehicle = _vehicle;
				};
			};
		} forEach _ropes;
	} forEach ([_vehicle] call FUNC(getActiveRopes));
} forEach _nearbyVehicles;

[_closestVehicle,_closestRopeIndex];
