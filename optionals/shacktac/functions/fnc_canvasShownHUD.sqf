#include "script_component.hpp"

if (!alive(player)) exitWith {false};
if (!isNull(missionNamespace getVariable ["BIS_DEBUG_CAM", objNull])) exitWith {false};
if (!isNull(missionNamespace getVariable ["BIS_fnc_camera_cam", objNull])) exitWith {false};
true;
