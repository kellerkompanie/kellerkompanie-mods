params ["_pos", "_climber"];

[((name _climber) + "EH_em_loop"), {((_condpars select 0) getVariable "babe_em_vars") select 0}, [_climber], {(_pars select 0) setVelocity [0,0,0]}, [_climber], false, {}, [], 0] call babe_core_fnc_addEH;

_endpos = [_pos select 0, _pos select 1, (_pos select 2)-1.9];

_help = babe_em_help;

if (!isPlayer _climber) then
{
	_help = "babe_helper" createVehicleLocal [0,0,0];
	_help spawn {sleep 4; deleteVehicle _this};
};

_help setposASL _endpos;

_help setdir getdir _climber;

_poswt = _climber worldtomodel (asltoagl _endpos);

_climber setposASL (agltoasl (_climber modeltoworld [_posWT select 0, (_posWT select 1)+0.1, (_posWT select 2) + 0.1]));