if !(keko_settings_persistency_enabled) exitWith{diag_log text "[KEKO] (persistency) preInit: persistency disabled, exiting!"; false};
if (keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) preInit: persistency key not set, exiting!"; false};

diag_log text "[KEKO] (persistency) running XEH_preInit";

_discoHandler = addMissionEventHandler ["HandleDisconnect",
{
	diag_log text format["[KEKO] (persistency) HandleDisconnect %1", _this];

	params ["_unit,", "_id", "_uid", "_name"];

	if(_name == "__SERVER__" ) exitWith {};

	_unit call keko_persistency_fnc_savePlayerLoadout;
}];
