params ["_logic"];

if!(local _logic) exitWith{};

createDialog "keko_police_settingsDialog";

deleteVehicle _logic;