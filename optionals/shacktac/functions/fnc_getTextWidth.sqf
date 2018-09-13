#include "script_component.hpp"

params ["_text"];
private _width = [GVAR(TextLengths), _text] call CBA_fnc_hashGet;
if (!isNil {_width}) exitWith {_width};

private _chars = toArray(_text);
_width = 0;

{
    _width = _width + ([GVAR(CharWidths), _x] call CBA_fnc_hashGet);
} forEach(_chars);

[GVAR(TextLengths), _text, _width] call CBA_fnc_hashSet;

_width;
