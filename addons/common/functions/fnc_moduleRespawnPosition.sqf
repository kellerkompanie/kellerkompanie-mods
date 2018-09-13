#include "script_component.hpp"

params ["_logic"];

if (!local _logic) exitWith {};

[getPos _logic, 0] call FUNC(setRespawnPosition);

deletevehicle _logic;