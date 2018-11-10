#include "script_component.hpp"

private _logic = _this select 0;

if !(isServer) exitWith {};

private _replaceUniform 	= _logic getVariable ["ReplaceUniform", 	""] call FUNC(parseStringToList);
private _replaceVest		= _logic getVariable ["ReplaceVest", 		""] call FUNC(parseStringToList);
private _replaceBackpack 	= _logic getVariable ["ReplaceBackpack", 	""] call FUNC(parseStringToList);
private _replaceHelmet 		= _logic getVariable ["ReplaceHelmet", 		""] call FUNC(parseStringToList);
private _replaceGoggles		= _logic getVariable ["ReplaceGoggles",		""] call FUNC(parseStringToList);

private _addToUniform 	= _logic getVariable ["AddToUniform", 	""] call FUNC(parseStringToList);
private _addToVest		= _logic getVariable ["AddToVest", 		""] call FUNC(parseStringToList);
private _addToBackpack 	= _logic getVariable ["AddToBackpack", 	""] call FUNC(parseStringToList);

private _removeFromUniform 	= _logic getVariable ["RemoveFromUniform", 	""] call FUNC(parseStringToList);
private _removeFromVest		= _logic getVariable ["RemoveFromVest", 	""] call FUNC(parseStringToList);
private _removeFromBackpack = _logic getVariable ["RemoveFromBackpack", ""] call FUNC(parseStringToList);

private _objects = synchronizedObjects _logic;

{
	if (count _replaceUniform > 0) then {
		_x setVariable [QGVAR(replaceUniform), _replaceUniform, true];
	};
	if (count _replaceVest > 0) then {
		_x setVariable [QGVAR(replaceVest), _replaceVest, true];
	};
	if (count _replaceBackpack > 0) then {
		_x setVariable [QGVAR(replaceBackpack), _replaceBackpack, true];
	};
	if (count _replaceHelmet > 0) then {
		_x setVariable [QGVAR(replaceHelmet), _replaceHelmet, true];
	};
	if (count _replaceGoggles > 0) then {
		_x setVariable [QGVAR(replaceGoggles), _replaceGoggles, true];
	};

	if (count _addToUniform > 0) then {
		_x setVariable [QGVAR(addToUniform), _addToUniform, true];
	};
	if (count _addToVest > 0) then {
		_x setVariable [QGVAR(addToVest), _addToVest, true];
	};
	if (count _addToBackpack > 0) then {
		_x setVariable [QGVAR(addToBackpack), _addToBackpack, true];
	};

	if (count _removeFromUniform > 0) then {
		_x setVariable [QGVAR(removeFromUniform), _removeFromUniform,  true];
	};
	if (count _removeFromVest > 0) then {
		_x setVariable [QGVAR(removeFromVest), _removeFromVest,	 true];
	};
	if (count _removeFromBackpack > 0) then {
		_x setVariable [QGVAR(removeFromBackpack), 	_removeFromBackpack, true];
	};
} forEach _objects;

deleteVehicle _logic;
