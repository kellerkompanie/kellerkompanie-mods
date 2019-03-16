#include "script_component.hpp"

params ["_unit"];

if (isNull _unit) exitWith { };
if !(local _unit) exitWith { _this remoteExecCall [QFUNC(onEntityKilled), _unit]; };

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeAllItems _unit;
clearMagazineCargo _unit;

for "_i" from 0 to (floor random [1, 3, 6]) step 1 do {
    private _bandage = selectRandom ["ACE_fieldDressing","ACE_quikclot","ACE_elasticBandage","ACE_packingBandage"];
    private _medicalItem = selectRandom ["ACE_fieldDressing","KAT_Painkillers","ACE_tourniquet","ACE_quikclot","adv_aceSplint_splint","ACE_elasticBandage","ACE_packingBandage"];

    _bandage = _bandage call EFUNC(loadout,replaceItem);
    _medicalItem = _medicalItem call EFUNC(loadout,replaceItem);

    if (_medicalItem call EFUNC(loadout,isItemRequired)) then {
        [_unit, _medicalItem] call CBA_fnc_addItem;
    };
    if (_bandage call EFUNC(loadout,isItemRequired)) then {
        [_unit, _bandage] call CBA_fnc_addItem;
    };
};

private _weaponHolders = nearestObjects [_unit, ["WeaponHolderSimulated"], 5];
{
    _x setDamage 1;
} forEach _weaponHolders;
