#include "script_component.hpp"

params ["_vehicle"];

_vehicle setHitPointDamage ["hitEngine",1];
_vehicle disableTIEquipment true;
_vehicle disableNVGEquipment true;
