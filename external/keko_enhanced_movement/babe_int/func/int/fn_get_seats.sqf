params ["_veh"];

player setVariable ["babe_int_curr", _veh];

_txt = [];

if !(_veh isKindOf "StaticWeapon") then
{
	if (_veh isKindOf "Air") then
	{
		_txt pushback [(localize "str_getin_pos_pilot"), [player, _veh, "driver", _veh == vehicle player], babe_int_fnc_movein, [_veh], {params ["_veh"]; isNull (driver _veh) or !alive (driver _veh)}];
	} else
	{
		_txt pushback [(localize "str_getin_pos_driver"), [player, _veh, "driver", _veh == vehicle player], babe_int_fnc_movein, [_veh], {params ["_veh"]; isNull (driver _veh) or !alive (driver _veh)}];
	};

	if (getnumber(configfile >> "CfgVehicles" >> typeof _veh >> "transportsoldier") > 0) then
	{
		_txt pushback [(localize "str_getin_pos_cargo"), [player, _veh, "cargo", _veh == vehicle player], babe_int_fnc_movein, 
		[_veh], 
		{
			params ["_veh"]; 

			_cargoseats = [];

			_trans = getnumber(configfile >> "CfgVehicles" >> typeof _veh >> "transportsoldier");

			for "_i" from 0 to _trans-1 do
			{
				_cargoseats pushback _i;
			};

			{
				if (alive (_x select 0)) then
				{
					_cargoseats deleteAt (_cargoseats find (_x select 2));
				};
			} foreach (fullCrew [_veh, "cargo", false]);

			count _cargoseats > 0
		}];
	};
};

_paths = [_veh, []] call BIS_fnc_getTurrets;
_cfgs = [_veh, configfile >> "CfgVehicles"] call BIS_fnc_getTurrets;

_cfgs deleteAt 0;

if (count _paths > 0) then
{
	{
		_cfg = _x;
		_path = _paths select _forEachIndex;
		
		_name = gettext(configfile >> "CfgVehicles" >> typeOf _veh >> "turrets" >> configName _cfg >> "gunnerName");

		_txt pushback [_name, [player, _veh, "turret", _veh == vehicle player, _path], babe_int_fnc_movein, [_veh, _path], {params ["_veh", "_turr"]; isNull (_veh turretUnit _turr) or !alive (_veh turretUnit _turr)}];
	} foreach _cfgs;
};


_tb = getNumber (configFile >> "CfgVehicles" >> typeof _veh >> "transportmaxbackpacks");
_tm = getNumber (configFile >> "CfgVehicles" >> typeof _veh >> "transportmaxmagazines");
_tw = getNumber (configFile >> "CfgVehicles" >> typeof _veh >> "transportmaxweapons");

if (_tb + _tm + _tw > 0) then 
{
	_txt pushback [(localize "str_action_gear"), [player, _veh], {params ["_unit", "_veh"]; player action ['Gear', _veh]}, [], {true}];
};

if (player != vehicle player) then
{
	if (speed (vehicle player) > 0.1) then
	{
		_txt pushback [(localize "str_action_eject"), [], {player action ['Eject', vehicle player]}, [], {true}];
	} else
	{
		_txt pushback [(localize "str_action_eject"), [], {player action ['Getout', vehicle player]}, [], {true}];
	};
};


if (count _txt > 0) then
{
	[7, 15, 0.1, 0.1, _txt, [], {}] call babe_int_fnc_menuAd;
};
