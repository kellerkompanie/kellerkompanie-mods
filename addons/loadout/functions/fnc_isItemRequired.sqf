#include "script_component.hpp"

params ["_item"];

_item = toLower _item;
private _splintsRequired = !ace_medical_healHitPointAfterAdvBandage;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;

if ( (!_surgicalKitRequired) && (_item == "ace_surgicalkit") ) exitWith {false};
if ( (!_splintsRequired) && (_item == "ace_splint") ) exitWith {false};

true
