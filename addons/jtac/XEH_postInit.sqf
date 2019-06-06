#include "script_component.hpp"

if (!GVAR(enabled)) exitWith {};

call FUNC(settings);
call FUNC(parseAvailableJTACattacks);

GVAR(JtacMainMenu) = [
    ["EPD JTAC", true],
    ["Bullets", [2], "#USER:keko_jtac_JtacBulletMenu", -5, [["expression", ""]], "1", "1"],
    ["Shells", [3], "#USER:keko_jtac_JtacShellMenu", -5, [["expression", ""]], "1", "1"],
    ["Grenades", [4], "#USER:keko_jtac_JtacGrenadeMenu", -5, [["expression", ""]], "1", "1"],
    ["Bombs", [5], "#USER:keko_jtac_JtacBombsMenu", -5, [["expression", ""]], "1", "1"],
    ["Missile Barrage", [6], "#USER:keko_jtac_JtacMissilesMenu", -5, [["expression", ""]], "1", "1"],
    ["Mine Field", [7], "#USER:keko_jtac_JtacMinesMenu", -5, [["expression", ""]], "1", "1"],
    ["Non Lethal", [8], "#USER:keko_jtac_JtacNonLethalMenu", -5, [["expression", ""]], "1", "1"]
];

if (!isDedicated) then {
    //Client Variable to show and hide the addAction
    GVAR(JtacAvailable) = true;

    if(player isKindOf QEGVAR(faction_generic,blufor_jtac) || player isKindOf QEGVAR(faction_generic,indfor_jtac) || player isKindOf QEGVAR(faction_generic,opfor_jtac)) then {
        player setVariable ["JTAC", true, true];
    };

    if (player getVariable ["JTAC", false]) then {
        player addaction [("<t color=""#27EE1F"">") + ("JTAC Salvos") + "</t>", { showCommandingMenu "#USER:keko_jtac_JtacMainMenu";}, "", -10, false, true,"",QGVAR(JtacAvailable)];
        player addEventHandler ["Respawn", {GVAR(JtacAvailable) = true; player setVariable ["JTAC",true]; player addaction [("<t color=""#27EE1F"">") + ("JTAC Salvos") + "</t>", { showCommandingMenu "#USER:keko_jtac_JtacMainMenu";}, "", -10, false, true,"",QGVAR(JtacAvailable)];}];
        call FUNC(createDiaryRecords);
    };

    /*0 = [] spawn {
        private ["_actionNumber","_booleanActionAdd","_addActionedUav"];
        _actionNumber = -1;
        _booleanActionAdd = false;
        _addActionedUav = objNull;
        while {true} do {
            private ["_currentUav"];
            _currentUav = getConnectedUAV player;

            if (!isNull _addActionedUav && _addActionedUav != _currentUav ) then {
                _addActionedUav removeAction _actionNumber;
                _addActionedUav = objNull;
                _booleanActionAdd = false;
            };

            if (!_booleanActionAdd && !isNull _currentUav && (player getVariable ["JTAC", false])) then {
                _booleanActionAdd = true;
                _addActionedUav = getConnectedUAV player;
                _actionNumber = (getConnectedUAV player) addaction [("<t color=""#27EE1F"">") + ("JTAC Salvos") + "</t>", { showCommandingMenu "#USER:keko_jtac_JtacMainMenu";}, "", -10, false, true,"",'keko_jtac_JtacAvailable && ((UAVControl getConnectedUAV player) select 1) == "GUNNER"'];
            };

            sleep 1;
        };
    };*/
};

if (!isServer) exitwith {};

//Server Variables to handle state
GVAR(JtacCanFireSalvo) = true;
GVAR(JtacReloadTimer) = 0;
