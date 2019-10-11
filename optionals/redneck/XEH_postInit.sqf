#include "script_component.hpp"

if !(isServer) exitWith {};

{
    deleteVehicle _x;
} forEach allMissionObjects QGVAR(modulePOI3den);

{
    deleteVehicle _x;
} forEach allMissionObjects QGVAR(moduleLocation3den);

{
    deleteVehicle _x;
} forEach allMissionObjects QGVAR(moduleSpawnPoint3den);

{
    deleteVehicle _x;
} forEach allMissionObjects QGVAR(moduleStorePoint3den);

{
    deleteVehicle _x;
} forEach allMissionObjects QGVAR(moduleShippingPath3den);

if(GVAR(PowerPlants) > 0) then {
    if (count GVAR(ControlledIndustrials) > 0) then {
        // TODO give players money based on industrials
    };
};
