#include "script_component.hpp"
/*
 * Author: Glowbal - edited by Belbo - modified by Schwaggot
 * Use Equipment if any is available. Priority: 1) Medic, 2) Patient. If in vehicle: 3) Crew
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Item <STRING>
 *
 * Return Value:
 * 0: success <BOOL>
 * 1: Unit <OBJECT>
 *
 * Example:
 * [unit, patient, "bandage"] call keko_medical_fnc_useItem
 */

params ["_medic", "_patient", "_item"];

private _allowSharedEquipment = ace_medical_setting_allowSharedEquipment;
private _isMedic = _medic getVariable ["ACE_medical_medicClass",0];
private _return = [false, objNull];
private _crew = [objNull];
private _useItem = {
    params ["_target", "_item"];
    if (local _target) exitWith {
        ["ace_useItem", [_target, _item]] call CBA_fnc_localEvent;
    };
    ["ace_useItem", [_target, _item], _target] call CBA_fnc_targetEvent;
};

//if the unit is medic > 1 unless it's a tourniquet:
if (_allowSharedEquipment && _isMedic > 1 && {!(_item == "ACE_tourniquet")}) exitWith {
    //if medic has item:
    if ([_medic, _item] call ace_common_fnc_hasItem) exitWith {
        [_medic,_item] call _useItem;
        [true, _medic];
    };
    //if medic hasn't got item, but patient has:
    if ([_patient, _item] call ace_common_fnc_hasItem) exitWith {
        [_patient,_item] call _useItem;
        [true, _patient];
    };
    //if neither medic, nor patient have item, but maybe crew has item:
    if ([vehicle _medic] call ace_medical_fnc_isMedicalVehicle && {vehicle _medic != _medic}) then {
        _crew = crew vehicle _medic;
        {
            if ([_medic, _x] call ace_medical_fnc_canAccessMedicalEquipment && {([_x, _item] call ace_common_fnc_hasItem)}) exitWith {
                _return = [true, _x];
                [_x,_item] call _useItem;
            };
        } forEach _crew;
    };
    //or if neither has:
    _return
};

//if unit is not a medic, but patient has item:
if (_allowSharedEquipment && [_patient, _item] call ace_common_fnc_hasItem) exitWith {
    [_patient,_item] call _useItem;
    [true, _patient];
};

//if unit is not a medic, but patient hasn't got item, but medic has:
if ([_medic, _item] call ace_common_fnc_hasItem) exitWith {
    [_medic,_item] call _useItem;
    [true, _medic];
};

//if unit is not a medic, but neither patient nor medic have the item:
if ( [vehicle _medic] call ace_medical_fnc_isMedicalVehicle && {vehicle _medic != _medic} ) then {
    _crew = crew vehicle _medic;
    {
        if ([_medic, _x] call ace_medical_fnc_canAccessMedicalEquipment && {[_x, _item] call ace_common_fnc_hasItem}) exitWith {
            _return = [true, _x];
            [_x,_item] call _useItem;
            [true, _x];
        };
    } forEach _crew;
};

//if unit is not a medic, but neither patient, nor medic have the item, and crew doesn't either:
_return
