#include "script_component.hpp"

disableSerialization;

private _display = _this select 0;
private _listBox = _display displayCtrl 1500;

lbClear _listBox;

private _crates = [];

if(GVAR(customLogistics) == 2) then {
    _crates = [GVAR(customCrates)];
}
else {
    private _cratesCfgs = "true" configClasses (configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "crates");
    {
        _crates pushBack (configName _x);
    } forEach _cratesCfgs;
};

TRACE_1("logisticsMenuInit", _crates);

private _i = 0;
{
    private _crate_name = "";
    if(GVAR(customLogistics) == 2) then {
        _crate_name = _x select 0;
        lbAdd [1500, _crate_name];
        private _escapedString = [_crate_name, " ", "%20"] call EFUNC(common,replaceString);
        lbSetData [1500, _i, format ["%1", _escapedString]];
    }
    else {
        _crate_name = getText (configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "crates" >> _x >> "name");
        lbAdd [1500, _crate_name];
        lbSetData [1500, _i, format ["%1 %2", EGVAR(loadout,loadoutFaction), _x]];
    };

    _i = _i + 1;
} forEach _crates;
