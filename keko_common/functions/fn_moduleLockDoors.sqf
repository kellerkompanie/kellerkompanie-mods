params ["_logic"];

if !(local _logic) exitWith {};

profileNamespace setVariable ["keko_common_lockDoors_center", getPos _logic];

createDialog "keko_common_lockDoorsDialog";

deleteVehicle _logic;