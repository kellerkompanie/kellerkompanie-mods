#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Config Save Namespace
GVAR(variableHandler) = call CBA_fnc_createNamespace;
GVAR(exShakeArray) = [];
GVAR(playerFiredEHID) = -1;

["unit", {
    params ["_newPlayer", "_oldPlayer"];
    if (GVAR(playerFiredEHID) != -1) then {
        _oldPlayer removeEventHandler ["Fired", GVAR(playerFiredEHID)];
    };
    GVAR(playerFiredEHID) = _newPlayer addEventHandler ["Fired", {_this call FUNC(firedPlayer)}];
    resetCamShake; // reset CamShake Effect
}] call CBA_fnc_addPlayerEventHandler;

// ExShake Effect Functions
L_fnc_ExShake_BigBomb = compile preprocessFileLineNumbers QPATHTOF(effects\BigBomb.sqf);
L_fnc_ExShake_FuelExploSmall = compile preprocessFileLineNumbers QPATHTOF(effects\FuelExploSmall.sqf);
L_fnc_ExShake_FuelExploBig = compile preprocessFileLineNumbers QPATHTOF(effects\FuelExploBig.sqf);
L_fnc_ExShake_BigRocket = compile preprocessFileLineNumbers QPATHTOF(effects\BigRocket.sqf);
L_fnc_ExShake_SmallRocket = compile preprocessFileLineNumbers QPATHTOF(effects\SmallRocket.sqf);
L_fnc_ExShake_120mm = compile preprocessFileLineNumbers QPATHTOF(effects\120mm.sqf);
L_fnc_ExShake_Arty = compile preprocessFileLineNumbers QPATHTOF(effects\Arty.sqf);
L_fnc_ExShake_Mortar = compile preprocessFileLineNumbers QPATHTOF(effects\Mortar.sqf);
L_fnc_ExShake_Satchel = compile preprocessFileLineNumbers QPATHTOF(effects\IED.sqf);
L_fnc_ExShake_Grenade = compile preprocessFileLineNumbers QPATHTOF(effects\Grenade.sqf);

GVAR(twitchEnabled) = true;
GVAR(exShakeEnabled) = true;
GVAR(recoilEnabled) = true;
GVAR(forceEnabled) = true;

[
    "L_Immerse_twitch",
    "CHECKBOX",
    ["Enable Twitch", "Enable Slight ""twitching"" when someone fires nearby"],
    "Laxemann Immerse",
    true,
    nil,
    {
        params ["_value"];
        GVAR(twitchEnabled) = _value;
    }
] call CBA_Settings_fnc_init;

[
    "L_Immerse_exShake",
    "CHECKBOX",
    ["Enable exShake", "CamShake for explosions, even distant ones!"],
    "Laxemann Immerse",
    true,
    nil,
    {
        params ["_value"];
        GVAR(exShakeEnabled) = _value;
        if (GVAR(exShakeEnabled)) then {
            if (isNil QGVAR(exShakePFH)) then {
                GVAR(exShakePFH) = [{
                    call FUNC(exShakeHandler);
                }, 0.05] call CBA_fnc_addPerframeHandler;
            };
        } else {
            GVAR(exShakePFH) call CBA_fnc_removePerFrameHandler;
            GVAR(exShakePFH) = nil;
        };
    }
] call CBA_Settings_fnc_init;

[
    "L_Immerse_recoil",
    "CHECKBOX",
    ["Enable recoil", "Adds a slight CamShake when shooting, should make shooting the guns feel more satisfying (Disabled if L_align is Activ)"],
    "Laxemann Immerse",
    true,
    nil,
    {
        params ["_value"];
        GVAR(recoilEnabled) = _value;
    }
] call CBA_Settings_fnc_init;

[
    "L_Immerse_force",
    "CHECKBOX",
    ["Enable force", "Adds a slight radial blur and darkens the screen a bit for a split second when firing"],
    "Laxemann Immerse",
    true,
    nil,
    {
        params ["_value"];
        GVAR(forceEnabled) = _value;
    }
] call CBA_Settings_fnc_init;


ADDON = true;
