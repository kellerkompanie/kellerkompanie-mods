#include "script_component.hpp"

private ["_key","_vehicle","_volume"];

_key = _this select 1;
_vehicle = (vehicle player);

if ( ( (_vehicle isKindOf "Car") || (_vehicle isKindOf "Tank") || (_vehicle isKindOf "Air") ) && { (isEngineOn _vehicle) } ) then {
	if ( (_key == (GVAR(FX) select 9) ) && ( (GVAR(Chatter) select 2) != 10) ) exitWith	{
		_volume = (GVAR(Chatter) select 2);
		_volume = _volume + 1;

		if (_volume >= 10) then	{
			_volume = 10;
		};

		[_vehicle, _volume, False] call FUNC(Chatter_F3);
	};

	if ( (_key == (GVAR(FX) select 10) ) && ( (GVAR(Chatter) select 2) != 0) ) exitWith	{
		_volume = (GVAR(Chatter) select 2);
		_volume = _volume - 1;

		if (_volume <= 0) then {
			_volume = 0;
		};

		[_vehicle, _volume, False] call FUNC(Chatter_F3);
	};
};
