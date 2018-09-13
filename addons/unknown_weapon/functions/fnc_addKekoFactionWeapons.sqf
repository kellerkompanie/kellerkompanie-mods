#include "script_component.hpp"

diag_log text format["[KEKO] (unknown_weapon) addKekoFactionWeapons, whitelist before: %1", GVAR(whitelist)];

private _weaponCfg = getText (configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> "weaponCfg");
private _weapon_config = configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> _weaponCfg;

private _classNames = "true" configClasses _weapon_config apply {getText (_x >> "cfgName")};

// weapons from config class
{
	GVAR(whitelist) pushBackUnique toUpper(_x);
} forEach _classNames;


// weapons from custom loadouts
if !(isNil QEGVAR(loadout,customLoadouts)) then {
	{
		private _primaryWeapon = ((_x select 2) select 0) select 0;
		GVAR(whitelist) pushBackUnique toUpper(_primaryWeapon);
	} forEach EGVAR(loadout,customLoadouts);
};

// weapons from crates
private _crates = [];

if(EGVAR(logistics,customLogistics) == 2) then {
	if !(isNil QGVAR(customCrates)) then {
		_crates = [["Kisten", EGVAR(logistics,customCrates)]];
		diag_log format ["[KEKO] (unkown_weapon) _crates loaded from customCrates: %1", _crates];
	};
}
else {
	_crates = getArray (configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> "crates");
	diag_log format ["[KEKO] (unkown_weapon) _crates loaded from config: %1", _crates];
};

if(isNil "_crates") then {
	diag_log "[KEKO] (unkown_weapon) _crates isNil";
	_crates = [];
};

{
	private _section_crates = _x select 1;

	{
		private _crate_name = "";
		if(EGVAR(logistics,customLogistics) == 2) then {
			_crate_name = _x select 0;

			{
				private _entryName = _x select 0;
				private _entryContents = _x select 2;

				if(_entryName isEqualTo _crate_name) then {
					{
						private _item = _x select 1;

						if (isClass (configFile >> "CfgWeapons" >> _item)) then {
							if !(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
								GVAR(whitelist) pushBackUnique toUpper(_item);
							};
						}
					} forEach _entryContents;
				};
			} forEach EGVAR(logistics,customCrates) select 0;

		}
		else {
			private _crateConfig = configFile >> "kekoFaction" >> EGVAR(loadout,loadoutFaction) >> _x;
			private _inventory = getArray (_crateConfig >> "inventory");

			{
				private _item = _x select 1;

				if (isClass (configFile >> "CfgWeapons" >> _item)) then {
					if !(_item isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
						GVAR(whitelist) pushBackUnique toUpper(_item);
					};
				}
			} forEach _inventory;
		};

	} forEach _section_crates;
} forEach _crates;

diag_log text format["[KEKO] (unknown_weapon) addKekoFactionWeapons, whitelist after: %1", GVAR(whitelist)];
