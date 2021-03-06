#include "script_component.hpp"
/*
	Author: Freddo

	Description:
		Generates a list of drivers for keko_vcomai_fnc_VehicleDetection to process

	Parameter(s):
		NONE

	Returns:
		ARRAY - Array containing eligible drivers
	Example1:  [] call keko_vcomai_fnc_UpdateDrivers;
*/
private _driverList = [];
{
	private _driver = (driver _x);
	
	if (
		!isPlayer _driver &&
		{_x isKindOf "allvehicles"} && 
		{!(velocity _x isEqualTo [0,0,0])} &&
		{!(_x isKindOf "AIR")} && 
		{!(isNull _driver)} && 
		{local _driver} && 
		{!((group _driver) getvariable [QGVAR(Disable),false])} 
	) then {
		_driverList pushback _x;
	};
} forEach vehicles;

_driverList