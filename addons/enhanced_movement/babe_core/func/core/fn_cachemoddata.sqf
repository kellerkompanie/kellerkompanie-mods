_modcfgs = "true" configClasses (configFile >> "CfgModSettings");
_modcfgs = _modcfgs apply {configname _x};

_modkeydata = [];

_defaultkey = 1;
_defaultset = 1;




{
	_mod = _x;
	
	_modinit = (_mod + "_fnc_init");
	if !(_modinit isEqualTo "babe_core_fnc_init") then
	{
		call (missionNameSpace getVariable _modinit);
	};
	
	
	_modkeys = "true" configClasses (configFile >> "CfgModSettings" >> _mod >> "keys");
	
	if (count _modkeys > 0) then
	{
		{	
			_countx2 = _x;
			
			_modkey = configname _countx2;
			_setname = getText (configFile >> "CfgModSettings" >> _mod >> "keys" >> _modkey >> "displayname");
			_fnc = getText (configFile >> "CfgModSettings" >> _mod >> "keys" >> _modkey >> "keyfunction");
			
			_modset = profilenamespace getvariable _mod + "_keys_" + _modkey;
			
			if (isNil "_modset") then
			{
				profilenamespace setvariable [_mod + "_keys_" + _modkey, [_defaultkey, "User Action " + str _defaultkey]];
				_defaultkey = _defaultkey + 1;
			};

			_modkeydata pushback [_mod, _modkey, _fnc, false];
			
			true
		} count _modkeys;
	};
	
	_modoptions = "true" configClasses (configFile >> "CfgModSettings" >> _mod >> "Settings");
	_modoptions = _modoptions apply {configname _x};
	
	if (count _modoptions > 0) then
	{
		{
			_modoption = _x;
			
			_setname = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> "displayname");
			_fnc = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> "function");
			_pars = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> "functionpars");
			
			_modset = profilenamespace getvariable _mod + "_settings_" + _modoption;
			_setname = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> configname("true" configClasses (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption) select 0) >> "displayname");
			_val = getNumber (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> configname("true" configClasses (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption) select 0) >> "value");
			
			if (isNil "_modset") then
			{
				_defval = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> "defaultvalue");
				if (_defval isEqualTo "") then
				{
					profilenamespace setvariable [_mod + "_settings_" + _modoption, [_val, _setname]];				
				} else
				{
					_setname = getText (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> _defval >> "displayname");
					_defval = getNumber (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> _defval >> "value");
					profilenamespace setvariable [_mod + "_settings_" + _modoption, [_defval, _setname]];
				};
			} else
			{
				_states = "true" configClasses (configFile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption);
				
				{
					_state = configname _x;
					_val = getNumber (configfile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> _state >> "value");
					
					if (_val == _modset select 0) then
					{
						_fnc = getText (configfile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> _state >> "function");
						
						if (isMultiplayer) then
						{
							_mp = getNumber (configfile >> "CfgModSettings" >> _mod >> "Settings" >> _modoption >> _state >> "multiplayer");
							if (_mp == 1) then
							{
								call compile _fnc;
							};
						} else
						{
							call compile _fnc;
						};
					};
				} foreach _states;
			};
		} foreach _modoptions;
	};
} foreach _modcfgs;



babe_core_modkeydata = _modkeydata;