#include "script_component.hpp"
/*
 * Author: Axebeard, Schwaggot
 * Breaks the window of a building that is nearest to the player.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call keko_common_fnc_breakWindow
 *
 */

[] spawn {
    private _window_pos_arr = [];
    private _house = nearestObject [player , "House"];
    private _hitPoints = "isClass _x" configClasses (configFile >> "CfgVehicles" >> (typeOf _house) >> "HitPoints");
    private _brokenwindows = 0;
    private _playerweaponpos = [getPosATL player select 0, getPosATL player select 1, (getPosATL player select 2) + 1.2];
    private _rifle    = primaryWeapon player;
    private _pistol    = handgunWeapon player;
    private _weapon    = currentWeapon player;

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

                if (stance player == "STAND" && _playerdist < 1.75 && alive player) then {
                    private _hitpointname = (configName _cfg_entry);
                    private _anim = "Acts_Executioner_Forehand";
                    private _animspeed = 1.7;
                    private _recoverspeed = 0.7;
                    if (_house getHitPointDamage _hitpointname < 1) then {
                        if (_weapon == _rifle) then {
                            _anim = "Acts_Miller_Knockout";
                            _animspeed = 1;
                            _recoverspeed = 1.3;
                        };
                        player setAnimSpeedCoef 2;
                        [player, _anim] remoteExec ["playMove", 0];
                        sleep _animspeed;
                        [_house,[_hitPointName, 1]] remoteExec["setHitPointDamage",0,true];
                        playSound3D ["A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01.wss",player];
                        sleep _recoverspeed;
                        player setAnimSpeedCoef 1;
                        [player, ""] remoteExec ["switchMove", 0];
                        _brokenwindows = 1;
                    };
                };

            };
            if (_brokenwindows > 0) exitWith{};
        };
        if (_brokenwindows > 0) exitWith{};
    } forEach _hitPoints;
};
