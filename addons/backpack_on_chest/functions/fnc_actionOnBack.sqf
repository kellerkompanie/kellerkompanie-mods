#include "script_component.hpp"

/*
 * Author: DerZade
 * Triggered by the onBack-action. Handles all the stuff.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_actionOnBack;
 *
 * Public: No
 */
params ["_player"];

private _chestpack = [_player] call FUNC(chestpack);
private _chestpackitems =  [_player,false] call FUNC(chestpackItems);
private _chestpackmags = [_player] call FUNC(chestpackMagazines);
private _radioSettings = +(_player getVariable [QGVAR(radioSettings),[]]);

//make sure the player has a chestpack and no backpack
if ((_chestpack isEqualTo "") or !(backpack _player isEqualTo "")) exitWith {};

//add pack
_player addBackpackGlobal _chestpack;
clearAllItemsFromBackpack _player;
//add items
{
     //check wether item is a backpack
     if (isClass (configFile>> "CfgVehicles" >> _x)) then {
          (backpackContainer _player) addBackpackCargoGlobal [_x, 1];
     } else {
          _player addItemToBackpack _x;
     };
} forEach _chestpackitems;

//add magazines
{
     (backpackContainer _player) addMagazineAmmoCargo [(_x select 0), (_x select 2), (_x select 1)];
} forEach _chestpackmags;


if !(_radioSettings isEqualTo []) then {
     [_player,_radioSettings] call FUNC(pasteRadioSettings);
};

[_player] call FUNC(removeChestpack);
