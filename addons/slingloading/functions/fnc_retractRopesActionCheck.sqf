#include "script_component.hpp"

if(vehicle player == player) then {
	[cursorTarget] call FUNC(canRetractRopes);
} else {
	[vehicle player] call FUNC(canRetractRopes);
};
