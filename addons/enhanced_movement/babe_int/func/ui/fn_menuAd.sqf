params ["_w", "_h", "_gap", "_delay", "_btns", "_initpars", "_initfnc"];


setMousePosition [0.5, 0.5];

createDialog "RscDisplayHintC";

_display = findDisplay 57;

{
	_x ctrlShow false
} foreach (allControls _display);

_initpars call _initfnc;

_cbtns = count _btns;

_sqrt = sqrt _cbtns;

_flsqrt = floor _sqrt;

_di = -1;

if (floor (_flsqrt/2) == _flsqrt/2) then 
{
	_di = 1
} else 
{
	_di = 0
};

_sq = -1;

if (_sqrt == _flsqrt) then 
{
	_sq = 1
} else 
{
	_sq = 0
};

_rst = 0;

if (_sq == 0) then 
{
	_rst = _cbtns -_sqrt^2
};

_rw = 0;
_n = 0;

_buttons = [];

for "_i" from 0 to (count _btns)-1 do
{
	_btn = _display ctrlcreate ["RscStructuredText", _i];
	
	_btn ctrlSetPosition [0.5,0.5,0,0];
	_btn ctrlCommit 0;
	_btn ctrlSetFont "PuristaMedium";
	
	_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])];
	_rgb pushback 0.5;
	
	_btn ctrlSetBackgroundColor _rgb;
	
	_buttons pushback _btn;

	(_btns select _i) params ["_txt", "_pars", "_fnc", "_parsloop", "_loop"];
	
	_btn setVariable ["babe_int_menuAD", [_pars, _fnc, _parsloop, _loop]];
	
	_btn ctrlAddEventHandler ["MouseMoving", 
	{
		params ["_ctrl", "_posx", "_posy", "_over"];
		
		if (ctrlEnabled _ctrl) then
		{
			if _over then
			{
				_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])];
				_rgb pushback 1;
				_ctrl ctrlSetBackgroundColor _rgb;
			} else
			{
				_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])];
				_rgb pushback 0.5;
				_ctrl ctrlSetBackgroundColor _rgb;
			};		
		} else
		{
			_ctrl ctrlSetBackgroundColor [0.5, 0.5, 0.5, 0.5];
		};

	}];
	_btn ctrlAddEventHandler ["MouseButtonDown", 
	{
		params ["_ctrl"];
		
		_idc = toArray (str _ctrl);
		reverse _idc;
		_idc resize 1;
		
		_idc = toString _idc;
		
		(_ctrl getVariable "babe_int_menuAD") params ["_pars", "_fnc", "_parsloop", "_loop"];
		
		_pars call _fnc;
		
		closeDialog 0;
	}];

	_txt = parseText ("<br /><t color='#FFFFFF' size= '1' shadow= '0' shadowColor='#000000' align='center'>" + _txt + "</t>");
	
	_btn ctrlSetStructuredText _txt;
	
	_bx = 1;

	_by = 1;

	_bw = 1;

	_bh = 1;

	_n = _n + 1;

	if (_n > _flsqrt) then {_n = 1};

	if (_n == 1) then {_rw = _rw + 1};

	_gapx = ( safezoneX + (safezoneW/2) - ((safezoneW/_w) * (_flsqrt/2-_n+1)) )*_gap;

	_gapy = ( safezoneY + (safezoneH/2) - ((safezoneH/_h) * (_flsqrt/2-_rw+2)) )*_gap;

	_gapw = (safezoneW/_w)*_gap;

	_gaph = (safezoneH/_h)*_gap;

	_bx = ( safezoneX + (safezoneW/2) - ((safezoneW/_w) * (_flsqrt/2-_n+1)) ) + _gapx/2;

	_by = ( safezoneY + (safezoneH/2) - ((safezoneH/_h) * (_flsqrt/2-_rw+2)) ) + _gapy/2;

	_bw = (safezoneW/_w) - _gapw;

	_bh = (safezoneH/_h) - _gaph;

	_btn ctrlSetPosition [_bx, _by, _bw, _bh];

	_btn ctrlCommit _delay;		 
};

babe_int_menuAD_btns = _buttons;

["babe_in_menuAd_loop", "oneachframe",
{
	if (!dialog or {!alive player}) exitWith {["babe_in_menuAd_loop", "oneachframe"] call BIS_fnc_addStackedEventhandler};
	
	{		
		(_x getVariable "babe_int_menuAD") params ["_pars", "_fnc", "_parsloop", "_loop"];
		
		if (_parsloop call _loop) then
		{
			if !(ctrlEnabled _x) then
			{
				_x ctrlEnable true;
			};
		} else
		{
			if (ctrlEnabled _x) then
			{
				_x ctrlEnable false;
				_x ctrlSetBackgroundColor [0.5, 0.5, 0.5, 0.5];
			};
		};
		true
	} count _this;
}, _buttons] call BIS_fnc_addStackedEventhandler;