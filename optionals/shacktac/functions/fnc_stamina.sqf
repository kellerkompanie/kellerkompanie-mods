#include "script_component.hpp"

if (!call GVAR(Canvas_ShownHUD)) exitWith {};

params ["_canvas"];

private _pos = _canvas ctrlMapScreenToWorld [SafeZoneX + 0.01 * SafeZoneW, SafeZoneY + 0.99 * SafeZoneH];
private _fatigue = getFatigue(player);
private _barMaxWidth  = 0.2;
private _barMaxHeight = 0.0035;
// Have to calculate it this way to account for different world sizes
private _topright = _canvas ctrlMapScreenToWorld [SafeZoneX + 0.01 * SafeZoneW + _barMaxWidth, SafeZoneY + 0.99 * SafeZoneH - _barMaxHeight];
private _barWidth  = ((_topright select 0) - (_pos select 0)) * 0.5;
private _barHeight = ((_topright select 1) - (_pos select 1)) * 0.5;

// Background
_canvas drawRectangle [
    [(_pos select 0) +  _barWidth, _pos select 1],
    _barWidth, _barHeight, 0,
    [0, 0, 0, 0.3 min 0.8 * (_fatigue + 0.1)],
    "#(rgb,8,8,3)color(1,1,1,1)"
];


if (_fatigue isEqualTo 0.0) exitWith {};

private _width = _fatigue * _barWidth;
private _green = linearConversion [0, 1, _fatigue, 0.6, 0, true];
private _alpha = linearConversion [0, 1, _fatigue, 0.5, 1, true];

// Foreground
_canvas drawRectangle [
    [(_pos select 0) + _width, _pos select 1],
    _width, _barHeight, 0,
    [_fatigue, _green, 0.0, _alpha],
    "#(rgb,8,8,3)color(1,1,1,1)"
];
