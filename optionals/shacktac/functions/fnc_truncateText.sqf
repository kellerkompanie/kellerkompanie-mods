params ["_text", "_max"];
private _chars = toArray(_text);
private _width = 0;
private _truncated = _text;

{
    _width = _width + ([GVAR(CharWidths), _x] call CBA_fnc_hashGet);
    if (_width > _max) exitWith
    {
        _truncated = (_text select [0, _forEachIndex - 1]) + "...";
    };
} forEach(_chars);

_truncated;
