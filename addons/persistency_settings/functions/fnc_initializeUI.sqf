#include "script_component.hpp"

// only continue with admins and curators
private _isAdmin = (call BIS_fnc_admin) == 2;
private _isCurator = (!isNull (getAssignedCuratorLogic player)) || (player isKindOf QEGVAR(faction_generic,blufor_command) || (player isKindOf QEGVAR(faction_generic,indfor_command)) || (player isKindOf QEGVAR(faction_generic,opfor_command)));
if !(_isCurator || _isAdmin) exitWith {};

EGVAR(persistency,crates) = allMissionObjects "ReammoBox_F";

addMissionEventHandler ["Draw3D", {
    private _showUI = EGVAR(persistency,showUI);
    if (!_showUI || isnull(findDisplay 312)) exitWith {};

    {
        private _distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;

        if (_distance < 1000) then {
            if (_x getVariable [QEGVAR(persistency,persistencyEnabled), false]) then {
                drawIcon3D
                [
                    "", // path to image displayed near text
                    [1,1,1,0.5], // color of the text using RGBA
                    ASLToAGL getPosASL _x, // position of the text _x referring to the player in 'allPlayers'
                    1, // width
                    1, // height from position, below
                    0, // angle
                    "PERSISTENCY ON", // text to be displayed
                    0, // shadow on text, 0=none,1=shadow,2=outline
                    0.03, // text size
                    "PuristaMedium", // text font
                    "center" // align text left, right, or center
                ];
            };
        };
    } forEach keko_persistency_crates;
}];

[
    {EGVAR(persistency,crates) = allMissionObjects "ReammoBox_F";},
    EGVAR(persistency,uiUpdateInterval)
] call CBA_fnc_addPerFrameHandler;
