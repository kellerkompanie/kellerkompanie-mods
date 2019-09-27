#include "script_component.hpp"

INFO("running check3denIncompatibility");

private _incompatibleAddonPrefixes = [
    "warfxpe",
    "blastcore",
    "jsrs"
];

private _patches = "getText (_x >> 'name') != 'objNull'" configClasses (configFile >> "CfgPatches");

{
    private _cfgPatchesClass = configName _x;
    {
        private _incompatibleAddonPrefix = _x;
        if (toLower _cfgPatchesClass find _incompatibleAddonPrefix == 0) exitWith {
            ERROR_MSG("Do not edit mission while having Blastcore or JSRS activated!");
        };
    } forEach _incompatibleAddonPrefixes;
} forEach _patches;
