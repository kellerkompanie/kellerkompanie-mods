{
	_x params ["_mod","_keyname","_fnc","_active"];
	
	_modbind = _mod + "_keys_" + _keyname;
	_moddata = profilenamespace getvariable _modbind;
	_modkey = _moddata select 0;
	
	_dta = _x;
	
	if (!isNil "_modkey") then
	{
		if (inputAction (format["User%1",_modkey]) > 0.1) then
		{
			if !_active then
			{
				_dta set [3, true];
				call (missionNamespace getVariable [_fnc, {}]);
			};
		} else
		{
			_dta set [3, false];
		};
	};
	true
} count babe_core_modkeydata;