#include "script_component.hpp"

private _crate = _this select 0;
private _crate_content = _this select 1;

_crate allowDamage false;

{
    private _amount = _x select 0;
    private _item = _x select 1;

    if (isClass (configFile >> "CfgWeapons" >> _item)) then {
        if(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
            if (_item call EFUNC(loadout,isItemRequired)) then {
                _item = _item call EFUNC(loadout,replaceItem);
                _crate addItemCargoGlobal [_item, _amount];
            };
        } else {
            if (_item call EFUNC(loadout,isItemRequired)) then {
                _item = _item call EFUNC(loadout,replaceItem);
                _crate addWeaponCargoGlobal [_item, _amount];
            };
        };
    } else {
        if (isClass (configFile >> "CfgMagazines" >> _item)) then {
            if (_item call EFUNC(loadout,isItemRequired)) then {
                _item = _item call EFUNC(loadout,replaceItem);
                _crate addMagazineCargoGlobal [_item, _amount];
            };
        } else {
            if (isClass (configFile >> "CfgVehicles" >> _item)) then {
                if (_item call EFUNC(loadout,isItemRequired)) then {
                    _item = _item call EFUNC(loadout,replaceItem);
                    _crate addBackpackCargoGlobal [_item, _amount];
                };
            };
        };
    };


} forEach _crate_content;

true;
