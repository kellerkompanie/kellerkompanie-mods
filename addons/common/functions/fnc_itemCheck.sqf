#include "script_component.hpp"

params ["_unit"];

// Retrieve compatible mags
private _compatibleMagazines = [[[], []], [[], []], [[], []]];
{
    if (_x != "") then {
        private _weaponConfig = (configFile >> "CfgWeapons" >> _x);
        private _index = _forEachIndex;

        {
            private _subIndex = _forEachIndex;
            {
                ((_compatibleMagazines select _index) select _subIndex) pushBackUnique (configName (configFile >> "CfgMagazines" >> _x))
            } foreach ([getArray (_weaponConfig >> _x >> "magazines"), getArray (_weaponConfig >> "magazines")] select (_x == "this"));
        } foreach getArray (_weaponConfig >> "muzzles");
    };
} foreach [primaryWeapon _unit, handgunWeapon _unit, secondaryWeapon _unit];

private _primaryMagazines = _compatibleMagazines select 0 select 0;
private _uglMagazines = _compatibleMagazines select 0 select 1;
private _secondaryMagazines = _compatibleMagazines select 1 select 0;
private _launcherMagazines = _compatibleMagazines select 2 select 0;

private _hasPrimaryWeapon = primaryWeapon _unit != "";
private _hasSecondaryWeapon = handgunWeapon _unit != "";
private _hasLauncherWeapon = secondaryWeapon _unit != "";


if (_hasPrimaryWeapon) then {
	if (primaryWeapon _unit in GVAR(machineGuns)) then {
		while {({_x == "keko_MGMag"} count items _unit) > 0} do {
			_unit removeItem "keko_MGMag";
			[_unit, _primaryMagazines select 0] call CBA_fnc_addItem;
		};
	} else {
		while {({_x == "keko_RifleMag"} count items _unit) > 0} do {
			_unit removeItem "keko_RifleMag";
			[_unit, _primaryMagazines select 0] call CBA_fnc_addItem;
		};
	};

	if (count _uglMagazines > 0) then {
		while {({_x == "keko_UGLMag"} count items _unit) > 0} do {
			_unit removeItem "keko_UGLMag";
			[_unit, _uglMagazines select 0] call CBA_fnc_addItem;
		};
	};
};

if (_hasSecondaryWeapon) then {
	while {({_x == "keko_PistolMag"} count items _unit) > 0} do {
		_unit removeItem "keko_PistolMag";
		[_unit, _secondaryMagazines select 0] call CBA_fnc_addItem;
	};
};

if (_hasLauncherWeapon) then {
	if (secondaryWeapon _unit in GVAR(atLaunchers)) then {
		while {({_x == "keko_AntiTankMag"} count items _unit) > 0} do {
			_unit removeItem "keko_AntiTankMag";
			[_unit, _launcherMagazines select 0] call CBA_fnc_addItem;
		};
	} else {
		if (secondaryWeapon _unit in GVAR(aaLaunchers)) then {
			while {({_x == "keko_AntiAirMag"} count items _unit) > 0} do {
				_unit removeItem "keko_AntiAirMag";
				[_unit, _launcherMagazines select 0] call CBA_fnc_addItem;
			};
		};
	};
};
