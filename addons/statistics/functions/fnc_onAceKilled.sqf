#include "script_component.hpp"

// inspired by ACEX killtracker, see https://github.com/acemod/ACEX/blob/master/addons/killtracker/XEH_postInit.sqf

params ["_unit", "_causeOfDeath", "_killer", "_instigator"];

if (!local _unit) exitWith {};

private _killInfo = [];

if (_unit isKindOf "CAManBase") then {
    private _unitSide = side _unit;
    private _faction = faction _unit;
    if ( _faction in ["CIV_F","CIV_IDAP_F","LOP_AFR_Civ","LOP_CHR_Civ","LOP_TAK_Civ","ISC_Civs","rds_rus_civ"]) then {
        GVAR(civsKilled) = GVAR(civsKilled) + 1;
    };
};

if (!isNull _killer) then {
	if (!(_killer isKindof "CAManBase")) then { // If killer is a vehicle log the vehicle type
		_killInfo pushBack format ["Vehicle: %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
	};
	if (isNull _instigator) then {
		_instigator = effectiveCommander _killer;
	};
};
private _unitIsPlayer = hasInterface && {_unit in [player, ace_player]}; // isPlayer check will fail at this point
private _killerIsPlayer = (!isNull _instigator) && {_unit != _instigator} && {[_instigator] call ace_common_fnc_isPlayer};

// Don't do anything if neither are players
if (!(_unitIsPlayer || _killerIsPlayer)) exitWith {};

// Log firendly fire
private _fnc_getSideFromConfig = {
	params ["_object"];
	switch (getNumber (configFile >> "CfgVehicles" >> (typeOf _object) >> "side")) do {
		case (0): {east};
		case (1): {west};
		case (2): {resistance};
		default {civilian};
	};
};
if ((!isNull _instigator) && {_unit != _instigator} && {_instigator isKindOf "CAManBase"}) then {
	// Because of unconscious group switching/captives it's probably best to just use unit's config side
	private _unitSide = [_unit] call _fnc_getSideFromConfig;
	private _killerSide = [_instigator] call _fnc_getSideFromConfig;
	if ([_unitSide, _killerSide] call BIS_fnc_areFriendly) then {
		_killInfo pushBack "Friendly Fire";
	};
};

// Rough cause of death from statemachine (e.g. "CardiacArrest:Timeout"), could parse this to be more human readable
_killInfo pushBack _causeOfDeath;

// Parse info into text
_killInfo = if (_killInfo isEqualTo []) then {
	""
} else {
	format [" - [%1]", (_killInfo joinString ", ")];
};

// If unit was player then send event to self
if (_unitIsPlayer) then {
	private _killerName = "Self?";
	if ((!isNull _killer) && {_unit != _killer}) then {
		if (_killerIsPlayer) then {
			_killerName = [_killer, true, false] call ace_common_fnc_getName;
		} else {
			_killerName = _killer getVariable [QGVAR(aiName), ""]; // allow setting a custom AI name (e.g. VIP Target)
			if (_killerName == "") then {
				_killerName = format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
			};
		};
	};
	[QGVAR(death), [_killerName, _killInfo]] call CBA_fnc_localEvent;
};

// If killer was player then send event to killer
if (_killerIsPlayer) then {
	private _unitName = "";
	if (_unitIsPlayer) then {
		_unitName = [_unit, true, false] call ace_common_fnc_getName; // should be same as profileName
	} else {
		_unitName = _unit getVariable [QGVAR(aiName), ""]; // allow setting a custom AI name (e.g. VIP Target)
		if (_unitName == "") then {
			_unitName = format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _unit) >> "displayName")];
		};
	};
	[QGVAR(kill), [_unitName, _killInfo], _killer] call CBA_fnc_targetEvent;
};