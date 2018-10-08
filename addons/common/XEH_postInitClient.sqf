#include "script_component.hpp"

INFO("running XEH_postInitClient");

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

//failsafe for missing curator interface:
if ( player isKindOf QEGVAR(faction_generic,blufor_command) || player isKindOf QEGVAR(faction_generic,opfor_command) || player isKindOf QEGVAR(faction_generic,indfor_command) ) then {
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



// event handlers for the statistics at mission end
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(fragsOut) = 0;

["ace_treatmentSucceded", {
	params ["_medic", "_patient", "_bodyPart", "_className"];

	if (_className in ["FieldDressing", "PackingBandage", "ElasticBandage", "QuikClot"]) exitWith {
		GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
	};

	if (_className isEqualTo "CheckPulse") exitWith {
		GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
	};

	if (_className isEqualTo "CPR") exitWith {
		GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
	};
}] call CBA_fnc_addEventHandler;

["ace_throwableThrown", {
	params ["_unit", "_frag"];

	if (isPlayer _unit) then {
		if ((typeOf _frag) isEqualTo "GrenadeHand" || (typeOf _frag) isEqualTo "mini_Grenade") then {
			GVAR(fragsOut) = GVAR(fragsOut) + 1;
		};
	};
}] call CBA_fnc_addEventHandler;
