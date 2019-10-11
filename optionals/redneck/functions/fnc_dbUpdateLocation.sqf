#include "script_component.hpp"

params ["_locationVariable", "_side"];

private _ret = "extDB3" callExtension format [ "0:keko_redneck:setLocationSide:%1:%2:%3",
    EGVAR(persistency,key),
    _locationVariable,
    _side];

true
