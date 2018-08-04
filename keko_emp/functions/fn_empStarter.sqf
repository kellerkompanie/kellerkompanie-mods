// Original by ALIAS http://www.armaholic.com/page.php?id=34293

diag_log text format ["[KEKO] (emp) running keko_emp_fnc_Starter: %1", _this];

if (!isServer) exitWith {};

params ["_obj_emp", "_rang_emp", "_viz_eff", "_player_viz", "_dam_unit"];

emp_dam = _dam_unit;
publicVariable "emp_dam";

if (_viz_eff or _player_viz) then {
  [_obj_emp, _viz_eff, _player_viz] remoteExec ["keko_emp_fnc_vizEffEMP", [0,-2] select isDedicated];
};

[_obj_emp, _rang_emp] call keko_emp_fnc_configObj;
waitUntil {!isNil "special_launchers_emp"};
waitUntil {!isNil "emp_dam"};
[] call keko_emp_fnc_empEffect;
