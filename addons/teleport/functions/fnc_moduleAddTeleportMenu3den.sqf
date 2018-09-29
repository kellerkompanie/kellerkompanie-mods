#include "script_component.hpp"

private _logic = _this select 0;

// Only server, dedicated, or headless beyond this point
if (hasInterface && !isServer) exitWith {};

private _allowBLUFOR = _logic getVariable ["allowBLUFOR", true];
private _allowINDFOR = _logic getVariable ["allowINDFOR", true];
private _allowOPFOR  = _logic getVariable ["allowOPFOR",  true];
private _allowCIV 	 = _logic getVariable ["allowCIV",    true];

private _objects = synchronizedObjects _logic;
{
	[_x, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call FUNC(addTeleportMenu);
} forEach _objects;
