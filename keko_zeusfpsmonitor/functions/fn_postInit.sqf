// Original version by DriftingNitro with help from Commy2, Dedmen, and Dscha

if (keko_settings_zeusfpsmonitor_enabled == 0) exitWith{diag_log text "[KEKO] (zeusfpsmonitor) disabled";};
if (!hasInterface) exitWith{diag_log text "[KEKO] (zeusfpsmonitor) no need to execute on server, exiting";};

diag_log text "[KEKO] (zeusfpsmonitor) running postInit";

//	Let each client update their FPS into a public variable based on a fixed update interval

_fpsUpdateHandle = [] spawn {
	if(isNil "keko_FPSDiagActive") then
	{
		keko_FPSDiagActive = true;
		while {true} do
		{
			player setVariable ["keko_PlayerFPS", floor diag_fps, true];
			sleep keko_settings_zeusfpsmonitor_updateInterval;
		};
	};
};

// Only continue with admins and curators
_isAdmin = (call BIS_fnc_admin) == 2;
_isCurator = !isNull (getAssignedCuratorLogic player);
if !(_isCurator || _isAdmin) exitWith {diag_log text "[KEKO] (zeusfpsmonitor) player is neither admin nor curator, exiting";};

// For curators and admins show FPS counter underneath players
keko_showFrames = true;
addMissionEventHandler ["Draw3D", {
	{
		_distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;
		//if camera is farther than 1200 meters away from the targets the text will not display
		if (_distance < 1200) then {
			_playerFPS = _x getVariable ["keko_PlayerFPS",50];
			//if the FPS is below 20 it turns red and becomes more visible for zeus/admin to see so they are aware
			if(keko_showFrames) then {
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

diag_log text "[KEKO] (zeusfpsmonitor) finished postInit";
