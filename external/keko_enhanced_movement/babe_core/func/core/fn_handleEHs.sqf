{
	_x params ["", "_cond", "_condpars", "_fnc", "_pars", "_switch", "_switchfnc", "_switchpars", "_delay", "_timestamp", "_lightswitch"];

	_EH = _x;
	if (_delay == 0 or {diag_tickTime - _timestamp >= _delay}) then 
	{
		_EH set [9, diag_tickTime];
		if _switch then
		{
			if !_lightswitch then 
			{
				if (_condpars call _cond) then
				{
					_pars call _fnc;
					_EH set [10, true];
				};
			} else
			{
				if !(_condpars call _cond) then
				{
					_switchpars call _switchfnc;
					_EH set [10, false];
				};
			};
		} else
		{
			if (_condpars call _cond) then 
			{
				_pars call _fnc;
			};
		};
	};
	true
} count babe_core_EHs; 