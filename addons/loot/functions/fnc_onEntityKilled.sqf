#include "script_component.hpp"

params ["_unit"];

if (isNull _unit) exitWith { };
if !(local _unit) exitWith { _this remoteExecCall [QFUNC(onEntityKilled), _unit]; };

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeAllItems _unit;
clearMagazineCargo _unit;

private _uniform = uniformContainer _unit;
private _vest = vestContainer _unit;
private _backpack = backpackContainer _unit;

private _possiblecontainers = [_uniform, _vest, _backpack];

for "_i" from 0 to (floor random [1, 3, 6]) step 1 do {
    private _bandage = selectRandom ["ACE_fieldDressing","ACE_quikclot","ACE_elasticBandage","ACE_packingBandage"];
    private _medicalItem = selectRandom ["ACE_fieldDressing","KAT_Painkiller","ACE_tourniquet","ACE_quikclot","adv_aceSplint_splint","ACE_elasticBandage","ACE_packingBandage"];

    _bandage = _bandage call EFUNC(loadout,replaceItem);
    _medicalItem = _medicalItem call EFUNC(loadout,replaceItem);

    {
        if !(isNull _x) then {
            if (_medicalItem call EFUNC(loadout,isItemRequired)) then {
                if (_medicalItem == "KAT_Painkiller") then {
                    _x addMagazineCargoGlobal [_medicalItem, 1];
                } else {
                    _x addItemCargoGlobal [_medicalItem, 1];
                };
            };
            if (_bandage call EFUNC(loadout,isItemRequired)) then {
                _x addItemCargoGlobal [_bandage, 1];
            };
        };
    } foreach _possiblecontainers;
};


private _weaponHolders = nearestObjects [_unit, ["WeaponHolderSimulated"], 5];
{
    _x setDamage 1;
} forEach _weaponHolders;

_unit setVariable [QGVAR(weaponHolders), _weaponHolders];
_unit addEventHandler ["Deleted", {
    params ["_unit"];

    private _weaponHolders = _unit getVariable [QGVAR(weaponHolders), []];
    {
        deleteVehicle _x;
    } forEach _weaponHolders;
}];
