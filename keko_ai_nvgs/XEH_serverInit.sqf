// Original version by ARK https://github.com/Cyruz143/ark_inhouse

addMissionEventHandler ["EntityKilled", {call keko_ai_nvgs_fnc_nvgRemove}];

keko_ai_nvgs_fnc_nvgRemove = {
    params ["_unit"];
    private _hmd = hmd _unit;
    if (_hmd == "NVGoggles_AI") then {
        _unit unlinkItem _hmd;
    };
};
