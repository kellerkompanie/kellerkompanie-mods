#include "script_component.hpp"

params ["_player", "_faction", "_role"];

_player setVariable [QGVAR(role), _role, true];

private _customLoadout = _faction isEqualTo "Custom";

if(_customLoadout) exitWith {
    _role call FUNC(applyCustomLoadout);
};


private _specialLoadout = [];
{
    _x params ["_loadoutDummyClass", "", "_loadout"];
    INFO_2("_loadoutDummyClass = %1 | _role = %2", _loadoutDummyClass, _role);
    if (_role ==  _loadoutDummyClass) then {
        _specialLoadout = _loadout;
    };
} forEach GVAR(addLoadouts);

if ( count _specialLoadout > 0 ) exitWith {
    _player setUnitLoadout _specialLoadout;
};


_player enableSimulation false;

private _factionCfg = configFile >> "kekoFactions" >> _faction;
private _rankCfg = _factionCfg >> "rank";
private _engineerClassCfg = _factionCfg >> "engineerClass";
private _medicClassCfg = _factionCfg >> "medicClass";
private _weaponCfg = _factionCfg >> "Weapons";
private _magazinesCfg = _factionCfg >> "magazines";
private _primaryCfg = _factionCfg >> "primary";
private _secondaryCfg = _factionCfg >> "secondary";
private _launcherCfg = _factionCfg >> "launcher";
private _uniformCfg = _factionCfg >> "uniform";
private _uniformInventoryCfg = _factionCfg >> "uniformInventory";
private _vestCfg = _factionCfg >> "vest";
private _vestInventoryCfg = _factionCfg >> "vestInventory";
private _backpackCfg = _factionCfg >> "backpack";
private _backpackInventoryCfg = _factionCfg >> "backpackInventory";
private _helmetCfg = _factionCfg >> "helmet";
private _opticsCfg = _factionCfg >> "optics";
private _itemsCfg = _factionCfg >> "items";
private _gogglesCfg = _factionCfg >> "goggles";

private _faces = getArray (_factionCfg >> "faces");

private _primaryMagazinesCfg = _magazinesCfg >> "primary";
private _secondaryMagazinesCfg = _magazinesCfg >> "secondary";
private _uglMagazinesCfg = _magazinesCfg >> "ugl";
private _launcherMagazinesCfg = _magazinesCfg >> "launcher";
private _grenadeMagazinesCfg = _magazinesCfg >> "grenade";
private _smokeWhiteMagazinesCfg = _magazinesCfg >> "smokeWhite";
private _smokeGreenMagazinesCfg = _magazinesCfg >> "smokeGreen";

private _grenade = getText (_factionCfg >> "grenade");
private _smokeWhite = getText (_factionCfg >> "smokeWhite");
private _smokeGreen = getText (_factionCfg >> "smokeGreen");


private _medicClass = [_medicClassCfg, _role] call FUNC(getRoleCfgNumber);
private _engineerClass = [_engineerClassCfg, _role] call FUNC(getRoleCfgNumber);
private _rank = [_rankCfg, _role] call FUNC(getRoleCfgString);
private _uniform = [_uniformCfg, _role] call FUNC(getRoleCfgArray);
private _uniformInventory = [_uniformInventoryCfg, _role] call FUNC(getRoleCfgArray);
private _vest = [_vestCfg, _role] call FUNC(getRoleCfgArray);
private _vestInventory = [_vestInventoryCfg, _role] call FUNC(getRoleCfgArray);
private _backpack = [_backpackCfg, _role] call FUNC(getRoleCfgArray);
private _backpackInventory = [_backpackInventoryCfg, _role] call FUNC(getRoleCfgArray);
private _helmet = [_helmetCfg, _role] call FUNC(getRoleCfgArray);
private _primary = [_primaryCfg, _role] call FUNC(getRoleCfgArray);
private _secondary = [_secondaryCfg, _role] call FUNC(getRoleCfgArray);
private _launcher = [_launcherCfg, _role] call FUNC(getRoleCfgArray);
private _optics = [_opticsCfg, _role] call FUNC(getRoleCfgArray);
private _goggles = [_gogglesCfg, _role] call FUNC(getRoleCfgArray);
private _items = [_itemsCfg, _role] call FUNC(getRoleCfgArray);


removeAllWeapons _player;
removeAllItems _player;
removeAllAssignedItems _player;
removeUniform _player;
removeVest _player;
removeBackpack _player;
removeHeadgear _player;
removeGoggles _player;

_player setVariable ["ace_medical_medicClass", _medicClass, true];
_player setVariable ["ACE_isEngineer", _engineerClass, true];

_player setUnitRank _rank;

if(count _uniform != 0) then {
    private _random_uniform = selectRandom _uniform;
    _player forceAddUniform _random_uniform;
};

if(count _vest != 0) then {
    private _random_vest = selectRandom _vest;
    _player addVest _random_vest;
};

if(count _backpack != 0) then {
    private _random_backpack = selectRandom _backpack;
    _player addBackpack _random_backpack;
};

/* Workaround for Mods adding Medikits and Firstaidkits to Uniforms, Backpacks etc.*/
clearAllItemsFromBackpack _player;

if(count _uniform != 0) then {
    if(count _uniformInventory != 0) then {
        {
            for "_i" from 1 to (_x select 0) do {
                private _item = _x select 1;
                if (_item call FUNC(isItemRequired)) then {
                    _item = _item call FUNC(replaceItem);
                    _player addItemToUniform _item;
                };
            };
        } forEach _uniformInventory;
    };
};

if(count _vest != 0) then {
    if(count _vestInventory != 0) then {
        {
            for "_i" from 1 to (_x select 0) do {
                private _item = _x select 1;
                if (_item call FUNC(isItemRequired)) then {
                    _item = _item call FUNC(replaceItem);
                    _player addItemToVest _item;
                };
            };
        } forEach _vestInventory;

        if(GVAR(giveGps) == 3) then {
            _player addItemToVest "ACE_microDAGR";
        };
    };
};

if(count _backpack != 0) then {
    if(count _backpackInventory != 0) then {
        {
            for "_i" from 1 to (_x select 0) do {
                private _item = _x select 1;
                if (_item call FUNC(isItemRequired)) then {
                    _item = _item call FUNC(replaceItem);
                    _player addItemToBackpack _item;
                };
            };
        } forEach _backpackInventory;
    };
};



if(count _helmet != 0) then {
    private _random_helmet = selectRandom _helmet;
    _player addHeadgear _random_helmet;
};





private _defaultSmokeWhiteMagCount = getNumber(_smokeWhiteMagazinesCfg >> "default");
private _defaultSmokeGreenMagCount = getNumber(_smokeGreenMagazinesCfg >> "default");

private _smokeWhiteMagCount = _defaultSmokeWhiteMagCount;
if(isNumber (_smokeWhiteMagazinesCfg >> _role) ) then {
    _smokeWhiteMagCount = getNumber (_smokeWhiteMagazinesCfg  >> _role);
};
private _smokeGreenMagCount = _defaultSmokeGreenMagCount;
if(isNumber (_smokeGreenMagazinesCfg >> _role) ) then {
    _smokeGreenMagCount = getNumber (_smokeGreenMagazinesCfg  >> _role);
};

private _i = 0;
for [{_i = 0}, {_i < _smokeWhiteMagCount}, {_i = _i + 1}] do {
    // TODO replace this with faction specific variant
    [_player, _smokeWhite] call CBA_fnc_addMagazine;
};

for [{_i = 0}, {_i < _smokeGreenMagCount}, {_i = _i + 1}] do {
    // TODO replace this with faction specific variant
    [_player, _smokeGreen] call CBA_fnc_addMagazine;
};






private _defaultSecondaryMagCount = getNumber(_secondaryMagazinesCfg >> "default");

if(count _secondary != 0) then {
    private _randomSecondaryEntry = selectRandom _secondary;
    private _secondaryCfg = _weaponCfg >> _randomSecondaryEntry;

    private _secondary_cfgName = getText (_secondaryCfg >> "cfgName");
    private _secondary_scopes = getArray (_secondaryCfg >> "scopes");
    private _secondary_rails = getArray (_secondaryCfg >> "rails");
    private _secondary_bipods = getArray (_secondaryCfg >> "bipods");
    private _secondary_silencers = getArray (_secondaryCfg >> "silencers");
    private _secondary_magazines = getArray (_secondaryCfg >> "magazines");

    private _secondaryMagCount = _defaultSecondaryMagCount;
    if(isNumber (_secondaryMagazinesCfg >> _role) ) then {
        _secondaryMagCount = getNumber (_secondaryMagazinesCfg  >> _role);
    };

    if(_secondaryMagCount > 0) then {
        _secondaryMagCount = _secondaryMagCount - 1;
        [_player, selectRandom _secondary_magazines] call CBA_fnc_addMagazine;
    };

    _player addWeapon _secondary_cfgName;

    if(count _secondary_scopes != 0 && GVAR(giveScope)) then {
        private _item = selectRandom _secondary_scopes;
        _player addHandgunItem _item;
    };

    if(count _secondary_rails != 0) then {
        private _item = selectRandom _secondary_rails;
        _player addHandgunItem _item;
    };

    if(count _secondary_bipods != 0) then {
        private _item = selectRandom _secondary_bipods;
        _player addHandgunItem _item;
    };

    if (GVAR(giveSilencer)) then {
        if(count _secondary_silencers != 0) then {
            private _item = selectRandom _secondary_silencers;
            _player addHandgunItem _item;
        };
    };

    if(count _secondary_magazines != 0) then {
        private _item = _secondary_magazines select 0;
        [_player, _item] call CBA_fnc_addMagazine;
    };

    private _i = 0;
    for [{_i = 0}, {_i < _secondaryMagCount}, {_i = _i + 1}] do {
        [_player, selectRandom _secondary_magazines] call CBA_fnc_addMagazine;
    };
};




private _defaultPrimaryMagCount = getNumber(_primaryMagazinesCfg >> "default");
private _defaultUglMagCount = getNumber(_uglMagazinesCfg >> "default");

if(count _primary != 0) then {
    private _primaryCfg = _weaponCfg >> (selectRandom _primary);

    private _primaryWeaponClassname = getText (_primaryCfg >> "cfgName");
    private _scopes = getArray (_primaryCfg >> "scopes");
    private _rails = getArray (_primaryCfg >> "rails");
    private _bipods = getArray (_primaryCfg >> "bipods");
    private _silencers = getArray (_primaryCfg >> "silencers");
    private _magazines = getArray (_primaryCfg >> "magazines");
    private _magazinesUGL = getArray (_primaryCfg >> "uglMagazines");

    private _mag = _magazines select 0;
    private _magTracer = if(count _magazines > 1) then {_magazines select 1} else {_magazines select 0};
    private _magUGL = _magazinesUGL select 0;

    private _magCount = _defaultPrimaryMagCount;
    if(isNumber (_primaryMagazinesCfg >> _role) ) then {
        _magCount = getNumber (_primaryMagazinesCfg  >> _role);
    };

    if(_magCount > 0) then {
        _magCount = _magCount - 1;
        [_player, _mag] call CBA_fnc_addMagazine;
    };

    private _magCountUGL = _defaultUglMagCount;
    if(isNumber (_uglMagazinesCfg >> _role) ) then {
        _magCountUGL = getNumber (_uglMagazinesCfg  >> _role);
    };

    if(_magCountUGL > 0 && !(isNil "_magUGL") && {_magUGL != "ACE_HuntIR_M203"}) then {
        _magCountUGL = _magCountUGL - 1;
        [_player, _magUGL] call CBA_fnc_addMagazine;
    };

    _player addWeapon _primaryWeaponClassname;

    if(count _scopes != 0 && GVAR(giveScope)) then {
        private _item = selectRandom _scopes;
        _player addPrimaryWeaponItem _item;
    };

    if(count _rails != 0) then {
        private _item = selectRandom _rails;
        _player addPrimaryWeaponItem _item;
    };

    if(count _bipods != 0) then {
        private _item = selectRandom _bipods;
        _player addPrimaryWeaponItem _item;
    };

    if (GVAR(giveSilencer)) then {
        if(count _silencers != 0) then {
            private _item = selectRandom _silencers;
            _player addPrimaryWeaponItem _item;
        };
    };

    for "_i" from 0 to (_magCount / 2) do { [_player, _mag] call CBA_fnc_addMagazine; };
    for "_i" from 0 to (_magCount / 2) do { [_player, _magTracer] call CBA_fnc_addMagazine; };

    if (!(isNil "_magUGL") && {_magUGL != "ACE_HuntIR_M203"}) then {
        for "_i" from 0 to _magCountUGL do { [_player, _magUGL] call CBA_fnc_addMagazine; };
    };
};



private _defaultGrenadeMagCount = getNumber(_grenadeMagazinesCfg >> "default");

private _grenadeMagCount = _defaultGrenadeMagCount;
if(isNumber (_grenadeMagazinesCfg >> _role) ) then {
    _grenadeMagCount = getNumber (_grenadeMagazinesCfg  >> _role);
};

private _i = 0;
for [{_i = 0}, {_i < _grenadeMagCount}, {_i = _i + 1}] do {
    // TODO replace this with faction specific variant
    [_player, _grenade] call CBA_fnc_addMagazine;
};



private _defaultLauncherMagCount = getNumber(_launcherMagazinesCfg >> "default");

if(count _launcher != 0) then {
    private _randomLauncherEntry = selectRandom _launcher;
    private _launcherCfg = _weaponCfg >> _randomLauncherEntry;

    private _launcher_cfgName = getText (_launcherCfg >> "cfgName");
    private _launcher_scopes = getArray (_launcherCfg >> "scopes");
    private _launcher_rails = getArray (_launcherCfg >> "rails");
    private _launcher_bipods = getArray (_launcherCfg >> "bipods");
    private _launcher_magazines = getArray (_launcherCfg >> "magazines");

    private _launcherMagCount = _defaultLauncherMagCount;
    if(isNumber (_launcherMagazinesCfg >> _role) ) then {
        _launcherMagCount = getNumber (_launcherMagazinesCfg  >> _role);
    };

    if(_launcherMagCount > 0) then {
        _launcherMagCount = _launcherMagCount - 1;
        [_player, selectRandom _launcher_magazines] call CBA_fnc_addMagazine;
    };

    _player addWeapon _launcher_cfgName;

    if(count _launcher_scopes != 0 && GVAR(giveScope)) then {
        private _item = selectRandom _launcher_scopes;
        _player addSecondaryWeaponItem _item;
    };

    if(count _launcher_rails != 0) then {
        private _item = selectRandom _launcher_rails;
        _player addSecondaryWeaponItem _item;
    };

    if(count _launcher_bipods != 0) then {
        private _item = selectRandom _launcher_bipods;
        _player addSecondaryWeaponItem _item;
    };

    if(count _launcher_magazines != 0) then {
        private _item = _launcher_magazines select 0;
        [_player, _item] call CBA_fnc_addMagazine;

        private _i = 0;
        for [{_i = 0}, {_i < _launcherMagCount}, {_i = _i + 1}] do {
            [_player, _item] call CBA_fnc_addMagazine;
        };
    };
};







if(count _goggles != 0) then {
    private _random_goggles = selectRandom _goggles;
    _player addGoggles _random_goggles;
};

if(count _optics != 0) then {
    private _random_optics = selectRandom _optics;
    _player addWeapon _random_optics;
};

// add compass/map, nvg etc. based on mission's preset
_player call FUNC(addPresetItems);

if(count _items != 0) then {
    {
        _player linkItem _x;
    } forEach _items;
};

if (!(_faces isEqualTo [])) then {
    private _face = selectRandom _faces;
    [_player, _face] remoteExec ["setFace", 0, true];
};


_player enableSimulation true;



// let TFAR initialize
// sleep 3;

// give radio
if (GVAR(giveRadio) > 0) then {
    switch (GVAR(giveRadio)) do {
        case 1: {
            //Verstellbare für alle
            switch (side _player) do {
                case west: {
                    _player linkItem "TFAR_anprc152";
                };
                case east: {
                    _player linkItem "TFAR_fadak";
                };
                case independent: {
                    _player linkItem "TFAR_anprc148jem";
                };
                default {};
            };
        };
        case 2: {
            //Verstellbare für Führungspos, sonst Personal
            if ( (rank _player) in ["SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"] ) then {
                switch (side _player) do {
                    case west: {
                        _player linkItem "TFAR_anprc152";
                    };
                    case east: {
                        _player linkItem "TFAR_fadak";
                    };
                    case independent: {
                        _player linkItem "TFAR_anprc148jem";
                    };
                    default {};
                };
            } else {
                switch (side _player) do {
                    case west: {
                        _player linkItem "TFAR_rf7800str";
                    };
                    case east: {
                        _player linkItem "TFAR_pnr1000a";
                    };
                    case independent: {
                        _player linkItem "TFAR_anprc154";
                    };
                    default {};
                };
            };
        };
        case 3: {
            //Nur für Führungspos
            if ( (rank _player) in ["SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"] ) then {
                switch (side _player) do {
                    case west: {
                        _player linkItem "TFAR_anprc152";
                    };
                    case east: {
                        _player linkItem "TFAR_fadak";
                    };
                    case independent: {
                        _player linkItem "TFAR_anprc148jem";
                    };
                    default {};
                };
            };
        };
        default {};
    };
};

_player call FUNC(modifyLoadout);

// lower weapon if player already had a weapon before
if !(weaponLowered _player) then {
    _player action ["WeaponOnBack", _player];
};

// lower weapon after initial spawn
[_player] spawn {
    params ["_player"];
    sleep 2;
    if !(weaponLowered _player) then {
        _player action ["WeaponOnBack", _player];
    };
};
