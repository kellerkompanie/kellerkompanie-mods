#include "script_component.hpp"

params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle) exitWith {};

if (hasInterface && {vehicle player isEqualTo _vehicle}) then {
	playSound QGVAR(knockMetalInside);

	if (GVAR(showHint)) then {
		["Someone is knocking on the vehicle", false, 3, -1] call ace_common_fnc_displayText;
	};
};
