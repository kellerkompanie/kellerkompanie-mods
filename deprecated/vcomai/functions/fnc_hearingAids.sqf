#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		Firing unsuppressed shots reveals unit.

	Parameter(s):
		0: OBJECT - Unit that fired
		1: STRING - Weapon fired
		2: STRING - Muzzle used
		3: STRING - Firing mode
		4: STRING - Ammo used
		5: STRING - Magazine used
		6: OBJECT - Projectile created
		7: OBJECT - Gunner whose weapon was fired (For use with vehicles)

	Returns:
		NOTHING
		
	Note:
		For use with "Fired" eventhandler
		
	Example1:
		this addEventHandler ["Fired", {
			_this call keko_vcomai_fnc_HearingAids;
		}];
*/

params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_bullet","_gunner"];

if (_weapon isEqualTo "Put" || {_weapon isEqualTo "Throw"} || {!GVAR(ActivateAI)}) exitwith {};

private _timeShot = _unit getVariable [QGVAR(FTH),-60];

if ((_timeShot + 2) < time) then {
	if ((group _unit) getVariable [QGVAR(NOFLANK),false]) exitWith {};
	(group _unit) setVariable [QGVAR(STM),diag_tickTime];
	//Check if unit has suppressor on weapon.
	private _mzl = currentMuzzle _unit;
	private _mzl = if (_mzl isEqualType "") then {_mzl} else {""};
	private _atch = _unit weaponAccessories _mzl param [0, ""];
	private _return = (!(_atch isEqualTo "")) && {getNumber(configFile >> "CfgWeapons" >> _atch >> "ItemInfo" >> "AmmoCoef" >> "audibleFire") < 1};
	
	if (GVAR(Debug)) then {
		diag_log (format ["%2: WEAPON SUPRRESSED - %1",_return,_unit]);
	};
	
	//systemchat format ["%1",_sup];
	if !(_return) then {
		private _array1 = _unit call FUNC(EnemyArray);
		private _snda = [];
		{
			if ((_x distance2D _unit) < GVAR(HEARINGDISTANCE)) then {
				_snda pushback _x;
			};
		} foreach _array1;
		
		if (count _snda > 0) then {
			[_snda,_unit,1] remoteExec [QFUNC(KnowAbout),0];	
			[_snda] remoteExec [QFUNC(ResetAnimation),0];	
		};
		
		_unit setVariable [QGVAR(FTH),time];
	}
	else {
		private _array1 = _unit call FUNC(EnemyArray);
		private _snda = [];
		{
			if ((_x distance2D _unit) < GVAR(SUPDIST)) then {
				_snda pushback _x;
			};
		} foreach _array1;
		
		if (count _snda > 0) then
		{
			[_snda,_unit,1] remoteExec [QFUNC(KnowAbout),0];	
			[_snda] remoteExec [QFUNC(ResetAnimation),0];	
		};
		
		_unit setVariable [QGVAR(FTH),time];		
	};	
};