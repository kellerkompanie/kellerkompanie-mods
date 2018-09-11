params ["_toppos", "_over", "_stmpn", "_climber"];

[((name _climber) + "EH_em")] call babe_core_fnc_removeEH;
[((name _climber) + "EH_em_loop")] call babe_core_fnc_removeEH;

_climber setStamina (getStamina _climber)-_stmpn;

_help = babe_em_help;

if (_over) then
{ 
	_climber setposASL _toppos;
};

_help setpos [0,0,0];

_babe_em_vars = _climber getvariable "babe_em_vars";
_babe_em_vars set [0, false];
_babe_em_vars set [1, false];
_climber setVariable ["babe_em_vars", _babe_em_vars];

_climber setAnimSpeedCoef EM_default_animspeedcoef;