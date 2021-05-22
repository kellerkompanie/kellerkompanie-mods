#include "script_component.hpp"

params ["_group"];

private _units = (units _group);
private _unit = _units select random (count _units - 1);

if ( (isPlayer _unit) || (captive _unit) || (fleeing _unit) || (_unit in (GVAR(Surrender) select 0) ) ) exitWith {};

if (alive _unit) then {
	_unit setCaptive True;
	(GVAR(Surrender) select 0) pushBack _unit;
	
	private _bool = True;
	private _weapon = (primaryWeapon _unit);
	
	if (_weapon isEqualTo "") then {
		_bool = False;
	};
	
	private _dummy = createVehicle ["GroundWeaponHolder_Scripted", (getPos _unit), [], 0, "CAN_COLLIDE"];
	
	if (_bool) then {
		_unit forceSpeed 0;
		_unit action ["DropWeapon", _dummy, _weapon];
		waitUntil { (primaryWeapon _unit isEqualTo "") };
		_unit forceSpeed -1;
	};
	
	private _weapons = (weapons _unit);
	_weapons apply {_dummy addWeapon _x; _unit removeWeapon _x};
	private _magazines = (magazines _unit);
	_weapons apply {_dummy addMagazine _x; _unit removeMagazine _x};
	_unit playMove "AmovPercMstpSsurWnonDnon";
	[_unit, _dummy, _weapon] spawn FUNC(Surrender_F2);
};
