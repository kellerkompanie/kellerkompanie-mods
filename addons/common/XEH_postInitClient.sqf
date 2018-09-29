#include "script_component.hpp"

INFO("running XEH_postInitClient");

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

//failsafe for missing curator interface:
if ( player isKindOf "keko_blufor_command" || player isKindOf "keko_opfor_command" || player isKindOf "keko_indfor_command" ) then {
	TRACE_1("enabling Zeus on player", name player);
	if ( isNull (getAssignedCuratorLogic player) ) then {
		TRACE_1("no assigned curator module found, creating zeus for player", name player);
		//[name player, 3] remoteExec ["keko_common_fnc_createZeus",2];
		[player] remoteExec [QFUNC(createZeus),2];
	};
	if ( isNil "keko_evh_createZeusRespawn" ) then {
		TRACE_1("no zeus respawn event handler assigned, adding one for player", name player);
		GVAR(createZeusRespawn) = player addEventhandler ["RESPAWN",{
			if ( isNull (getAssignedCuratorLogic player) ) then {
				TRACE_1("no assigned curator module found after respawn, creating zeus for player", name player);
				//[name player, 3] remoteExec ["keko_common_fnc_createZeus",2];
				[player] remoteExec [QFUNC(createZeus),2];
			};
		}];
	};
};
