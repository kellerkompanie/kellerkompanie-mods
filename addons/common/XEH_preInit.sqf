#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

enableSaving [false, false];

if(isServer) then {
	GVAR(fragsOut) = 0;
	GVAR(shotsFired) = 0;
	GVAR(bandagesApplied) = 0;
	GVAR(pulseChecked) = 0;
	GVAR(cprPerformed) = 0;
	GVAR(fragsOut) = 0;
};

ADDON = true;
