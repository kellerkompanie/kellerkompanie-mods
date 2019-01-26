#include "script_component.hpp"

// Medical: Revive Timer
// Medical: Reopen Wounds
// Medical: Splints

player createDiarySubject ["missionSettings", "Mission Settings"];
player createDiaryRecord ["missionSettings", ["Medical", format["
<br/>
Medical:
<br/>
    Revive Timer: %1 seconds<br/>
    Surgical Kit needed: %2<br/>
    Splints needed: %3",
	ace_medical_maxReviveTime, ace_medical_enableAdvancedWounds, ace_medical_healHitpointAfterAdvBandage]]];
