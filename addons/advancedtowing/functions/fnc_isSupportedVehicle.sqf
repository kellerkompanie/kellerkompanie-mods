// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_vehicle","_isSupported"];

_isSupported = false;
if(not isNull _vehicle) then {
	{
		if(_vehicle isKindOf _x) exitWith {_isSupported = true;};
	} forEach ["Tank", "Car", "Ship"];
};
_isSupported;
