_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

//diag_log format ["moduleAddTeleportDestination _activated: ", _activated];

if !(hasInterface) exitWith{};

//diag_log "moduleAddTeleportDestination hasInterface is true";

//diag_log "moduleAddTeleportDestination executing";

if(_activated) then {
	if (local _logic) then {
		profileNamespace setVariable ["keko_teleport_dest_object", _logic];

		createDialog "keko_teleport_destinationDialog";
		//_logic addEventHandler ["Deleted",{hint format ["%1 was killed by %2",name (_this select 0),name (_this select 1)];}]
	};	
};