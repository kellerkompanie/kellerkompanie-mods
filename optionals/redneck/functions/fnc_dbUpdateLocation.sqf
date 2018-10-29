#include "script_component.hpp"

params ["_locationVariable", "_side"];

INFO_3("dbUpdateLocation %1 %2 %3", _locationVariable, _side, EGVAR(persistency,key));

private _ret = "extDB3" callExtension format [ "0:keko_redneck:setLocationSide:%1:%2:%3",
	EGVAR(persistency,key),
	_locationVariable,
	_side];

INFO_1("dbUpdateLocation returns %1", _ret);
true
