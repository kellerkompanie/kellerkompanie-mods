_dam = damage (_this select 0);
_babe_em_vars = _climber getvariable "babe_em_vars";

if ((_this select 0 == _this select 3 or (_this select 4) == "") && (_babe_em_vars select 0 or _babe_em_vars select 1)) then 
{
  _dam
};