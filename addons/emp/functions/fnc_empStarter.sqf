// Original by ALIAS http://www.armaholic.com/page.php?id=34293
#include "script_component.hpp"

TRACE_1("empStarter", _this);

if (!isServer) exitWith {};

params ["_empSourceObject", "_empRange", "_hasVisualEffect", "_hasVisualEffectOnPlayer", "_dam_unit"];

emp_dam = _dam_unit;
publicVariable "emp_dam";

if (_hasVisualEffect or _hasVisualEffectOnPlayer) then {
	[_empSourceObject, _hasVisualEffect, _hasVisualEffectOnPlayer] remoteExec [QFUNC(vizEffEMP), [0,-2] select isDedicated];
};

[_empSourceObject, _empRange] call FUNC(configObj);

if (GVAR(affectRadio)) then {
	[_empSourceObject, _empRange] call FUNC(affectRadios);
};

[{!isNil "special_launchers_emp" && !isNil "emp_dam"}, {[] call FUNC(empEffect)}, []] call CBA_fnc_waitUntilAndExecute;
