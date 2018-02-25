_crate = _this select 0;
_crate_content = _this select 1;

_crate allowDamage false;

{
	_amount = _x select 0;
	_item = _x select 1;
	//_item = [_item] call keko_fnc_replaceKeyword;
	_item_type = _x select 2;

	switch ( _item_type ) do {
		case "ITEM": {
			_crate addItemCargoGlobal [_item, _amount];
		};
		case "WEAPON": {
			_crate addWeaponCargoGlobal [_item, _amount];
		};
		case "AMMO": {
			_crate addMagazineCargoGlobal [_item, _amount];
		};
		case "BACKPACK": {
			_crate addBackpackCargoGlobal [_item, _amount];
		};
	};
	
} forEach _crate_content;

true;