params ["_logic"];

if !(local _logic) exitWith{};

profileNamespace setVariable ["keko_intel_logic", _logic];

createDialog "keko_intel_mainDialog";