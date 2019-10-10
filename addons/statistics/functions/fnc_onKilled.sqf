#include "script_component.hpp"

params ["_unit", ["_killer", objNull]];

if (_unit isKindOf "CAManBase") then {
    private _unitSide = side _unit;
    private _faction = faction _unit;
    if ( _faction in ["CIV_F","CIV_IDAP_F","LOP_AFR_Civ","LOP_CHR_Civ","LOP_TAK_Civ","ISC_Civs","rds_rus_civ"]) then {
        GVAR(civsKilled) = GVAR(civsKilled) + 1;
    };
};

private _killInfo = [];
if ((isNull _killer) || {_killer == _unit}) then {
    private _aceSource = _unit getVariable ["ace_medical_lastDamageSource", objNull];

    if ((!isNull _aceSource) && {_aceSource != _unit}) then {
        _killInfo pushBack "Last damage";
        _killer = _aceSource;
    };
};

// If killer is a vehicle get the commander (this is how vanilla does it?) and log the vehicle type
if ((!isNull _killer) && {!(_killer isKindof "CAManBase")}) then {
    _killInfo pushBack format ["Vehicle: %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
    _killer = effectiveCommander _killer;
};

private _unitIsPlayer = hasInterface && {_unit == ace_player}; // isPlayer check will fail at this point
private _killerIsPlayer = (!isNull _killer) && {_unit != _killer} && {[_killer] call ace_common_fnc_isPlayer};

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
if ((!isNull _killer) && {_unit != _killer} && {_killer isKindOf "CAManBase"}) then {
    // Because of unconscious group switching/captives it's probably best to just use unit's config side
    private _unitSide = [_unit] call _fnc_getSideFromConfig;
    private _killerSide = [_killer] call _fnc_getSideFromConfig;
    if ([_unitSide, _killerSide] call BIS_fnc_areFriendly) then {
        _killInfo pushBack "<t color='#ff0000'>Friendly Fire</t>";
    };
};

// Log bleed out - ToDo: could change setDead to log the specific medical cause (e.g. blood loss / cardiac arrest / overdose)
private _bloodVolume = _unit getVariable ["ace_medical_bloodVolume", 100];
if (_bloodVolume <= 60) then {
    _killInfo pushBack format ["Blood %1%2", floor _bloodVolume, "%"];
};

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
            _killerName = format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
        };
    };

    GVAR(eventsArray) pushBack format ["Died: %1 %2", _killerName, _killInfo];
    GVAR(outputText) = (format ["Total Kills: %1<br/>", GVAR(kills)]) + (GVAR(eventsArray) joinString "<br/>");
};

// If killer was player then send event to killer
if (_killerIsPlayer) then {
    private _unitName = if (_unitIsPlayer) then {
        [_unit, true, false] call ace_common_fnc_getName; // should be same as profileName
    } else {
        format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _unit) >> "displayName")];
    };

    GVAR(kills) = GVAR(kills) + 1;
    GVAR(eventsArray) pushBack format ["Killed: %1 %2", _unitName, _killInfo];
    GVAR(outputText) = (format ["Total Kills: %1<br/>", GVAR(kills)]) + (GVAR(eventsArray) joinString "<br/>");
};
