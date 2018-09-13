params ["_id", "_cond", "_condpars", "_fnc", "_pars", "_switch", "_switchfnc", "_switchpars", "_delay"];

if (_fnc isEqualType "") then 
{
	if (isNil _fnc) then
	{
		[_fnc + "_fnc", {true}, [], 
		{
			params ["_fnc", "_id"];
			
			if (!isNil _fnc) then
			{
				_index = babe_core_ehs find ((babe_core_ehs select {(_x select 0) isEqualTo _id}) select 0);
				(babe_core_ehs select _index) set [3, missionNameSpace getVariable _fnc];	
				[_fnc + "_fnc"] call babe_core_fnc_removeEH;			
			} else
			{
				systemchat ("isNil " + _fnc);
			};
		}, [_fnc, _id], false, 
		{}, [], 0] call babe_core_fnc_addEH;
		
		_fnc = {};
	} else
	{
		_fnc = missionNameSpace getVariable _fnc;
	};
};

if (_switchfnc isEqualType "") then 
{
	if (isNil _switchfnc) then
	{
		[_switchfnc + "_fnc", {true}, [], 
		{
			params ["_fnc", "_id"];
			
			if (!isNil _fnc) then
			{
				_index = babe_core_ehs find ((babe_core_ehs select {(_x select 0) isEqualTo _id}) select 0);
				(babe_core_ehs select _index) set [3, missionNameSpace getVariable _fnc];	
				[_fnc + "_fnc"] call babe_core_fnc_removeEH;			
			} else
			{
				systemchat ("isNil " + _fnc);
			};
		}, [_switchfnc, _id], false, 
		{}, [], 0] call babe_core_fnc_addEH;
		
		_switchfnc = {};
	} else
	{
		_switchfnc = missionNameSpace getVariable _switchfnc;
	};
};

if (count babe_core_EHs > 0) then
{
	_replace = false;
	for "_i" from 0 to (count babe_core_EHs)-1 do
	{
		if ((babe_core_EHs select _i) select 0 == _id) then
		{
			_replace = true;
			babe_core_EHs set [_i, [_id, _cond, _condpars, _fnc, _pars, _switch, _switchfnc, _switchpars, _delay, diag_tickTime, false]];
		};
	};
	if !_replace then
	{
		babe_core_EHs pushback [_id, _cond, _condpars, _fnc, _pars, _switch, _switchfnc, _switchpars, _delay, diag_tickTime, false];
	};
} else
{
	babe_core_EHs pushback [_id, _cond, _condpars, _fnc, _pars, _switch, _switchfnc, _switchpars, _delay, diag_tickTime, false];
};


	
    
