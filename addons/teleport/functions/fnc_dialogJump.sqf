#include "script_component.hpp"

params ["_teleporterName"];

private _chuteheight = 200;

private _markerName = "keko_teleport_" + _teleporterName;
private _markerPos = getMarkerPos _markerName;
private _destination = [_markerPos select 0, _markerPos select 1, _chuteheight];

titleText ["", "BLACK OUT", 2];
sleep 2;
titleText [format ["Du wirst nach %1 verlegt.", _teleporterName], "BLACK FADED"];
sleep 1;

player setPos _destination;

paraLandSafe =
{
	private ["_unit"];
	_unit = _this select 0;
	_chuteheight = _this select 1;
	if (isPlayer _unit) then {[_unit,_chuteheight] spawn OpenPlayerchute};
	waitUntil { isTouchingGround _unit || (position _unit select 2) < 1 };
	disableUserInput true;
	_unit action ["eject", vehicle _unit];
	sleep 1;
	private _inv = name _unit;
	[_unit, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_loadInventory;// Reload Loadout.
	_unit allowdamage true;// Now you can take damage.

	disableUserInput false;
    disableUserInput true;
	disableUserInput false;
};

OpenPlayerChute =
{
	private ["_paraPlayer"];
	_paraPlayer = _this select 0;
	_chuteheight = _this select 1;
	waitUntil {(position _paraPlayer select 2) <= _chuteheight};
	_paraPlayer action ["openParachute", _paraPlayer];
};

private _inv = name player;// Get Unique name for Unit's loadout.
[player, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_saveInventory;// Save Loadout
removeBackpack player;
player allowdamage false;// Trying to prevent damage.
player addBackPack "B_parachute";

[player,_chuteheight] spawn paraLandSafe;

sleep 1;
titleFadeOut 2;
