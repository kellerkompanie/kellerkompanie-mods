#include "script_component.hpp"

/*
 * Author: DerZade
 * Copies the radio-settings of unit's backpack radio.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_copyRadioSettings;
 *
 * Public: No
 */
params ["_player"];

//only if TFAR is loaded
if (isClass(configFile >> "cfgPatches" >> "task_force_radio")) exitWith {
     private _radio = _player call TFAR_fnc_backpackLr;

     //check wether _player has a backpack radio
     if !(_radio isEqualTo []) then {
          _player setVariable [QGVAR(radioSettings),(_radio call TFAR_fnc_getLrSettings),true];
     };
};
