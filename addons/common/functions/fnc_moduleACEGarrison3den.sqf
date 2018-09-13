#include "script_component.hpp"

if !(isServer) exitWith{};

private _handle = _this spawn {

	// give enough time for headless clients to take over AI
	waitUntil{time > 90};

	private _logic = _this select 0;

	diag_log text "[KEKO] (common) running moduleACEGarrison3den";

	private _pos = getPos _logic;
	private _radiusStr = _logic getVariable ["Radius", 100];
	private _radius = parseNumber _radiusStr;
	private _teleport = _logic getVariable ["Teleport", true];
	private _topDownMode = _logic getVariable ["TopDown", false];
	private _mode = _logic getVariable ["Mode", 1];

	private _objects = synchronizedObjects _logic;
	if ((count _objects) > 0) then {
		private _units = [];

		{
			private _group = units _x;
			{
				_units pushBackUnique _x;
			} forEach _group;
		} forEach _objects;

		diag_log text format ["[KEKO] (common) calling ace_ai_fnc_garrison: _radius=%2 _units=%1 _mode=%3 _topDownMode=%4 _teleport=%5", _units, _radius, _mode, _topDownMode, _teleport];
		[_pos, ["Building"], _units, _radius, _mode, _topDownMode, _teleport] call ace_ai_fnc_garrison;

	};
	deleteVehicle _logic;
};

_handle;
