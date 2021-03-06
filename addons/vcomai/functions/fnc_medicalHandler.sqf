#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		Makes group check medical status, and order medics about

	Parameter(s):
		0: GROUP

	Returns:
		NOTHING
*/

if !(GVAR(MEDICALACTIVE)) exitWith {};

params ["_group","_Medics"];
private _units = units _group;
private _NeedHealing = [];

{
	if (damage _x > 0) then	{
		private _CanHealSelf = _x call FUNC(HealSelf); 
		if !(_CanHealSelf) then {
			_NeedHealing pushback _x;
		};
	};
} foreach _units;

private _FinalMedics = [];
{
	if !(_x getVariable [QGVAR(MBUSY), false]) then {
		_FinalMedics pushback _x;
	};
} foreach _Medics;

if (count _FinalMedics > 0) then {
	{
		if (count _FinalMedics > 0) then {
			private _Medic = [_FinalMedics,_x,true,"MH"] call FUNC(ClstObj);
			private _Index = _FinalMedics findif {_x isEqualTo _Medic};
			_FinalMedics deleteAt _Index;
			[_Medic,_x] spawn FUNC(MedicHeal);
		};
	} foreach _NeedHealing;
};