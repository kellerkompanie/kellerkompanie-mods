_climber = _this select 0; 
_anim = _this select 1;


_babe_em_vars = _climber getvariable "babe_em_vars";
_babe_em_vars set [0, false];
_babe_em_vars set [1, false];
_climber setVariable ["babe_em_vars", _babe_em_vars];

_climber setAnimSpeedCoef EM_default_animspeedcoef;