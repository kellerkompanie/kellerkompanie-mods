#include "script_component.hpp"

/*
 * Author: DerZade
 * Triggered by the swap-action. Handles all the stuff.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_actionSwap;
 *
 * Public: No
 */
params ["_player"];

private _backpack = backpack _player;
private _backpackitems = (itemCargo (backpackContainer _player) + weaponCargo (backpackContainer _player) + backpackCargo (backpackContainer _player));
private _backpackmags = [_player] call FUNC(backpackMagazines);
private _chestpack = [_player] call FUNC(chestpack);
private _chestpackitems =  [_player,false] call FUNC(chestpackItems);
private _chestpackmags = [_player] call FUNC(chestpackMagazines);
private _radioSettings = +(_player getVariable [QGVAR(radioSettings), []]);

//make sure the player has chest- and backpack
if ((_backpack isEqualTo "") or ([_player] call FUNC(chestpack)) isEqualTo "") exitWith {};

//handle attachments in the backpack
{
     //remove weapon and add base wepaon
     _backpackitems deleteAt (_backpackitems find (_x select 0));
     _backpackitems pushBack ((_x select 0) call BIS_fnc_baseWeapon);

     //add attachments separately
     _backpackitems pushBack (_x select 1);
     _backpackitems pushBack (_x select 2);
     _backpackitems pushBack (_x select 3);
     _backpackitems pushBack (_x select 5);

     //add magazine
     private _mag = +(_x select 4);
     _mag pushBack 1;
     _backpackmags pushBack _mag;

} forEach weaponsItems (backpackContainer _player);

//remove packs and copy radio settings before removing backpack
[_player] call FUNC(removeChestpack);
[_player] call FUNC(copyRadioSettings);
removeBackpackGlobal _player;

//add backpack
_player addBackpackGlobal _chestpack;
clearAllItemsFromBackpack _player;
if !(_radioSettings isEqualTo []) then {
     [_player, _radioSettings] call FUNC(pasteRadioSettings);
};

//add backpack items
{
     //check wether item is a backpack
     if (isClass (configFile>> "CfgVehicles" >> _x)) then {
          (backpackContainer _player) addBackpackCargoGlobal [_x, 1];
     } else {
          _player addItemToBackpack _x;
     };
} forEach _chestpackitems;

//add backpack magazines
{
     (backpackContainer _player) addMagazineAmmoCargo [(_x select 0), (_x select 2), (_x select 1)];
} forEach _chestpackmags;

//add chestpack
[_player,_backpack] call FUNC(addChestpack);

//add chestpack items
{
     [_player,_x] call FUNC(addItemToChestpack);
} forEach _backpackitems;

//add chestpack magazines
{
     for "_i" from 1 to (_x select 2) do {
          [_player,(_x select 0),(_x select 1)] call FUNC(addMagToChestpack);
     };
} forEach _backpackmags;
