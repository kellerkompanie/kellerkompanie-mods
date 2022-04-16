#include "script_component.hpp"

params ["_file"];

private _return = False;

disableSerialization;

private _ctrl = findDisplay 0 ctrlCreate ["RscHTML", -1];
_ctrl htmlLoad _file;
private _bool = ctrlHTMLLoaded _ctrl;

if (_bool) then {
	_return = True;
};

_return