#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";

private _crate_name = _arr select 0;
private _x = parseNumber (_arr select 1);
private _y = parseNumber (_arr select 2);

[[_x, _y, 200], _crate_name] remoteExec [QFUNC(heliDrop), 2];

closeDialog 1;
