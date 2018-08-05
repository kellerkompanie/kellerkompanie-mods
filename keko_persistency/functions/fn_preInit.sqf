diag_log text "[KEKO] (persistency) preInit";

_discoHandler = addMissionEventHandler ["HandleDisconnect",
{
	diag_log text format["[KEKO] (persistency) HandleDisconnect %1", _this];

	params ["_unit,", "_id", "_uid", "_name"];

	if(_name == "__SERVER__" ) exitWith {};
	
	[_unit, _uid, _name] call keko_persistency_fnc_savePlayerLoadout;
}];