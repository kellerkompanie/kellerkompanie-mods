#include "script_component.hpp"


if (!(hasInterface) || isDedicated) exitWith {L_Suppress_Suppress_Sys_fnc_fired = {}};

// Color Correction
GVAR(cc) = ppEffectCreate ["colorCorrections", 1501];
GVAR(cc) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
GVAR(cc) ppEffectEnable true;
GVAR(cc) ppEffectCommit 0;

// Blur
GVAR(blur) = ppEffectCreate ["DynamicBlur", 800];
GVAR(blur) ppEffectAdjust [0];
GVAR(blur) ppEffectCommit 0.3;
GVAR(blur) ppEffectEnable true;

// RBlur
GVAR(rBlur) = ppEffectCreate ["RadialBlur", 1003];
GVAR(rBlur) ppEffectAdjust [0, 0, 0, 0];
GVAR(rBlur) ppEffectCommit 0;
GVAR(rBlur) ppEffectEnable true;


GVAR(impactCC) = ppEffectCreate ["colorCorrections", 1499];
GVAR(impactCC) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
GVAR(impactCC) ppEffectEnable true;
GVAR(impactCC) ppEffectCommit 0;

GVAR(impactBlur) = ppEffectCreate ["RadialBlur", 1002];
GVAR(impactBlur) ppEffectAdjust [0, 0, 0, 0];
GVAR(impactBlur) ppEffectCommit 0;
GVAR(impactBlur) ppEffectEnable true;

// Check if active, exec script if so
[FUNC(mainHandler)] call CBA_fnc_addPerFrameHandler;
[FUNC(main), 1] call CBA_fnc_addPerFrameHandler;
[FUNC(pinnedDown), 0.5] call CBA_fnc_addPerFrameHandler;

["unit", {

    // Resets PinnedDown PP Effects
	GVAR(Suppressed) = false;
	GVAR(cc) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
	GVAR(cc) ppEffectCommit 0;

	// Blur
	GVAR(blur) ppEffectAdjust [0];
	GVAR(blur) ppEffectCommit 0;

	// RBlur
	GVAR(rBlur) ppEffectAdjust [0, 0, 0, 0];
	GVAR(rBlur) ppEffectCommit 0;

    // reset Variables that PPEffects dont get reactivated
    GVAR(Threshold) = 0;
    GVAR(lastShotAt) = 0;

    // Resets Impact PP Effects
    GVAR(impactBlur) ppEffectAdjust [0, 0, 0, 0];
    GVAR(impactBlur) ppEffectCommit 0;

    GVAR(impactCC) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
    GVAR(impactCC) ppEffectCommit 0;

    // rest CamShake Effect
    resetCamShake;
}] call CBA_fnc_addPlayerEventHandler;