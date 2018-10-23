#include "script_component.hpp"

disableSerialization;

private _display = _this select 0;
private _listBox = _display displayCtrl 1500;

lbClear _listBox;

private _customLoadout = GVAR(loadoutFaction) isEqualTo "kekoCustom";
if(_customLoadout) then {

	if (isNil QGVAR(customLoadouts)) then {
		GVAR(customLoadouts) = [];
	};

	private _i = 0;
	{
		_x params ["_role", "_role_name"];

		lbAdd [1500, _role_name];
		lbSetData [1500, _i, format ["%1 %2", GVAR(loadoutFaction), _role]];
		_i = _i + 1;
	} forEach GVAR(customLoadouts);

} else {
	private _roles = getArray (configFile >> "kekoFaction" >> GVAR(loadoutFaction) >> "roles");

	private _i = 0;
	{
		private _section_title = _x select 0;
		lbAdd [1500, format ["------ %1 ------", _section_title]];
		lbSetData [1500, _i, ""];
		_i = _i + 1;

		private _section_roles = _x select 1;

		{
			private _role_name = getText (configFile >> "kekoFaction" >> GVAR(loadoutFaction) >> _x >> "name");
			lbAdd [1500, _role_name];
			lbSetData [1500, _i, format ["%1 %2", GVAR(loadoutFaction), _x]];
			_i = _i + 1;
		} forEach _section_roles;
	} forEach _roles;
};



true;
