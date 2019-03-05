#include "script_component.hpp"

params ["_unit", "_mag"];

private _canteenMags = magazinesAmmo _unit select {_x select 0 == _mag};

_unit removeMagazineGlobal _mag;

private _oldMag = _canteenMags select 0;

if ((_oldMag select 1) > 1) then {
    _unit addMagazine [_mag, (_oldMag select 1) - 1];
} else {
    _unit addItem QGVAR(canteenEmpty);
    [format ["%1 is now empty.", getText (configFile >> "CfgMagazines" >> _mag >> "displayName")], 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
};
