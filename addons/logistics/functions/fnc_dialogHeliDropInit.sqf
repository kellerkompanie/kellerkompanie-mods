#include "script_component.hpp"

disableSerialization;

private _display = _this select 0;
private _listBox = _display displayCtrl 1500;

lbClear _listBox;

private _crates = GVAR(crates);

private _logicPos = missionNamespace getVariable QGVAR(heli_drop_pos);
private _xPos = _logicPos select 0;
private _yPos = _logicPos select 1;

private _i = 0;
{
    private _crate_name = "";
    _crate_name = _x select 0;
    lbAdd [1500, _crate_name];
    private _escapedString = [_crate_name, " ", "%20"] call EFUNC(common,replaceString);
    lbSetData [1500, _i, format ["%1 %2 %3", _escapedString, _xPos, _yPos]];

    _i = _i + 1;
} forEach _crates;
