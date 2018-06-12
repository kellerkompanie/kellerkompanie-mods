if (!(vehicle player isEqualTo player) or {!isNil {player getvariable "acex_sitting_issitting"}}) exitWith {babe_em_help setpos [0,0,0]};

_ins = lineIntersectsSurfaces [
	AGLToASL (player modelToWorld [0, 0, 1]), 
	AGLToASL (player modelToWorld [0, 0, -0.2]), 
	player,
	babe_em_help,
	true,
	1,
	"GEOM",
	"NONE"
];

if (count _ins isEqualTo 0) exitWith {babe_em_help setpos [0,0,0]};

(_ins select 0) params ["_pos", "_no", "_obj"];

if (isNull _obj) exitWith {babe_em_help setpos [0,0,0]};

babe_em_help setMass 0;
babe_em_help setPosASL _pos;
babe_em_help setVectorUp _no;
_obj disableCollisionWith babe_em_help;