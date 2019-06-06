#include "script_component.hpp"

if (canSuspend) exitWith {[FUNC(moduleTornado), _this] call CBA_fnc_directCall;};

params ["_logic", "", "_activated"];
if !(_activated && {local _logic}) exitWith {};

private _tornadoStartMarker = createMarker ["tornado_start", getPos _logic];
_tornadoStartMarker setMarkerAlpha 0;

[_logic, {
    params ["_successful", "_logic", "_mousePosASL"];

    if !(_successful) exitWith {};

    private _targetASL = _mousePosASL vectorAdd [0,0,0.6]; // mouse pos is at ground level zero, raise up a bit;
    if (_targetASL isEqualTo []) exitWith {};

    private _tornadoEndMarker = createMarker ["tornado_end", _targetASL];
    _tornadoEndMarker setMarkerAlpha 0;

    ["tornado_start","tornado_end"] remoteExec [QFUNC(tornado), 2];

    _logic remoteExec ["deleteVehicle", _logic];

}, "Tornado Destination", "\a3\ui_f\data\IGUI\Cfg\Cursors\select_target_ca.paa", [1, 0, 0, 1], 45] call ace_zeus_fnc_getModuleDestination;
