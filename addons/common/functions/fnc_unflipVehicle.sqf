#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Unflips a vehicle, e.g., if got stuck or flipped.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _vechile call keko_common_fnc_unflipVehicle
 *
 */

params ["_vehicle"];

if ( !isNull _vehicle ) then {
    _vehicle allowDamage false;
    _vehicle setpos [(getpos _vehicle) select 0,(getpos _vehicle) select 1, 0.5];
    _vehicle setVectorUp surfaceNormal position _vehicle;
    sleep 3;
    _vehicle allowDamage true;
};
