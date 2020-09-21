#include "script_component.hpp"

disableSerialization;

private _faction = GVAR(menuDialogFaction);
private _display = _this select 0;
private _listBox = _display displayCtrl 1500;

lbClear _listBox;

private _customLoadout = _faction isEqualTo "FactionCustom";
if(_customLoadout) then {

    if (isNil QGVAR(customLoadouts)) then {
        GVAR(customLoadouts) = [];
    };

    private _i = 0;
    {
        _x params ["_role", "_role_name"];

        lbAdd [1500, _role_name];
        lbSetData [1500, _i, format ["%1 %2", _faction, _role]];
        _i = _i + 1;
    } forEach GVAR(customLoadouts);

} else {
    private _roles = configproperties [configFile >> "kekoFactions" >> _faction >> "role"];

    private _i = 0;
    {
        private _role_identifier = configname _x;
        private _role_name = getText _x;

        lbAdd [1500, _role_name];
        lbSetData [1500, _i, format ["%1 %2", _faction, _role_identifier]];
        _i = _i + 1;
    } forEach _roles;
};

true
