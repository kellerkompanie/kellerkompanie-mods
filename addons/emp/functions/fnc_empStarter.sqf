// Original by ALIAS http://www.armaholic.com/page.php?id=34293
#include "script_component.hpp"

TRACE_1("empStarter", _this);

if (!isServer) exitWith {};

params ["_obj_emp", "_rang_emp", "_viz_eff", "_player_viz", "_dam_unit"];

emp_dam = _dam_unit;
publicVariable "emp_dam";

if (_viz_eff or _player_viz) then {
	[_obj_emp, _viz_eff, _player_viz] remoteExec [QFUNC(vizEffEMP), [0,-2] select isDedicated];
};

[_obj_emp, _rang_emp] call FUNC(configObj);

if (GVAR(affectRadio)) then {
	[_obj_emp, _rang_emp] call FUNC(disableRadios);
};

[{!isNil "special_launchers_emp" && !isNil "emp_dam"}, {[] call FUNC(empEffect)}, []] call CBA_fnc_waitUntilAndExecute;
