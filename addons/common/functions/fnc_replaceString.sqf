#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Replaces the occurence of one string in another.
 *
 * Arguments:
 * 0: Source string <STRING>
 * 1: String to be looked for <STRING>
 * 2: Replacement string <STRING>
 * 3: Number of occurences to replace (optional) default is 1
 * 4: Limit the number of replacements (optional) default is true
 *
 * Return Value:
 * The new string including replacements <STRING>
 *
 * Example:
 * ["ABCCEF", "CC", "CD"] call keko_common_fnc_replaceString
 *
 */

params ["_str", "_toFind", "_subsitution", ["_numLimit",10,[1]], ["_limit",true,[true]]];

if (typeName _toFind != typeName []) then {_toFind = [_toFind]};
{
    private _char = count _x;
    private _no = _str find _x;
    private _loop = 0;
    while {-1 != _str find _x && _loop < _numLimit} do {
        _no = _str find _x;
        private _splitStr = _str splitString "";
        _splitStr deleteRange [(_no +1), _char -1];
        _splitStr set [_no, _subsitution];
        _str = _splitStr joinString "";
        if (_limit) then {_loop = _loop +1;};
    };
} forEach (_toFind);
_str
