/*
	script name:		Usable Cargo Ramp fo CH-49 Mohawk
	description:		Open and close the cargo ramp, get in and get out using cargo ramp (action menu). Adds lights audio signals in the cargo compartment, for parachuting (or whatever you want). Adds the "get out to the left side action.
	version:			v2.3
	author:				Zigomarvin
	official thread:	http://forums.bistudio.com/showthread.php?169340-Usable-cargo-ramp-for-CH-49-Mohawk
	
	Changelog:
	
	v2.3 - 04/18/2014
		fixed a bug produced buy the previous fix...
	
	v2.2 - 04/18/2014
		fixed a bug
	
	v2.1 - 04/16/2014
		New cargo ramp positions: closed, slightly open, drop position, open.
		Pilot can turn on lights of colours or play signal sounds in the cargo compartment.
		Co-pilot now can handle cargo ramp, new lights and new sounds.
		You can get out to the left side.
	
	v2.0 - never released
		New system (no longer ammo box, all in one file, less bugs (maybe no more)...).
	
	v1.1 - 12/05/2013
		FIXED: script wasn't started correctly when the server had many things to load.
		FIXED: "get out" action is no longer removed when the chopper get full.
		Added some priorities in actions.
	
	v1.0 - 12/01/2013
		release
	
	how to use:
		1. if you are already using an older version of this script, remove the "usableCargoRamp" folder which is in "scripts" folder
		2. copy/paste the "scripts" folder in your mission root
		3. open the description.ext and copy the CfgSounds class in your mission description.ext
		4. put this in your CH-49 init field: _n = [this] execVM "scripts\usableCargoRamp\usableCargoRamp.sqf";
*/





//////////////////////////////////////////////////
//////////////////// settings ////////////////////
//////////////////////////////////////////////////

_heli = _this select 0;






////////////////////////////////////////////////
//////////////////// server ////////////////////
////////////////////////////////////////////////

if (isServer) then {
	waitUntil {!isNull _heli};
	
	_heli setVariable ["doorActionsStatus", "closed", true]; // action var, don't need to wait the ramp to be in the specified position to hide the action (drop position, open position)
	_heli setVariable ["doorStatus", "closed", true]; // by default, the cargo ramp is closed
	_heli setVariable ["lightStatus", "off", true]; // by default, the light is turned off
	_heli setVariable ["gunner", nil, true]; // seems "gunner _heli" doesn't works so this variable is used to store the co-pilot when this one get in
};

if (isDedicated) exitWith {};





//////////////////////////////////////////////
//////////////////// misc ////////////////////
//////////////////////////////////////////////

// remove all action
Z_fnc_clientRemoveAllActions = {
	private ["_unit", "_veh", "_array", "_actionsToRemove"];
	
	_unit = _this select 0;
	_veh = _this select 1;
	_array = _this select 2;
	
	_actionsToRemove = _veh getVariable _array;
	
	{
		_unit removeAction _x;
/* 		_unit removeAction "getOutRight";
		_unit removeAction "getOutLeft"; */
	} forEach _actionsToRemove;
	
	_veh setVariable [_array, [], false];
};

// update actions-to-remove array
Z_fnc_updateActionsToRemoveArray = {
	private ["_heli", "_id", "_array", "_actionsToRemove"];
	
	_heli = _this select 0;
	_id = _this select 1;
	_array = _this select 2;
	
	_actionsToRemove = _heli getVariable _array;
	[_actionsToRemove, _id] call BIS_fnc_arrayPush;
	_heli setVariable [_array, _actionsToRemove, false];
};

// check some conditions to add the action
Z_fnc_ifPlayerIsNearFromChopper = {
	private ["_heli", "_player", "_return", "_isWater", "_pos"];
	
	_heli = _this select 0;
	_player = _this select 1;
	_return = false;
	
	if (_heli getVariable 'doorStatus' == 'open' && vehicle _player == _player && _heli emptyPositions 'Cargo' > 0) then {
		_isWater = surfaceIsWater getPos _heli;
		_pos = getPosATL _player;
		
		if (_isWater) then {
			_pos = getPosASL _player;
		};
		
		if ((_heli worldToModel _pos) distance [0, -5, -3.5] < 2.5) then {
			_return = true;
		};
	};
	
	_return
};

// format action text in right language
Z_fnc_actionText = {
	private ["_action", "_language", "_color", "_ramp", "_light", "_signal", "_cargo", "_text"];
	
	_action = _this select 0;
	_language = language;
	_color = "FFFFFF";
	_ramp = "CC2639";
	_light = "EC7724";
	_signal = "90B193";
	_cargo = "28649E";
	_text = "";
	
	switch (_action) do {
		// open
		case "open": {
			_color = _ramp;
			
			switch (_language) do {
				case "French": {_text = "Rampe - ouverte";};
				case "German": {_text = "Laderampe - Öffnen"};
				default {_text = "Cargo ramp - open"};
			};
		};
		
		// drop
		case "drop": {
			_color = _ramp;
			
			switch (_language) do {
				case "French": {_text = "Rampe - position de saut"};
				case "German": {_text = "Laderampe - Absprungposition"};
				default {_text = "Cargo ramp - drop position"};
			};
		};
		
		// closed
		case "closed": {
			_color = _ramp;
			
			switch (_language) do {
				case "French": {_text = "Rampe - fermée"};
				case "German": {_text = "Laderampe - Schließen"};
				default {_text = "Cargo ramp - closed"};
			};
		};
		
		// slightly
		case "slightly": {
			_color = _ramp;
			
			switch (_language) do {
				case "French": {_text = "Rampe - position de vol"};
				case "German": {_text = "Laderampe - Flugposition"};
				default {_text = "Cargo ramp - flight position"};
			};
		};
		
		// get out
		case "getOut": {
			_color = _cargo;
			
			switch (_language) do {
				case "French": {_text = "Sortir par la rampe"};
				case "German": {_text = "Aussteigen - Rampe"};
				default {_text = "Get out using cargo Ramp"};
			};
		};
		
		// get out to the left side
		case "getOutLeft": {
			_color = _cargo;
			
			switch (_language) do {
				case "French": {_text = "Sortir à gauche"};
				case "German": {_text = "Aussteigen - Links"};
				default {_text = "Get out to the left side"};
			};
		};
		
		case "getOutRight": {
			_color = _cargo;
			
			switch (_language) do {
				case "French": {_text = "Sortir à droite"};
				case "German": {_text = "Aussteigen - Rechts"};
				default {_text = "Get out to the right side"};
			};
		};
		
		// jump
		case "jump": {
			_color = _cargo;
			
			switch (_language) do {
				case "French": {_text = "Sauter par la rampe"};
				case "German": {_text = "Abspringen - Rampe"};
				default {_text = "Jump by cargo Ramp"};
			};
		};
		
		// lights off
		case "off": {
			_color = _light;
			
			switch (_language) do {
				case "French": {_text = "Lumière - éteinte"};
				case "German": {_text = "Licht - Aus"};
				default {_text = "light - turned off"};
			};
		};
		
		// white light
		case "white": {
			_color = _light;
			
			switch (_language) do {
				case "French": {_text = "Lumière - blanche"};
				case "German": {_text = "Licht - Weis"};
				default {_text = "Light - white"};
			};
		};
		
		// red light
		case "red": {
			_color = _light;
			
			switch (_language) do {
				case "French": {_text = "Lumière - rouge"};
				case "German": {_text = "Licht - Rot"};
				default {_text = "Light - red"};
			};
		};
		
		// green light
		case "green": {
			_color = _light;
			
			switch (_language) do {
				case "French": {_text = "Lumière - verte"};
				case "German": {_text = "Licht - Grün"};
				default {_text = "Light - green"};
			};
		};
		
		// prepare sound
		case "prepare": {
			_color = _signal;
			
			switch (_language) do {
				case "French": {_text = "Signal - préparation"};
				default {_text = "Signal - prepare"};
			};
		};
		
		// go sound
		case "go": {
			_color = _signal;
			
			switch (_language) do {
				case "French": {_text = "Signal - go"};
				default {_text = "Signal - go"};
			};
		};
	};
	
	format ["<t color='#%1'>%2</t>", _color, _text]
};

Z_fnc_clientCargoRampSoundForCrew = {
	private ["_heli", "_doorStatus", "_missionPath", "_soundPath", "_sleep"];
	
	_heli = _this select 0;
	_doorStatus = _this select 1;
	
	_sleep = if (_doorStatus == "open") then {10} else {4};
	
	while {_heli getVariable "doorActionsStatus" == _doorStatus && vehicle player == _heli && alive _heli} do 
	{
		playSound "alarm_ramp";
		sleep _sleep;
	};
};

Z_fnc_clientGetCrew = {
	private ["_heli", "_crew", "_driver", "_gunner"];
	
	_heli = _this select 0;
	_crew = [];
	_driver = driver _heli;
	_gunner = _heli getVariable "gunner";
	
	if (!isNull _driver) then {
		[_crew, _driver] call BIS_fnc_arrayPush;
	};
	
	if (!isNil "_gunner") then {
		[_crew, _gunner] call BIS_fnc_arrayPush;
	};
	
	_crew
};





////////////////////////////////////////////////
//////////////////// lights ////////////////////
////////////////////////////////////////////////

// create lights objects on player connection
Z_fnc_clientCreateLightsObjects = {
	private ["_heli", "_lights", "_lightsPositions", "_light", "_lightParams", "_brightness", "_color"];
	
	_heli = _this select 0;
	_lights = [];
	_lightsPositions = [[0.13, -1.26, -1], [0.13, 1.75, -1]];
	
	{
		_light = "#lightpoint" createVehicleLocal getPos _heli;
		[_lights, _light] call BIS_fnc_arrayPush;
		_light attachTo [_heli, _x];
		_light setLightAttenuation [1, 0, 0, 7.5];
	} forEach _lightsPositions;
	
	_heli setVariable ["lights", _lights, false];
	
	[_heli, _heli getVariable "lightStatus"] call Z_fnc_clientSetLightColor;
	
	_lights
};

// set light color
Z_fnc_clientSetLightColor = {
	private ["_heli", "_newLightStatus", "_lights", "_lightParams", "_brightness", "_color"];
	
	_heli = _this select 0;
	_newLightStatus = _this select 1;
	_lights = _heli getVariable "lights";
	_lightParams = [_newLightStatus] call Z_fnc_clientLightStatusDecode;
	_brightness = _lightParams select 0;
	_color = _lightParams select 1;
	
	{
		_x setLightBrightness _brightness;
		_x setLightColor _color;
	} forEach _lights;
};

// convert light status ("off", "red"...) as light params ([0, [0, 0, 0]], [0.2, [1, 0, 0]]...)
Z_fnc_clientLightStatusDecode = {
	private ["_newLightStatus", "_lightParams"];
	
	_newLightStatus = _this select 0;
	_lightParams = [];
	
	switch (_newLightStatus) do {
		case "white" : {_lightParams = [0.1, [1, 1, 1]]};
		case "red" : {_lightParams = [0.1, [1, 0, 0]]};
		case "green" : {_lightParams = [0.1, [0, 1, 0]]};
		case "off" : {_lightParams = [0, [0, 0, 0]]};
	};
	
	_lightParams
};

// create light action for the pilot (and copilot soon)
Z_fnc_clientCreateLightAction = {
	private ["_unit", "_heli", "_lightStatus", "_lightParams", "_id"];
	
	_unit = _this select 0;
	_heli = _this select 1;
	_lightStatus = _this select 2;
	_condition = format ["vehicle _target getVariable 'lightStatus' != '%1'", _lightStatus];
	
	_id = _unit addAction [
		[_lightStatus] call Z_fnc_actionText,
		"call Z_fnc_clientLightManager",
		[_heli, _lightStatus],
		6.09,
		false,
		true,
		"",
		_condition
	];
	
	[_heli, _id, "lightActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
};

// light manager
Z_fnc_clientLightManager = {
	private ["_unit", "_heli", "_lightStatus"];
	
	_unit = _this select 1;
	_heli = (_this select 3) select 0;
	_lightStatus = (_this select 3) select 1;
	
	_heli setVariable ["lightStatus", _lightStatus, true];
	[[_heli, _lightStatus], "Z_fnc_clientSetLightColor", nil, false] spawn BIS_fnc_MP;
};





////////////////////////////////////////////////////
//////////////////// cargo ramp ////////////////////
////////////////////////////////////////////////////

// create cargo ramp action
Z_fnc_clientCreateCargoRampAction = {
	private ["_unit", "_heli", "_doorStatus", "_condition", "_id"];
	
	_unit = _this select 0;
	_heli = _this select 1;
	_doorStatus = _this select 2;
	_condition = format ["vehicle _target getVariable 'doorActionsStatus' != '%1'", _doorStatus];
	
	_id = _unit addAction [
		[_doorStatus] call Z_fnc_actionText,
		"call Z_fnc_clientCargoRampManager",
		[_heli, _doorStatus],
		6.12,
		false,
		true,
		"",
		_condition
	];
	
	[_heli, _id, "doorActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
};

// set cargo ramp position
Z_fnc_clientCargoRampManager = {
	private ["_unit", "_heli", "_doorStatus"];
	
	_unit = _this select 1;
	_heli = (_this select 3) select 0;
	_doorStatus = (_this select 3) select 1;
	
	[_heli, _doorStatus] call Z_fnc_clientCargoRampAnimation;
};

// cargo ramp animation
Z_fnc_clientCargoRampAnimation = {
	private ["_heli", "_doorStatus", "_crew", "_sleep"];

	_heli = _this select 0;
	_doorStatus = _this select 1;

	if (_doorStatus == "closed") then {
		_heli animate ["CargoRamp_Open", 0];
		_heli setVariable ["doorActionsStatus", "closed", true];
		_heli setVariable ["doorStatus", "closed", true];
	};
	
	if (_doorStatus == "slightly") then {
		_heli animate ["CargoRamp_Open", 0.25];
		_heli setVariable ["doorActionsStatus", "slightly", true];
		_heli setVariable ["doorStatus", "slightly", true];
	};
	
	if (_doorStatus == "drop") then {
		_heli animate ["CargoRamp_Open", 0.7];
		_heli setVariable ["doorActionsStatus", "drop", true];
		
		_crew = [_heli] call Z_fnc_clientGetCrew;
		[[_heli, _doorStatus], "Z_fnc_clientCargoRampSoundForCrew", _crew, false] spawn BIS_fnc_MP;
		
		_sleep =  abs ((0.7 - (_heli animationPhase "CargoRamp_Open")) * 5) + 0.5;
		sleep _sleep;
		
		if (_heli animationPhase "CargoRamp_Open" == 0.7) then {
			_heli setVariable ["doorStatus", "drop", true];
		};
	};
	
	if (_doorStatus == "open") then {
		_heli animate ["CargoRamp_Open", 1];
		_heli setVariable ["doorActionsStatus", "open", true];
		
		_crew = [_heli] call Z_fnc_clientGetCrew;
		[[_heli, _doorStatus], "Z_fnc_clientCargoRampSoundForCrew", _crew, false] spawn BIS_fnc_MP;
		
		_sleep = (5 - ((_heli animationPhase "CargoRamp_Open") * 5)) + 0.5;
		sleep _sleep;
		
		if (_heli animationPhase "CargoRamp_Open" == 1) then {
			_heli setVariable ["doorStatus", "open", true];
		};
	};
};

// get out using cargo ramp
Z_fnc_getOutCargoRamp = {
	private ["_unit", "_heli", "_d", "_rampOutPos", "_altitude", "_a", "_isWater"];

	_unit = _this select 1;
	_heli = (_this select 3) select 0;
	
	_unit disableCollisionWith _heli;
	_unit action ["Eject", _heli];
	waitUntil {vehicle _unit == _unit};
	
	_d = if ((speed _heli) >= 40) then {1} else {0};
	_a = if ((speed _heli) >= 40) then {3} else {0};
	_rampOutPos = _heli modelToWorld [0, -5 - _d, -3.5 - _a];

	_isWater = surfaceIsWater (getPos _heli);
		
	if (_isWater) then {
		_unit setPosASL _rampOutPos;
	} else {
		_unit setPos _rampOutPos;
	};
	
	_unit setDir ((getDir _heli) + 180);
	_unit enableCollisionWith _heli;
};





///////////////////////////////////////////////
//////////////////// sound ////////////////////
///////////////////////////////////////////////

// create sound action
Z_fnc_clientCreateSignalAction = {
	private ["_unit", "_heli", "_signal", "_condition", "_id"];
	
	_unit = _this select 0;
	_heli = _this select 1;
	_signal = _this select 2;
	
	_id = _unit addAction [
		[_signal] call Z_fnc_actionText,
		"call Z_fnc_clientSignalManager",
		[_heli, _signal],
		6.09,
		false,
		true,
		"",
		""
	];
	
	[_heli, _id, "signalActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
};

// signal 
Z_fnc_clientSignalManager = {
	private ["_unit", "_heli", "_doorStatus"];
	
	_heli = (_this select 3) select 0;
	_signal = (_this select 3) select 1;
	
	[[_signal], "Z_fnc_clientSignalForCrew", crew _heli, false] spawn BIS_fnc_MP;
};

Z_fnc_clientSignalForCrew = {
	private ["_signal", "_missionPath", "_soundPath"];
	
	_signal = _this select 0;
	
	playSound format ["alarm_%1", _signal];
};




//////////////////////////////////////////////////////////////////
//////////////////// get out to the left side ////////////////////
//////////////////////////////////////////////////////////////////

// get out to the left side
Z_fnc_getOutLeftCargoRamp = {
	private ["_unit", "_heli", "_d", "_outPos"];

	_unit = _this select 1;
	_heli = (_this select 3) select 0;
	
	_unit disableCollisionWith _heli;
	_unit action ["Eject", _heli];
	waitUntil {vehicle _unit == _unit};
	
	_outPos = _heli modelToWorld [-3.53187, 4.77741, -3.33367];
	_unit setPosATL _outPos;
	_unit setDir ((getDir _heli) + -90);
	_unit enableCollisionWith _heli;
};


//////////////////////////////////////////////////////////////////
//////////////////// get out to the right side ////////////////////
//////////////////////////////////////////////////////////////////

// get out to the right side
Z_fnc_getOutRightCargoRamp = {
	private ["_unit", "_heli", "_d", "_outPos"];

	_unit = _this select 1;
	_heli = (_this select 3) select 0;
	
	_unit disableCollisionWith _heli;
	_unit action ["Eject", _heli];
	waitUntil {vehicle _unit == _unit};
	
	_outPos = _heli modelToWorld [3.13187, 2.3, -3.33367];
	_unit setPosATL _outPos;
	_unit setDir ((getDir _heli) + 90);
	_unit enableCollisionWith _heli;
};



////////////////////////////////////////////////
//////////////////// client ////////////////////
////////////////////////////////////////////////

waitUntil {!isNull player};
waitUntil {!isNull _heli};

_heli setVariable ["doorActionsToRemove", [], false];
_heli setVariable ["lightActionsToRemove", [], false];
_heli setVariable ["signalActionsToRemove", [], false];

waitUntil {
	sleep 0.1;
	_var = _heli getVariable "doorActionsStatus";
	!isNil "_var";
};

waitUntil {
	sleep 0.1;
	_var = _heli getVariable "doorStatus";
	!isNil "_var";
};

waitUntil {
	sleep 0.1;
	_var = _heli getVariable "lightStatus";
	!isNil "_var";
};

_lights = [_heli] call Z_fnc_clientCreateLightsObjects;





/////////////////////////////////////////////////
//////////////////// actions ////////////////////
/////////////////////////////////////////////////

// get in using cargo ramp action
_id = _heli addAction [
	["getIn"] call Z_fnc_actionText,
	"player action ['GetInCargo', (_this select 3) select 0]",
	[_heli],
	6,
	true,
	true,
	"",
	"
		if (_target distance player < 10) then {
			[_target, player] call Z_fnc_ifPlayerIsNearFromChopper
		}
	"
];

// on get in
_heli addEventHandler ["GetIn", {
	_heli = _this select 0;
	_pos = _this select 1;
	_unit = _this select 2;
	
	if (local _unit) then {
		_doorStatus = _heli getVariable "doorStatus";
		_lightStatus = _heli getVariable "lightStatus";
		
		if (_pos == "driver" || _pos == "gunner") then {
			if (_heli getVariable "doorActionsStatus" in ["open", "drop"] && isPlayer _unit) then {
				[_heli, _doorStatus] spawn Z_fnc_clientCargoRampSoundForCrew;
			};
			
			if (_pos == "gunner") then {
				_heli setVariable ["gunner", _unit, true];
			};
			
			[_unit, _heli, "closed"] call Z_fnc_clientCreateCargoRampAction;
			[_unit, _heli, "slightly"] call Z_fnc_clientCreateCargoRampAction;
			[_unit, _heli, "drop"] call Z_fnc_clientCreateCargoRampAction;
			[_unit, _heli, "open"] call Z_fnc_clientCreateCargoRampAction;
			
			[_unit, _heli, "off"] call Z_fnc_clientCreateLightAction;
			[_unit, _heli, "white"] call Z_fnc_clientCreateLightAction;
			[_unit, _heli, "red"] call Z_fnc_clientCreateLightAction;
			[_unit, _heli, "green"] call Z_fnc_clientCreateLightAction;
			
			[_unit, _heli, "prepare"] call Z_fnc_clientCreateSignalAction;
			[_unit, _heli, "go"] call Z_fnc_clientCreateSignalAction;
		} else {
			_id = _unit addAction [
				["getOut"] call Z_fnc_actionText,
				"call Z_fnc_getOutCargoRamp",
				[_heli],
				6.15,
				true,
				true,
				"",
				"
					if(vehicle _target getVariable 'doorStatus' == 'open') then {
						getPos (vehicle _target) select 2 < 40 && speed (vehicle _target) < 50
					}
				"
			];
			
			[_heli, _id, "doorActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
				
			// jump
			_id = _unit addAction [
				["jump"] call Z_fnc_actionText,
				"call Z_fnc_getOutCargoRamp",
				[_heli],
				6.15,
				true,
				true,
				"",
				"
					if(vehicle _target getVariable 'doorStatus' == 'drop') then {
						getPos (vehicle _target) select 2 >= 100
					}
				"
			];
			
			[_heli, _id, "doorActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
			
			// get out to the left side
			_id = _unit addAction [
				["getOutLeft"] call Z_fnc_actionText,
				"call Z_fnc_getOutLeftCargoRamp",
				[_heli],
				6.2,
				false,
				true,
				"",
				"getPos (vehicle _target) select 2 < 10 && speed (vehicle _target) < 20"
			];
			
			[_heli, _id, "doorActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
			
			// get out to the right side
			_id = _unit addAction [
				["getOutRight"] call Z_fnc_actionText,
				"call Z_fnc_getOutRightCargoRamp",
				[_heli],
				6.2,
				false,
				true,
				"",
				"getPos (vehicle _target) select 2 < 10 && speed (vehicle _target) < 20"
			];
			
			[_heli, _id, "doorActionsToRemove"] call Z_fnc_updateActionsToRemoveArray;
		};
	};	
}];

// on get out, remove actions
_heli addEventHandler ["GetOut", {
	_heli = _this select 0;
	_pos = _this select 1;
	_unit = _this select 2;
	
	if (local _unit) then {
		if (_pos == "gunner") then {
			_heli setVariable ["gunner", nil, true];
		};
		
		[_unit, _heli, "doorActionsToRemove"] call Z_fnc_clientRemoveAllActions;
		[_unit, _heli, "lightActionsToRemove"] call Z_fnc_clientRemoveAllActions;
		[_unit, _heli, "signalActionsToRemove"] call Z_fnc_clientRemoveAllActions;
	};
}];
	
// on player killed, eject unit (free the seat) and remove actions
_playerEventHandler = player addEventHandler ["Killed", {
	_unit = _this select 0;
	_veh = vehicle _unit;
	
	if (_veh != _unit && !isnil {_veh getVariable "doorStatus"}) then {
		_unit action ["Eject", _veh];
		
		[_unit, _veh, "doorActionsToRemove"] call Z_fnc_clientRemoveAllActions;
		[_unit, _veh, "lightActionsToRemove"] call Z_fnc_clientRemoveAllActions;
		[_unit, _veh, "signalActionsToRemove"] call Z_fnc_clientRemoveAllActions;
	};
}];

// delete everything when chopper get destroyed
_heli addEventHandler ["Killed", {
	_heli = _this select 0;
	_ligths = _heli getVariable "lights";
	
	{
		deleteVehicle _x;
	} forEach _ligths;
	
	[player, _heli, "doorActionsToRemove"] call Z_fnc_clientRemoveAllActions;
	[player, _heli, "lightActionsToRemove"] call Z_fnc_clientRemoveAllActions;
	[player, _heli, "signalActionsToRemove"] call Z_fnc_clientRemoveAllActions;
}];

// delete lights if chopper get removed
if (!isDedicated) then {
	waitUntil {sleep 15; isNull _heli};
	
	{
		deleteVehicle _x;
	} forEach _lights;
	
	player removeEventHandler ["killed", _playerEventHandler];
};