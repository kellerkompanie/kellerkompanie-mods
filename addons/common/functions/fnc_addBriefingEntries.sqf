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

private _splintsRequired = (!ace_medical_healHitPointAfterAdvBandage) && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;
private _airwaysRequired = kat_aceAirway_enable || kat_aceBreathing_enable;

INFO_3("addBriefingEntries _splintsRequired=%1, _surgicalKitRequired=%2, _airwaysRequired=%3", _splintsRequired, _surgicalKitRequired, _airwaysRequired);

player createDiarySubject ["missionSettings", "Mission Settings"];
player createDiaryRecord ["missionSettings", ["Medical", format ["
<br/>
Medical:
<br/>
    Revive Timer: %1 seconds<br/>
    Surgical Kit needed: %2<br/>
    Splints needed: %3<br/>
    Airway-Management needed: %4",
    ace_medical_maxReviveTime, _surgicalKitRequired, _splintsRequired, _airwaysRequired]]];
