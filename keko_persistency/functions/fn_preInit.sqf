diag_log "[keko_persistency] preInit";

_discoHandler = addMissionEventHandler ["HandleDisconnect",
{
	diag_log format["[keko_persistency] HandleDisconnect %1", _this];

	params ["_unit,", "_id", "_uid", "_name"];

	if(_name == "__SERVER__" ) exitWith {};
	
	[_unit, keko_persistency_key, _uid, _name] call keko_persistency_fnc_savePlayerLoadout;
}];