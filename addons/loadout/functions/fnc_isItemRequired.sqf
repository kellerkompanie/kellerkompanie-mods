#include "script_component.hpp"

params ["_item"];

_item = toLower _item;
private _splintsRequired = (!ace_medical_healHitPointAfterAdvBandage) && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;

if ( (!_surgicalKitRequired) && (_item == "ace_surgicalkit") ) exitWith {false};
if ( (!_splintsRequired) && (_item == "adv_acesplint_splint") ) exitWith {false};

true
