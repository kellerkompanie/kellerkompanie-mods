#include "script_component.hpp"

params ["_vehicle","_isSupported"];

_isSupported = false;

if(not isNull _vehicle) then {
	{
		if(_vehicle isKindOf _x) then {
			_isSupported = true;
		};
	} forEach (missionNamespace getVariable [QGVAR(SupportedVehiclesOverride),GVAR(SupportedVehicles)]);
};

_isSupported;
