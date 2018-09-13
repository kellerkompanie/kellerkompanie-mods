#include "script_component.hpp"

/*
* Heals player using vanilla and ACE healing
*
* Example: [player] call keko_common_fnc_fullHeal;
*/
params [
	["_target", player, [objNull]]
];

_target setDamage 0;

if (isClass(configFile >> "CfgPatches" >> "ace_medical")) exitWith 
{
	if (isNull player) then 
	{
		[objNull, _target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
	} 
	else 
	{
		[player, _target] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
	};	
};

true