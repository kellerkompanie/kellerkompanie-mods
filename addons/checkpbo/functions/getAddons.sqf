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

private _loadedAddons = [];
private _loadedVersions = [];
{
    private _addonName = toLower (configName _x);
    if(_addonName find "a3_" != 0 && _addonName find "curatoronly_" != 0 && _addonName find "jsrs_" != 0 && !(_addonName in _addonsWhitelist) ) then {
        private _addonVersion = getText (_x >> "version");
        _loadedAddons pushBack _addonName;
        _loadedVersions pushBack _addonVersion;
    };
} forEach _allPatches;

/*private _i = 0;
for [{_i = 0}, {_i < (count _loadedAddons)}, {_i = _i + 1}] do    {
    private _addon = _loadedAddons select _i;
    private _version = _loadedVersions select _i;

    INFO_2("loaded %1 (%2)", _addon, _version);
};*/
