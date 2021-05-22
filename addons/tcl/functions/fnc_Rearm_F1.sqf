#include "script_component.hpp"

params ["_unit","_group"];

private ["_ammo","_count","_magazine","_magazines","_array"];
private _weapon = (primaryWeapon _unit);

if (_weapon isEqualTo "") then {
	_ammo = 0;
	_count = 0;
	_magazine = "";
	_magazines = [];
}
else {
	_magazines = getArray (configfile >> "CfgWeapons" >> _weapon >> "magazines");
	_magazine = (_magazines select 0);
	_array = [];
	_array = (magazines _unit) select { (_x in _magazines) };
	_count = (count _array);
	_ammo = (_unit ammo _weapon);
};

if ( (_count < 3) && { (_ammo < 50) } ) then {
	[_unit, _group, _magazine, _magazines] call FUNC(Rearm_F2);
};

True
