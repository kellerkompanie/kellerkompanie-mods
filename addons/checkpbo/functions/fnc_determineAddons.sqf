#include "script_component.hpp"

private _addonsWhitelist = [
    "extdb3",
    "keko_logging",
    "keko_persistency",
    "stui_core",
    "stui_grouphud",
    "stui_groupindicators",
    "stui_nametags",
    "stui_stamina",
    "warfxpe",
    "blastcore_maincore",
    "jsrs_soundmod_bullethits",
    "jsrs_soundmod_environment",
    "jsrs_soundmod_framework",
    "jsrs_soundmod_sonic_cracks",
    "blastcore_vep",
    "jsrs_soundmod_helicopters",
    "jsrs_soundmod_landvehicles",
    "jsrs_soundmod_movement",
    "jsrs_soundmod_weapons",
    "jsrs_soundmod_explosions",
    "jsrs_rhs_uaz",
    "jsrs_rhs_ah1z",
    "jsrs_rhs_ah64d",
    "jsrs_rhs_ch49",
    "jsrs_rhs_fmtv",
    "jsrs_rhs_hmmwv",
    "jsrs_rhs_m1abrams",
    "jsrs_rhs_m2a2",
    "jsrs_rhs_mrzr",
    "jsrs_rhs_uh1",
    "jsrs_rhs_uh60",
    "jsrs_soundmod_rhs_aaf_gref_weapons",
    "jsrs_soundmod_rhs_afrf_weapons",
    "jsrs_soundmod_rhs_usf_weapons",
    "jsrs_rhs_bmd4",
    "jsrs_rhs_bmd",
    "jsrs_rhs_bmp3",
    "jsrs_rhs_bmp",
    "jsrs_rhs_t72",
    "jsrs_rhs_t80",
    "jsrs_soundmod_specialist_military_arms_weapons",
    "compositions_a3",
    "zeccup",
    "jsrs_soundmod_rhs_gref_weapons",
    "jsrs_soundmod_rhs_saf_weapons"
];

private _cfgPatches = (configFile >> "CfgPatches");
private _allPatches = "true" configClasses _cfgPatches;

private _loadedAddons = [];
private _loadedVersions = [];
{
    private _addonName = toLower (configName _x);
    if(_addonName find "a3_" != 0 && !(_addonName in _addonsWhitelist) ) then {
        private _addonVersion = getText (_x >> "version");
        _loadedAddons pushBack _addonName;
        _loadedVersions pushBack _addonVersion;
    };
} forEach _allPatches;

parsingNamespace setVariable [QGVAR(loadedAddons), [_loadedAddons, _loadedVersions]];
