/*
	Name: keko_ctab_fnc_deleteHelmetCam

	Author(s):
		Gundy

	Description:
		Delete helmet camera

	Parameters:
		NONE

	Returns:
		BOOLEAN - TRUE

	Example:
		call keko_ctab_fnc_deleteHelmetCam;

*/
#include "script_component.hpp"

private ["_cam"];

if (!isNil "cTabHcams") then {
	_cam = cTabHcams select 0;
	_cam cameraEffect ["TERMINATE","BACK"];
	camDestroy _cam;
	deleteVehicle (cTabHcams select 1);
	cTabHcams = nil;
};

true
