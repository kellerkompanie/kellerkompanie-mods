/*
	Name: keko_ctab_fnc_close

	Author(s):
		Gundy

	Description:
		Initiates the closing of currently open interface

	Parameters:
		No Parameters

	Returns:
		BOOLEAN - TRUE

	Example:
		[] call keko_ctab_fnc_close;
*/
#include "script_component.hpp"

private ["_displayName","_display"];

if !(isNil "cTabIfOpen") then {
	// [_ifType,_displayName,_player,_playerKilledEhId,_vehicle,_vehicleGetOutEhId]
	_displayName = cTabIfOpen select 1;
	_display = uiNamespace getVariable _displayName;

	_display closeDisplay 0;
	if !([_displayName] call FUNC(isDialog)) then {
		[] call FUNC(onIfclose);
	};
};

true
