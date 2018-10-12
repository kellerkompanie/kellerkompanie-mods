#include "script_component.hpp"

count (player getVariable [QGVAR(RopesVehicle), []]) == 0 && count (missionNamespace getVariable [QGVAR(NearbyVehicles),[]]) > 0 && vehicle player == player;
