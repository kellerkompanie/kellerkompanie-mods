#include "script_component.hpp"

// Medical: Revive Timer
// Medical: Reopen Wounds
// Medical: Splints

private _splintsRequired = !ace_medical_healHitPointAfterAdvBandage && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;
private _airwaysRequired = kat_aceAirway_enable;

player createDiarySubject ["missionSettings", "Mission Settings"];
player createDiaryRecord ["missionSettings", ["Medical", format["
<br/>
Medical:
<br/>
    Revive Timer: %1 seconds<br/>
    Surgical Kit needed: %2<br/>
    Splints needed: %3<br/>
	Airway-Management needed: %4",
	ace_medical_maxReviveTime, _surgicalKitRequired, _splintsRequired, _airwaysRequired]]];
