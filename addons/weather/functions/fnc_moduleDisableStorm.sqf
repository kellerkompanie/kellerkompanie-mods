#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

[] spawn FUNC(snow_terminateSnow);
[] spawn FUNC(dust_abortStorm);
