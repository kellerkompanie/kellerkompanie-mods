params ["_climber"];

[((name _climber) + "EH_em_drop")] call babe_core_fnc_removeEH;

[((name _climber) + "EH_em_loop")] call babe_core_fnc_removeEH;

babe_em_help setpos [0,0,0];

_babe_em_vars = _climber getvariable "babe_em_vars";
_babe_em_vars set [0, false];
_babe_em_vars set [1, false];
_climber setVariable ["babe_em_vars", _babe_em_vars];

