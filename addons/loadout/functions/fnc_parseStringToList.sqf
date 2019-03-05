#include "script_component.hpp"

params ["_str"];

if (count _str == 0) exitWith {[]};

private _returnVal = [];
private _split = _str splitString ",";

{
    _returnVal pushBack _x;
} forEach _split;

_returnVal
