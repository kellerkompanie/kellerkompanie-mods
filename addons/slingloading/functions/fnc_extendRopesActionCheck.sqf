#include "script_component.hpp"

if(vehicle player == player) exitWith {false};
[vehicle player] call FUNC(canExtendRopes);
