#include "script_component.hpp"

if !(GVAR(ActivateAI)) exitWith {};

[] spawn {		
	//ACE CHECK
	if (!(isNil "ace_medical_ai_enabledFor") && {ace_medical_ai_enabledFor isEqualTo 2}) then {
		GVAR(MEDICALACTIVE) = false;
	} 
	else {
		GVAR(MEDICALACTIVE) = true;
	};
	
	//ENHANCED MOVEMENT CHECK
	if !(isNil "EM_debug") then {
		GVAR(EM_ENABLED) = true;
	} 
	else {
		GVAR(EM_ENABLED) = false;
	};
	
	//OnEachFrame monitor for mines. Should make them more responsive, without a significant impact on FPS.
	[QGVAR(MINEMONITOR), "onEachFrame", {[] call FUNC(MineMonitor)}] call BIS_fnc_addStackedEventHandler;
	
	//Below is loop to check for new AI spawning in to be added to the list	
	[] spawn {
		sleep 2;
		if (hasInterface) then {
			//Event handlers for players	
			player addEventHandler ["Fired",{_this call FUNC(HearingAids);}];
			player spawn FUNC(irCheck);
			player addEventHandler ["Respawn",{_this spawn FUNC(irCheck);}];
			if (GVAR(PlayerAISkills)) then {
				[] spawn FUNC(PLAYERSQUAD);
			};
		};
		
		[] spawn FUNC(AIDRIVEBEHAVIOR);
		[] spawn FUNC(Scheduler);
	};
};