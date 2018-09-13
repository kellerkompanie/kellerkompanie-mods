#include "script_component.hpp"

disableSerialization;

private _display = findDisplay 90001;
private _ctrlSuffix = _display displayCtrl 1001;

private _suffix = ctrlText _ctrlSuffix;
profileNamespace setVariable [QGVAR(lastSuffix),_suffix];

{
	private _description = (_x get3DENAttribute "description") select 0;
	_description = _description + _suffix;
	_x set3DENAttribute ["description", _description];
} forEach (get3DENSelected "object");

_display closeDisplay 0;
