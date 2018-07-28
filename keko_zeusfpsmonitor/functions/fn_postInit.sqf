// Original version by DriftingNitro with help from Commy2, Dedmen, and Dscha

[] spawn {

	if (keko_settings_zeusfpsmonitor_enabled == 0) exitWith{diag_log text "[KEKO] (zeusfpsmonitor) disabled"; false};

	diag_log text "[KEKO] (zeusfpsmonitor) running initFPS";


	/* 	Add onPlayerConnected event handler remotely to server
		to spawn the FPS setter to the client that joined   */

	if (isMultiplayer) then {
		[[], {
			if (hasinterface) then {
				if(isNil "keko_FPSDiagActive") then
				{
					keko_FPSDiagActive = true;
					while {true} do
					{
						player setVariable ["keko_PlayerFPS", floor diag_fps, true];
						sleep 1;
					};
				};
			};
		}] remoteExec ["spawn", 0, true];
	};

	/* 	Waits until curators are initalized in order to check
		if player is zeus/admin to run the fps scripts       */

	waitUntil {_adminState = call BIS_fnc_admin; sleep 5; (!isNull (findDisplay 312)) || (_adminState == 2)};

	/*  If player is a curator it will run the script and each/
		player will have their FPS appear beneath them       */

	keko_showFrames = true;

	_handle = [] spawn {
		while {true} do {
			waitUntil {sleep 1; (!isNull (findDisplay 312))};
			(findDisplay 312) displayAddEventHandler ["keyDown", {
				if (inputAction "user12" > 0) then {
					if(keko_showFrames) then {keko_showFrames=false} else {keko_showFrames = true};
					// hint format ["Framerate Displaying | %1 ",keko_showFrames];
				};
			}];
			waitUntil {sleep 1; (isNull (findDisplay 312))};
		};
	};

	(findDisplay 46) displayAddEventHandler ["keyDown", {
		if (inputAction "user12" > 0) then {
			if(keko_showFrames) then {keko_showFrames=false} else {keko_showFrames = true};
			//hint format ["Framerate Displaying | %1 ",keko_showFrames];
		};
	}];

	addMissionEventHandler ["Draw3D", {
		{
			_distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;
			//if camera is farther than 1200 meters away from the targets the text will not display
			if (_distance < 1200) then {
				_playerFPS = _x getVariable ["keko_PlayerFPS",50];
				//Algorithm to make text more visible below 20 fps
				//_calc = (1/(0.8*(_playerFPS))-0.10); //not yet working
				//if the FPS is below 20 it turns red and becomes more visible for zeus/admin to see so they are aware
				if (_playerFPS  <20) then
				{
					if(keko_showFrames) then {
						drawIcon3D
						[
							"",//Path to image displayed near text
							[1,0,0,0.7],//color of the text using RGBA
							ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
							1,//Width
							2,//height from position, below
							0,//angle
							format["%1 FPS: %2", name _x, str _playerFPS],//text to be displayed
							0,//shadow on text, 0=none,1=shadow,2=outline
							0.05,//text size
							"PuristaMedium",//text font
							"center"//align text left, right, or center
						];
					};
				}
				//if the FPS is above 20 text is smaller and less visible as to not concern zeus/admin as much
				else
				{
					if(keko_showFrames) then {
						drawIcon3D
						[
							"",//Path to image displayed near text
							[1,1,1,0.5],//color of the text using RGBA
							ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
							1,//Width
							2,//height from position, below
							0,//angle
							format["%1 FPS: %2", name _x, str _playerFPS],//text to be displayed
							0,//shadow on text, 0=none,1=shadow,2=outline
							0.03,//text size
							"PuristaMedium",//text font
							"center"//align text left, right, or center
						];
					};
				};
			};
		} forEach allPlayers;
		//Here is the array of units you wish to display the FPS text for, it can be
		//changed to be an array of specific units or players if you wish
	}];
};
