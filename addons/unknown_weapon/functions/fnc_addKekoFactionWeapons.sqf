#include "script_component.hpp"

TRACE_1("addKekoFactionWeapons, whitelist before", GVAR(whitelist));

private _weapon_config = configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "weapons";

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
		TRACE_1("_crates loaded from customCrates", _crates);
	};
}
else {
	private _cratesCfgs = "true" configClasses (configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "crates");
	{
		_crates pushBack (configName _x);
	} forEach _cratesCfgs;
};

if(isNil "_crates") then {
	INFO("_crates isNil");
	_crates = [];
};

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
		private _crateConfig = configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "crates" >> _x;
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
} forEach _crates;

TRACE_1("addKekoFactionWeapons, whitelist after", GVAR(whitelist));
