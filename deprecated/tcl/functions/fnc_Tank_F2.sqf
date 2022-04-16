#include "script_component.hpp"

params ["_unit","_enemy","_weapon"];
	
private _vehicle = (vehicle _enemy);
_unit forceSpeed 0;
_unit doWatch _vehicle;
_unit doFire _vehicle;
_unit doTarget _vehicle;
_unit selectWeapon _weapon;

sleep 3;

_unit fire _weapon;

sleep 3;

_unit forceSpeed -1;
