#include "script_component.hpp"

params ["_unit"];

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeAllItems _unit;

private _backpack = backpack _unit;
private _uniform = uniform _unit;
private _vest = vest _unit;
private _nvg = hmd _unit;

if !(_uniform isEqualTo "") then {
	clearWeaponCargoGlobal _uniform;
    clearMagazineCargoGlobal _uniform;
    clearBackpackCargoGlobal _uniform;
    clearItemCargoGlobal _uniform;
};

if !(_vest isEqualTo "") then {
	clearWeaponCargoGlobal _uniform;
    clearMagazineCargoGlobal _uniform;
    clearBackpackCargoGlobal _uniform;
    clearItemCargoGlobal _uniform;
};

if !(_backpack isEqualTo "") then {
	clearWeaponCargoGlobal _uniform;
    clearMagazineCargoGlobal _uniform;
    clearBackpackCargoGlobal _uniform;
    clearItemCargoGlobal _uniform;
};

if !(_nvg isEqualTo "") then {
	_unit unlinkItem _nvg;
};

// add random distribution of medical items
for "_i" from 0 to 5 step 1 do {
	private _medicalItem = selectRandom ["ACE_fieldDressing","ACE_morphine","ACE_tourniquet","ACE_epinephrine","ACE_quikclot","adv_aceSplint_splint","ACE_elasticBandage","ACE_packingBandage"];
	if !(_uniform isEqualTo "") then {
		_unit addItemToUniform _medicalItem;
	} else {
		if !(_vest isEqualTo "") then {
			_unit addItemToVest _medicalItem;
		} else {
			if !(_backpack isEqualTo "") then {
				_unit addItemToBackpack _medicalItem;
			};
		};
	};
};
