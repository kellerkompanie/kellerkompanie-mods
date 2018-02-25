/*
 * Original Author: Belbo [SeL] http://spezialeinheit-luchs.de/
 *
 * Sets the player's radio (with acre and tfar) to a certain channel depending on his group. Frequencies will be reset to the standard from adv_fnc_tfarSettings.
 *
 * Arguments:
 * 0: target - <OBJECT>
 *
 * Return Value:
 * tfar/acre present and set? - <BOOL>
 *
 * Example:
 * [player] call adv_fnc_setChannels;
 *
 * Public: No
 */

params [
	["_unit", player, [objNull]]
];

/*
SR-Kreise:
1. 30.1 Lead
2. 31 Alpha
3. 32 Bravo
4. 33 Charlie
5. 34 Delta
6. 35 Echo
7. 36 Fox

LR-Kreise:
1. 50 Konvoi / Fahrzeuge
2. 30 Kampfkreis
3. 40 Air Traffic
4. 60 Logistik
5. 70 OPZ/Zeus
*/

// wait a moment until radio has id
sleep 5;

//set frequencies depending on group for tfar
if ( isClass (configFile >> "CfgPatches" >> "tfar_core") && hasInterface ) exitWith {
	waitUntil { time > 1 && call TFAR_fnc_haveSWRadio };
	call {
		private _activeSWRadio = call TFAR_fnc_activeSwRadio;
		private _hasLRRadio = call TFAR_fnc_haveLRRadio;
		private _activeLRRadio = if (_hasLRRadio) then {call TFAR_fnc_activeLRRadio} else {[""]};
		//[_unit] call keko_fnc_setFrequencies;
		
		if ( toUpper (groupID group _unit) in ["COMMAND"] ) exitWith {
			[_activeSWRadio, 0] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["LEAD"] ) exitWith {
			[_activeSWRadio, 0] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["ALPHA"] ) exitWith {
			[_activeSWRadio, 1] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["BRAVO"] ) exitWith {
			[_activeSWRadio, 2] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["CHARLIE"] ) exitWith {
			[_activeSWRadio, 3] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["DELTA"] ) exitWith {
			[_activeSWRadio, 4] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 1] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["ECHO"] ) exitWith {
			[_activeSWRadio, 5] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 2] call TFAR_fnc_setLRChannel; };
		};
		if ( toUpper (groupID group _unit) in ["FOX"] ) exitWith {
			[_activeSWRadio, 6] call TFAR_fnc_setSwChannel;
			if (_hasLRRadio) then { [_activeLRRadio, 0] call TFAR_fnc_setLRChannel; };
		};		
	};
	true;
};

false;