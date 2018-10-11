#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

// disable snow storm
al_snowstorm_om = false;
publicVariable "al_snowstorm_om";

// disable dust storm
al_duststorm_on = false;
publicVariable "al_duststorm_on";

// disable tornado
tornadosino = "goof";
publicvariable "tornadosino";
