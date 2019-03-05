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
    private _roles = configproperties [configFile >> "kekoFactions" >> GVAR(loadoutFaction) >> "role"];

    private _i = 0;
    {
        private _role_identifier = configname _x;
        private _role_name = getText _x;

        lbAdd [1500, _role_name];
        lbSetData [1500, _i, format ["%1 %2", GVAR(loadoutFaction), _role_identifier]];
        _i = _i + 1;
    } forEach _roles;
};



true;
