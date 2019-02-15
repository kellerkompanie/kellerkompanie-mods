#include "script_component.hpp"

params ["_unit"];

if ((_unit getVariable [QGVAR(backpackIsLocked),false]) && {isNull (unitBackpack _unit)} ) then {

	_unit setVariable [QGVAR(backpackIsLocked), false, true];

	if !(isNil "ace_common_fnc_displayTextStructured") then {
		[{[localize LSTRING(messageLockRemoved)] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
	} else {
		hint localize LSTRING(messageLockRemoved);
	};
};
