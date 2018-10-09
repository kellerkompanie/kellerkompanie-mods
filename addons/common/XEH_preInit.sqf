#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

enableSaving [false, false];

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
			if ( _faction == "CIV_F" || _faction == "CIV_IDAP_F") then {
				GVAR(civsKilled) = GVAR(civsKilled) + 1;
			};
		};
	}];

	[QEGVAR(punch,onPunched), { GVAR(peoplePunched) = GVAR(peoplePunched) + 1; }] call CBA_fnc_addEventHandler;
	[QEGVAR(punch,onCorpseHidden), { GVAR(corpsesHidden) = GVAR(corpsesHidden) + 1; }] call CBA_fnc_addEventHandler;
};

ADDON = true;
