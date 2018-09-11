disableSerialization;

_display = _this select 0;
_listBox = _display displayCtrl 1500;

lbClear _listBox;

_crates = [];

if(keko_var_customLogistics == 2) then {
	_crates = [["Kisten", keko_var_logistics_customCrates]];
}
else {
	_crates = getArray (configFile >> "kekoFaction" >> keko_var_faction >> "crates");
};

diag_log text format["[KEKO] (logistics) logisticsMenuInit: _crates = %1", _crates];

_i = 0;
{ 
	_section_title = _x select 0;
	lbAdd [1500, format ["------ %1 ------", _section_title]];
	lbSetData [1500, _i, ""];
	_i = _i + 1;

	_section_crates = _x select 1;

	{
		_crate_name = "";
		if(keko_var_customLogistics == 2) then {
			_crate_name = _x select 0;
			lbAdd [1500, _crate_name];
			_escapedString = [_crate_name, " ", "%20"] call keko_loadout_fnc_replaceString;
			lbSetData [1500, _i, format ["%1", _escapedString]];
		}
		else {
			_crate_name = getText (configFile >> "kekoFaction" >> keko_var_faction >> _x >> "name");
			lbAdd [1500, _crate_name];
			lbSetData [1500, _i, format ["%1 %2", keko_var_faction, _x]];
			//diag_log text format ["[KEKO] (logistics) LogisticsMenuInit adding '%1 %2' @ %3", keko_var_faction, _x, _i];
		};		
		
		_i = _i + 1;
	} forEach _section_crates;
} forEach _crates;