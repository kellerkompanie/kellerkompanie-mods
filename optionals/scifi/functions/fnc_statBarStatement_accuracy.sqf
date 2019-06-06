#include "script_component.hpp"
/*
 * Author: Alganthe
 * Accuracy bar statement.
 *
 * Arguments:
 * 0: stats array (ARRAY)
 * 1: item config path (CONFIG)
 * 2: Args
 *  2.1: Stat limits (ARRAY of BOOL)
 *  2.2: Bar limits (ARRAY of SCALAR)
 *
 * Return Value:
 * Number
 *
 * Public: No
*/

params ["_stat", "_config", "_args"];
_args params ["_statMinMax", "_barLimits"];
TRACE_4("statBarStatement_accuracy",_stat,_config,_statMinMax,_barLimits);

private _fireModes = getArray (_config >> "modes");
private _dispersion = [];

{
    private _n = log (getNumber (_config >> _x >> "dispersion"));
    if (!finite _n) then {_n = 0;};
    _dispersion pushBackUnique _n;
} foreach _fireModes;

_dispersion sort true;
TRACE_1("",_dispersion);

private _minFrom = _statMinMax select 0;
private _maxFrom = _statMinMax select 1;
private _value = _dispersion param [0, 0];
private _minTo = _barLimits select 0;
private _maxTo = _barLimits select 1;

if(typeName _minFrom != "SCALAR") then {_minFrom = 0;};
if(typeName _maxFrom != "SCALAR") then {_maxFrom = 100;};
if(typeName _minTo != "SCALAR") then {_minTo = 0;};
if(typeName _maxTo != "SCALAR") then {_maxTo = 100;};

linearConversion [_minFrom, _maxFrom, _value, _minTo, _maxTo]
