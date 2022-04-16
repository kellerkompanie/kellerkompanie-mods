#include "script_component.hpp"

private ["_vehicle","_volume","_type","_displayName","_value","_count","_status","_string"];

_vehicle = _this select 0;
_volume = _this select 1;
_type = _this select 2;

_displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");

if (_volume > 0) then {
	_value = "";
	_count = 0;

	for "_count" from _count to (_volume - 1) do {
		_value = _value + "|";
	};

	GVAR(Chatter) set [0, True];
	GVAR(Chatter) set [1, (_volume / 10)];
}
else {
	_value = "Disabled";

	GVAR(Chatter) set [0, False];
	GVAR(Chatter) set [1, _volume];
};

GVAR(Chatter) set [2, _volume];

[_type, _displayName, _value] spawn {
	_text =	{
		parseText format ["<t color='#ffff00' size='1.5'>Radio Chatter</t><br/>%1 <t color='#32cd32' size='1.5'>%2</t>", _this, _status];
	};

	if (_this select 0) then {
		_status = "Enabled";
		_string = (_this select 1) call _text;
		hint _string;
		sleep 3;
	};

	_status = (_this select 2);
	_string = (_this select 1) call _text;
	hint _string;
};

True;
