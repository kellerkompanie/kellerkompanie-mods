#include "script_component.hpp"

params ["_unit", "_interrogator", "_actionId"];

[ _unit, _actionId ] remoteExec ["BIS_fnc_holdActionRemove", [0, -2] select isDedicated];

private _group = group _unit;
private _onInterrogatedCodeString = _group getVariable [QGVAR(onInterrogateCode), ""];

if (count _onInterrogatedCodeString == 0) exitWith {};

//(format ["%1 was interrogated by %2", _unit, _interrogator]) remoteExec ["systemChat", [0, -2] select isDedicated];
call compile _onInterrogatedCodeString;
