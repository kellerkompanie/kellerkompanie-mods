#include "script_component.hpp"

INFO("running XEH_postInitClient");

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;


//failsafe for missing curator interface:
if ( player isKindOf QEGVAR(faction_generic,blufor_command) || player isKindOf QEGVAR(faction_generic,opfor_command) || player isKindOf QEGVAR(faction_generic,indfor_command) ) then {
	[] spawn {
		waitUntil {time > 2};

		if (isNull (getAssignedCuratorLogic player)) then {
			player remoteExec [QFUNC(createZeus), 2];
		};
	};
};

if (face player == "Custom") then {
	private _text = localize LSTRING(customFacesNotAllowed);
	[{alive player}, { // To be able to show list if using checkAll
		params ["_text"];
		_text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
		["[KEKO] ERROR", _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
	}, [_text]] call CBA_fnc_waitUntilAndExecute;
};

if(hasInterface) then {
	call FUNC(addBriefingEntries);
};

// event handlers for the statistics at mission end
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(fragsOut) = 0;
GVAR(shotsFired) = 0;

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
		GVAR(fragsOut) = GVAR(fragsOut) + 1;
	};
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle"];

	if (_weapon == "Throw") then {
		GVAR(fragsOut) = GVAR(fragsOut) + 1;
	};

	if (_weapon isEqualTo primaryWeapon _unit) then {
		GVAR(shotsFired) = GVAR(shotsFired) + 1;
	};
}];



["loadout", FUNC(itemCheck)] call CBA_fnc_addPlayerEventHandler;

[{
    _this call FUNC(itemCheck);
}, [player], 0.5, 0.1] call CBA_fnc_waitAndExecute;


TFAR_pluginTimeout = 15;
