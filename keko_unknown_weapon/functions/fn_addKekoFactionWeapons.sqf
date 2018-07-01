_weaponCfg = getText (configFile >> "kekoFaction" >> keko_var_faction >> "weaponCfg");
_weapon_config = configFile >> "kekoFaction" >> keko_var_faction >> _weaponCfg;

_classNames = "true" configClasses _weapon_config apply {getText (_x >> "cfgName")};

// weapons from config class
{
	keko_unknown_weapon_whitelist pushBackUnique toUpper(_x);
} forEach _classNames;


// weapons from custom loadouts
if !(isNil "keko_var_customLoadouts") then {
	{
		_primaryWeapon = ((_x select 2) select 0) select 0;
		keko_unknown_weapon_whitelist pushBackUnique toUpper(_primaryWeapon);
	} forEach keko_var_customLoadouts;
};

// weapons from crates
_crates = [];

if(keko_var_customLogistics == 2) then {
	_crates = [["Kisten", keko_var_logistics_customCrates]];
}
else {
	_crates = getArray (configFile >> "kekoFaction" >> keko_var_faction >> "crates");
};

{
	_section_title = _x select 0;	
	_section_crates = _x select 1;

	{
		_crate_name = "";
		if(keko_var_customLogistics == 2) then {
			_crate_name = _x select 0;

			{
				_entryName = _x select 0;
				_entryClass = _x select 1;
				_entryContents = _x select 2;

				if(_entryName isEqualTo _crate_name) then {
					{
						_item = _x select 1;

						if (isClass (configFile >> "CfgWeapons" >> _item)) then {
							if !(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
								keko_unknown_weapon_whitelist pushBackUnique toUpper(_item);
							};		
						} 					
					} forEach _entryContents;
				};
			} forEach keko_var_logistics_customCrates select 0;
			
		}
		else {			
			_crateConfig = configFile >> "kekoFaction" >> keko_var_faction >> _x;			
			_inventory = getArray (_crateConfig >> "inventory");
			
			{
				_item = _x select 1;

				if (isClass (configFile >> "CfgWeapons" >> _item)) then {
					if !(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
						keko_unknown_weapon_whitelist pushBackUnique toUpper(_item);
					};		
				} 					
			} forEach _inventory;			
		};	
		
	} forEach _section_crates;
} forEach _crates;