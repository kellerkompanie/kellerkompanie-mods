/*
	Name: keko_ctab_fnc_remoteControlUav

	Author(s):
		Gundy

	Description:
		Take control of the currently selected UAV's gunner turret

	Parameters:
		NONE

	Returns:
		BOOLEAN - TRUE

	Example:
		[] call keko_ctab_fnc_remoteControlUav;
*/
#include "script_component.hpp"

private ["_uavGunner"];

// see if there is a selected UAV and if it is alive before continuing
if (isNil 'cTabActUav' || {!alive cTabActUav}) exitWith {false};

// make sure there is noone currently controlling the gunner seat
// unfortunately this fails as soon as there is a driver connected as only one unit is returned using UAVControl and it will alwasys be the driver if present.
// see http://feedback.arma3.com/view.php?id=23693
if (UAVControl cTabActUav select 1 != "GUNNER") then {
	// see if there is actually a gunner AI that we can remote control
	_uavGunner = gunner cTabActUav;
	if (!isNull _uavGunner) then {
		[] call FUNC(close);
		player remoteControl _uavGunner;
		cTabActUav switchCamera "Gunner";
		cTabUavViewActive = true;
		// spawn a loop in-case control of the UAV is released elsewhere
		cTabActUav spawn {
			waitUntil {(cameraOn != _this) || (!cTabUavViewActive)};
			cTabUavViewActive = false;
		};
	} else {
		// show notification
		["UAV","No gunner optics available",5] call FUNC(addNotification);
	};
} else {
	// show notification
	["UAV","Another user has control",5] call FUNC(addNotification);
};

true
