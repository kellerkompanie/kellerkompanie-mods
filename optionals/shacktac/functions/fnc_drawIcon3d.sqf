params ["_screen_pos", "_colour", "_texture", "_angle"];
if (isNil "_screen_pos") exitWith {};
if (isNil "_colour") exitWith {};
if (isNil "_texture") exitWith {};
if (isNil "_angle") exitWith {};

if (count _screen_pos != 2) exitWith {};
if (count _colour != 4) exitWith {};

private _canvas = GET_CANVAS;
private _draw_pos = _canvas ctrlMapScreenToWorld _screen_pos;

_canvas drawIcon [
    _texture,
    _colour,
    _draw_pos,
    24, 24,
    _angle,
    "",
    false
];
