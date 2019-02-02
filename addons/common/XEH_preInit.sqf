#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

enableSaving [false, false];


// fix for units losing their loadout when switching to Headless Client
["CAManBase", "Local", {
    params ["_entity", "_isLocal"];

    if (_isLocal) then {
        if ((uniform _entity) isEqualTo "") then {
            _entity setUnitLoadout (getUnitLoadout (typeOf _entity));
        };
    };
}] call CBA_fnc_addClassEventHandler;

if(isServer) then {
	GVAR(aiKilled) = 0;
	GVAR(fragsOut) = 0;
	GVAR(shotsFired) = 0;
	GVAR(bandagesApplied) = 0;
	GVAR(pulseChecked) = 0;
	GVAR(cprPerformed) = 0;

	GVAR(peoplePunched) = 0;
	GVAR(civsKilled) = 0;
	GVAR(corpsesHidden) = 0;

	addMissionEventHandler ["EntityKilled", {
		params ["_unit"];

		if (_unit isKindOf "Man") then {
			if (!(isPlayer _unit)) then {
				GVAR(aiKilled) = GVAR(aiKilled) + 1;
			};
			private _faction = faction _unit;
			if ( _faction in ["CIV_F","CIV_IDAP_F","LOP_AFR_Civ","LOP_CHR_Civ","LOP_TAK_Civ","ISC_Civs","rds_rus_civ"]) then {
				GVAR(civsKilled) = GVAR(civsKilled) + 1;
			};
		};
	}];

	[QEGVAR(punch,onPunched), { GVAR(peoplePunched) = GVAR(peoplePunched) + 1; }] call CBA_fnc_addEventHandler;
	[QEGVAR(punch,onCorpseHidden), { GVAR(corpsesHidden) = GVAR(corpsesHidden) + 1; }] call CBA_fnc_addEventHandler;
};

if(hasInterface) then {
	[
		"Kellerkompanie",
		QGVAR(breakWindow),
		["Break Window", "Press to smash a window"],
		{
			call FUNC(breakWindow)
		},
		{},
		[DIK, [false,false,false]]
	] call cba_fnc_addKeybind;
};

ADDON = true;
