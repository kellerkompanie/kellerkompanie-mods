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
 * [bob] call keko_medical_fnc_itemCheck
 */

if !(GVAR(convertItems)) exitWith {};

params ["_unit"];

private _splintsRequired = (!ace_medical_healHitPointAfterAdvBandage) && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;
private _airwaysRequired = kat_aceAirway_enable || kat_aceBreathing_enable;
private _isMedic = _unit getVariable ["ACE_medical_medicClass", 0];

INFO_5("ace_medical_healHitPointAfterAdvBandage: %1, ace_medical_enableAdvancedWounds: %2, adv_aceSplint_enable: %3, kat_aceAirway_enable: %4, kat_aceBreathing_enable: %5", ace_medical_healHitPointAfterAdvBandage, ace_medical_enableAdvancedWounds, adv_aceSplint_enable, kat_aceAirway_enable, kat_aceBreathing_enable);
INFO_4("_splintsRequired: %1, _surgicalKitRequired: %2, _airwaysRequired: %3, _isMedic: %4", _splintsRequired, _surgicalKitRequired, _airwaysRequired, _isMedic);

private _addToBackpack = {
    params ["_unit","_type","_amount"];
    if !(backpack _unit isEqualTo "") exitWith {
        for "_i" from 1 to _amount do {
            if(_type == "KAT_Painkiller") then {
                (unitBackpack this) addMagazineCargoGlobal [_type, 1];
            } else {
                _unit addItemToBackpack _type;
            };
        };
    };
    for "_i" from 1 to _amount do {
        if(_type == "KAT_Painkiller") then {
            _unit addMagazine _type;
        } else {
            _unit addItem _type;
        };
    };
};

private _add = {
    params ["_unit","_type","_amount"];
    for "_i" from 1 to _amount do {
        if(_type == "KAT_Painkiller") then {
            _unit addMagazine _type;
        } else {
            _unit addItem _type;
        };
    };
};

while {({_x == "FirstAidKit"} count items _unit) > 0} do {
    _unit removeItem "FirstAidKit";
    [_unit, "ACE_fieldDressing", 15] call _add;
    [_unit, "KAT_Painkiller", 1] call _add;
    [_unit, "ACE_tourniquet", 4] call _add;
};

if ( _isMedic > 0) then {
    while {({_x == "Medikit"} count items _unit) > 0} do {
        _unit removeItem "Medikit";
        [_unit, "ACE_fieldDressing", 20] call _addToBackpack;
        [_unit, "ACE_elasticBandage", 50] call _addToBackpack;
        [_unit, "ACE_epinephrine", 8] call _addToBackpack;
        [_unit, "ACE_morphine", 8] call _addToBackpack;
        [_unit, "ACE_tourniquet", 6] call _addToBackpack;
        [_unit, "ACE_salineIV", 6] call _addToBackpack;
        [_unit, "ACE_salineIV_500", 6] call _addToBackpack;
        [_unit, "KAT_Painkiller", 1] call _addToBackpack;

        if ( _isMedic == 1) then {
            [_unit, "KAT_Pulseoximeter", 1] call _addToBackpack;
        } else {
            [_unit, "KAT_X_AED", 1] call _addToBackpack;
        };

        if ( _surgicalKitRequired ) then {
            [_unit, "ACE_surgicalKit", 1] call _addToBackpack;
        };

        if ( _splintsRequired ) then {
            [_unit, "adv_aceSplint_splint", 12] call _addToBackpack;
        };

        if ( _airwaysRequired ) then {
            if ( _isMedic == 1) then {
                [_unit, "KAT_guedel", 10] call _addToBackpack;
            } else {
                [_unit, "KAT_larynx", 10] call _addToBackpack;
                [_unit, "KAT_accuvac", 1] call _addToBackpack;
            };
        };
    };
};
