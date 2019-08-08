#include "script_component.hpp"
/*
 * Author: Axebeard, Schwaggot
 * Checks if there is a window near the player that can be broken.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * True if there is a window to break, False otherwise <BOOL>
 *
 * Example:
 * call keko_common_fnc_canBreakWindow
 *
 */

private _window_pos_arr = [];
private _house = nearestObject [player , "House"];
private _hitPoints = "isClass _x" configClasses (configFile >> "CfgVehicles" >> (typeOf _house) >> "HitPoints");
private _brokenwindows = 0;
private _playerweaponpos = [getPosATL player select 0, getPosATL player select 1, (getPosATL player select 2) + 1.2];
private _rifle    = primaryWeapon player;
private _pistol    = handgunWeapon player;
private _weapon    = currentWeapon player;

private _canBreakWindow = false;

{
    private _cfg_entry = _x;
    private _armor = getNumber (_cfg_entry >> "armor");
    if (_weapon == "" || (animationState player == "Acts_Executioner_Forehand" || animationState player == "Acts_Miller_Knockout" || player getVariable ["ACE_isUnconscious", false] || player getVariable ["ace_captives_isHandcuffed", false])) exitWith{};
    if (_armor < 0.5) then {
        private _brokenGlass = (_cfg_entry >> "DestructionEffects") select 0;
        private _selection_name = getText (_brokenGlass >> "position");
        private _model_pos = _house selectionPosition _selection_name;
        private _world_pos = _house modelToWorld _model_pos;
        _window_pos_arr pushBack _world_pos;
        private _playerdist = _playerweaponpos distance _world_pos;

        if !(animationState player == "Acts_Executioner_Forehand" || animationState player == "Acts_Miller_Knockout" || player getVariable ["ACE_isUnconscious", false] || player getVariable ["ace_captives_isHandcuffed", false]) then {
            if !(_weapon == _rifle || _weapon == _pistol ) exitWith{};
            if (stance player == "STAND" && _playerdist < 1.75 && alive player) exitWith {_canBreakWindow = true};
        };
        if (_brokenwindows > 0) exitWith{};
    };
    if (_brokenwindows > 0) exitWith{};
} forEach _hitPoints;

_canBreakWindow
