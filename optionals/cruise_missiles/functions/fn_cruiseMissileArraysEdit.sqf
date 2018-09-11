private ["_arraySelection","_missArray","_curMis","_newmissArray"];

_arraySelection = _this select 0;
_missArray = _this select 1;
_curMis = _this select 2; 

_newmissArray = ((_arraySelection select 6) getVariable "ordinance") - [_curMis];
(_arraySelection select 6) setVariable ["ordinance",_newmissArray,true]; 