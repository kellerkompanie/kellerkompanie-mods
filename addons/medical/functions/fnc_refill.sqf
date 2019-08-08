#include "script_component.hpp"

params [
    ["_unit",player],
    ["_param",2],
    ["_item", QGVAR(manualKit)]
];

if ( _param > 2 && ( _unit getVariable ["ACE_medical_medicClass", 0] isEqualTo 0 || ({_x == QGVAR(autoKit)} count items _unit) isEqualTo 0 ) ) exitWith {nil};

private _mAFAK = GVAR(FAK_minAmount);
private _mAMK = GVAR(manualKit_minAmount);
private _refills = [_unit, _param] call FUNC(getRefill);
private _litter = objNull;

private _add = {
    params ["_unit", "_type", "_amount"];
    if  ( _param > 1 && !(backpack _unit isEqualTo "") ) exitWith {
        private _mediBack = unitBackpack _unit;

        if(_type == "KAT_Painkiller") then {
            _mediBack addMagazineCargoGlobal [_type, _amount];
        } else {
            _mediBack addItemCargoGlobal [_type, _amount];
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

private _remove = {
    params ["_target"];
    sleep 60;
    deleteVehicle _target;
};

private _drop = {
    params ["_unit","_type"];
    private _pos = _unit modelToWorldVisual ((_unit selectionPosition "leftHand") vectorAdd [0,-0.45,-0.05]);
    private _litter = createVehicle ["WeaponHolderSimulated", _pos, [], 0, "CAN_COLLIDE"];
    _litter setdir (getDir _unit -90);
    _litter addWeaponCargoGlobal [_type, 1];
    _litter setVelocity [sin(getdir _unit + 90) * 2,cos(getdir _unit + 90) * 2,0];
    _litter
};

if ( _param < 3 ) then {
    _unit removeItem _item;
} else {
    _unit removeItems QGVAR(AUTOKIT);
};

if ( _param < 2 ) then {
    _litter = createVehicle ["MedicalGarbage_01_FirstAidKit_F", getPos _unit, [], 0, "CAN_COLLIDE"];
} else {
    _litter = [_unit, QGVAR(Kit_empty)] call _drop;
};

private _success = 0;
{
    _x params ["_type","_max"];
    if !(_type isEqualTo "") then {
        private _count = {_x == _type} count items _unit;
        private _amount = _max - _count;
        [_unit, _type, _amount] call _add;
        _success = _success + _amount;
    };
    nil
} count _refills;

if ( ( _success < (_mAFAK + 1) && _param < 2 ) || ( _success < (_mAMK + 1) && _param > 1 ) ) exitWith {
    if(_item == "KAT_Painkiller") then {
        _unit addMagazine _item;
    } else {
        _unit addItem _item;
    };

    private _str = if (_success > 0) then {
        localize LSTRING(refillRefilledNew);
    } else {
        localize LSTRING(refillRefilledNot);
    };
    systemChat _str;
    deleteVehicle _litter;
    nil
};

systemChat (localize LSTRING(refillRefilled));
[_litter] spawn _remove;

nil
