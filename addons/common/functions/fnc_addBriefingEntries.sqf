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

{
    private _limping = ["Disabled", "Limp on open wounds", "Limp on open or bandaged wounds"] select ("ace_medical_limping" call CBA_settings_fnc_get);
    private _splints = ["Disabled", "Splints fully heal fractures", "Splints heal, but cannot sprint"] select ("ace_medical_fractures" call CBA_settings_fnc_get);
    private _fatalInjuriesPlayer = ["Always", "In Cardiac Arrest", "Never"] select ("ace_medical_statemachine_fatalInjuriesPlayer" call CBA_settings_fnc_get);
    private _aiUnconsciousness = ["Disabled", "Enabled"] select ("ace_medical_statemachine_AIUnconsciousness" call CBA_settings_fnc_get);
    private _surgicalKitRequired = ["Not required", "Required"] select ("ace_medical_treatment_woundReopening" call CBA_settings_fnc_get);
    private _cardiacArrestTimer = "ace_medical_statemachine_cardiacArrestTime" call CBA_settings_fnc_get;

    player createDiarySubject ["missionSettings", "Mission Settings"];
    player createDiaryRecord ["missionSettings", ["Medical", format ["
        <font size=20>Medical</font><br/>
        Limping: <font color='#c48214'>%1</font><br/>
        Splints: <font color='#c48214'>%2</font><br/>
        Player can take fatal injuries: <font color='#c48214'>%3</font><br/>
        AI Unconsciousness: <font color='#c48214'>%4</font><br/>
        Surgical Kit: <font color='#c48214'>%5</font><br/>
        Cardiac Arrest Timer: <font color='#c48214'>%6 seconds</font>",
        _limping, _splints, _fatalInjuriesPlayer, _aiUnconsciousness, _surgicalKitRequired, _cardiacArrestTimer]], taskNull, "", false];
} call CBA_fnc_execNextFrame;
