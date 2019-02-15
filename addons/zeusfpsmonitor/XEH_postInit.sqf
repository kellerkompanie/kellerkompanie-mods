#include "script_component.hpp"

if (!GVAR(enabled)) exitWith { };
if (!hasInterface)  exitWith { };


// let each client update their FPS into a public variable based on a fixed update interval
[{
    player setVariable [QGVAR(PlayerFPS), floor diag_fps, true];
}, GVAR(updateInterval)] call CBA_fnc_addPerFrameHandler;


// only continue with admins and curators
private _isAdmin = (call BIS_fnc_admin) == 2;
private _isCurator = (!isNull (getAssignedCuratorLogic player)) || (player isKindOf QEGVAR(faction_generic,blufor_command) || (player isKindOf QEGVAR(faction_generic,indfor_command)) || (player isKindOf QEGVAR(faction_generic,opfor_command)));
//private _isCurator = player in (call BIS_fnc_listCuratorPlayers);
if !(_isCurator || _isAdmin) exitWith {};


// for curators and admins show FPS counter underneath players
addMissionEventHandler ["Draw3D", {
	{
		private _distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;
		// if camera is farther than 1200 meters away from the targets the text will not display
		if (_distance < 1200) then {
			private _playerFPS = _x getVariable [QGVAR(PlayerFPS), 50];
			// if the FPS is below 20 it turns red and becomes more visible for zeus/admin to see so they are aware
			if(GVAR(enabled)) then {
				drawIcon3D
				[
					"", // path to image displayed near text
					[[1,1,1,0.5], [1,0,0,0.7]] select (_playerFPS < 20), // color of the text using RGBA
					ASLToAGL getPosASL _x, // position of the text _x referring to the player in 'allPlayers'
					1, // width
					2, // height from position, below
					0, // angle
					format["%1 FPS: %2", name _x, str _playerFPS], // text to be displayed
					0, // shadow on text, 0=none,1=shadow,2=outline
					[0.03, 0.05] select (_playerFPS < 20), // text size
					"PuristaMedium", // text font
					"center" // align text left, right, or center
				];
			};
		};
	} forEach allPlayers;
}];
