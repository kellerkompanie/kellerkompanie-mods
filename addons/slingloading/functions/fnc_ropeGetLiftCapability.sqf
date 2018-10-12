#include "script_component.hpp"

params ["_vehicle"];
private ["_slingLoadMaxCargoMass"];
_slingLoadMaxCargoMass = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "slingLoadMaxCargoMass");
if(_slingLoadMaxCargoMass <= 0) then {
	_slingLoadMaxCargoMass = 4000;
};
_slingLoadMaxCargoMass;
