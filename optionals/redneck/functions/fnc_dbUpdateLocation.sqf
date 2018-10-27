#include "script_component.hpp"

params ["_locationVariable", "_side"];

INFO_2("dbUpdateLocation %1 %2", _locationVariable, _side);

private _ret = "extDB3" callExtension format [ "1:keko_redneck:setLocationSide:%1:%2:%3",
	GVAR(PersistencyKey),
	_locationVariable,
	_side];

INFO_1("dbUpdateLocation returns %1", _ret);
true
