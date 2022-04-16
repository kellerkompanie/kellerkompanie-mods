#include "script_component.hpp"
//Function for controlling the queue of groups moving to cover. It's job is to at least space out all groups looking for cover by 2 seconds each. Reducing the FPS impact.

if (count GVAR(CoverQueue) > 0) then {
	{
		[_x] call FUNC(ForceMove);
	} foreach GVAR(CoverQueue);
	GVAR(CoverQueue) = [];
};