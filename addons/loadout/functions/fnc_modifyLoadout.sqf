#include "script_component.hpp"

params ["_player"];

private _removeFromUniform     = _player getVariable [QGVAR(removeFromUniform), []];
private _removeFromVest     = _player getVariable [QGVAR(removeFromVest), []];
private _removeFromBackpack = _player getVariable [QGVAR(removeFromBackpack), []];

private _replaceUniform     = _player getVariable [QGVAR(replaceUniform), []];
private _replaceVest         = _player getVariable [QGVAR(replaceVest), []];
private _replaceBackpack     = _player getVariable [QGVAR(replaceBackpack), []];
private _replaceHelmet         = _player getVariable [QGVAR(replaceHelmet), []];
private _replaceGoggles     = _player getVariable [QGVAR(replaceGoggles), []];

private _addToUniform         = _player getVariable [QGVAR(addToUniform), []];
private _addToVest             = _player getVariable [QGVAR(addToVest), []];
private _addToBackpack         = _player getVariable [QGVAR(addToBackpack), []];


private _unitLoadout = getUnitLoadout _player;

if(count _replaceUniform > 0) then {
    private _uniformEntry = _unitLoadout select 3;
    _uniformEntry set [0, selectRandom _replaceUniform];
    _uniformEntry set [1, []];
    _unitLoadout set [3, _uniformEntry];
};
if(count _replaceVest > 0) then {
    private _vestEntry = _unitLoadout select 4;
    _vestEntry set [0, selectRandom _replaceVest];
    _vestEntry set [1, []];
    _unitLoadout set [4, _vestEntry];
};
if(count _replaceBackpack > 0) then {
    private _backpackEntry = _unitLoadout select 5;
    _backpackEntry set [0, selectRandom _replaceBackpack];
    _backpackEntry set [1, []];
    _unitLoadout set [5, _backpackEntry];
};
if(count _replaceHelmet > 0) then {
    _unitLoadout set [6, selectRandom _replaceHelmet];
};
if(count _replaceGoggles > 0) then {
    _unitLoadout set [7, selectRandom _replaceGoggles];
};

_player setUnitLoadout _unitLoadout;

if(count _removeFromUniform > 0) then {
    private _uniformContainer = uniformContainer _player;
    {
        [_uniformContainer, _x, 1] call CBA_fnc_removeItemCargo;
    } forEach _removeFromUniform;
};
if(count _removeFromVest > 0) then {
    private _vestContainer = vestContainer _player;
    {
        [_vestContainer, _x, 1] call CBA_fnc_removeItemCargo;
    } forEach _removeFromVest;
};
if(count _removeFromBackpack > 0) then {
    private _backpackContainer = backpackContainer _player;
    {
        [_backpackContainer, _x, 1] call CBA_fnc_removeItemCargo;
    } forEach _removeFromBackpack;
};

if(count _addToUniform > 0) then {
    private _uniformContainer = uniformContainer _player;
    {
        [_uniformContainer, _x, 1] call CBA_fnc_addItemCargo;
    } forEach _addToUniform;
};
if(count _addToVest > 0) then {
    private _vestContainer = vestContainer _player;
    {
        [_vestContainer, _x, 1] call CBA_fnc_addItemCargo;
    } forEach _addToVest;
};
if(count _addToBackpack > 0) then {
    private _backpackContainer = backpackContainer _player;
    {
        [_backpackContainer, _x, 1] call CBA_fnc_addItemCargo;
    } forEach _addToBackpack;
};
