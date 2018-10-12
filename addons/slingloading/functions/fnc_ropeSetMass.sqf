#include "script_component.hpp"

private _obj = [_this,0] call BIS_fnc_param;
private _mass = [_this,1] call BIS_fnc_param;
_obj setMass _mass;
