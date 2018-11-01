#include "script_component.hpp"

// Original version by DriftingNitro with help from Commy2, Dedmen, and Dscha

if (!GVAR(enabled)) exitWith { };
if (!hasInterface)  exitWith { };


//	Let each client update their FPS into a public variable based on a fixed update interval

[] spawn {
	if(isNil QGVAR(FPSDiagActive)) then
	{
		GVAR(FPSDiagActive) = true;
		while {true} do	{
			player setVariable [QGVAR(PlayerFPS), floor diag_fps, true];
			sleep GVAR(updateInterval);
		};
	};
};

// Only continue with admins and curators
private _isAdmin = (call BIS_fnc_admin) == 2;
private _isCurator = (!isNull (getAssignedCuratorLogic player)) || (player isKindOf QEGVAR(faction_generic,blufor_command) || (player isKindOf QEGVAR(faction_generic,indfor_command)) || (player isKindOf QEGVAR(faction_generic,opfor_command)));
if !(_isCurator || _isAdmin) exitWith {ERROR("player is neither admin nor curator, exiting");};

// For curators and admins show FPS counter underneath players
GVAR(showFrames) = true;
addMissionEventHandler ["Draw3D", {
	{
		private _distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;
		//if camera is farther than 1200 meters away from the targets the text will not display
		if (_distance < 1200) then {
			private _playerFPS = _x getVariable [QGVAR(PlayerFPS),50];
			//if the FPS is below 20 it turns red and becomes more visible for zeus/admin to see so they are aware
			if(GVAR(showFrames)) then {
				drawIcon3D
				[
					"",//Path to image displayed near text
					[[1,1,1,0.5], [1,0,0,0.7]] select (_playerFPS < 20),//color of the text using RGBA
					ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
					1,//Width
					2,//height from position, below
					0,//angle
					format["%1 FPS: %2", name _x, str _playerFPS],//text to be displayed
					0,//shadow on text, 0=none,1=shadow,2=outline
					[0.03, 0.05] select (_playerFPS < 20),//text size
					"PuristaMedium",//text font
					"center"//align text left, right, or center
				];
			};
		};
	} forEach allPlayers;
	//Here is the array of units you wish to display the FPS text for, it can be
	//changed to be an array of specific units or players if you wish
}];

INFO("finished postInit");
