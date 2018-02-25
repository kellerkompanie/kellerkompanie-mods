disableSerialization;

_display = _this select 0;
_listBox = _display displayCtrl 1500;

lbClear _listBox;

_crates = getArray (configFile >> "kekoFaction" >> keko_var_faction >> "crates");
_logicPos = missionNamespace getVariable "keko_logistics_supply_drop_pos";
_xPos = _logicPos select 0;
_yPos = _logicPos select 1;

_i = 0;
{ 
	_section_title = _x select 0;
	lbAdd [1500, format ["------ %1 ------", _section_title]];
	lbSetData [1500, _i, ""];
	_i = _i + 1;

	_section_crates = _x select 1;

	{
		_role_name = getText (configFile >> "kekoFaction" >> keko_var_faction >> _x >> "name");
		lbAdd [1500, _role_name];
		lbSetData [1500, _i, format ["%1 %2 %3 %4", keko_var_faction, _x, _xPos, _yPos]];
		_i = _i + 1;
	} forEach _section_crates;
} forEach _crates;

true;