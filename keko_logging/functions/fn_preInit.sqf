diag_log "keko_logging preInit";

_nil = addMissionEventHandler ["Loaded",{
	diag_log "MissionEventHandler Loaded";
	diag_log _saveType;
}];

_nil = addMissionEventHandler ["Ended",{
	diag_log "MissionEventHandler Ended";
	diag_log _endType;
}];

_nil = addMissionEventHandler ["HandleDisconnect",{
	diag_log "MissionEventHandler HandleDisconnect";
	diag_log _unit; //: Object - unit formerly occupied by player
	diag_log _id; //: Number - same as _id in onPlayerDisconnected
	diag_log _uid; //: String - same as _uid in onPlayerDisconnected
	diag_log _name; //: String - same as _name in onPlayerDisconnected
}];

_nil = addMissionEventHandler ["PreloadStarted",{
	diag_log "MissionEventHandler PreloadStarted";
}];

_nil = addMissionEventHandler ["PreloadFinished",{
	diag_log "MissionEventHandler PreloadFinished";
}];