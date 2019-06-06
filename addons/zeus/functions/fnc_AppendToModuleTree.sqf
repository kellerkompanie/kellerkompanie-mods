#include "script_component.hpp"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    AUTHOR: Kex (based on Anton Struyk's version)
//    DATE: 6/4/16
//    VERSION: 1.0
//  DESCRIPTION: Appends a module to the module tree
//
//    ARGUMENTS:
//    _this select 0:        CTRL    - tree control UI object
//    _this select 1:        ARRAY    - list of all category display names
//    _this select 2:        STRING    - category display name
//    _this select 3:        STRING    - module display name
//    _this select 4:        STRING    - module class name in config
//    _this select 5:        INTEGER    - value associated to the tree entry
//    _this select 6:        STRING    - path of *.paa icon file
//    _this select 7:        STRING    - path of *.paa icon file
//
//    RETURNS:
//    _this                ARRAY    - updated list of all category display names
//
//    Example:
//    _categoryList = [_ctrl,_categoryList,_categoryName,_moduleDisplayName,_moduleClassName,_forEachIndex,_moduleIcon,_addonIcon] call keko_zeus_fnc_AppendToModuleTree;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define CATEGORY_ICON QPATHTOF(ui\icons\icon_keko_zeus_small.paa)

params
[
    "_ctrl",
    "_categoryList",
    "_categoryName",
    "_moduleDisplayName",
    "_moduleClassName",
    ["_value", 0, [0]],
    ["_moduleIcon", QPATHTOF(ui\icons\icon_default.paa), [""]],
    ["_addonIcon", QPATHTOF(ui\icons\icon_keko_zeus_small.paa), [""]]
];

private _categoryIndex = _categoryList find _categoryName;

if (_categoryIndex == -1) then
{
    // Add categories if it does not already exist

    private _tvData = QGVAR(Module_Empty); // All of the categories use the 'Empty' module. There's no logic associated with them.
    private _tvBranch = _ctrl tvAdd [[], _categoryName];
    _ctrl tvSetData [[_tvBranch], _tvData];
    if (GVAR(moduleTreeHelmet)) then
    {
        _ctrl tvSetPicture [[_tvBranch], CATEGORY_ICON];
    };
    _categoryIndex = count _categoryList;
    _categoryList pushBack _categoryName;
};

private _moduleIndex = _ctrl tvAdd [[_categoryIndex], _moduleDisplayName];
private _newPath = [_categoryIndex, _moduleIndex];
_ctrl tvSetData [_newPath, _moduleClassName];
_ctrl tvSetPicture [_newPath, _moduleIcon];
_ctrl tvSetValue [_newPath, _value];

if (GVAR(moduleTreeDLC)) then
{
    _ctrl tvSetPictureRight [_newPath, _addonIcon];
};

_categoryList
