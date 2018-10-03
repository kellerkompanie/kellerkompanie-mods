#include "script_component.hpp"

params ["_unit"];

private _hmd = hmd _unit;
if (_hmd == QGVAR(NVGoggles_AI)) then {
	_unit unlinkItem _hmd;
};
