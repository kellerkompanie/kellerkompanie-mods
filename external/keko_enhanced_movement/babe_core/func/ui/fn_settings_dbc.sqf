params ["_ctrl"];

_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5]),1];
_dta = call compile (_ctrl lnbData [lnbCurSelRow _ctrl,0]);
_mod = uinamespace getVariable "babe_core_currmod";
_str = "(configFile >> 'CfgModSettings' >> " + str _mod;

_strconfig = _str;
{
	_strconfig = _strconfig + " >> " + str _x;
} foreach _dta;

_cfg = call compile ("'true' configclasses " + _strconfig + ");");
			
if (_cfg isEqualTo []) then
{				
	_cfgval = call compile ("getNumber" + _strconfig + " >> ""value"");");
	_cfgdn = call compile ("getText" + _strconfig + " >> ""displayname"");");

	_set = "";
	{
		if (_forEachIndex < count _dta -1) then
		{
			_set = _set + "_"  + _x;
		};
	} foreach _dta;
	
	profilenamespace setVariable [_mod + _set, [_cfgval, _cfgdn]];

	_cfgfnc = call compile (_strconfig + " >> ""function"");");

	if (!isNull _cfgfnc) then
	{
		_cfgfnc = call compile ("getText" + _strconfig + " >> ""function"");");
		if (!isMultiplayer) then
		{
			call compile _cfgfnc;
		};
	};
	
	_strconfig = _str;
	_dta resize 1;
	{
		_strconfig = _strconfig + " >> " + str _x;
	} foreach _dta;

	_cfg = call compile ("'true' configclasses " + _strconfig + ");");
};

lbClear _ctrl;
_row = 0;

if (count _dta > 0) then
{
	_ctrl lnbAddRow ["< back",""];
	_ctrl lnbSetColor [[0,0], _rgb];
	_ctrl lnbSetText [[0,0], "< back"];
	_ctrl lnbSetData [[0,0], str (_dta - [_dta select (count _dta-1)])];
				
	_row = _row + 1;					
};

{
	_name = getText (_x >> "displayname");

	if (_name isEqualTo "") then
	{
		_name = configName _x;
	};
	
	_ctrl lnbAddRow [_name,""];
	_ctrl lnbSetColor [[_row,0], _rgb];
	_ctrl lnbSetText [[_row,0], _name];
	_ctrl lnbSetData [[_row,0], str (_dta + [configName _x])];
	
	_set = _mod;
	{
		_set = _set + "_"  + _x;
	} foreach (_dta + [configName _x]);
	
	_currset = profileNameSpace getvariable _set;
	//systemchat (_currset select 1);
	if (!isNil "_currset") then
	{
		_ctrl lnbSetText [[_row,2], _currset select 1];
	};
	
	_row = _row + 1;
} foreach _cfg;	