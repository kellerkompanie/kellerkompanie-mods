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

INFO_5("keko_common_fnc_addBriefingEntries: ace_medical_healHitPointAfterAdvBandage: %1, ace_medical_enableAdvancedWounds: %2, adv_aceSplint_enable: %3, kat_aceAirway_enable: %4, kat_aceBreathing_enable: %5", ace_medical_healHitPointAfterAdvBandage, ace_medical_enableAdvancedWounds, adv_aceSplint_enable, kat_aceAirway_enable, kat_aceBreathing_enable);
INFO_3("keko_common_fnc_addBriefingEntries: _splintsRequired=%1, _surgicalKitRequired=%2, _airwaysRequired=%3", _splintsRequired, _surgicalKitRequired, _airwaysRequired);

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
player createDiaryRecord ["missionSettings", ["Medical", format ["
<br/>
Medical:
<br/>
    ace_medical_maxReviveTime: %1 seconds<br/>
    ace_medical_healHitPointAfterAdvBandage: %2<br/>
    ace_medical_enableAdvancedWounds: %3<br/>
    kat_aceAirway_enable: %4<br/>
    kat_aceBreathing_enable: %5",
    ace_medical_maxReviveTime, ace_medical_healHitPointAfterAdvBandage, ace_medical_enableAdvancedWounds, kat_aceAirway_enable, kat_aceBreathing_enable]]];
