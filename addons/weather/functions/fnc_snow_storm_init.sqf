#include "script_component.hpp"

private _BoolArray = [false,true];

private _EffectOnObjects_I = lbCurSel 2100;
private _Breath_I = lbCurSel 2101;
private _SnowBurstServer_I = lbCurSel 2102;
private _ChangeFog_I = lbCurSel 2103;

private _IntSnowWindDir = sliderposition 1900;
private _IntSnowDuration = sliderposition 1901;
private _IntAmbientSoundDelay = sliderposition 1902;
private _fulg_p_drop_I = sliderposition 1903;

_fulg_p_drop_I = [_fulg_p_drop_I,0] call BIS_fnc_cutDecimals;
fulg_p_drop = 1/_fulg_p_drop_I;
publicVariable "fulg_p_drop";

BoolBreath = _BoolArray select _Breath_I;
BoolChangeFog = _BoolArray select _ChangeFog_I;

if(_SnowBurstServer_I == 2) then{
    BoolSnowBurstServer = false;
    BoolSnowBurstClient = false;
}else{
    if(_SnowBurstServer_I == 1) then {
        BoolSnowBurstServer = true;
        BoolSnowBurstClient = false;
    }else{
        BoolSnowBurstClient = true;
        BoolSnowBurstServer = false;
    };
};

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

_IntSnowWindDir = [_IntSnowWindDir,0] call BIS_fnc_cutDecimals;
_IntSnowDuration = [_IntSnowDuration,0] call BIS_fnc_cutDecimals;
_IntAmbientSoundDelay = [_IntAmbientSoundDelay,0] call BIS_fnc_cutDecimals;


[[[_IntSnowWindDir, _IntSnowDuration, BoolEffectOnObjects, _IntAmbientSoundDelay, BoolBreath, BoolSnowBurstServer, BoolSnowBurstClient, BoolChangeFog, BoolHoverUnit],FUNC(snow_al_snow)],'BIS_fnc_spawn',true,true,false] call BIS_fnc_MP;
