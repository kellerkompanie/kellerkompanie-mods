#include "script_component.hpp"

params ["_dayTime"];

private _return = False;
private _latitude = -1 * getNumber (configFile >> "CfgWorlds" >> worldName >> "latitude");
private _year = 360 * (dateToNumber date);
private _day = (_dayTime / 24) * 360;

private _result = ( (12 * cos (_year) - 78) * cos (_latitude) * cos (_day) ) - (24 * sin (_latitude) * cos (_year) );

if (_result > 0) then {
	_return = True;
};

_return