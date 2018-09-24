#include "script_component.hpp"

diag_log text "[KEKO] (common) running XEH_postInitClient";

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

//failsafe for missing curator interface:
if ( player isKindOf "keko_blufor_command" || player isKindOf "keko_opfor_command" || player isKindOf "keko_indfor_command" ) then {
	diag_log text format["[KEKO] (common) enabling Zeus on player %1", name player];
	if ( isNull (getAssignedCuratorLogic player) ) then {
		diag_log text format["[KEKO] (common) no assigned curator module found, creating zeus for %1", name player];
		//[name player, 3] remoteExec ["keko_common_fnc_createZeus",2];
		[player] remoteExec [QFUNC(createZeus),2];
	};
	if ( isNil "keko_evh_createZeusRespawn" ) then {
		diag_log text format["[KEKO] (common) no zeus respawn event handler assigned, adding one for %1", name player];
		GVAR(createZeusRespawn) = player addEventhandler ["RESPAWN",{
			if ( isNull (getAssignedCuratorLogic player) ) then {
				diag_log text format["[KEKO] (common) no assigned curator module found after respawn, creating zeus for %1", name player];
				//[name player, 3] remoteExec ["keko_common_fnc_createZeus",2];
				[player] remoteExec [QFUNC(createZeus),2];
			};
		}];
	};
};
