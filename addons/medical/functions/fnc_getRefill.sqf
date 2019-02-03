#include "script_component.hpp"

/*
Based on ADV-aceRefill by Belbo - modified by Schwaggot
*/

params ["_unit","_param"];

private _airway = missionnamespace getVariable ["kat_aceAirway_enable", true];
private _hHPAAB = missionnamespace getVariable ["ace_medical_healHitPointAfterAdvBandage", true];
private _splint = isClass(configFile >> "CfgWeapons" >> "adv_aceSplint_splint");
private _isMedic = _unit getVariable ["ACE_medical_medicClass", 0];

private _return = [["",0]];

private _turnToArray = {
	private _array1 = _this;
	if ( (count _array1) isEqualTo 0 || (_array1 select 0) isEqualType [] ) exitWith {
		_array1
	};
	private _array2 = [];
	for "_i" from 0 to (count _array1 - 1) step 2 do {
		_array2 pushBack [_array1 select _i, _array1 select (_i+1)];
	};
	_array2
};
private _FAK_var = (missionNamespace getVariable [QGVAR(FAK_var),[]]) call _turnToArray;
private _CLS_var = (missionNamespace getVariable [QGVAR(CLS_var),[]]) call _turnToArray;
private _SAN_var = (missionNamespace getVariable [QGVAR(SAN_var),[]]) call _turnToArray;

if (_param isEqualTo 1) exitWith {
	_return =  [
			["ACE_fieldDressing",15],
			["ACE_tourniquet",4],
			["KAT_Painkillers", 1]
		];
	if ( (count _FAK_var) > 0 && { (_FAK_var select 0) isEqualType [] }) then {
		_return = _FAK_var;
	};
	_return
};

call {
	if ( _isMedic > 1 && (count _SAN_var) > 0 && { (_SAN_var select 0) isEqualType [] } ) exitWith {
		_return = _SAN_var;
	};
	if ( _isMedic isEqualTo 1 && (count _CLS_var) > 0 && { (_CLS_var select 0) isEqualType [] } ) exitWith {
		_return = _CLS_var;
	};
	if (_isMedic > 0) exitWith {
		_return = [
			["ACE_fieldDressing", 20],
			["ACE_elasticBandage", 50],
			["ACE_epinephrine", 8],
			["ACE_morphine", 8],
			["ACE_tourniquet", 6],
			["ACE_salineIV", 6],
			["ACE_salineIV_500", 6],
			["KAT_Painkillers", 1],
			["ACE_surgicalKit", 1]
		];

		if ( _isMedic == 1) then {
			_return pushBack ["KAT_Pulseoximeter", 1];
		} else {
			_return pushBack ["KAT_X_AED", 1];
		};

		if ( _splint && !_hHPAAB ) then {
			_return pushBack ["adv_aceSplint_splint", 12];
		};

		if ( _airway ) then {
			if ( _isMedic == 1) then {
				_return pushBack ["KAT_guedel", 10];
			} else {
				_return pushBack ["KAT_larynx", 10];
				_return pushBack ["KAT_accuvac", 1];
			};
		};
	};
};

_return
