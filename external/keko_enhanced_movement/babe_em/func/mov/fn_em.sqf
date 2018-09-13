params ["_pos", "_top", "_toppos", "_climber", "_climbonly"];

_st = stance _climber;
_stnope = ["PRONE"];

_babe_em_vars = _climber getvariable "babe_em_vars";

if ((_babe_em_vars select 0) or (damage _climber) > 0.85 or _st in _stnope or vehicle _climber != _climber) exitwith {}; /// or (getStamina _climber) < 0.01 

if (_climber == player) then
{
	_babe_em_vars set [0, false];
	_babe_em_vars set [1, false];
};



_stepa = EM_heightsOn select 0;
_stepb = EM_heightsOn select 1;

_ona = EM_heightsOn select 1;
_onb = EM_heightsOn select 2;

_onha = EM_heightsOn select 2;
_onhb = EM_heightsOn select 3;

_onhera = EM_heightsOn select 3;
_onherb = EM_heightsOn select 4;


_vaulta = EM_heightsOver select 0;
_vaultb = EM_heightsOver select 1;

_overa = EM_heightsOver select 1;
_overb = EM_heightsOver select 2;

_overha = EM_heightsOver select 2;
_overhb = EM_heightsOver select 3;

_overhera = EM_heightsOver select 3;
_overherb = EM_heightsOver select 4;

_wl1 = EM_weightlimits select 0;

_wl2 = EM_weightlimits select 1;

_wl3 = EM_weightlimits select 2;

_wlj = EM_weightlimits select 3;


_enableover = EM_enable select 0;
_enableon = EM_enable select 1;


EM_default_animspeedcoef = getAnimSpeedCoef player;


_anm = "";

_stmpn = 2;
_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);

if (str _pos == "[0,0,0]") exitwith
{
	if (isTouchingGround _climber && {!(_babe_em_vars select 0) && (getstamina _climber > 8) && isNil "_climbonly"}) then
	{
		[_climber, _wlj] call babe_em_fnc_jump			
	};
};

_h = ((_climber worldToModel asltoagl _pos) select 2) max 0;




_over = false;

if (_top) then
{

	switch (true) do
	{
		case (_h > _onhera && _h <= _onherb && load _climber < _wl3 && _enableon):
		{
			_stmpn = 10;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climbonHer_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climbonHer_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climbonHer_pst";
				};
			};
		};
		case (_h > _onha && _h < _onhb && load _climber < _wl2 && _enableon):
		{
			_stmpn = 8;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climbonH_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climbonH_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climbonH_pst";
				};
			};
		};
		case (_h > _ona && _h <= _onb && load _climber < _wl1 && _enableon):
		{
			_stmpn = 6;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climbon_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climbon_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climbon_pst";
				};
			};
		};
		case (_h > _stepa && _h <= _stepb):
		{
			_stmpn = 2;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_stepon_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_stepon_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_stepon_pst";
				};
			};
		};
	};
} else
{
	switch (true) do
	{
		case (_h > _overhera && _h <= _overherb && load _climber < _wl3 && _enableover):
		{
			_stmpn = 10;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climboverHer_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climboverHer_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climboverHer_pst";
				};
			};
		};
		case (_h > _overha && _h <= _overhb && load _climber < _wl2 && _enableover):
		{
			_stmpn = 8;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climboverH_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climboverH_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climboverH_pst";
				};
			};
		};
		case (_h > _overa && _h < _overb && load _climber < _wl1 && _enableover):
		{
			_stmpn = 6;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_climbover_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_climbover_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_climbover_pst";
				};
			};
		};
		case (_h > _vaulta && _h <= _vaultb):
		{
			_stmpn = 4;
			_stmpn = _stmpn * 0.5 + _stmpn * 0.5 * (load _climber);
			switch (currentWeapon _climber) do
			{
				case (""):
				{
					_anm = "babe_vaultover_ua";
				};
				case (primaryWeapon _climber):
				{
					_anm = "babe_vaultover_rfl";
				};
				case (handgunWeapon _climber):
				{
					_anm = "babe_vaultover_pst";
				};
			};
		};
	};
_over = true;	
};
if (_anm == "") exitwith 
{
	if (isTouchingGround _climber && {!(_babe_em_vars select 0) && (getstamina _climber > 8) && isNil "_climbonly"}) then
	{
		[_climber, _wlj] call babe_em_fnc_jump			
	};
};
_babe_em_vars = _climber getvariable "babe_em_vars";
_babe_em_vars set [0, true];
_climber setVariable ["babe_em_vars", _babe_em_vars];

[((name _climber) + "EH_em"), {animationState (_condpars select 0) == (_condpars select 1)}, [_climber, _anm], "babe_em_fnc_exec_em", [_pos, _over, _climber], true, "babe_em_fnc_finish_em", [_toppos, _over, _stmpn, _climber], 0] call babe_core_fnc_addEH;
_climber setAnimSpeedCoef 1-(load _climber)*0.3;
_climber playMove _anm;
