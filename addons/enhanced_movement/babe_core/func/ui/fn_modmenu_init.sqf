_display = findDisplay 157;
_emcore = _display displayCtrl 212513;
_modlist = _display displayCtrl 101;
_logo = _display displayCtrl 102;

_mods = "true" configClasses (configFile >> "CfgModSettings");
_modclasses = _mods apply {configName _x};

disableSerialization; 
_emcore = _display ctrlCreate ["BABE_core_List", 212513];
_emcore CtrlsetPosition (ctrlPosition (_display displayCtrl 102));
_emcore ctrlcommit 0;

_modlist setVariable ["modmenu", [_emcore, _logo, ctrlPosition _logo, _modclasses]];
_rgb = [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]), (profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]), (profilenamespace getvariable ['GUI_BCG_RGB_B',0.5]),1];

_present = [];
_dns = _modclasses apply {getText(configfile >> "CfgModSettings" >> _x >> "displayname")};

for "_i" from 0 to lbsize _modlist do
{
	_txt = _modlist lbText _i;
	
	if (toLower _txt in (_dns apply {toLower _x})) then
	{
		_modlist lbSetColor [_i, _rgb];
		_present pushback _txt;
	};
};

{
	_dn = _x;
	
	if ((_present select {toLower _dn isEqualTo toLower _x}) isEqualTo []) then
	{		
		_index = _modlist lbAdd _dn;
		_modlist lbSetPicture [_index, "a3\ui_f\data\gui\rsc\rscDisplaySingleMission\done_ca.paa"];
		_modlist lbSetColor [_index, _rgb];
	};
} foreach _dns;


[_modlist, lbCurSel _modlist] call (uiNamespace getVariable 'babe_core_fnc_updateexplist');

_modlist ctrlAddEventHandler ["LBSelChanged",
{
	_this call (uiNamespace getVariable 'babe_core_fnc_updateexplist');
}];