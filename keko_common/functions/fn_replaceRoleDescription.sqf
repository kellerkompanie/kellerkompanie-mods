disableSerialization;

private _display = findDisplay 90000;
private _ctrlFind = _display displayCtrl 1000;
private _ctrlReplace = _display displayCtrl 1100;

private _find = ctrlText _ctrlFind;
private _replace = ctrlText _ctrlReplace;

profileNamespace setVariable ["keko_lastReplaceFind", _find];
profileNamespace setVariable ["keko_lastReplaceReplace", _replace];

TER_fnc_editString = 
{
  params ["_str", "_toFind", "_subsitution"];
  _char = count _toFind;
  _no = _str find _toFind;
  while {-1 != _str find _toFind} do {
      _no = _str find _toFind;
      _splitStr = _str splitString "";
      _splitStr deleteRange [(_no +1), _char -1];
      _splitStr set [_no, _subsitution];
      _str = _splitStr joinString "";
  };
  _str
};

{
	_description = (_x get3DENAttribute "description") select 0;

	_idx = _description find _find;
	if(_idx >= 0) then {
		_description = [_description, _find, _replace] call TER_fnc_editString;
		_x set3DENAttribute ["description", _description];
	};
	
} forEach (get3DENSelected "object");

_display closeDisplay 0;