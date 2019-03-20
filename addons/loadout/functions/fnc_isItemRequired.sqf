#include "script_component.hpp"

params ["_item"];

_item = toLower _item;
private _splintsRequired = (!ace_medical_healHitPointAfterAdvBandage) && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;
private _airwaysRequired = kat_aceAirway_enable || kat_aceBreathing_enable;

INFO_1("_splintsRequired=%1", _splintsRequired);
INFO_1("_surgicalKitRequired=%1", _surgicalKitRequired);
INFO_1("_airwaysRequired=%1", _airwaysRequired);

if ( (!_surgicalKitRequired) && (_item == "ace_surgicalkit") ) exitWith {false};
if ( (!_splintsRequired) && (_item == "adv_acesplint_splint") ) exitWith {false};
if ( (!_airwaysRequired) && (_item in ["kat_accuvac","kat_guedel","kat_larynx","kat_pulseoximeter"]) ) exitWith {false};

true
