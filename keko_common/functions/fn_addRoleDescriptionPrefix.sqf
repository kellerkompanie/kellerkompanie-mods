disableSerialization;

private _display = findDisplay 90000;
private _ctrlPrefix = _display displayCtrl 1000;

private _prefix = ctrlText _ctrlPrefix;
profileNamespace setVariable ["keko_lastPrefix",_prefix];

{
	_description = (_x get3DENAttribute "description") select 0;
	_description = _prefix + _description;
	_x set3DENAttribute ["description", _description];
} forEach (get3DENSelected "object");

_display closeDisplay 0;