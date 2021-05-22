#include "script_component.hpp"

params ["_kia"];

private _array = GVAR(Respawn);
_array set [0, (_array select 0) + 1];
private _count = (_array select 0);
private _name = (_array select 1);
private _string = format ["<t color='#bebebe' size='3'>%1 Kill Count:</t> <t color='#ff0000' size='3'>%2</t>", _name, _count];

"DynamicBlur" ppEffectAdjust [0.0];
"DynamicBlur" ppEffectCommit 0;

titleText [_string, "BLACK OUT", 3, True, True];

_weapon = (primaryWeapon _kia);
_weaponItems = (primaryWeaponItems _kia);

sleep 3;

titleText [_string, "BLACK IN", 3, True, True];

private "_unit";

if (GVAR(Multiplayer)) then {
	waitUntil { (alive player) };	
	_unit = player;
}
else {
	private _hight = (getPos _kia select 2);	
	private _position = (getPosATL _kia);	
	_position set [2, (_position select 2) + _hight];	
	_unit = (group _kia) createUnit [ (typeOf _kia), _position, [], 0, "CAN_COLLIDE"];	
	selectPlayer _unit;	
	addSwitchableUnit _unit;
};

_unit addEventHandler ["Killed", {_this spawn FUNC(EH_Respawn_F1) } ];
_unit setDir (getDir _kia);
_unit setName (_array select 1);
_unit setRank (_array select 2);

private _stance = (stance  _kia);

if (_stance isEqualTo "STAND") exitWith {
	_unit setUnitPos "UP";
};

if (_stance isEqualTo "CROUCH") exitWith {
	_unit setUnitPos "MIDDLE";
};

if (_stance isEqualTo "PRONE") exitWith {
	_unit setUnitPos "DOWN";
};

if (unitPos _kia isEqualTo "DOWN") exitWith {
	_unit setUnitPos "DOWN";
}; 

if (isStaminaEnabled _kia) then {
	_unit enableStamina True;
}
else {
	_unit enableStamina False;
};

_unit removeWeapon (primaryWeapon _unit);
_unit addWeapon _weapon;
{_unit removePrimaryWeaponItem _x} count (primaryWeaponItems _unit);
{_unit addPrimaryWeaponItem _x} count _weaponItems;

waitUntil { ( (alive player) && (player == player) ) };

{_knowsAbout = (_x knowsAbout vehicle _kia); if (_knowsAbout > 0) then {_x reveal [_unit, _knowsAbout] } } forEach allGroups;

deleteVehicle _kia;

_unit selectWeapon (primaryWeapon _unit);
	
