#include "script_component.hpp"

params ["_logic", "", "_activated"];

if (_activated && local _logic) then {
    player remoteExec [QEFUNC(persistency,loadAllVehicles), 2];
};

deleteVehicle _logic;
