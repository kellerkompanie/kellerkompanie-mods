params ["_modlist", "_index"];

_dta = _modlist getvariable "modmenu";

_dta params ["_emcore", "_logo", "_logodefault", "_modclasses"];

_modnames = _modclasses apply {getText (configFile >> "CfgModSettings" >> _x >> "displayname")};

//systemchat str [_modnames];
		
_txt = _modlist lbtext _index;
	
if ((toLower _txt) in (_modnames apply {toLower _x})) then
{
	_mod = (_modclasses select {(toLower _txt) isEqualTo toLower(getText (configFile >> "CfgModSettings" >> _x >> "displayname"))}) select 0;
	uinamespace setVariable ["babe_core_currmod", _mod];
	
	_emcore ctrlSetPosition _logodefault;
	_emcore ctrlCommit 0;
	
	//systemchat "bingo!";
	_logo ctrlSetPosition [0,0,0,0];
	_logo ctrlCommit 0;	

	lnbClear _emcore;

	_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5]),1];

	_row = 0;
	
	{
		_name = getText (_x >> "displayname");

		if (_name isEqualTo "") then
		{
			_name = configName _x;
		};
		
		_emcore lnbAddRow [_name,""];
		_emcore lnbSetColor [[_row,0], _rgb];
		_emcore lnbSetText [[_row,0], _name];
		_emcore lnbSetData [[_row,0], str[configName _x]];
		_row = _row + 1;
	} foreach ("true" configclasses (configFile >> "CfgModSettings" >> _mod));		
} else
{
	//systemchat "nope!";
	_logo ctrlSetPosition _logodefault;
	_logo ctrlCommit 0;
	//_emcore ctrlSetPosition [0,0,0,0];
	//_emcore ctrlCommit 0;
	lnbClear _emcore;
};