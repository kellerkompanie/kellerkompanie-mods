// Area-of-Operation:  NAVAL
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_nav_trigger.sqf"; };
sleep 1;


private ["_aoSize","_trgLOC","_dxx","_max","_pos","_n50","_grn","_red","_blu","_bad"];

_aoSize = _this select 0;
_trgLOC = _this select 1;
//trgNAV = 0; // reset trg


_dxx = 3000;
_max = 100;


_pos = getPos player;
_n50 = _pos nearEntities _dxx;
_grn = resistance countSide _n50;
_red = east countSide _n50;
_blu = west countSide _n50;
_bad = _grn + _red + _blu;

if (VQI_FROGS_HINTS == 1) then { hint format ["AO SIZE: %1 \n \n LOC: %2 \n \n GRN + RED: %3",_aoSize,_trgLOC,_bad]; sleep 2; };

if (_bad < _max) then { [_aoSize,_trgLOC] execVM "vqi_frogs\VQI-CombatDiver\AO\nav\Naval\vqi_frogs_ao_naval.sqf"; };
sleep 5;



/////////////////////
/* NOTES:


*/