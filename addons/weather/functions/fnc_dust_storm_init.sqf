#include "script_component.hpp"

private _BoolArray = [false,true];

private _desertVegetation_I = lbCurSel 2100;
private _Wall_I = lbCurSel 2101;
private _EffectOnObjects_I = lbCurSel 2102;
private _lethalWall_I = lbCurSel 2103;


private _IntDustWindDir = sliderposition 1900;
private _IntDustDuration = sliderposition 1901;
private _IntAmbientSoundDelay = sliderposition 1902;
private _leaves_p_drop_I = sliderposition 1903;
private _alias_drop_fog_factor_I = sliderposition 1904;

_leaves_p_drop_I = [_leaves_p_drop_I,0] call BIS_fnc_cutDecimals;
leaves_p_drop = 1/_leaves_p_drop_I;
publicVariable "leaves_p_drop";

_alias_drop_fog_factor_I = [_alias_drop_fog_factor_I,0] call BIS_fnc_cutDecimals;
alias_drop_fog_factor = 1/_alias_drop_fog_factor_I;
publicVariable "alias_drop_fog_factor";

desertVegetation = _BoolArray select _desertVegetation_I;
publicVariable "desertVegetation";


if(_EffectOnObjects_I == 0) then{
    BoolEffectOnObjects = false;
    BoolHoverUnit = false;
}else{
    if(_EffectOnObjects_I == 1) then {
        BoolEffectOnObjects = true;
        BoolHoverUnit = false;
    }else{
        BoolEffectOnObjects = true;
        BoolHoverUnit = true;
    };
};

BoolWall = _BoolArray select _Wall_I;
BoolLethalWall = _BoolArray select _lethalWall_I;
_IntDustWindDir = [_IntDustWindDir,0] call BIS_fnc_cutDecimals;
_IntDustDuration = [_IntDustDuration,0] call BIS_fnc_cutDecimals;
_IntAmbientSoundDelay = [_IntAmbientSoundDelay,0] call BIS_fnc_cutDecimals;


[[[_IntDustWindDir, _IntDustDuration, BoolEffectOnObjects, BoolWall, BoolLethalWall, _IntAmbientSoundDelay, BoolHoverUnit],FUNC(dust_al_duststorm)],"BIS_fnc_spawn",true,true,false] call BIS_fnc_MP;
