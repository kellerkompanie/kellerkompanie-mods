#include "script_component.hpp"

params ["_bullet"];

private _distance = _bullet distance player;

while { alive _bullet } do {
	_distance = (_bullet distance player);	
	sleep 0.01;
};

if (_distance < 5) then {
	GVAR(Impact_FX) set [0, (GVAR(Impact_FX) select 0) + 0.5];
	
	private _value = (3 / _distance);
	
	addCamShake [_value, 1, 50];
	
	private["_delay1", "_delay2", "_fatigue"];
		
	BIS_fnc_feedback_fatigueCC = ppEffectCreate ["ColorCorrections", 1615];
	BIS_fnc_feedback_fatigueRadialBlur = ppEffectCreate ["RadialBlur", 275];	
	BIS_fnc_feedback_fatigueCC ppEffectAdjust [1,1,0,[0.15, 0.15, 0.15, 0],[1, 1, 1, 1],[0.587, 0.587, 0.587, 0],[1, 1, 0, 0, 0, 0.2, 1]];
	
	_fatigue = (GVAR(Impact_FX) select 0);
	_delay1 = 0.1 * acctime;
	
	// slight radial blur
	BIS_fnc_feedback_fatigueRadialBlur ppEffectAdjust [0, 0, 0, 0];
	BIS_fnc_feedback_fatigueRadialBlur ppEffectCommit 0;
	BIS_fnc_feedback_fatigueRadialBlur ppEffectEnable TRUE;
	
	BIS_fnc_feedback_fatigueRadialBlur ppEffectAdjust [((0.0004*_fatigue)+0.001067), ((0.0004*_fatigue)+0.001067), 0.04, 0.04];  
	BIS_fnc_feedback_fatigueRadialBlur ppEffectCommit _delay1;
	
	if (currentVisionMode player == 0) then	{
		// In normal view use red (changes with damage from gray to red)
		BIS_fnc_feedback_fatigueCC ppEffectAdjust [1,1,0,[0.15, 0.15, 0.15, ((0.466*_fatigue)+0.2)],
					[1.0, 1.0, 1.0, 1-((1.3*_fatigue)-0.8)],
					[0.587, 0.587, 0.587, 0.0],
					[0.85, 0.85, 0, 0, 0, 0.2, 1]];
	}
	else
	{
		// In NVG(1) or FLIR(2) use gray (consider using a little darker with NVGs)
		BIS_fnc_feedback_fatigueCC ppEffectAdjust [1,1,0,[0.15, 0.15, 0.15, ((0.466*_fatigue)+0.2)],
					[1, 1, 1, 1],
					[0.3, 0.3, 0.3, 0],
					[0.85, 0.85, 0, 0, 0, 0.2, 1]];
	};
	
	BIS_fnc_feedback_fatigueCC ppEffectEnable TRUE;
	BIS_fnc_feedback_fatigueCC ppEffectForceInNVG TRUE;
	BIS_fnc_feedback_fatigueCC ppEffectCommit _delay1;
	
	sleep (_delay1 + 0.1);  
	
	// FADE PPs OUT 
	_delay2 = (1.5 + random 0.5) * acctime;
		
	// slight radial blur
	BIS_fnc_feedback_fatigueRadialBlur ppEffectAdjust [0,0,0.5,0.5];
	BIS_fnc_feedback_fatigueRadialBlur ppEffectCommit _delay2;
	
	// add gaussian blur to make radial blur look better
	BIS_fnc_feedback_fatigueCC ppEffectAdjust [1,1,0,[0.15, 0.15, 0.15, 0],[1, 1, 1, 1],[0.3, 0.3, 0.3, 0],[1, 1, 0, 0, 0, 0.2, 1]];
	BIS_fnc_feedback_fatigueCC ppEffectCommit _delay2;
	
	sleep (_delay2 + 0.1); 
	
	GVAR(Impact_FX) set [0, (GVAR(Impact_FX) select 0) - 0.5];	
};
