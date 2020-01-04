#include "script_component.hpp"

private _addonsWhitelist = [
    "extdb3",
    "keko_logging",
    "keko_persistency",
    "asm",
    "warfxpe",
    "blastcore_maincore",
    "blastcore_vep",
    "armazeuscache"
];

private _cfgPatches = (configFile >> "CfgPatches");
private _allPatches = "true" configClasses _cfgPatches;


private _loaded = [];
{
    private _addonName = toLower (configName _x);
    if(_addonName find "a3_" != 0 && _addonName find "curatoronly_" != 0 && _addonName find "jsrs_" != 0 && !(_addonName in _addonsWhitelist) ) then {
        private _addonVersion = getText (_x >> "version");
        _loaded pushBack [_addonName, _addonVersion];
    };
} forEach _allPatches;

_loaded sort true;

private _loadedAddons = [];
private _loadedVersions = [];
{
    _x params ["_loadedAddon", "_loadedVersion"];
    _loadedAddons pushBack _loadedAddon;
    _loadedVersion pushBack _loadedVersion;
} forEach _loaded;

[_loadedAddons, _loadedVersions]
