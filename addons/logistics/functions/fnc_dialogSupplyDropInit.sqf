#include "script_component.hpp"

disableSerialization;

_display = _this select 0;
_listBox = _display displayCtrl 1500;

lbClear _listBox;

_crates = [];

if(GVAR(customLogistics) == 2) then {
	_crates = [["Kisten", GVAR(customCrates)]];
}
else {
	_crates = getArray (configFile >> "kekoFaction" >> keko_var_faction >> "crates");
};

_logicPos = missionNamespace getVariable QGVAR(supply_drop_pos);
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
		_crate_name = "";
		if(GVAR(customLogistics) == 2) then {
			_crate_name = _x select 0;
			lbAdd [1500, _crate_name];
			_escapedString = [_crate_name, " ", "%20"] call EFUNC(loadout,replaceString);
			lbSetData [1500, _i, format ["%1 %2 %3", _escapedString, _xPos, _yPos]];
		}
		else {
			_crate_name = getText (configFile >> "kekoFaction" >> keko_var_faction >> _x >> "name");
			lbAdd [1500, _crate_name];
			lbSetData [1500, _i, format ["%1 %2 %3 %4", keko_var_faction, _x, _xPos, _yPos]];
		};

		_i = _i + 1;
	} forEach _section_crates;
} forEach _crates;
