_string = toArray _this;

for "_n" from 0 to ((count _string)-1) do 
{
 _t = (_string select _n) == 116;

 if (_t) then 
 {
	_h = (_string select _n+1) == 104;

	_i = (_string select _n+2) == 105;

	_s = (_string select _n+3) == 115;

	if (_t && _h && _i && _s) then {_string set [_n, 95]};
 };
};
_string = toString _string;
_string = "_his = _this; "+_string;
_string