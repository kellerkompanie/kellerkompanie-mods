#include "script_component.hpp"

params ["_unit"];

if (!local _unit) exitWith {
	WARNING_1("unit %1 is not local, exiting", _unit);
	false
};

if (primaryWeapon _unit == "") exitWith {
	WARNING_1("unit %1 has no primaryWeapon, exiting", _unit);
	false
};

private _compatibleTracerMags = [];
private _compatibleTracerOnlyMags = [];
{
	private _tracersEvery = getNumber (configFile >> "CfgMagazines" >> _x >> "tracersEvery");
	if (_tracersEvery > 1) then {
		_compatibleTracerMags pushBack _x;
	};
	if (_tracersEvery == 1) then {
		_compatibleTracerOnlyMags pushBack _x;
	};
} forEach ([primaryWeapon _unit] call CBA_fnc_compatibleMagazines);

private _replacementMag = "";
// try to find a tracer only mag first
if ((count _compatibleTracerOnlyMags) > 0) then {
	_replacementMag = _compatibleTracerOnlyMags select 0;
};

// no tracer only mag was found
if (_replacementMag == "") then {
	if ((count _compatibleTracerMags) > 0) then {
		_replacementMag = _compatibleTracerMags select 0;
	};
};

// no tracer mag was found, exit
if (_replacementMag == "") exitWith {
	WARNING_2("no tracer mag found for unit %1 with weapon %2, exiting", _unit, primaryWeapon _unit);
	false
};

private _primaryMag = (primaryWeaponMagazine _unit) select 0;
_unit removePrimaryWeaponItem _primaryMag;
_unit addPrimaryWeaponItem _replacementMag;
{
	[_unit, _x] call CBA_fnc_removeMagazine;
	[_unit, _replacementMag] call CBA_fnc_addMagazine;
} forEach magazines _unit;

true