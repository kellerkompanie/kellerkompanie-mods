#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		

	Parameter(s):
		0: GROUP

	Returns:
		0: BOOL - Are all units inside of a vehicle?
*/
params ["_Group"];

private _Leader = leader _group;

//Are they in a vehicle?
private _AllInVehicle = true;
private _VehArr = [];
{
	private _Veh = objectParent _x;
	if !(isNull _Veh) then {
		_VehArr pushBackUnique _Veh;
	}
	else {
		_AllInVehicle = false;
	}
} foreach (units _Group);


//Once we have a list of all the vehicles, we can now do our thang!

if (count _VehArr > 0) then {
	if (GVAR(CARGOCHNG)) then {
		{
			if (local _x) then {
				private _NE = _leader call FUNC(ClstEmy);
				if (_NE distance2D _leader <= GVAR(DISEMBARKRANGE)) then {
					_x setUnloadInCombat [true, GVAR(TURRETUNLOAD)];
					if (GVAR(Debug)) then {
						diag_log format ["VEHICLECHECK: Group can unload! %1",_group];
					};
				}
				else {
					if (damage _x > 0.2) then {
						_x setUnloadInCombat [true, GVAR(TURRETUNLOAD)];
						if (GVAR(Debug)) then {
							diag_log format ["VEHICLECHECK: Group can unload! Damaged vehicle! %1",_group];
						};
					}
					else {
						_x setUnloadInCombat [false, false];
						if (GVAR(Debug)) then {
							diag_log format ["VEHICLECHECK: Group cant unload! %1",_group];
						};					
					};
				};
			};
		} foreach _VehArr;
	}
	else {
		//If we only want to impact turrets
		{
			_x setUnloadInCombat [true, GVAR(TURRETUNLOAD)];
		} foreach _VehArr;
	};
};

[_AllInVehicle,_VehArr]