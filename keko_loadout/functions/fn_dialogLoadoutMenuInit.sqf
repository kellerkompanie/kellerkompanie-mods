disableSerialization;

_display = _this select 0;
_listBox = _display displayCtrl 1500;

lbClear _listBox;

_customLoadout = keko_var_faction isEqualTo "kekoCustom" || keko_var_faction isEqualTo "kekoCustomACE";
if(_customLoadout) then {
	// TODO optimize: only call once on mission start
	_sqfFile = format ["custom_loadouts\roles.ini"];
	_sqfString = preprocessFileLineNumbers _sqfFile;

	_lines = _sqfString splitString endl;

	_roles = [];
	{
		if( (_x find ";") != 0 && (_x find "=") > 0 ) then {
			_str = _x splitString "=";			
			_role = [_str select 0, " ", ""] call keko_loadout_fnc_replaceString;

			_code = compile (_str select 1); 
			_name = call _code;

			_roles pushBack [_role, _name];
		};
	} forEach _lines;

	_i = 0;
	{
		_x params ["_role", "_role_name"];

		lbAdd [1500, _role_name];
		lbSetData [1500, _i, format ["%1 %2", keko_var_faction, _role]];
		_i = _i + 1;
	} forEach _roles;

} else {
	_roles = getArray (configFile >> "kekoFaction" >> keko_var_faction >> "roles");

	_i = 0;
	{ 
		_section_title = _x select 0;
		lbAdd [1500, format ["------ %1 ------", _section_title]];
		lbSetData [1500, _i, ""];
		_i = _i + 1;

		_section_roles = _x select 1;

		{
			_role_name = getText (configFile >> "kekoFaction" >> keko_var_faction >> _x >> "name");
			lbAdd [1500, _role_name];
			lbSetData [1500, _i, format ["%1 %2", keko_var_faction, _x]];
			_i = _i + 1;
		} forEach _section_roles;
	} forEach _roles;
};



true;