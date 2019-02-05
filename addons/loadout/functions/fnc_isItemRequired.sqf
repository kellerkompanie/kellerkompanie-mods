#include "script_component.hpp"

params ["_item"];

_item = toLower _item;
private _splintsRequired = !ace_medical_healHitPointAfterAdvBandage && adv_aceSplint_enable;
private _surgicalKitRequired = ace_medical_enableAdvancedWounds;
private _airwaysRequired = kat_aceAirway_enable;

if (!_surgicalKitRequired && _item == "ace_surgicalkit") exitWith {false};
if (!_splintsRequired && _item == "adv_acesplint_splint") exitWith {false};
if (!_airwaysRequired && (["kat_accuvac","kat_guedel","kat_larynx"] findIf {_item == _x}) != -1) exitWith {false};

true
