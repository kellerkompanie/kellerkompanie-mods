#include "script_component.hpp"

/*
 * Author: KoffeinFlummi - modified by Belbo - again modified by Schwaggot
 * Replaces vanilla items with ACE ones.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob] call ace_medical_fnc_itemCheck
 *
 * Public: Yes
 */

if (GVAR(convertItems) == 2) exitWith {};

params ["_unit"];

private _airway = missionnamespace getVariable ["kat_aceAirway_enable", true];
private _hHPAAB = missionnamespace getVariable ["ace_medical_healHitPointAfterAdvBandage",true];
private _splint = isClass(configFile >> "CfgWeapons" >> "adv_aceSplint_splint");
private _isMedic = _unit getVariable ["ACE_medical_medicClass", 0];

private _addToBackpack = {
	params ["_unit","_type","_amount"];
	if !(backpack _unit isEqualTo "") exitWith {
		for "_i" from 1 to _amount do {
			if(_type == "KAT_Painkillers") then {
				(unitBackpack this) addMagazineCargoGlobal [_type, 1];
			} else {
				_unit addItemToBackpack _type;
			};
		};
	};
	for "_i" from 1 to _amount do {
		if(_type == "KAT_Painkillers") then {
			_unit addMagazine _type;
		} else {
			_unit addItem _type;
		};
	};
};

private _add = {
	params ["_unit","_type","_amount"];
	for "_i" from 1 to _amount do {
		if(_type == "KAT_Painkillers") then {
			_unit addMagazine _type;
		} else {
			_unit addItem _type;
		};
	};
};

while {({_x == "FirstAidKit"} count items _unit) > 0} do {
    _unit removeItem "FirstAidKit";
	[_unit, "ACE_fieldDressing", 15] call _add;
	[_unit, "KAT_Painkillers", 1] call _add;
	[_unit, "ACE_tourniquet", 4] call _add;
};

if ( _isMedic > 0) then {
	while {({_x == "Medikit"} count items _unit) > 0} do {
	    _unit removeItem "Medikit";
		[_unit, "ACE_fieldDressing", 20] call _addToBackpack;
		[_unit, "ACE_elasticBandage", 50] call _addToBackpack;
		[_unit, "ACE_epinephrine", 8] call _addToBackpack;
		[_unit, "ACE_morphine", 8] call _addToBackpack;
		[_unit, "ACE_tourniquet", 4] call _addToBackpack;
		[_unit, "ACE_salineIV", 6] call _addToBackpack;
		[_unit, "ACE_salineIV_500", 6] call _addToBackpack;
		[_unit, "KAT_Painkillers", 1] call _addToBackpack;
		[_unit, "ACE_surgicalKit", 1] call _addToBackpack;

		if ( _isMedic == 1) then {
			[_unit, "KAT_Pulseoximeter", 1] call _addToBackpack;
		} else {
			[_unit, "KAT_X_AED", 1] call _addToBackpack;
		};

		if ( _splint && !_hHPAAB ) then {
			[_unit, "adv_aceSplint_splint", 8] call _addToBackpack;
		};

		if ( _airway ) then {
			if ( _isMedic == 1) then {
				[_unit, "KAT_guedel", 10] call _addToBackpack;
			} else {
				[_unit, "KAT_larynx", 10] call _addToBackpack;
				[_unit, "KAT_accuvac", 1] call _addToBackpack;
			};
		};
	};
};
