#include "script_component.hpp"

params ["_player"];

// give map and compass
if (GVAR(giveMap)) then {
    player linkItem "ItemMap";

};
if (GVAR(giveCompass)) then {
    player linkItem "ItemCompass";
};

// add night gear
switch(GVAR(giveNvg)) do {
    case 1: {
        // Headlamp white
        player linkItem "SAN_Headlamp_v1";
    };
    case 2: {
        // Headlamp color
        player linkItem "SAN_Headlamp_v2";
    };
    case 3: {
        // NVG 1.Gen
        player linkItem "ACE_NVG_Gen1";
    };
    case 4: {
        // NVG 2.Gen
        player linkItem "ACE_NVG_Gen2";
    };
    case 5: {
        // NVG 3.Gen
        player linkItem "NVGoggles_OPFOR";
    };
    case 6: {
        // NVG 4.Gen
        player linkItem "ACE_NVG_Gen4";
    };
    case 7: {
        // NVG Wide
        player linkItem "ACE_NVG_Wide";
    };
    case 8: {
        // Wärmesicht
        player linkItem "NVGogglesB_blk_F";
    };
    case 9: {
        // (main) Ami Mono
        player linkItem "meu_ANPVS_14";
    };
    case 10: {
        // (main) Ami Dual
        player linkItem "meu_ANPVS_15";
    };
    case 11: {
        // (main) BAF Mono
        player linkItem "UK3CB_BAF_HMNVS";
    };
    case 12: {
        // (main) Sovjet Mono
        player linkItem "rhs_1PN138";
    };
    case 13: {
        // GPNVG-18 tan
        player linkItem "A3_GPNVG18_F";
    };
    case 14: {
        // GPNVG-18 black
        player linkItem "A3_GPNVG18_BLK_F";
    };
    case 15: {
        // GPNVG-18 recon tan
        player linkItem "A3_GPNVG18_REC_F";
    };
    case 16: {
        // GPNVG-18 recon black
        player linkItem "A3_GPNVG18_REC_BLK_F";
    };
    case 17: {
        // BW Lucie
        player linkItem "dsk_nsv";
    };
};

if (GVAR(giveGps) > 0) then {
    switch (GVAR(giveGps)) do {
        case 1: {
            //GPS
            player linkItem "ItemGPS";
        };
        case 2: {
            //GPS und MicroDAGR
            //MicroDAGR was already added to Vest, only add GPS
            player linkItem "ItemGPS";
        };
        case 3: {
            //MicroDAGR
            //MicroDAGR was already added to Vest, do nothing
        };
        case 4: {
            //cTab
            player linkItem "itemAndroid";
        };
        default {};
    };
};

if (GVAR(giveIRStrobe)) then {
    [player, "ACE_IR_Strobe_Item", true] call CBA_fnc_addItem;
};

if (GVAR(giveHuntIR)) then {
    // add for Lead, Sergeant, SQL and UAV operator only
    private _role = _player getVariable [QGVAR(role), ""];
    private _giveHuntIR = false;
    switch (_role) do {
        case "Lead": {
            _giveHuntIR = true;
        };
        case "Sergeant": {
            _giveHuntIR = true;
        };
        case "SQL": {
            _giveHuntIR = true;
        };
        case "UAVOperator": {
            _giveHuntIR = true;
        };
        default {};
    };

    private _primaryWeapon = primaryWeapon _player;
    if !(isNil "_primaryWeapon") then {
        if ("ACE_HuntIR_M203" in ([_primaryWeapon] call CBA_fnc_compatibleMagazines)) then {
            for "_i" from 1 to 5 do { [_player, "ACE_HuntIR_M203", -1, true] call CBA_fnc_addMagazine; };
            [_player, "ACE_HuntIR_monitor", true] call CBA_fnc_addItem;
        };
    };
};

// add watch
player linkItem "ItemWatch";
