#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Add items to players map briefing section, informing them about common mission settings.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call keko_common_fnc_addBriefingEntries
 *
 */

private _splintsRequired = ace_medical_fractures > 0;
private _surgicalKitRequired = ace_medical_treatment_woundReopening;

player createDiarySubject ["missionSettings", "Mission Settings"];
player createDiaryRecord ["missionSettings", ["Medical", format ["
<br/>
Medical:
<br/>
    Revive Timer: %1 seconds<br/>
    Surgical Kit needed: %2<br/>
    Splints needed: %3",
    ace_medical_maxReviveTime, _surgicalKitRequired, _splintsRequired]]];
player createDiaryRecord ["missionSettings", ["Medical", format ["
<br/>
Medical:
<br/>
    ace_medical_maxReviveTime: %1 seconds<br/>
    ace_medical_fractures: %2<br/>
    ace_medical_treatment_woundReopening: %3",
    ace_medical_maxReviveTime, ace_medical_fractures, ace_medical_treatment_woundReopening]]];
