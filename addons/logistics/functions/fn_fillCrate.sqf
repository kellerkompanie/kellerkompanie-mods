_crate = _this select 0;
_crate_content = _this select 1;

_crate allowDamage false;

{
	_amount = _x select 0;
	_item = _x select 1;

	if (isClass (configFile >> "CfgWeapons" >> _item)) then {
		if(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
			_crate addItemCargoGlobal [_item, _amount];
		} else {
			_crate addWeaponCargoGlobal [_item, _amount];
		};		
	} else {
		if (isClass (configFile >> "CfgMagazines" >> _item)) then {
			_crate addMagazineCargoGlobal [_item, _amount];
		} else {
			if (isClass (configFile >> "CfgVehicles" >> _item)) then {
				_crate addBackpackCargoGlobal [_item, _amount];
			};
		};				
	};		
	
	
} forEach _crate_content;

true;