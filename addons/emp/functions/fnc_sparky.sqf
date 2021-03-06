#include "script_component.hpp"
// Original by ALIAS http://www.armaholic.com/page.php?id=34293
// Creates a random amount of sparks at given object (objSrc)

if (!hasInterface) exitWith {};

params ["_objSrc"];

sleep (0.1 + (random 0.1));
private _sparksCount = 1 + floor (random 5);

for "_i" from 0 to _sparksCount do
{
    private "_pauseBetweenSparks";
    _pauseBetweenSparks = 0.1 + (random 2);
    [_objSrc, _pauseBetweenSparks] call FUNC(sparkEffect);
    sleep _pauseBetweenSparks;
};
