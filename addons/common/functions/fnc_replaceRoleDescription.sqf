#include "script_component.hpp"

disableSerialization;

private _display = findDisplay 90000;
private _ctrlFind = _display displayCtrl 1000;
private _ctrlReplace = _display displayCtrl 1100;

private _find = ctrlText _ctrlFind;
private _replace = ctrlText _ctrlReplace;

profileNamespace setVariable [QGVAR(lastReplaceFind), _find];
profileNamespace setVariable [QGVAR(lastReplaceReplace), _replace];

_TER_fnc_editString =
{
  params ["_str", "_toFind", "_subsitution", ["_numLimit",10,[1]], ["_limit",true,[true]]];
  if (typeName _toFind != typeName []) then {_toFind = [_toFind]};
  {
      _char = count _x;
      _no = _str find _x;
      private _loop = 0;
      while {-1 != _str find _x && _loop < _numLimit} do {
          _no = _str find _x;
          _splitStr = _str splitString "";
          _splitStr deleteRange [(_no +1), _char -1];
          _splitStr set [_no, _subsitution];
          _str = _splitStr joinString "";
          if (_limit) then {_loop = _loop +1;};
      };
  } forEach (_toFind);
  _str
};

{
	_description = (_x get3DENAttribute "description") select 0;

	_idx = _description find _find;
	if(_idx >= 0) then {
		_description = [_description, _find, _replace] call _TER_fnc_editString;
		_x set3DENAttribute ["description", _description];
	};
	
} forEach (get3DENSelected "object");

_display closeDisplay 0;