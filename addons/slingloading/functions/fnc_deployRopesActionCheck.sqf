#include "script_component.hpp"

if(vehicle player == player) then {
	[cursorTarget] call FUNC(canDeployRopes);
} else {
	[vehicle player] call FUNC(canDeployRopes);
};
