#include "script_component.hpp"

params ["_crate", "_serializedData"];

_serializedData params ["_items", "_magazines", "_weapons", "_containers"];

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;
clearItemCargoGlobal _crate;

{
    _crate addItemCargoGlobal [_x, 1];
} forEach _items;

{
    _x params ["_magazineType", "_magazineAmmo"];
    _crate addMagazineAmmoCargo [_magazineType, 1, _magazineAmmo];
} forEach _magazines;


{
    private _elem = _x;
    {
        switch(typeName _x) do {
            case "STRING": {
                if(_x != "") then {
                    if(_x isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
                        _crate addItemCargoGlobal [_x, 1];
                    } else {
                        private _baseWeapon = (_x call BIS_fnc_weaponComponents) select 0;
                        _crate addWeaponCargoGlobal [_baseWeapon, 1];
                    };
                };
            };
            case "ARRAY": {
                if(count _x > 0) then {
                    _crate addMagazineAmmoCargo [_x select 0, 1, _x select 1];
                };
            };
        };
    } forEach _elem;
} forEach _weapons;



{
    _x params ["_containerType", "_containerItems", "_containerMagazines", "_containerWeapons"];
    private _oldContainers = everyContainer _crate;

    if(_containerType isKindOf ["Bag_base", configFile >> "CfgVehicles"]) then {
        _crate addBackpackCargoGlobal [_containerType, 1];
    } else {
        _crate addItemCargoGlobal [_containerType, 1];
    };

    private _newContainers = (everyContainer _crate) - _oldContainers;
    if !(count _newContainers == 1) then {
        ["_fnc_addContainer: Failed to add container to object. _this = %1", _this] call BIS_fnc_error;
    };
    private _newContainer = _newContainers select 0 select 1;

    {
        _newContainer addItemCargoGlobal [_x, _containerItems select 1 select _forEachIndex];
    } forEach (_containerItems select 0);

    {
        _x params ["_magazineType", "_magazineAmmo"];
        _newContainer addMagazineAmmoCargo [_magazineType, 1, _magazineAmmo];
    } forEach _containerMagazines;

    {
        private _elem = _x;
        {
            switch(typeName _x) do {
                case "STRING": {
                    if(_x != "") then {
                        if(_x isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
                            _newContainer addItemCargoGlobal [_x, 1];
                        } else {
                            private _baseWeapon = (_x call BIS_fnc_weaponComponents) select 0;
                            _newContainer addWeaponCargoGlobal [_baseWeapon, 1];
                        };
                    };
                };
                case "ARRAY": {
                    if(count _x > 0) then {
                        _newContainer addMagazineAmmoCargo [_x select 0, 1, _x select 1];
                    };
                };
            };
        } forEach _elem;
    } forEach _containerWeapons;

} forEach _containers;
