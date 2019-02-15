#include "script_component.hpp"

params ["_unit"];

if !(_unit call FUNC(hasCanteen)) exitWith { false };

private _canteenMags = magazinesAmmo _unit select {_x select 0 == QGVAR(canteen)};
private _canteenItems = items _unit select {_x == QGVAR(canteenEmpty)};

private _refilled = false;
{
	if ((_x select 1) < 6) then {
		_unit removeMagazineGlobal QGVAR(canteen);
	    _unit addMagazine [QGVAR(canteen), 5];
		_refilled = true;
	}
} forEach _canteenMags;

{
	_unit removeItem _x;
	_unit addMagazine [QGVAR(canteen), 5];
	_refilled = true;
} forEach _canteenItems;

if(_refilled) then {
	[_unit, QGVAR(pouring)] remoteExec ["say3D", 0, false];
	[localize LSTRING(messageRefilled), 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
} else {
	[localize LSTRING(messageFull), 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
};
