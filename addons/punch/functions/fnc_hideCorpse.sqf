#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {
    WARNING("punching disabled, exiting");
    false
};

params ["_player", "_target"];

[_player, _target] spawn {
    params ["_player", "_target"];

    [QGVAR(onCorpseHidden), [_player, _target]] call CBA_fnc_globalEvent;

    [_player, QGVAR(ShovelSound)] remoteExec ["say3D", 0, false];

    [_player, "AinvPknlMstpSnonWnonDnon_medic4"] remoteExec ["playMove", _player];

    sleep 15;

    [_target] remoteExec ["deleteVehicle", _target];
};
