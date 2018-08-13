keko_advancedtowing_TOW_SUPPORTED_VEHICLES = [
	"Tank", "Car", "Ship"
];

params ["_vehicle","_isSupported"];
_isSupported = false;
if(not isNull _vehicle) then {
	{
		if(_vehicle isKindOf _x) then {
			_isSupported = true;
		};
	} forEach (missionNamespace getVariable ["keko_advancedtowing_TOW_SUPPORTED_VEHICLES_OVERRIDE",keko_advancedtowing_TOW_SUPPORTED_VEHICLES]);
};
_isSupported;
